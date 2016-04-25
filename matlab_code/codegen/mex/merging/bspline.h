/*
 * bspline.h
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Sun Apr 24 19:39:55 2016
 *
 */

#ifndef __BSPLINE_H__
#define __BSPLINE_H__
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
#include "merging_types.h"

/* Function Declarations */
extern void bspline(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const real_T bound[2], emxArray_real_T *ref);
extern void d_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C, int32_T ldc);
extern void eml_xgemm(int32_T m, const emxArray_real_T *A, int32_T lda, emxArray_real_T *C, int32_T ldc);
#endif
/* End of code generation (bspline.h) */
