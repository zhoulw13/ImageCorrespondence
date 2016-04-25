/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo gx_emlrtRSI = { 17, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo hx_emlrtRSI = { 61, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo eb_emlrtMCI = { 18, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo fb_emlrtMCI = { 17, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo gb_emlrtMCI = { 23, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo hb_emlrtMCI = { 20, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo mx_emlrtRSI = { 20, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo ay_emlrtRSI = { 23, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo by_emlrtRSI = { 18, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
real_T b_sum(const real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  int32_T i26;
  const mxArray *b_y;
  static const int32_T iv76[2] = { 1, 30 };

  const mxArray *m11;
  char_T cv37[30];
  static const char_T cv38[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv77[2] = { 1, 36 };

  char_T cv39[36];
  static const char_T cv40[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  st.site = &gx_emlrtRSI;
  overflow = FALSE;
  p = FALSE;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (i + 1 <= 1) {
        i26 = x->size[0];
      } else {
        i26 = 1;
      }

      if (i26 != 0) {
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
    m11 = mxCreateCharArray(2, iv76);
    for (i = 0; i < 30; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m11, cv37);
    emlrtAssign(&b_y, m11);
    st.site = &gx_emlrtRSI;
    c_st.site = &by_emlrtRSI;
    error(&st, b_message(&c_st, b_y, &eb_emlrtMCI), &fb_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m11 = mxCreateCharArray(2, iv77);
    for (i = 0; i < 36; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m11, cv39);
    emlrtAssign(&c_y, m11);
    st.site = &mx_emlrtRSI;
    c_st.site = &ay_emlrtRSI;
    error(&st, b_message(&c_st, c_y, &gb_emlrtMCI), &hb_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &hx_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

void sum(const real_T x[147], real_T y[3])
{
  int32_T ix;
  int32_T iy;
  int32_T i;
  int32_T ixstart;
  real_T s;
  ix = -1;
  iy = -1;
  for (i = 0; i < 3; i++) {
    ixstart = ix + 1;
    ix++;
    s = x[ixstart];
    for (ixstart = 0; ixstart < 48; ixstart++) {
      ix++;
      s += x[ix];
    }

    iy++;
    y[iy] = s;
  }
}

/* End of code generation (sum.c) */
