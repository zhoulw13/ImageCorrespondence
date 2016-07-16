function [ref] = bspline(src, control_p, bound)
% bspline give 2d cubic uniform references of given source and control points
% Detailed explanation goes here
%#codegen
coder.inline('never')

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;
            

top = bound(:, 1);
left = bound(:, 2);
x = (src(:,1) - top + 1)./30;
y = (src(:,2) - left + 1)./30;
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

[h, w] = size(control_p(:,:,1));

A = [];
for i=1:point_amount
    xi = Ax(i, :);
    yi = Ay(i, :);
    param_matrix = zeros(h, w, 1);
    param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
    param_matrix = param_matrix(:)';
    A = [A; param_matrix];
end


ref = zeros(size(src, 1), 2, 1);
temp1 = control_p(:, :, 1);
temp2 = control_p(:, :, 2);

ref(:, 1) = A*temp1(:);
ref(:, 2) = A*temp2(:);

end