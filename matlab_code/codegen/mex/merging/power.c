/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "power.h"
#include "merging_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = { 42, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo je_emlrtRSI = { 51, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo ke_emlrtRSI = { 58, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRTEInfo r_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

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
  st.site = &ie_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &ke_emlrtRSI;
    y->data[k] = muDoubleScalarPower(a->data[k], 3.0);
  }
}

void c_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i14;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &ie_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  for (i14 = 0; i14 < 2; i14++) {
    uv1[i14] = (uint32_T)a->size[i14];
  }

  i14 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = 3;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, i14, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  i14 = (int32_T)uv1[0] * 3;
  for (k = 0; k < i14; k++) {
    b_st.site = &ke_emlrtRSI;
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
  st.site = &ie_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &ke_emlrtRSI;
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
