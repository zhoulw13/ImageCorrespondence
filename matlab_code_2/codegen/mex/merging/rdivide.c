/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "rdivide.h"
#include "merging_emxutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 1, 14, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *z)
{
  int32_T i5;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wc_emlrtRSI;
  i5 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)z, i5, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = x->size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    z->data[i5] = x->data[i5] / 30.0;
  }
}

/* End of code generation (rdivide.c) */
