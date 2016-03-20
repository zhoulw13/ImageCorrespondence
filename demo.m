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

%% initialize operation
nrdc_example
sp_demo

%segmentation
%merging


