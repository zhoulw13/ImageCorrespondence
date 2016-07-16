/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "abs.h"
#include "extension_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ab_emlrtRTEI = { 16, 5, "abs",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/abs.m" };

/* Function Definitions */
real_T b_abs(real_T x)
{
  return muDoubleScalarAbs(x);
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i9;
  int32_T k;
  for (i9 = 0; i9 < 2; i9++) {
    uv0[i9] = (uint32_T)x->size[i9];
  }

  i9 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)y, i9, (int32_T)sizeof(real_T),
                    &ab_emlrtRTEI);
  i9 = x->size[0] << 1;
  for (k = 0; k < i9; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
