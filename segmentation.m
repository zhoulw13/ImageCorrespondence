[x, y] = size(Sp2);
sp_set = cell(0);
sp_val = [];

%% get superpixels in coordinate form
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

%% remove surface with low confidence
surface_amount = size(sp_set, 1);
sp_set2 = cell(0);
sp_val2 = [];

for i = 1:surface_amount
    point_amount = size(sp_set{i}, 1);
    con = 0;
    for j = 1:point_amount
        con = con + Confidence(sp_set{i}(j,1), sp_set{i}(j,2));
    end
    con = con/point_amount;
    if con >= 0.8
        sp_set2 = [sp_set2;sp_set{i}];
        sp_val2 = [sp_val2; sp_val(i)];
    end
end
sp_set = sp_set2;
sp_val = sp_val2;

%result = zeros(x, y, 3);
%result2 = zeros(x, y, 3);

%% compute bsplines of superpixels

surface_amount = size(sp_set, 1);
bspline_set = cell(surface_amount, 1);
error_set = zeros(surface_amount, 1, 1);
%mask_set = cell(surface_amount, 1);
ref_set = cell(surface_amount, 1);

for i = 1:surface_amount
   ref_point = [];
   point_amount = size(sp_set{i}, 1);
   for j = 1:point_amount
       ref_pos = DCF(sp_set{i}(j,1), sp_set{i}(j,2), : );
       ref_point = [ref_point;[ref_pos(2), ref_pos(1)]];
   end
   ref_set{i} = ref_point;
  % ref_set = [ref_set;[1, 1; 1, 1; 1,1]];
   
   [control_p, error] = bspline_inv(sp_set{i}, ref_point);
   error_set(i) = error;
   %mask_set{i} = masks;
   
   %{
   result_x = floor(A*control_p(:,1));
   result_y = floor(A*control_p(:,2));
   result_x(result_x<=0)=1;
   result_y(result_y<=0)=1;
   result_x(result_x > x)=x;
   result_y(result_y > y)=y;
   for j = 1:point_amount
       result(sp_set{i}(j,1), sp_set{i}(j,2), : ) = Ref(result_x(j), result_y(j), :);
       %result(result_x(j), result_y(j), : ) = [0,0,0];
       result2(result_x(j), result_y(j), : ) = Ref(result_x(j), result_y(j), :);
   end
   %}
   
   bspline_set{i} = control_p;
   
end

%% remove surfaces with too big error
error_set2 = [];
sp_set2 = cell(0);
sp_val2 = [];
ref_set2 = cell(0);
bspline_set2 = cell(0);
%mask_set2 = cell(0);
for i=1:surface_amount
    if error_set(i) < 10
        error_set2 = [error_set2; error_set(i)];
        sp_set2 = [sp_set2;sp_set{i}];
        bspline_set2 = [bspline_set2; bspline_set{i}];
        sp_val2 = [sp_val2; sp_val(i)];
        ref_set2 = [ref_set2; ref_set{i}];
        %mask_set2 = [mask_set2; mask_set{i}];
    end
end

error_set = error_set2;
sp_set = sp_set2;
sp_val = sp_val2;
bspline_set = bspline_set2;
error = sum(error_set)/size(error_set,1);
ref_set = ref_set2;
%mask_set = mask_set2;

       
%{
figure; 
subplot(1,2,1);
imshow(result);
subplot(1,2,2);
imshow(result2);
%}


