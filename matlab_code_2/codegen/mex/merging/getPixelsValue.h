/*
 * getPixelsValue.h
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
 *
 */

#ifndef __GETPIXELSVALUE_H__
#define __GETPIXELSVALUE_H__
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
extern void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, emxArray_real_T *b_index, emxArray_real_T *val);
#endif
/* End of code generation (getPixelsValue.h) */
