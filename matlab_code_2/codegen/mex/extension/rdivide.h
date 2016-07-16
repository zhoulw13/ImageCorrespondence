/*
 * rdivide.h
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

#ifndef __RDIVIDE_H__
#define __RDIVIDE_H__
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
extern void b_rdivide(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *z);
extern void c_rdivide(const real_T x[147], const real_T y[147], real_T z[147]);
extern real_T rdivide(real_T x, real_T y);
#ifdef __WATCOMC__
#pragma aux rdivide value [8087];
#endif
#endif
/* End of code generation (rdivide.h) */
