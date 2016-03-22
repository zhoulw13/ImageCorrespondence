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
pairs = find(adjacency_graph~=0);
while sum(pairs) > 0
    surface_amount = size(sp_set, 1);
    i = mod(pairs(1), surface_amount);
    j = ceil(pairs(1)/surface_amount);
    union_ij = [sp_set{i}; sp_set{j}];
    ref_union = [ref_set{i}; ref_set{j}];
    [control_p, error] = bspline_inv(union_ij, ref_union);
    
    size_i = size(sp_set{i}, 1);
    ref_it = int32(bspline(sp_set{i}, control_p, 0,0,0,0));
    ref_i = int32(bspline(sp_set{i}, bspline_set{i}, 0,0,0,0));
    
    ref_it(ref_it<1)=1;
    ref_it(ref_it(:, 1)>x, 1)=x;
    ref_it(ref_it(:, 2)>y, 2)=y;
    ref_i(ref_i<1)=1;
    ref_i(ref_i(:, 1)>x, 1)=x;
    ref_i(ref_i(:, 2)>y, 2)=y;
    
    val_it = [];
    val_i = [];
    for k=1:size_i
        
        temp = Ref(ref_i(k,1), ref_i(k,2), :);
        val_i = [val_i; temp(1), temp(2), temp(3)];
        
        temp = Ref(ref_it(k,1), ref_it(k,2), :);
        val_it = [val_it; temp(1), temp(2), temp(3)];
    end
    
    size_j = size(sp_set{j}, 1);
    ref_jt = int32(bspline(sp_set{j}, control_p, 0,0,0,0));
    ref_j = int32(bspline(sp_set{j}, bspline_set{j}, 0,0,0,0));
    
    ref_jt(ref_jt<1)=1;
    ref_jt(ref_jt(:, 1)>x, 1)=x;
    ref_jt(ref_jt(:, 2)>y, 2)=y;
    ref_j(ref_j<1)=1;
    ref_j(ref_j(:, 1)>x, 1)=x;
    ref_j(ref_j(:, 2)>y, 2)=y;
    
    val_jt = [];
    val_j = [];
    for k=1:size_j
        temp = Ref(ref_j(k,1), ref_j(k,2), :);
        val_j = [val_j; temp(1), temp(2), temp(3)];
        
        temp = Ref(ref_jt(k,1), ref_jt(k,2), :);
        val_jt = [val_jt; temp(1), temp(2), temp(3)];
    end
    
    D_sp1 = sum(sum((val_it-val_i).^2));
    D_sp2 = sum(sum((val_jt-val_j).^2));
    D_sp = (D_sp1+D_sp2)/size(union_ij, 1);
    if D_sp < 10
        adjacency_graph(:, j) = [];
        adjacency_graph(i, :) = adjacency_graph(i, :) + adjacency_graph(j, :); 
        adjacency_graph(j, :) = [];
        sp_set{i} = union_ij;
        sp_set(j) = [];
        ref_set{i} = ref_union;
        ref_set(j) = [];
        bspline_set{i} = control_p;
        bspline_set(j) = [];
    else
        adjacency_graph(i, j) = 0;
    end
    pairs = find(adjacency_graph~=0);
end