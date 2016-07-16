/*
 * bspline_inv.h
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
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
#include "segmentation_types.h"

/* Function Declarations */
extern void bspline_inv(const emlrtStack *sp, const emxArray_real_T *src, const emxArray_real_T *ref, emxArray_real_T *control_p, real_T *b_error);
#endif
/* End of code generation (bspline_inv.h) */
