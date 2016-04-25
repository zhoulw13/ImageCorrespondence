if ~exist('nrdc_eaxmple')
    addpath('NRDC')
end

if ~exist('sp_demo')
    addpath('superpixels64')
end

if ~exist('cncut')
    addpath('superpixels64\yu_imncut');
end

if ~exist('pbCGTG')
    addpath('superpixels64\segmentationBerkeley\lib\matlab\');
end

if true
    addpath('matlab_code')
end

Src_path        = 'img1.ppm'; % src filename
Ref_path        = 'img5.ppm'; % ref filename 


%% initialize operation
%nrdc_example
%sp_demo

%[sp_set, sp_val, bspline_set, ref_set] = segmentation_mex(Sp2, Confidence, DCF);
%[sp_set, bspline_set, ref_set] = merging_mex(sp_set, sp_val, bspline_set, ref_set, Sp2, Ref);
[errors, sp_set, bspline_set] = extension_mex(sp_set, bspline_set, Sp2, Src_lab, Ref_lab);

%segmentation
%merging


