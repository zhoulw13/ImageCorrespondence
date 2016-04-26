/*
 * bspline_single.h
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Mon Apr 25 21:25:51 2016
 *
 */

#ifndef __BSPLINE_SINGLE_H__
#define __BSPLINE_SINGLE_H__
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
extern void b_bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const emxArray_real_T *bound, real_T ref[2]);
extern void bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const emxArray_real_T *bound, real_T ref[2]);
extern void c_bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const emxArray_real_T *bound, real_T ref[2]);
#endif
/* End of code generation (bspline_single.h) */