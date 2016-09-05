[x, y] = size(Sp2);
newCorr2 = zeros(x, y, 2);
surface_amount = size(sp_set, 2);

%ref_set = struct('val', []);
for i=1:surface_amount
    point_amount = size(sp_set(i).val, 1);
    single_ref_set = bspline(sp_set(i).val, bspline_set(i), min(sp_set(i).val));
    %item = struct('val', single_ref_set);
    %ref_set = [ref_set, item];
    for j=1:point_amount
        newCorr2(sp_set(i).val(j, 1), sp_set(i).val(j, 2), :) = [single_ref_set(j, 2), single_ref_set(j, 1)];
    end    
end 