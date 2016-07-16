@echo off
set MATLAB=D:\Program Files\MATLAB\R2013b
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2013b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=segmentation_mex
set MEX_NAME=segmentation_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for segmentation > segmentation_mex.mki
echo COMPILER=%COMPILER%>> segmentation_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> segmentation_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> segmentation_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> segmentation_mex.mki
echo LINKER=%LINKER%>> segmentation_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> segmentation_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> segmentation_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> segmentation_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> segmentation_mex.mki
echo BORLAND=%BORLAND%>> segmentation_mex.mki
echo OMPFLAGS= >> segmentation_mex.mki
echo OMPLINKFLAGS= >> segmentation_mex.mki
echo EMC_COMPILER=msvc100>> segmentation_mex.mki
echo EMC_CONFIG=optim>> segmentation_mex.mki
"D:\Program Files\MATLAB\R2013b\bin\win64\gmake" -B -f segmentation_mex.mk
