function [val] = getPixelsValue(img, index)
index = int32(index);
m = size(index, 1);
val = zeros(m, 3, 1);
for i=1:m
    val(i, :)=img(index(i, 1), index(i, 2), :);
end