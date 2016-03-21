function [ control_p, error ] = bspline_inv(src, ref)
% bspline_inv give 2d cubic uniform control point of given source and reference
% Detailed explanation goes here

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;
            

top = min(src(:,1));
left = min(src(:,2));
x = (src(:,1) - top)./30;
y = (src(:,2) - left)./30;
down = floor(max(x));
right = floor(max(y));
tx = x - floor(x);
ty = y - floor(y);

Ax = [];
Ax(:, 1) = ones(size(tx,1), 1);
Ax(:, 2) = tx;
Ax(:, 3) = tx.^2;
Ax(:, 4) = tx.^3;
Ax = Ax*basic_matrix;
%Ax = [Ax; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];

Ay = [];
Ay(:, 1) = ones(size(ty,1), 1);
Ay(:, 2) = ty;
Ay(:, 3) = ty.^2;
Ay(:, 4) = ty.^3;
Ay = Ay*basic_matrix;
%Ay = [Ay; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];

point_amount = size(src, 1);
A = [];
masks = [];

for i=1:point_amount
    xi = Ax(i, :);
    yi = Ay(i, :);
    param_matrix = zeros(4+down, 4+right, 1);
    param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
    param_matrix = param_matrix(:)';
    masks = union(masks, find(param_matrix~=0));
    A = [A; param_matrix];
end

masks = sort(masks);
temp = sort(setdiff(masks, (1:((4+down)*(4+right)))));
size_t = size(temp, 1);
for i=1:size_t
    A(:, temp(i)) = [];
    temp = temp - 1;
end

size(A);
%A = [A, repmat(Ax(:,1), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,2), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,3), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,4), 1, 4) .* Ay];

control_p = [];
control_p(:, :,1) = reshape(((A'*A)\A')*ref(:,1), 4+down, 4+right);
control_p(:, :,2) = reshape(((A'*A)\A')*ref(:,2), 4+down, 4+right);

temp1 = control_p(:, :, 1);
temp2 = control_p(:, :, 2);

error = (sum((A*temp1(:)-ref(:,1)).^2)+sum((A*temp2(:)-ref(:,2)).^2))/point_amount;

end