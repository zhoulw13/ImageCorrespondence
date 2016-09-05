function [jacobian] = caljacobian(Corr, pos)

jacobian = zeros(2, 2, 1);
o = Corr(pos(1), pos(2), :);
[x, y, z] = size(Corr);

d = 1;
while 1
    if pos(1)+d > x || pos(1)-d < 1
        jacobian(1,1) = 0;
        jacobian(2,1) = 0;
        break;
    end
    f = Corr(pos(1)+d, pos(2), :);
    if f(1) ~= 0 && f(2) ~= 0
        jacobian(1, 1) = (f(2) - o(2))/d;
        jacobian(2, 1) = (f(1) - o(1))/d;
        break;
    end
    f = Corr(pos(1)-d, pos(2), :);
    if f(1) ~= 0 && f(2) ~= 0
        jacobian(1, 1) = (o(2) - f(2))/d;
        jacobian(2, 1) = (o(1) - f(1))/d;
        break;
    end
    d = d + 1;
end

d = 1;
while 1
    if pos(2)+d > y || pos(2)-d < 1
        jacobian(1,2) = 0;
        jacobian(2,2) = 0;
        break;
    end
    f = Corr(pos(1), pos(2)+d, :);
    if f(1) ~= 0 && f(2) ~= 0
        jacobian(1, 2) = (f(2) - o(2))/d;
        jacobian(2, 2) = (f(1) - o(1))/d;
        break;
    end
    f = Corr(pos(1), pos(2)-d, :);
    if f(1) ~= 0 && f(2) ~= 0
        jacobian(1, 2) = (o(2) - f(2))/d;
        jacobian(2, 2) = (o(1) - f(1))/d;
        break;
    end
    d = d + 1;
end

end