/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "rdivide.h"
#include "extension_emxutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 1, 14, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void b_rdivide(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T
               *z)
{
  int32_T i4;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lb_emlrtRSI;
  i4 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)z, i4, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  loop_ub = x->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    z->data[i4] = x->data[i4] / 30.0;
  }
}

void c_rdivide(const real_T x[147], const real_T y[147], real_T z[147])
{
  int32_T i19;
  for (i19 = 0; i19 < 147; i19++) {
    z[i19] = x[i19] / y[i19];
  }
}

real_T rdivide(real_T x, real_T y)
{
  return x / y;
}

/* End of code generation (rdivide.c) */
