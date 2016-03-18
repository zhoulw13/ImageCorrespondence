[x, y] = size(Sp2);
sp_set = cell(0);
sp_val = [];

for i = 1:x
    for j = 1:y
        if sum(find(sp_val == Sp2(i,j))) == 0
            vec = find(Sp2 == Sp2(i,j));
            sp_val = [sp_val;Sp2(i,j)];
            new_set = [];
            new_set(:,1) = mod(vec, x);
            new_set(:,2) = ceil(vec./x);
            new_set(new_set==0)=x;
            sp_set = [sp_set;new_set];
        end
    end
end

surface_amount = size(sp_set, 1);
sp_set2 = cell(0);
%remove surface with low confidence
for i = 1:surface_amount
    point_amount = size(sp_set{i}, 1);
    con = 0;
    for j = 1:point_amount
        con = con + Confidence(sp_set{i}(j,1), sp_set{i}(j,2));
    end
    con = con/point_amount;
    if con >= 0.8
        sp_set2 = [sp_set2;sp_set{i}];
    end
end

sp_set = sp_set2;

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;

surface_amount = size(sp_set, 1);
bspline_set = cell(0);
error = [];

for i = 1:surface_amount
   ref_set = [];
   point_amount = size(sp_set{i}, 1);
   for j = 1:point_amount
       ref_pos = DCF(sp_set{i}(j,1), sp_set{i}(j,2), : );
       ref_set = [ref_set;[ref_pos(2), ref_pos(1)]];
   end
   ref_set = [ref_set;[30, 30; 30, 30; 30,30]];
   
   top = min(sp_set{i}(:,1));
   left = min(sp_set{i}(:,2));
   tx = (sp_set{i}(:,1) - top)./30;
   ty = (sp_set{i}(:,2) - left)./30;
   %tx = tx - floor(tx);
   %ty = ty - floor(ty);
   
   Ax = [];
   Ax(:, 1) = ones(size(tx,1), 1);
   Ax(:, 2) = tx;
   Ax(:, 3) = tx.^2;
   Ax(:, 4) = tx.^3;
   Ax = Ax*basic_matrix;
   Ax = [Ax; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];
   
   Ay = [];
   Ay(:, 1) = ones(size(ty,1), 1);
   Ay(:, 2) = ty;
   Ay(:, 3) = ty.^2;
   Ay(:, 4) = ty.^3;
   Ay = Ay*basic_matrix;
   Ay = [Ay; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];
   
   control_p = [];
   control_p(:,1) = ((Ax'*Ax)\Ax')*ref_set(:,1);
   control_p(:,2) = ((Ay'*Ay)\Ay')*ref_set(:,2);
   
   error = [error; sum((Ax*control_p(:,1)-ref_set(:,1)).^2)+sum((Ay*control_p(:,2)-ref_set(:,2)).^2)];
   result = zeros(x, y, 3);
   result_x = int32(Ax*control_p(:,1));
   result_y = int32(Ay*control_p(:,2));
   for j = 1:point_amount
       result(sp_set{i}(j,1), sp_set{i}(j,2), : ) = Ref(result_x(j), result_y(j), :);
   end
   
   bspline_set = [bspline_set; control_p];
   
end

figure; imshow(result);



