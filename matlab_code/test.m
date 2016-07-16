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
    result(pos(1), pos(2), :) = cc(i,:);
end
%}
for o=1:surface_amount
    point_amount = size(ref_set(o).val, 1);
    for w=1:point_amount
        pos = ref_set(o).val(w,:).*[x y];
        pos = ceil(pos);
        pos(pos<1)=1;
        pos(pos(:, 1)>x, 1) = x;
        pos(pos(:, 2)>y, 2) = y;
        result(pos(1), pos(2), :) = cc(o,:);
    end
    %subplot(1,surface_amount+1,o+1);
end 

figure;
imshow(result);

result = zeros(x, y, 1);
for o=1:surface_amount
    point_amount = size(sp_set(o).val, 1);
    for w=1:point_amount
        result(sp_set(o).val(w,1), sp_set(o).val(w,2), :) = ref_set(o).val(w, 1);
    end
    %subplot(1,surface_amount+1,o+1);
end
figure;
imagesc(result);
colorbar;


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