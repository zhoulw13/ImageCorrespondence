/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "power.h"
#include "extension_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo fe_emlrtRSI = { 42, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo ge_emlrtRSI = { 51, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo he_emlrtRSI = { 58, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRTEInfo m_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
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
  st.site = &fe_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &he_emlrtRSI;
    y->data[k] = muDoubleScalarPower(a->data[k], 3.0);
  }
}

real_T c_power(real_T a)
{
  return a * a;
}

real_T d_power(real_T a)
{
  return muDoubleScalarPower(a, 3.0);
}

void e_power(const real_T a[147], real_T y[147])
{
  int32_T k;
  for (k = 0; k < 147; k++) {
    y[k] = a[k] * a[k];
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
  st.site = &fe_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    b_st.site = &he_emlrtRSI;
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
