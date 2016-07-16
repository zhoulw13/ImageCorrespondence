/*
 * power.h
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
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
#include "extension_types.h"

/* Function Declarations */
extern void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
extern real_T c_power(real_T a);
#ifdef __WATCOMC__
#pragma aux c_power value [8087];
#endif
extern real_T d_power(real_T a);
#ifdef __WATCOMC__
#pragma aux d_power value [8087];
#endif
extern void e_power(const real_T a[147], real_T y[147]);
extern void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
#endif
/* End of code generation (power.h) */
