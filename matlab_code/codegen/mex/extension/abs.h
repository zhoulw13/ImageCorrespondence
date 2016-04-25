/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
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
#include "extension_types.h"

/* Function Declarations */
extern real_T b_abs(real_T x);
#ifdef __WATCOMC__
#pragma aux b_abs value [8087];
#endif
extern void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y);
#endif
/* End of code generation (abs.h) */
