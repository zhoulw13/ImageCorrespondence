/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
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
static emlrtRSInfo oy_emlrtRSI = { 17, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo py_emlrtRSI = { 61, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo eb_emlrtMCI = { 18, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo fb_emlrtMCI = { 17, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo gb_emlrtMCI = { 23, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo hb_emlrtMCI = { 20, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo uy_emlrtRSI = { 20, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo hab_emlrtRSI = { 23, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo iab_emlrtRSI = { 18, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
void b_sum(const real_T x[147], real_T y[3])
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

real_T d_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  int32_T i22;
  const mxArray *b_y;
  static const int32_T iv82[2] = { 1, 30 };

  const mxArray *m10;
  char_T cv35[30];
  static const char_T cv36[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv83[2] = { 1, 36 };

  char_T cv37[36];
  static const char_T cv38[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  st.site = &oy_emlrtRSI;
  overflow = FALSE;
  p = FALSE;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (i + 1 <= 1) {
        i22 = x->size[0];
      } else {
        i22 = 1;
      }

      if (i22 != 0) {
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
    m10 = mxCreateCharArray(2, iv82);
    for (i = 0; i < 30; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m10, cv35);
    emlrtAssign(&b_y, m10);
    st.site = &oy_emlrtRSI;
    c_st.site = &iab_emlrtRSI;
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
    m10 = mxCreateCharArray(2, iv83);
    for (i = 0; i < 36; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m10, cv37);
    emlrtAssign(&c_y, m10);
    st.site = &uy_emlrtRSI;
    c_st.site = &hab_emlrtRSI;
    error(&st, b_message(&c_st, c_y, &gb_emlrtMCI), &hb_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &py_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

real_T sum(const boolean_T x[2])
{
  return (real_T)x[0] + (real_T)x[1];
}

/* End of code generation (sum.c) */
