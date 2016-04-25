/*
 * sqrt.h
 *
 * Code generation for function 'sqrt'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

#ifndef __SQRT_H__
#define __SQRT_H__
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
extern void b_sqrt(const emlrtStack *sp, real_T x[3]);
extern void c_sqrt(const emlrtStack *sp, real_T *x);
#endif
/* End of code generation (sqrt.h) */
