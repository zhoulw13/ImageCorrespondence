[x, y] = size(Sp2);
sp_set = cell(0);
sp_val = [];

for i = 1:x
    for j = 1:y
        if sum(find(sp_val==Sp2(i,j))) == 0
            vec = find(Sp2==Sp2(i,j));
            sp_val = [sp_val;Sp2(i,j)];
            new_set = [];
            new_set(:,1) = mod(vec, x);
            new_set(:,2) = ceil(vec./x);
            sp_set = [sp_set;new_set];
        end
    end
end