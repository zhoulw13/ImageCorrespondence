function [Src_lab, Ref_lab] = labspace(Src, Ref)

%labTransformation = makecform('srgb2lab');
%Src_lab = applycform(Src,labTransformation);
%Ref_lab = applycform(Ref,labTransformation);
Src_lab = rgb2lab(Src);
Ref_lab = rgb2lab(Ref);

%{
minimum = min(min(Src_lab(:,:,:)));
maximum = max(max(Src_lab(:,:,:)));
Src_lab(:,:,1) = (Src_lab(:,:,1)-minimum(1))/(maximum(1)-minimum(1));
Src_lab(:,:,2) = (Src_lab(:,:,2)-minimum(2))/(maximum(2)-minimum(2));
Src_lab(:,:,3) = (Src_lab(:,:,3)-minimum(3))/(maximum(3)-minimum(3));

minimum = min(min(Ref_lab(:,:,:)));
maximum = max(max(Ref_lab(:,:,:)));
Ref_lab(:,:,1) = (Ref_lab(:,:,1)-minimum(1))/(maximum(1)-minimum(1));
Ref_lab(:,:,2) = (Ref_lab(:,:,2)-minimum(2))/(maximum(2)-minimum(2));
Ref_lab(:,:,3) = (Ref_lab(:,:,3)-minimum(3))/(maximum(3)-minimum(3));
%}

Src_lab(:,:,1) = Src_lab(:,:,1)/100;
Src_lab(:,:,2) = (Src_lab(:,:,2)+128)/256;
Src_lab(:,:,3) = (Src_lab(:,:,3)+128)/256;

Ref_lab(:,:,1) = Ref_lab(:,:,1)/100;
Ref_lab(:,:,2) = (Ref_lab(:,:,2)+128)/256;
Ref_lab(:,:,3) = (Ref_lab(:,:,3)+128)/256;

end