/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo oc_emlrtRSI = { 17, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo pc_emlrtRSI = { 61, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo hr_emlrtRSI = { 73, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo ir_emlrtRSI = { 76, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo jr_emlrtRSI = { 77, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo kr_emlrtRSI = { 80, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo k_emlrtMCI = { 18, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo l_emlrtMCI = { 17, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo m_emlrtMCI = { 23, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo n_emlrtMCI = { 20, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo rs_emlrtRSI = { 20, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo dt_emlrtRSI = { 23, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo et_emlrtRSI = { 18, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_real_T *x, real_T y[3])
{
  int32_T ixstart;
  int32_T ix;
  int32_T iy;
  int32_T i;
  real_T s;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[0] == 0) {
    for (ixstart = 0; ixstart < 3; ixstart++) {
      y[ixstart] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (i = 0; i < 3; i++) {
      st.site = &hr_emlrtRSI;
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      st.site = &ir_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
        st.site = &jr_emlrtRSI;
        ix++;
        s += x->data[ix];
      }

      st.site = &kr_emlrtRSI;
      iy++;
      y[iy] = s;
    }
  }
}

real_T c_sum(const real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  int32_T i1;
  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 30 };

  const mxArray *m2;
  char_T cv8[30];
  static const char_T cv9[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 36 };

  char_T cv10[36];
  static const char_T cv11[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = sp;
  c_st.tls = sp->tls;
  st.site = &oc_emlrtRSI;
  overflow = FALSE;
  p = FALSE;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (i + 1 <= 1) {
        i1 = x->size[0];
      } else {
        i1 = 1;
      }

      if (i1 != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = TRUE;
  }

  if (!overflow) {
  } else {
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 30; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m2, cv8);
    emlrtAssign(&b_y, m2);
    st.site = &oc_emlrtRSI;
    c_st.site = &et_emlrtRSI;
    error(&st, message(&c_st, b_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m2 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 36; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m2, cv10);
    emlrtAssign(&c_y, m2);
    st.site = &rs_emlrtRSI;
    c_st.site = &dt_emlrtRSI;
    error(&st, message(&c_st, c_y, &m_emlrtMCI), &n_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &pc_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */