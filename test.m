surface_amount = size(sp_set, 1);

figure;
%subplot(1,surface_amount+1,1);
imshow(Src);

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