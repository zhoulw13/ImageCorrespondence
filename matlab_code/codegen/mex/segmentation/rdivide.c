/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "rdivide.h"
#include "segmentation_emxutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, 14, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i3;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tb_emlrtRSI;
  i3 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)z, i3, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  loop_ub = x->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    z->data[i3] = x->data[i3] / y;
  }
}

/* End of code generation (rdivide.c) */
