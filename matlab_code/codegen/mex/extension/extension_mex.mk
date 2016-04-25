START_DIR = F:\Git\correspondence\matlab_code

MATLAB_ROOT = D:\Program Files\MATLAB\R2013b
MAKEFILE = extension_mex.mk

include extension_mex.mki


SRC_FILES =  \
	extension_mexutil.c \
	extension_data.c \
	extension_initialize.c \
	extension_terminate.c \
	extension.c \
	floor.c \
	abs.c \
	rdivide.c \
	repmat.c \
	eml_int_forloop_overflow_check.c \
	bspline.c \
	power.c \
	sortrows.c \
	eml_setop.c \
	issorted.c \
	eml_error.c \
	bspline_single.c \
	sum.c \
	cos.c \
	sin.c \
	getPixelsValue.c \
	mean.c \
	std.c \
	sqrt.c \
	bspline_inv.c \
	pinv.c \
	extension_api.c \
	extension_emxutil.c \
	extension_mex.c \
	_coder_extension_info.c

MEX_FILE_NAME_WO_EXT = extension_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2013 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

ifneq (,$(findstring $(EMC_COMPILER),msvc80 msvc90 msvc100 msvc100free msvc110 msvcsdk))
  TARGETMT = $(TARGET).manifest
  MEX = $(TARGETMT)
  STRICTFP = /fp:strict
else
  MEX = $(TARGET)
  STRICTFP = /Op
endif

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "$(START_DIR)"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\extension"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\extension\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS) -DMX_COMPAT_32
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =  $(CFLAGS)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\extension/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\extension/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

