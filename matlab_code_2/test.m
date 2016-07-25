%{
surface_amount = size(sp_set, 2);

figure;
%subplot(1,surface_amount+1,1);
imshow(Src);
[x, y] = size(Sp2);

result = zeros(x, y, 3);

for o=1:surface_amount
    point_amount = size(sp_set(o).val, 1);
    
    for w=1:point_amount
        result(sp_set(o).val(w,1), sp_set(o).val(w,2), :) = Src(sp_set(o).val(w,1), sp_set(o).val(w,2), :);
    end
    %subplot(1,surface_amount+1,o+1);
end 

figure;
imshow(result);


result = zeros(x, y, 3);

for o=1:surface_amount
    point_amount = size(ref_set(o).val, 1);
    for w=1:point_amount
        pos = ref_set(o).val(w,:).*[x y];
        pos = ceil(pos);
        pos(pos<1)=1;
        pos(pos(:, 1)>x, 1) = x;
        pos(pos(:, 2)>y, 2) = y;
        result(pos(1), pos(2), :) = Ref(pos(1), pos(2), :);
    end
    %subplot(1,surface_amount+1,o+1);
end 

figure;
imshow(result);
%}





[x, y] = size(Sp2);
result = zeros(x, y, 3);
surface_amount = size(sp_set, 2);
cc=hsv(surface_amount);
cc=cc(randperm(surface_amount), :);
for o=1:surface_amount
    point_amount = size(sp_set(o).val, 1);
    for w=1:point_amount
        result(sp_set(o).val(w,1), sp_set(o).val(w,2), :) = cc(o,:);
    end
    %subplot(1,surface_amount+1,o+1);
end

%{
adj = size(temp_sx, 1);
for o=1:adj
	result(int32(temp_sx(o)), int32(temp_sy(o)), :) = [255, 255, 255];
end
%}


%{
point_amount = size(omega, 1);
for o=1:point_amount
    result(omega(o, 1), omega(o, 2), :) = [1 1 1];
end
%}

figure;
imshow(result);
%{
hold on

for o=1:surface_amount
	center_i = mean(sp_set(o).val, 1);
	for w=(o+1):surface_amount
		if adjacency_graph(o,w)~=0
			center_j = mean(sp_set(w).val, 1);
            a = [center_i(1) center_j(1)];
            b = [center_i(2) center_j(2)];
			line(b, a,'Color', 'r');
		end
	end
end
hold off
%}


result = zeros(x, y, 3);

%{
ref_set = single_ref_set;
point_amount = size(ref_set, 1);
for w=1:point_amount
    pos = ref_set(w,:).*[x y];
    pos = ceil(pos);
    pos(pos<1)=1;
    pos(pos(:, 1)>x, 1) = x;
    pos(pos(:, 2)>y, 2) = y;
    result(pos(1), pos(2), :) = cc(w,:);
end
%}
for o=1:surface_amount
    %t_ref_set = ref_set(o).val;
    t_ref_set = bspline(sp_set(o).val, bspline_set(o), min(sp_set(o).val));
    point_amount = size(t_ref_set, 1);
    for w=1:point_amount
        pos = round(t_ref_set(w,:));
        pos(pos<1)=1;
        pos(pos(:, 1)>x, 1) = x;
        pos(pos(:, 2)>y, 2) = y;
        result(pos(1), pos(2), :) = cc(o,:);
    end
    %subplot(1,surface_amount+1,o+1);
end

%{
adj = size(temp_rx, 1);
for o=1:adj
	a = round(temp_rx(o));
	if a < 1
		a = 1;
	elseif a > x
		a = x;
    end

	b = round(temp_ry(o));
	if b < 1
		b = 1;
	elseif b > y
		b = y;
    end
	result(a, b, :) = [255, 255, 255];
end
%}


figure;
imshow(result);

result = zeros(x, y, 3);

