function [sp_set, bspline_set, ref_set] = merging(sp_set, sp_val, bspline_set, ref_set, Sp2)
%#codegen
coder.inline('never')

%% initialize adjacency graph
surface_amount = size(sp_set, 1);
adjacency_graph = zeros(surface_amount, surface_amount, 1);

[x, y] = size(Sp2);

for i=1:surface_amount
    area_i = find(Sp2==sp_val(i));
    size_i = size(area_i, 1);
    for j=(i+1):surface_amount
        area_j = find(Sp2==sp_val(j));
        size_j = size(area_j, 1);
        dif = abs(repmat(area_i, 1, size_j) - repmat(area_j, 1, size_i)');
        if sum(find(dif == 1 | dif == x)) ~= 0
            adjacency_graph(i, j) = 1;
        end
    end
end

%% merge superpixels with similiar bspline
Dt = [];
errors = [];
pairs = find(adjacency_graph~=0);
while sum(pairs) > 0
    surface_amount = size(sp_set, 1);
    i = mod(pairs(1), surface_amount);
    j = ceil(pairs(1)/surface_amount);
    union_ij = [sp_set{i}; sp_set{j}];
    ref_union = [ref_set{i}; ref_set{j}];
    [control_p, error] = bspline_inv(union_ij, ref_union);
    
    bound1 = min(union_ij);
    bound2 = min(sp_set{i});
    bound3 = min(sp_set{j});
    
    size_i = size(sp_set{i}, 1);
    ref_it = int32(bspline(sp_set{i}, control_p, bound1));
    ref_i = int32(bspline(sp_set{i}, bspline_set{i}, bound2));
    
    ref_it(ref_it<1)=1;
    ref_it(ref_it(:, 1)>x, 1)=x;
    ref_it(ref_it(:, 2)>y, 2)=y;
    ref_i(ref_i<1)=1;
    ref_i(ref_i(:, 1)>x, 1)=x;
    ref_i(ref_i(:, 2)>y, 2)=y;
    
    val_it = getPixelsValue(Ref, ref_it);
    val_i = getPixelsValue(Ref, ref_i);
    
    size_j = size(sp_set{j}, 1);
    ref_jt = int32(bspline(sp_set{j}, control_p, bound1));
    ref_j = int32(bspline(sp_set{j}, bspline_set{j}, bound3));
    
    ref_jt(ref_jt<1)=1;
    ref_jt(ref_jt(:, 1)>x, 1)=x;
    ref_jt(ref_jt(:, 2)>y, 2)=y;
    ref_j(ref_j<1)=1;
    ref_j(ref_j(:, 1)>x, 1)=x;
    ref_j(ref_j(:, 2)>y, 2)=y;
    
    val_jt = getPixelsValue(Ref, ref_jt);
    val_j = getPixelsValue(Ref, ref_j);
    
    D_sp1 = sum(sum((val_it-val_i).^2));
    D_sp2 = sum(sum((val_jt-val_j).^2));
    D_sp = (D_sp1+D_sp2)/size(union_ij, 1);
    Dt = [Dt; D_sp];
    errors = [errors; error];
    adjacency_graph(i, j) = 0;
    if D_sp < 10
        adjacency_graph(i, i:j) = adjacency_graph(i, i:j) + adjacency_graph(i:j, j)';
        adjacency_graph(1:i, i) = adjacency_graph(1:i, i) + adjacency_graph(1:i, j);
        adjacency_graph(i, j:end) = adjacency_graph(i, j:end) + adjacency_graph(j, j:end);
        adjacency_graph(j, :) = [];
        adjacency_graph(:, j) = [];
        sp_set{i} = union_ij;
        sp_set(j) = [];
        ref_set{i} = ref_union;
        ref_set(j) = [];
        bspline_set{i} = control_p;
        bspline_set(j) = [];
    end
    pairs = find(adjacency_graph~=0);
end

end