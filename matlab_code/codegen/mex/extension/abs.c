/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "abs.h"
#include "extension_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo bb_emlrtRTEI = { 16, 5, "abs",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/abs.m" };

/* Function Definitions */
real_T b_abs(real_T x)
{
  return muDoubleScalarAbs(x);
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i5;
  int32_T k;
  for (i5 = 0; i5 < 2; i5++) {
    uv0[i5] = (uint32_T)x->size[i5];
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)y, i5, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i5 = x->size[0] << 1;
  for (k = 0; k < i5; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
