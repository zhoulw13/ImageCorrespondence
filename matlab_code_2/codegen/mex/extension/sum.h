/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

#ifndef __SUM_H__
#define __SUM_H__
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
extern void b_sum(const real_T x[147], real_T y[3]);
extern real_T c_sum(const real_T x[3]);
#ifdef __WATCOMC__
#pragma aux c_sum value [8087];
#endif
extern real_T d_sum(const emlrtStack *sp, const emxArray_real_T *x);
#ifdef __WATCOMC__
#pragma aux d_sum value [8087];
#endif
extern real_T sum(const boolean_T x[2]);
#ifdef __WATCOMC__
#pragma aux sum value [8087];
#endif
#endif
/* End of code generation (sum.h) */
