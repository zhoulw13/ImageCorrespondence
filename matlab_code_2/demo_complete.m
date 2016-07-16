%{
c = Con >= 0.8;
[h,w] = size(c);
[h1,w1,k] = size(Ref);
newCorr =extend(h,w,Corr,c,Sp2,Sp,Seg,max(max(Sp2)),Src,Ref,h1,w1);
shit = newCorr;
newCorr(:,:,1) = newCorr(:,:,1).*c;
newCorr(:,:,2) = newCorr(:,:,2).*c;
%}

c = Con >= 0.8;
[h,w] = size(c);
[h1,w1,k] = size(Ref);  

%show result
I = zeros(h,w,3);
I(:,:,1) = newCorr(:,:,1) / w1;
I(:,:,2) = newCorr(:,:,2) / h1;
%imwrite(I, 'Corr.png');
figure;
imshow(I);
ref_mask = zeros(h,w);
a = Src / 2 + 0.5;
for i=1:h
    for j=1:w
        x = round(newCorr(i,j,2));
        y = round(newCorr(i,j,1));
        if (x > 0 && y > 0 && x < h1 && y < w1)
            a(i,j,:)=Ref(x,y,:);
            ref_mask(x,y) = 1;
        end
    end
end

b = Ref / 2 + 0.5;
for i=2:h-1
    for j=2:w-1
        if ref_mask(i,j) == 1
            b(i-1:i+1,j-1:j+1,:) = Ref(i-1:i+1,j-1:j+1,:);
        end
    end
end

%imwrite(a, 'Src_match.png');
%imwrite(b,'Ref_match.png');
figure;
imshow(a);
figure;
imshow(b);