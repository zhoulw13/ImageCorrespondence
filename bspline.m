function [ref] = bspline(src, control_p)
% bspline give 2d cubic uniform references of given source and control points
% Detailed explanation goes here

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;
            

top = min(src(:,1));
left = min(src(:,2));
tx = (src(:,1) - top)./30;
ty = (src(:,2) - left)./30;
tx = tx - floor(tx);
ty = ty - floor(ty);

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

A = [];
A = [A, repmat(Ax(:,1), 1, 4) .* Ay];
A = [A, repmat(Ax(:,2), 1, 4) .* Ay];
A = [A, repmat(Ax(:,3), 1, 4) .* Ay];
A = [A, repmat(Ax(:,4), 1, 4) .* Ay];

ref = [];
ref(:, 1) = A*control_p(:,1);
ref(:, 2) = A*control_p(:,2);

end