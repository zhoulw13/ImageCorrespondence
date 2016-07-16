/*
 * bspline_inv.h
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

#ifndef __BSPLINE_INV_H__
#define __BSPLINE_INV_H__
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
extern void b_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C, int32_T ldc);
extern void bspline_inv(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *ref, emxArray_real_T *control_p, real_T *b_error);
extern void eml_xgemm(int32_T m, const emxArray_real_T *A, int32_T lda, emxArray_real_T *C, int32_T ldc);
#endif
/* End of code generation (bspline_inv.h) */
