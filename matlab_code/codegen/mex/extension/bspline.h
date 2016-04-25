/*
 * bspline.h
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
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
#include "extension_types.h"

/* Function Declarations */
extern void bspline(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const emxArray_real_T *bound, emxArray_real_T *ref);
#endif
/* End of code generation (bspline.h) */
