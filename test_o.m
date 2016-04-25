surface_amount = size(sp_set, 1);

figure;
%subplot(1,surface_amount+1,1);
imshow(Src);
[x, y] = size(Sp2);

result = zeros(x, y, 3);

for i=1:surface_amount
    point_amount = size(sp_set{i}, 1);
    
    for j=1:point_amount
        result(sp_set{i}(j,1), sp_set{i}(j,2), :) = Src(sp_set{i}(j,1), sp_set{i}(j,2), :);
    end
    %subplot(1,surface_amount+1,i+1);
end 

figure;
imshow(result);


result = zeros(x, y, 3);

for i=1:surface_amount
    point_amount = size(ref_set{i}, 1);
    for j=1:point_amount
        result(ref_set{i}(j,1), ref_set{i}(j,2), :) = Ref(ref_set{i}(j,1), ref_set{i}(j,2), :);
    end
    %subplot(1,surface_amount+1,i+1);
end 

figure;
imshow(result);


result = zeros(x, y, 3);

for i=1:surface_amount
    bound = min(sp_set{i});
    [ref] = int32(bspline(sp_set{i}, bspline_set{i}, bound));
    ref(ref<1)=1;
    ref(ref(:, 1)>x, 1)=x;
    ref(ref(:, 2)>y, 2)=y;
    point_amount = size(ref_set{i}, 1);
    for j=1:point_amount
        result(ref(j,1), ref(j,2), :) = Ref(ref(j,1), ref(j,2), :);
    end
    %subplot(1,surface_amount+1,i+1);
end 

figure;
imshow(result);