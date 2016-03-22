function [ref] = bspline(src, control_p, ux, uy, vx, vy)
% bspline give 2d cubic uniform references of given source and control points
% Detailed explanation goes here

basic_matrix = [1,4,1,0;
                -3,0,3,0;
                3,-6,3,0;
                -1,3,-3,1]/6;
            

top = min(src(:,1));
left = min(src(:,2));
x = (src(:,1) - top)./30;
y = (src(:,2) - left)./30;
tx = x - floor(x);
ty = y - floor(y);

Ax = [];
Ax(:, 1) = ones(size(tx,1), 1);
Ax(:, 2) = tx;
Ax(:, 3) = tx.^2;
Ax(:, 4) = tx.^3;
Ax = Ax*basic_matrix;
%Ax = [Ax; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];

Ax_d = [];
if (ux+vx)~=0
    Ax_d(:, 1) = zeros(size(tx,1), 1);
    Ax_d(:, 2) = ones(size(tx,1), 1);
    Ax_d(:, 3) = 2*tx;
    Ax_d(:, 4) = 3*tx.^2;
    Ax_d = Ax_d*basic_matrix/30;
end

Ay = [];
Ay(:, 1) = ones(size(ty,1), 1);
Ay(:, 2) = ty;
Ay(:, 3) = ty.^2;
Ay(:, 4) = ty.^3;
Ay = Ay*basic_matrix;
%Ay = [Ay; [-1,1,0,0;0,-1,1,0;0,0,-1,1]];

Ay_d = [];
if (uy+vy)~=0
    Ay_d(:, 1) = zeros(size(ty,1), 1);
    Ay_d(:, 2) = ones(size(ty,1), 1);
    Ay_d(:, 3) = 2*ty;
    Ay_d(:, 4) = 3*ty.^2;
    Ay_d = Ay_d*basic_matrix/30;
end

point_amount = size(src, 1);

[h, w] = size(control_p(:,:,1));

A = [];
Au = [];
Av = [];
if sum([ux, uy, vx, vy]) == 0
    for i=1:point_amount
        xi = Ax(i, :);
        yi = Ay(i, :);
        param_matrix = zeros(h, w, 1);
        param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
        param_matrix = param_matrix(:)';
        A = [A; param_matrix];
    end
    Au = A;
    Av = A;
else
    for i=1:point_amount
        if ux == 0
            xi = Ax(i, :);
        else
            xi = Ax_d(i, :);
        end
        if uy == 0 
            yi = Ay(i, :);
        else
            yi = Ay_d(i, :);
        end
        param_matrix = zeros(h, w, 1);
        param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
        param_matrix = param_matrix(:)';
        Au = [Au; param_matrix];
        
        if vx == 0
            xi = Ax(i, :);
        else
            xi = Ax_d(i, :);
        end
        if vy == 0 
            yi = Ay(i, :);
        else
            yi = Ay_d(i, :);
        end
        param_matrix = zeros(h, w, 1);
        param_matrix(1+floor(x(i)):4+floor(x(i)), 1+floor(y(i)):4+floor(y(i))) = xi'*yi;
        param_matrix = param_matrix(:)';
        Av = [Av; param_matrix];
    end
end    

%A = [A, repmat(Ax(:,1), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,2), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,3), 1, 4) .* Ay];
%A = [A, repmat(Ax(:,4), 1, 4) .* Ay];


ref = [];
temp1 = control_p(:, :, 1);
temp2 = control_p(:, :, 2);

ref(:, 1) = Au*temp1(:);
ref(:, 2) = Av*temp2(:);

end