%{
ref_set = single_ref_set;
point_amount = size(ref_set, 1);
for w=1:point_amount
    pos = ref_set(w,:).*[x y];
    pos = ceil(pos);
    pos(pos<1)=1;
    pos(pos(:, 1)>x, 1) = x;
    pos(pos(:, 2)>y, 2) = y;
    result(pos(1), pos(2), :) = cc(w,:);
end
%}
for o=1:surface_amount
    %t_ref_set = ref_set(o).val;
    t_ref_set = bspline(sp_set(o).val, bspline_set(o), min(sp_set(o).val));
    point_amount = size(t_ref_set, 1);
    for w=1:point_amount
        pos = round(t_ref_set(w,:));
        pos(pos<1)=1;
        pos(pos(:, 1)>x, 1) = x;
        pos(pos(:, 2)>y, 2) = y;
        result(pos(1), pos(2), :) = cc(o,:);
    end
    %subplot(1,surface_amount+1,o+1);
end

%{
a = [sp_set(i).val; double([temp_sx, temp_sy])];
%single_ref_set = [single_ref_set; double([temp_rx, temp_ry])];
single_ref_set = [];
b = [ref_set; double([temp_rx, temp_ry])];
%sp_set(i).val = superpixel;

[control_p, error] = bspline_inv(a, b);
errors = [errors; error];
item = struct('x', control_p(:,:,1), 'y', control_p(:,:,2));
c = bspline(double([temp_sx, temp_sy]), item, min(double([temp_sx, temp_sy])));
adj = size(c, 1);
for o=1:adj
	a = round(c(o, 1));
	if a < 1
		a = 1;
	elseif a > x
		a = x;
    end

	b = round(c(o, 2));
	if b < 1
		b = 1;
	elseif b > y
		b = y;
    end
	result(a, b, :) = [255, 255, 255];
end
%}

%{
adj = size(single_ref_set, 1);
for o=1:adj
	a = round(single_ref_set(o, 1));
	if a < 1
		a = 1;
	elseif a > x
		a = x;
    end

	b = round(single_ref_set(o, 2));
	if b < 1
		b = 1;
	elseif b > y
		b = y;
    end
	result(a, b, :) = [255, 255, 255];
end
%}

figure;
imshow(result);


result = zeros(x, y, 1);
for o=1:surface_amount
    point_amount = size(sp_set(o).val, 1);
    t_ref_set = bspline(sp_set(o).val, bspline_set(o), min(sp_set(o).val));
    for w=1:point_amount
        result(sp_set(o).val(w,1), sp_set(o).val(w,2), :) = t_ref_set(w, 2)/y;
    end
    %subplot(1,surface_amount+1,o+1);
end
figure;
imagesc(result);
colorbar;





a = 100;
point = [round(temp_sx(a)), round(temp_sy(a))];
point_amount = size(superpixel, 1);
temp = abs(repmat(point, point_amount, 1) - superpixel);
[val, ind] = min(temp(:, 1) + temp(:, 2));

I1 = imread('card.png');
p = patch + repmat([point';0], 1, 49);
for o=1:49
	I1(p(1, o), p(2, o), :) = [255, 0, 0];
end
p = patch + repmat([superpixel(ind,:)';0], 1, 49);
for o=1:49
	I1(p(1, o), p(2, o), :) = [0, 255, 0];
end
figure;
imshow(I1);

I2 = imread('card_ref.png');
p = patch + repmat([round(temp_rx(a)); round(temp_ry(a));0], 1, 49);
for o=1:49
	I2(p(1, o), p(2, o), :) = [255, 0, 0];
end
p = patch + repmat([round(single_ref_set(ind,:))';0], 1, 49);
for o=1:49
	I2(p(1, o), p(2, o), :) = [0, 255, 0];
end
figure;
imshow(I2);


%{
o=4;
result = zeros(x, y, 3);
bound = min(sp_set(o).val, [], 1);
[ref] = (bspline(sp_set(o).val, bspline_set(o), bound));
ref(ref<0)=0;
ref(ref>1)=1;
point_amount = size(ref_set(o).val, 1);
for w=1:point_amount
    pos = ref(w, :).*[x y];
    pos = ceil(pos);
    pos(pos<1) = 1;
    result(sp_set(o).val(w,1), sp_set(o).val(w,2), :) = Src(sp_set(o).val(w,1), sp_set(o).val(w,2), :);
    %result(pos(1), pos(2), :) = Ref(pos(1), pos(2), :);
end

figure;
imshow(result);
%}