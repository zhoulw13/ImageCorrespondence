/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "rdivide.h"
#include "merging_emxutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, 14, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *z)
{
  int32_T i6;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wc_emlrtRSI;
  i6 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)z, i6, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  loop_ub = x->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    z->data[i6] = x->data[i6] / 30.0;
  }
}

/* End of code generation (rdivide.c) */
