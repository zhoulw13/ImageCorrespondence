/*
 * extension.h
 *
 * Code generation for function 'extension'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

#ifndef __EXTENSION_H__
#define __EXTENSION_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "extension_types.h"

/* Function Declarations */
extern void extension(const emlrtStack *sp, emxArray_struct_T *sp_set, emxArray_b_struct_T *bspline_set, const emxArray_real_T *Sp2, const emxArray_real_T *Src_lab, const emxArray_real_T *Ref_lab, emxArray_real_T *errors, emxArray_real_T *Corr);
#endif
/* End of code generation (extension.h) */
