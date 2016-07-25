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

if true
    addpath('matlab_code_2');
end

%Src_path        = 's1\bei_src.png'; % src filename
%Ref_path        = 's1\bei_ref.png'; % ref filename 
%Src_path = 'bark.png';
%Ref_path = 'bark_ref.png';
Src_path = 'card.png';
Ref_path = 'card_ref.png';


%% initialize operation
%[Corr, Con, Src, Ref] = nrdc_example(Src_path, Ref_path);
%[Sp, Seg, Sp2] = sp_demo(Src);

labTransformation = makecform('srgb2lab');
Src_lab = applycform(Src,labTransformation);
Ref_lab = applycform(Ref,labTransformation);

%[sp_set, sp_val, bspline_set, ref_set] = segmentation(Sp2, Con, Corr, Ref);
%[sp_set, bspline_set, ref_set, adjacency_graph] = merging(sp_set, sp_val, bspline_set, ref_set, Sp2, Ref_lab);
[errors, sp_set, ref_set, bspline_set, newCorr] = extension(sp_set, bspline_set, Sp2, Src_lab, Ref_lab);

%[sp_set, sp_val, bspline_set, ref_set] = segmentation_mex(Sp2, Confidence, DCF);
%[sp_set, bspline_set, ref_set, adjacency_graph] = merging_mex(sp_set, sp_val, bspline_set, ref_set, Sp2, Ref_lab);
%[errors, sp_set, ref_set, bspline_set, newCorr] = extension_mex(sp_set, bspline_set, Sp2, Src_lab, Ref_lab);


