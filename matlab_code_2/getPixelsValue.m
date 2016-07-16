function [val] = getPixelsValue(img, index)
[x, y, z] = size(img);
m = size(index, 1);

%index(:,1) = index(:,1)*x;
%index(:,2) = index(:,2)*y;
%index = round(index);
lx = floor(index(:, 1));
ly = floor(index(:, 2));
rx = ceil(index(:, 1));
ry = ceil(index(:, 2));

lx(lx<1)=1;
ly(ly<1)=1;
rx(rx<1)=1;
ry(ry<1)=1;
lx(lx>x)=x;
ly(ly>y)=y;
rx(rx>x)=x;
ry(ry>y)=y;

val = zeros(m, 3, 1);
for i=1:m
    if lx(i) == rx(i) && ly(i) == ry(i)
        val(i, :) = img(lx(i), ly(i), :);
    elseif lx(i) == rx(i)
        val(i, :) = (img(lx(i), ly(i), :)*(ry(i) - index(i, 2)) + img(lx(i), ry(i), :)*(index(i, 2) - ly(i)));
    elseif ly(i) == ry(i)
        val(i, :) = (img(lx(i), ly(i), :)*(rx(i) - index(i, 1)) + img(rx(i), ly(i), :)*(index(i, 1) - lx(i)));
    else
        val(i, :) = reshape((img(lx(i), ly(i), :)*(ry(i) - index(i, 2)) + img(lx(i), ry(i), :)*(index(i, 2) - ly(i)))*(rx(i)-index(i, 1)), 1, 3);
        val(i, :) = val(i, :) + reshape((img(rx(i), ly(i), :)*(ry(i)-index(i,2)) + img(rx(i), ry(i), :)*(index(i, 2) - ly(i)))*(index(i, 1) - lx(i)), 1, 3);
    end
end