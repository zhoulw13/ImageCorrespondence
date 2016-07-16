/*
 * segmentation.h
 *
 * Code generation for function 'segmentation'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

#ifndef __SEGMENTATION_H__
#define __SEGMENTATION_H__
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
extern void segmentation(const emlrtStack *sp, const emxArray_real_T *Sp2, const emxArray_real_T *Confidence, const emxArray_real_T *DCF, emxArray_struct_T *sp_set, emxArray_real_T *sp_val, emxArray_b_struct_T *bspline_set, emxArray_struct_T *ref_set);
#endif
/* End of code generation (segmentation.h) */
