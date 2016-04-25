@echo off
set MATLAB=D:\Program Files\MATLAB\R2013b
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2013b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=extension_mex
set MEX_NAME=extension_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for extension > extension_mex.mki
echo COMPILER=%COMPILER%>> extension_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> extension_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> extension_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> extension_mex.mki
echo LINKER=%LINKER%>> extension_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> extension_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> extension_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> extension_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> extension_mex.mki
echo BORLAND=%BORLAND%>> extension_mex.mki
echo OMPFLAGS= >> extension_mex.mki
echo OMPLINKFLAGS= >> extension_mex.mki
echo EMC_COMPILER=msvc100>> extension_mex.mki
echo EMC_CONFIG=optim>> extension_mex.mki
"D:\Program Files\MATLAB\R2013b\bin\win64\gmake" -B -f extension_mex.mk
