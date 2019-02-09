@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=mySnake_mex
set MEX_NAME=mySnake_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for mySnake > mySnake_mex.mki
echo COMPILER=%COMPILER%>> mySnake_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> mySnake_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> mySnake_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> mySnake_mex.mki
echo LINKER=%LINKER%>> mySnake_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> mySnake_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> mySnake_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> mySnake_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> mySnake_mex.mki
echo OMPFLAGS= >> mySnake_mex.mki
echo OMPLINKFLAGS= >> mySnake_mex.mki
echo EMC_COMPILER=msvc150>> mySnake_mex.mki
echo EMC_CONFIG=optim>> mySnake_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f mySnake_mex.mk
