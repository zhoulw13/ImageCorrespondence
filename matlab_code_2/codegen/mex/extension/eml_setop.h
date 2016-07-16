/*
 * eml_setop.h
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

#ifndef __EML_SETOP_H__
#define __EML_SETOP_H__
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
extern void b_do_rows(const emlrtStack *sp, const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, int32_T ib_data[1], int32_T ib_size[1]);
extern void do_rows(const emlrtStack *sp, const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, emxArray_int32_T *ib);
#endif
/* End of code generation (eml_setop.h) */
