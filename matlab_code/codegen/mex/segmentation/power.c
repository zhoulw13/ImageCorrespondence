/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "power.h"
#include "segmentation_emxutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo pd_emlrtRSI = { 42, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo qd_emlrtRSI = { 51, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo rd_emlrtRSI = { 58, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

/* Function Definitions */
void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &pd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &rd_emlrtRSI;
    y->data[k] = muDoubleScalarPower(a->data[k], 3.0);
  }
}

void c_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i19;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &pd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  for (i19 = 0; i19 < 2; i19++) {
    uv0[i19] = (uint32_T)a->size[i19];
  }

  i19 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = 3;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, i19, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  i19 = (int32_T)uv0[0] * 3;
  for (k = 0; k < i19; k++) {
    b_st.site = &rd_emlrtRSI;
    y->data[k] = a->data[k] * a->data[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &pd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &rd_emlrtRSI;
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
