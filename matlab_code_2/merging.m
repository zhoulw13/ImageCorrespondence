function [sp_set, bspline_set, ref_set, adjacency_graph] = merging(sp_set, sp_val, bspline_set, ref_set, Sp2, Ref)
%#codegen
coder.inline('never')

labTransformation = makecform('srgb2lab');
Ref_lab = applycform(Ref,labTransformation);
Ref = Ref_lab;


%% initialize adjacency graph
surface_amount = size(sp_set, 2);
adjacency_graph = zeros(surface_amount, surface_amount, 1);

[x, y] = size(Sp2);

for i=1:surface_amount
    %area_i = find(Sp2==sp_val(i));
    area_i = sp_set(i).val(:,1)+(x-1)*sp_set(i).val(:,2);
    size_i = size(area_i, 1);
    for j=(i+1):surface_amount
        %area_j = find(Sp2==sp_val(j));
        area_j = sp_set(j).val(:,1)+(x-1)*sp_set(j).val(:,2);
        size_j = size(area_j, 1);
        dif = abs(repmat(area_i, 1, size_j) - repmat(area_j, 1, size_i)');
        if sum(find(dif == 1 | dif == x)) ~= 0
            adjacency_graph(i, j) = 1;
        end
    end
end



%% merge superpixels with similiar bspline
Dt = [];
pairs = find(adjacency_graph~=0);
while sum(pairs) > 0
    surface_amount = size(sp_set, 2);
    i = mod(pairs(1), surface_amount);
    j = ceil(pairs(1)/surface_amount);
    union_ij = [sp_set(i).val; sp_set(j).val];
    ref_union = [ref_set(i).val; ref_set(j).val];
    [control_p, error] = bspline_inv(union_ij, ref_union);
    
    bound1 = min(union_ij, [], 1);
    bound2 = min(sp_set(i).val, [], 1);
    bound3 = min(sp_set(j).val, [], 1);
    
    item = struct('x', control_p(:,:,1), 'y', control_p(:,:,2));
    
    
    ref_it = (bspline(sp_set(i).val, item, bound1));
    ref_i = (bspline(sp_set(i).val, bspline_set(i), bound2));
    
    val_it = getPixelsValue(Ref, ref_it);
    val_i = getPixelsValue(Ref, ref_i);
    
    ref_jt = (bspline(sp_set(j).val, item, bound1));
    ref_j = (bspline(sp_set(j).val, bspline_set(j), bound3));
    
    val_jt = getPixelsValue(Ref, ref_jt);
    val_j = getPixelsValue(Ref, ref_j);
    
    D_sp1 = sum(sum((val_it-val_i).^2, 1), 2);
    D_sp2 = sum(sum((val_jt-val_j).^2, 1), 2);
    D_sp = (D_sp1+D_sp2)/size(union_ij, 1);
    
    
    %D_sp = error;
    Dt = [Dt; D_sp];
    adjacency_graph(i, j) = 0;
    if D_sp < 10
        adjacency_graph(i, i:j) = adjacency_graph(i, i:j) + adjacency_graph(i:j, j)';
        adjacency_graph(1:i, i) = adjacency_graph(1:i, i) + adjacency_graph(1:i, j);
        adjacency_graph(i, j:end) = adjacency_graph(i, j:end) + adjacency_graph(j, j:end);
        adjacency_graph(j, :) = [];
        adjacency_graph(:, j) = [];
        sp_set(i).val = union_ij;
        sp_set(j) = [];
        item = struct('x', control_p(:,:,1), 'y', control_p(:,:,2));
        bspline_set(i) = item;
        bspline_set(j) = [];
		ref_set(i).val = ref_union;
        %ref_set(i).val = bspline(sp_set(i).val, item, bound1);
        ref_set(j) = [];
    end
    pairs = find(adjacency_graph~=0);
end


end