/*
 * power.h
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Sun Apr 24 19:21:27 2016
 *
 */

#ifndef __POWER_H__
#define __POWER_H__
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
extern void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
extern void c_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
extern void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
#endif
/* End of code generation (power.h) */
