/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "abs.h"
#include "merging_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = { 16, 5, "abs",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i0;
  int32_T k;
  for (i0 = 0; i0 < 2; i0++) {
    uv0[i0] = (uint32_T)x->size[i0];
  }

  i0 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  i0 = x->size[0] * x->size[1];
  for (k = 0; k < i0; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

real_T c_abs(real_T x)
{
  return muDoubleScalarAbs(x);
}

/* End of code generation (abs.c) */
