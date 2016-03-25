surface_amount = size(sp_set, 1);
[x, y] = size(Sp2);

%% initialize
Sp_new = zeros(x, y, 1);
for i=1:surface_amount
    point_amount = size(sp_set{i}, 1);
    for j=1:point_amount
        Sp_new(sp_set{i}(j, 1), sp_set{i}(j, 2)) = i;
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
    bound = min(sp_set{i});
    ref_set = bspline(sp_set{i}, bspline_set{i}, bound);
    while modified == true
        modified = false;
        
        %% find adjacency area within 5 pixels
        omega = zeros(1, 2, 1);
        for j= -5:5
            for k= abs(j)-5:5-abs(j)
                omega = union(omega, (sp_set{i}+repmat([j, k], size(sp_set{i}, 1), 1)), 'rows');
            end
        end
        omega = setdiff(omega, sp_set{i}, 'rows');
        omega(omega(:,1)<1 | omega(:,2)<1 | omega(:, 1)>x | omega(:, 2)>y, :) = [];
        temp = omega(:, 1)+(omega(:, 2)-1)*x;
        omega(Sp_new(temp)~=0, :) = [];
        
        %% for all adjacent pixels ... 
        size_o = size(omega, 1);
        point_amount = size(sp_set{i}, 1);
        for j=1:size_o
            %% find nearest pixel q from surface i
            temp = abs(repmat(omega(j, :), point_amount, 1) - sp_set{i});
            [val, ind] = min(temp(:, 1) + temp(:, 2));
            
            %% compute temp correspondence
            bound = min(sp_set{i});
            ref_q = ref_set(ind, :);
            ref_p = ref_q + bspline_single(sp_set{i}(ind, :), bspline_set{i}, bound, 1,0,0,1).*(omega(j, :) - sp_set{i}(ind,:));    
            offset_p = ref_p - omega(j, :);
            
            %% compute patch transformation jacobian matirx
            [temp1] = bspline_single(sp_set{i}(ind, :), bspline_set{i}, bound ,1,0,1,0);
            [temp2] = bspline_single(sp_set{i}(ind, :), bspline_set{i}, bound ,0,1,0,1);
            jacobian = [temp1(1, 1), temp2(1, 1); temp1(1, 2), temp2(1, 2)];
            
            %% minimize error            
            error = 10000000;
            for s=[0.9, 1.0, 1.1]
                scale = [s, 0; 0, s];
                for theta=[-pi/36, 0, pi/36]
                    rotate = [cos(theta), -sin(theta); sin(theta), cos(theta)];
                    jacobian_d = rotate*scale*jacobian;
                    for delta_x=[-1,0,1]
                        for delta_y=[-1,0,1]
                            M = [jacobian_d, offset_p'+[delta_x; delta_y]; 0,0,1];
                            Np = patch + repmat([omega(j,:)';0], 1, 49);
                            Nrefp = M*Np;
                            
                            Np = int32(Np);
                            Np(Np<1)=1;
                            Np(1, Np(1, :)>x)=x;
                            Np(2, Np(2, :)>y)=y;
                            
                            Nrefp = int32(Nrefp);
                            Nrefp(Nrefp<1)=1;
                            Nrefp(1, Nrefp(1, :)>x)=x;
                            Nrefp(2, Nrefp(2, :)>y)=y;
    
                            Ps = getPixelsValue(Src_lab, Np');
                            Pt = getPixelsValue(Ref_lab, Nrefp');
                            Ps = (Ps - repmat(mean(Ps), 49, 1))./(repmat(std(Ps), 49, 1));
                            Pt = (Pt - repmat(mean(Pt), 49, 1))./(repmat(std(Pt), 49, 1));
                            e = sum(sum((Ps - Pt).^2));
                            if e < error
                                error = e;
                                refp = Nrefp(1:2, 25);
                            end
                        end
                    end
                end
            end
            errors = [errors; error];
            if error < 0.1
                modified = true
                sp_set{i} = [sp_set{i}; omega(j,:)];
                Sp_new(omega(j,1), omega(j,2)) = i;
                ref_set = [ref_set; refp'];
            end
        end
        if modified == true
            [bspline_set{i}, error] = bspline_inv(sp_set{i}, ref_set);
        end
    end
end