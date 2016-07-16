/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

#ifndef __REPMAT_H__
#define __REPMAT_H__
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
extern void b_repmat(const emlrtStack *sp, real_T m, emxArray_real_T *b);
extern void c_repmat(const emlrtStack *sp, const real_T a[2], real_T m, emxArray_real_T *b);
extern void d_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T m, emxArray_real_T *b);
extern void e_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T n, emxArray_real_T *b);
extern void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1);
extern void f_repmat(const real_T a_data[3], real_T b_data[147], int32_T b_size[2]);
extern void g_repmat(const real_T a[3], real_T b[147]);
extern void repmat(real_T b[49]);
#endif
/* End of code generation (repmat.h) */