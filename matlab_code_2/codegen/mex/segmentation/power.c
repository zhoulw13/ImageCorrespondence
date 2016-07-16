/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "power.h"
#include "segmentation_emxutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo hd_emlrtRSI = { 42, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo id_emlrtRSI = { 51, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo jd_emlrtRSI = { 58, "power",
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
  st.site = &hd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &jd_emlrtRSI;
    y->data[k] = muDoubleScalarPower(a->data[k], 3.0);
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
  st.site = &hd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &jd_emlrtRSI;
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
