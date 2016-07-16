function [errors, sp_set, bspline_set] = extension(sp_set, bspline_set, Sp2, Src_lab, Ref_lab)

%#codegen
coder.inline('never')
coder.varsize('omega');
coder.varsize('temp_sx');
coder.varsize('temp_sy');
coder.varsize('temp_rx');
coder.varsize('temp_ry');

surface_amount = size(sp_set, 2);
[x, y] = size(Sp2);

%% initialize
Sp_new = zeros(x, y, 1);
for i=1:surface_amount
    point_amount = size(sp_set(i).val, 1);
    for j=1:point_amount
        Sp_new(sp_set(i).val(j, 1), sp_set(i).val(j, 2)) = i;
    end    
end

%% adjacent patch
patch = zeros(3, 49, 1);
patch(1, :) = repmat((-3:3), 1, 7);
patch(2, :) = sort(repmat((-3:3),1,7));
patch(3, :) = ones(1, 49);

%% extension
errors = [];

for i=1:surface_amount
    modified = true;
    temp_sx = sp_set(i).val(:, 1);
    temp_sy = sp_set(i).val(:, 2);
    while modified == true
        modified = false;
        superpixel = sp_set(i).val;
        sp_bspline = bspline_set(i);
        bound = min(superpixel);
        single_ref_set = bspline(superpixel, sp_bspline, bound);
        
        %% find adjacency area within 5 pixels
        changed = double([temp_sx, temp_sy]);
        omega = changed+repmat([0, 0], size(changed, 1), 1);
        for j= -5:5
            for k= abs(j)-5:5-abs(j)
                set = changed+repmat([j, k], size(changed, 1), 1);
                omega = sortrows(omega);
                omega = union(omega, sortrows(set), 'rows');
            end
        end
        omega = sortrows(omega);
        omega = setdiff(omega, sortrows(changed), 'rows');
        omega(omega(:,1)<1 | omega(:,2)<1 | omega(:, 1)>x | omega(:, 2)>y, :) = [];
        temp = omega(:, 1)+(omega(:, 2)-1)*x;
        omega(Sp_new(temp)~=0, :) = [];
        
        %% for all adjacent pixels ... 
        size_o = size(omega, 1);
        
        temp_sx = [];
        temp_sy = [];
        temp_rx = [];
        temp_ry = [];
        
        for j=1:size_o
            point_amount = size(superpixel, 1);
            
            %% find nearest pixel q from surface i
            temp = abs(repmat(omega(j, :), point_amount, 1) - superpixel);
            [val, ind] = min(temp(:, 1) + temp(:, 2));
            
            %% compute temp correspondence
            ref_q = single_ref_set(ind, :);
            ref_p = ref_q + (bspline_single(superpixel(ind, :), sp_bspline, bound, 1,0,0,1)).*(omega(j, :) - superpixel(ind,:));
            offset_p = ref_p.*[x y] ;%- omega(j, :);
            
            %% compute patch transformation jacobian matirx
            [temp1] = bspline_single(superpixel(ind, :), sp_bspline, bound ,1,0,1,0);
            [temp2] = bspline_single(superpixel(ind, :), sp_bspline, bound ,0,1,0,1);
            jacobian = [temp1(1, 1), temp2(1, 1); temp1(1, 2), temp2(1, 2)];
            jacobian = jacobian.*[x x; y y];
            
            %% minimize error            
            error = 10000000;
            refp = zeros(0);
            
            for s=[0.9, 1.0, 1.1]
                scale = [s, 0; 0, s];
                for theta=[-pi/36, 0, pi/36]
                    rotate = [cos(theta), -sin(theta); sin(theta), cos(theta)];
                    jacobian_d = rotate*scale*jacobian;
                    for delta_x=[-1,0,1]
                        for delta_y=[-1,0,1]
                            M = [jacobian_d, offset_p'+[delta_x; delta_y]; 0,0,1];
                            Np = patch + repmat([omega(j,:)';0], 1, 49);
                            Np_ref = M*patch;
                            
                            Np(1, :) = Np(1, :)/x;
                            Np(2, :) = Np(2, :)/y;
                            Np(Np<0)=0;
                            Np(Np>1)=1;
                            
                            Np_ref(1, :) = Np_ref(1, :)/x;
                            Np_ref(2, :) = Np_ref(2, :)/y;
                            Np_ref(Np_ref<0)=0;
                            Np_ref(Np_ref>1)=1;
    
                            Ps = getPixelsValue(Src_lab, Np');
                            Pt = getPixelsValue(Ref_lab, Np_ref');
                            
                            Ps = (Ps - repmat(mean(Ps), 49, 1))./(repmat(std(Ps), 49, 1));
                            Pt = (Pt - repmat(mean(Pt), 49, 1))./(repmat(std(Pt), 49, 1));
%{
                            Ps = Ps./(repmat(std(Ps), 49, 1));
                            Pt = Pt./(repmat(std(Pt), 49, 1));
                            t1 = sqrt(sum(Ps.^2));
                            t2 = sqrt(sum(Pt.^2));
                            Ps(:, 1) = Ps(:, 1)./t1(1);
                            Ps(:, 2) = Ps(:, 2)./t1(2);
                            Ps(:, 3) = Ps(:, 3)./t1(3);
                            Pt(:, 1) = Pt(:, 1)./t2(1);
                            Pt(:, 2) = Pt(:, 2)./t2(2);
                            Pt(:, 3) = Pt(:, 3)./t2(3);
%}                          
                            e = sum(sum((Ps - Pt).^2));
                            if e < error
                                error = e;
                                refp = [delta_x, delta_y];
                            end
                        end
                    end
                end
            end
            errors = [errors; error];
            if error < 50
                modified = true;
                
                temp_sx = [temp_sx; omega(j,1)];
                temp_sy = [temp_sy; omega(j,2)];
                Sp_new(omega(j,1), omega(j,2)) = i;
                %refp = refp + offset_p + omega(j, :);
                refp = (refp+offset_p)./[x y];
                temp_rx = [temp_rx; refp(1,1)];
                temp_ry = [temp_ry; refp(1,2)];
                
                %{
                refp = refp + offset_p + omega(j, :);
                superpixel = [superpixel; double(omega(j, :))];
                Sp_new(omega(j,1), omega(j,2)) = i;
                single_ref_set = [single_ref_set; double(refp)];
                %}
            end
        end
        if modified == true
            sp_set(i).val = [sp_set(i).val; double([temp_sx, temp_sy])];
            single_ref_set = [single_ref_set; double([temp_rx, temp_ry])];
            %sp_set(i).val = superpixel;
            
            [control_p, error] = bspline_inv(sp_set(i).val, single_ref_set);
            item = struct('x', control_p(:,:,1), 'y', control_p(:,:,2));
            bspline_set(i) = item;
        end
    end
end

end