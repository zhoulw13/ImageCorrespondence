/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
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
#include "merging_types.h"

/* Function Declarations */
extern void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1);
extern void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T n, emxArray_real_T *b);
#endif
/* End of code generation (repmat.h) */
