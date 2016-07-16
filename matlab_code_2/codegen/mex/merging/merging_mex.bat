@echo off
set MATLAB=D:\Program Files\MATLAB\R2013b
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2013b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=merging_mex
set MEX_NAME=merging_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for merging > merging_mex.mki
echo COMPILER=%COMPILER%>> merging_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> merging_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> merging_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> merging_mex.mki
echo LINKER=%LINKER%>> merging_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> merging_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> merging_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> merging_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> merging_mex.mki
echo BORLAND=%BORLAND%>> merging_mex.mki
echo OMPFLAGS= >> merging_mex.mki
echo OMPLINKFLAGS= >> merging_mex.mki
echo EMC_COMPILER=msvc100>> merging_mex.mki
echo EMC_CONFIG=optim>> merging_mex.mki
"D:\Program Files\MATLAB\R2013b\bin\win64\gmake" -B -f merging_mex.mk
