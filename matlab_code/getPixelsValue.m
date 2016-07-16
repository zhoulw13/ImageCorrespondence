function [val] = getPixelsValue(img, index)
[x, y, z] = size(img);
m = size(index, 1);

index(:,1) = index(:,1)*x;
index(:,2) = index(:,2)*y;
index = ceil(index);
index(index<1)=1;
index(index(:,1)>x, 1)=x;
index(index(:,2)>y, 2)=y;

val = zeros(m, 3, 1);
for i=1:m
    val(i, :)=img(index(i, 1), index(i, 2), :);
end