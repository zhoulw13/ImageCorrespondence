/*
 * issorted.h
 *
 * Code generation for function 'issorted'
 *
 * C source code generated on: Sat May 21 13:33:56 2016
 *
 */

#ifndef __ISSORTED_H__
#define __ISSORTED_H__
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
extern boolean_T eml_sort_le(const emxArray_real_T *v, const emxArray_int32_T *col, int32_T irow1, int32_T irow2);
extern boolean_T issorted(const emlrtStack *sp, const emxArray_real_T *x);
#endif
/* End of code generation (issorted.h) */
