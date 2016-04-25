/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

#ifndef __ABS_H__
#define __ABS_H__
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
extern void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y);
extern real_T c_abs(real_T x);
#ifdef __WATCOMC__
#pragma aux c_abs value [8087];
#endif
#endif
/* End of code generation (abs.h) */
