function [sp_set, sp_val, bspline_set, ref_set] = segmentation(Sp2, Confidence, DCF, Ref)

%#codegen
coder.inline('never')
coder.varsize('sp_val');
coder.varsize('sp_set');
coder.varsize('sp_set(:).val');
coder.varsize('sp_set2');
coder.varsize('sp_set2(:).val');
coder.varsize('bspline_set');
coder.varsize('bspline_set(:).x');
coder.varsize('bspline_set(:).y');
coder.varsize('bspline_set2');
coder.varsize('bspline_set2(:).x');
coder.varsize('bspline_set2(:).y');
coder.varsize('ref_set');
coder.varsize('ref_set(:).val');
coder.varsize('ref_set2');
coder.varsize('ref_set2(:).val');
coder.varsize('point_x');
coder.varsize('point_y');
coder.varsize('ref_point');

[x, y] = size(Sp2);
sp_set = struct('val', []);
sp_val = [];

%% get superpixels in coordinate form
for i = 1:x
    for j = 1:y
        if sum(find(sp_val == Sp2(i,j))) == 0
            vec = find(Sp2 == Sp2(i,j));
            sp_val = [sp_val;Sp2(i,j)];
            
            new_set = zeros(size(vec,1), 2, 1);
            new_set(:,1) = mod(vec, x);
            new_set(:,2) = ceil(vec/x);
            new_set(new_set==0)=x;
            
            item.val = new_set;
            sp_set = [sp_set, item];
            
        end
    end
end

sp_set(1) = [];


%% remove point with low confidence
surface_amount = size(sp_set, 2);
for i = 1:surface_amount
    point_amount = size(sp_set(i).val, 1);
    point_x = [];
    point_y = [];
    for j = 1:point_amount
        point = [sp_set(i).val(j,1), sp_set(i).val(j,2)];
        ref_pos = DCF(point(1), point(2), : );
        if (ref_pos(1) > 0) && (ref_pos(1) <= 1) && (ref_pos(2) > 0) && (ref_pos(2) <= 1) && Confidence(point(1), point(2)) >= 0.6
            point_x = [point_x; point(1)];
            point_y = [point_y; point(2)];
        end
    end
    sp_set(i).val = [point_x, point_y];
end

%% remove surface with low confidence
surface_amount = size(sp_set, 2);
sp_set2 = struct('val', []);
sp_val2 = [];

for i = 1:surface_amount
    point_amount = size(sp_set(i).val, 1);
    con = 0;
    for j = 1:point_amount
        con = con + Confidence(sp_set(i).val(j,1), sp_set(i).val(j,2));
    end
    con = con/point_amount;
    if con >= 0.6
        sp_set2 = [sp_set2, sp_set(i)];
        sp_val2 = [sp_val2; sp_val(i)];
    end
end

sp_set2(1) = [];

sp_set = sp_set2;
sp_val = sp_val2;


%% compute bsplines of superpixels

surface_amount = size(sp_set, 2);
bspline_set = struct('x', [], 'y', []);
error_set = zeros(surface_amount, 1, 1);
ref_set = struct('val', []);

for i = 1:surface_amount
   ref_point = [];
   point_amount = size(sp_set(i).val, 1);
   for j = 1:point_amount
       ref_pos = DCF(sp_set(i).val(j,1), sp_set(i).val(j,2), : );
       ref_point = [ref_point;[ref_pos(2), ref_pos(1)]];
   end
   
   ref_point(ref_point<0)=0;
   ref_point(ref_point>1)=1;
   item = struct('val', ref_point);
   ref_set = [ref_set, item];
   
   [control_p, error] = bspline_inv(sp_set(i).val, ref_point);
   item = struct('x', control_p(:,:,1), 'y', control_p(:,:,2));
   
   
   bound = min(sp_set(i).val, [], 1);
   ref_p = (bspline(sp_set(i).val, item, bound));
   ref_p(ref_p<0)=0;
   ref_p(ref_p>1)=1;
   
   val_p = getPixelsValue(Ref, ref_p);
   val_o = getPixelsValue(Ref, ref_point);
   error_set(i) = sum(sum((val_p - val_o).^2)) / point_amount;
   %error_set(i) = error;
   
   bspline_set = [bspline_set, item];
   
end

bspline_set(1) = [];
ref_set(1) = [];

%{
%% remove surfaces with too big error
error_set2 = [];
sp_set2 = struct('val', []);
sp_val2 = [];
ref_set2 = struct('val', []);
bspline_set2 = struct('x', [], 'y', []);

for i=1:surface_amount
    if error_set(i) < 1000
        error_set2 = [error_set2; error_set(i)];
        sp_set2 = [sp_set2, sp_set(i)];
        
        bspline_set2 = [bspline_set2, bspline_set(i)];
        
        sp_val2 = [sp_val2; sp_val(i)];
        ref_set2 = [ref_set2, ref_set(i)];
    end
end

sp_set2(1) = [];
bspline_set2(1) = [];
ref_set2(1) = [];

error_set = error_set2;
sp_set = sp_set2;
sp_val = sp_val2;
bspline_set = bspline_set2;
error = sum(error_set)/size(error_set,1);
ref_set = ref_set2;
%}

surface_amount = size(sp_set, 2);
ref_set = struct('val', []);
for i=1:surface_amount
    bound = min(sp_set(i).val, [], 1);
    ref = (bspline(sp_set(i).val, bspline_set(i), bound));
    item = struct('val', ref);
    ref_set = [ref_set, item];
end
ref_set(1) = [];

       
%{
figure; 
subplot(1,2,1);
imshow(result);
subplot(1,2,2);
imshow(result2);
%}

end
