surface_amount = size(sp_set, 1);
[x, y] = size(Sp2);

%% initialize
Sp_new = zeros(x, y, 1);
for i=1:surface_amount
    point_amount = size(sp_set{i}, 1);
    for j=1:point_amount
        Sp_new(sp_set{i}(j, 1), sp_set{i}(j, 2)) = i;
    end    
end    

%% extension
for i=1:surface_amount
    modified = false;
    while modified == false
        %% find adjacency area within 5 pixels
        omega = [];
        for j= -5:5
            for k= abs(j)-5:5-abs(j)
                omega = union(omega, (sp_set{i}+repmat([i, j], size(sp_set{i}, 1), 1)), 'rows');
            end
        end
        omega = sediff(omega, sp_set{i}, 'rows');
        omega(omega(:,1)<1 | omega(:,2)<1 | omega(:, 1)>x | omega(:, 2)>y, :) = [];
        temp = omega(:, 1)+(omega(:, 2)-1)*x;
        omega(Sp_new(temp)~=0, :) = [];
        
        size_o = size(omega, 1);
        point_amount = size(sp_set{i}, 1);
        for j=1:size_o
            temp = abs(repmat(omega(j, :), point_amout, 1) - sp_set{i});
            [val, ind] = min(temp(:, 1) + temp(:, 2));
            
        end
    end
end