function [ref] = bspline_single(src, control_p, bound, ux, uy, vx, vy)
% bspline give 2d cubic uniform references of given sole point and control points
% Detailed explanation goes here
%#codegen
coder.inline('never')
%{
p0 = bspline(src, control_p, bound);
p1 = bspline(src+[1,0], control_p, bound);
if src(1) > bound(1)
    p2 = bspline(src-[1,0], control_p, bound);
    diffx = (p1-p2)/2;
else
    diffx = p1-p0;
end

p3 = bspline(src+[0,1], control_p, bound);
if src(2) > bound(2)
    p4 = bspline(src-[0,1], control_p, bound);
    diffy = (p3-p4)/2;
else
    diffy = p3-p0;
end

ref = zeros(size(src, 1), 2, 1);
if ux ~= 0
    ref(1) = diffx(1);
end
if vx ~= 0
    ref(2) = diffx(2);
end

if uy ~= 0
    ref(1) = diffy(1);
end
if vy ~= 0
    ref(2) = diffy(2);
end
%}

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

Ax_d = zeros(size(tx,1), 4, 1);
if (ux+vx)~=0
    Ax_d(:, 1) = zeros(size(tx,1), 1);
    Ax_d(:, 2) = ones(size(tx,1), 1);
    Ax_d(:, 3) = 2*tx;
    Ax_d(:, 4) = 3*tx.^2;
    Ax_d = Ax_d*basic_matrix/30;
end

Ay = zeros(size(ty,1), 4, 1);
Ay(:, 1) = ones(size(ty,1), 1);
Ay(:, 2) = ty;
Ay(:, 3) = ty.^2;
Ay(:, 4) = ty.^3;
Ay = Ay*basic_matrix;

Ay_d = zeros(size(ty,1), 4, 1);
if (uy+vy)~=0
    Ay_d(:, 1) = zeros(size(ty,1), 1);
    Ay_d(:, 2) = ones(size(ty,1), 1);
    Ay_d(:, 3) = 2*ty;
    Ay_d(:, 4) = 3*ty.^2;
    Ay_d = Ay_d*basic_matrix/30;
end


[h, w] = size(control_p.x);

A = zeros(1, h*w, 1);
Au = zeros(1, h*w, 1);
Av = zeros(1, h*w, 1);
if sum([ux, uy, vx, vy]) == 0
    param_matrix = zeros(h, w, 1);
    param_matrix(1+floor(x):4+floor(x), 1+floor(y):4+floor(y)) = Ax'*Ay;
    param_matrix = param_matrix(:)';
    A(1, :) = param_matrix;
    Au = A;
    Av = A;
else
    if ux == 0
        xi = Ax;
    else
        xi = Ax_d;
    end
    if uy == 0 
        yi = Ay;
    else
        yi = Ay_d;
    end
    param_matrix = zeros(h, w, 1);
    param_matrix(1+floor(x):4+floor(x), 1+floor(y):4+floor(y)) = xi'*yi;
    param_matrix = param_matrix(:)';
    Au(1, :) = param_matrix;

    if vx == 0
        xi = Ax;
    else
        xi = Ax_d;
    end
    if vy == 0
        yi = Ay;
    else
        yi = Ay_d;
    end
    param_matrix = zeros(h, w, 1);
    param_matrix(1+floor(x):4+floor(x), 1+floor(y):4+floor(y)) = xi'*yi;
    param_matrix = param_matrix(:)';
    Av(1, :) = param_matrix;
end

ref = zeros(size(src, 1), 2, 1);

temp1 = control_p.x;
temp2 = control_p.y;
ref(:, 1) = Au*temp1(:);
ref(:, 2) = Av*temp2(:);

%{
if (ux+uy+vx+vy) == 0
    temp1 = control_p.x;
    temp2 = control_p.y;
	ref(:, 1) = Au*temp1(:);
	ref(:, 2) = Av*temp2(:);
else
    temp1 = control_p.x-repmat((1:h)'-2, 1, w);
    temp2 = control_p.y-repmat((1:w)-2, h, 1);
	if ux ~= 0
		ref(:,1) = Au*temp1(:)+1/30;
	end
	if uy ~= 0
		ref(:,1) = Au*temp1(:);
	end
	if vx ~= 0
		ref(:,2) = Av*temp2(:);
	end
	if vy ~= 0
		ref(:,2) = Av*temp2(:)+1/30;
	end
end
%}

end