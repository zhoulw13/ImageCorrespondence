if ~exist('nrdc_eaxmple')
    addpath('NRDC');
end

if ~exist('sp_demo')
    addpath('superpixels64');
end

if ~exist('cncut')
    addpath('superpixels64\yu_imncut');
end

if ~exist('pbCGTG')
    addpath('superpixels64\segmentationBerkeley\lib\matlab\');
end

%Src_path        = 's1\bei_src.png'; % src filename
%Ref_path        = 's1\bei_ref.png'; % ref filename 

%% initialize operation
%[Corr, Con, Src, Ref] = nrdc_example(Src_path, Ref_path);
%[Sp, Seg, Sp2] = sp_demo(Src);
Src_lab = rgb2lab(Src);
Ref_lab = rgb2lab(Ref);
Src_lab(:,:,1) = Src_lab(:,:,1)/100;
Src_lab(:,:,2) = (Src_lab(:,:,2)+128)/256;
Src_lab(:,:,3) = (Src_lab(:,:,3)+128)/256;

Ref_lab(:,:,1) = Ref_lab(:,:,1)/100;
Ref_lab(:,:,2) = (Ref_lab(:,:,2)+128)/256;
Ref_lab(:,:,3) = (Ref_lab(:,:,3)+128)/256;

%[sp_set, sp_val, bspline_set, ref_set] = segmentation(Sp2, Con, Corr, Ref);
%[sp_set, bspline_set, ref_set, adjacency_graph] = merging(sp_set, sp_val, bspline_set, ref_set, Sp2, Ref_lab);
%[errors, sp_set, ref_set, bspline_set, newCorr] = extension(sp_set, ref_set, bspline_set, Sp2, Src_lab, Ref_lab);

[sp_set, sp_val, bspline_set, ref_set] = Correspondence('segmentation', Sp2, double(Con), Corr, Ref);
[sp_set, bspline_set, ref_set, adjacency_graph] = Correspondence('merging', sp_set, sp_val, bspline_set, ref_set, Sp2, Ref_lab);
[errors, sp_set, ref_set, bspline_set, newCorr] = Correspondence('extension', sp_set, ref_set, bspline_set, Sp2, Src_lab, Ref_lab);


