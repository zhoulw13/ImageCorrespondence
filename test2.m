%{
omega = zeros(1, 2, 1);
i = 1;
for j= -5:5
    for k= abs(j)-5:5-abs(j)
        omega = union(omega, (sp_set{i}+repmat([j, k], size(sp_set{i}, 1), 1)), 'rows');
    end
end
omega = setdiff(omega, sp_set{i}, 'rows');
omega(omega(:,1)<1 | omega(:,2)<1 | omega(:, 1)>x | omega(:, 2)>y, :) = [];
%}

point_amount = size(sp_set{i}, 1);
[x, y] = size(Sp2);
result = zeros(x, y, 3);
for j=1:point_amount
    result(sp_set{i}(j,1), sp_set{i}(j,2), :) = Src(sp_set{i}(j,1), sp_set{i}(j,2), :);
end

%figure;
%imshow(result);

point_amount = size(omega, 1);
for j=1:point_amount
    result(omega(j,1), omega(j,2), :) = [1, 1, 1];%Src(omega(j,1), omega(j,2), :);
end

figure;
imshow(result);