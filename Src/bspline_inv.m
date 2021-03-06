function [ control_p, error ] = bspline_inv(src, ref)
% bspline_inv give 2d cubic uniform control point of given source and reference
% Detailed explanation goes here

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;
            

top = min(src(:,1));
left = min(src(:,2));
x = (src(:,1) - top + 1)./30;
y = (src(:,2) - left + 1)./30;
down = floor(max(x));
right = floor(max(y));
tx = x - floor(x);
ty = y - floor(y);

Ax = zeros(size(tx,1), 4, 1);
Ax(:, 1) = ones(size(tx,1), 1);
Ax(:, 2) = tx;
Ax(:, 3) = tx.^2;
Ax(:, 4) = tx.^3;
Ax = Ax*basic_matrix;

Ay = zeros(size(ty,1), 4, 1);
Ay(:, 1) = ones(size(ty,1), 1);
Ay(:, 2) = ty;
Ay(:, 3) = ty.^2;
Ay(:, 4) = ty.^3;
Ay = Ay*basic_matrix;

point_amount = size(src, 1);
A = zeros(point_amount, (4+down)*(4+right), 1);

for i=1:point_amount
    xi = Ax(i, :);
    yi = Ay(i, :);
    param_matrix = zeros(4+down, 4+right, 1);
    param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
    param_matrix = param_matrix(:)';
    A(i, :) = param_matrix;
end

control_p = zeros(4+down, 4+right, 2, 1);

control_p(:, :, 1) = reshape((pinv(A'*A)*A')*ref(:,1), 4+down, 4+right);
control_p(:, :, 2) = reshape((pinv(A'*A)*A')*ref(:,2), 4+down, 4+right);

%control_p(find(isnan(control_p))) = 0;

temp1 = control_p(:, :, 1);
temp2 = control_p(:, :, 2);

error = (sum((A*temp1(:)-ref(:,1)).^2)+sum((A*temp2(:)-ref(:,2)).^2))/point_amount;

end