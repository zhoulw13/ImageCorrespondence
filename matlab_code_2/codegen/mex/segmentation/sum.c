/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "segmentation_mexutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 17, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo y_emlrtRSI = { 61, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo g_emlrtMCI = { 18, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo h_emlrtMCI = { 17, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo i_emlrtMCI = { 23, 9, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo j_emlrtMCI = { 20, 19, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo rp_emlrtRSI = { 20, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo eq_emlrtRSI = { 23, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo fq_emlrtRSI = { 18, "sum",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  int32_T i2;
  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 30 };

  const mxArray *m2;
  char_T cv6[30];
  static const char_T cv7[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 36 };

  char_T cv8[36];
  static const char_T cv9[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  st.site = &x_emlrtRSI;
  overflow = FALSE;
  p = FALSE;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (i + 1 <= 1) {
        i2 = x->size[0];
      } else {
        i2 = 1;
      }

      if (i2 != 0) {
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
    m2 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 30; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m2, cv6);
    emlrtAssign(&b_y, m2);
    st.site = &x_emlrtRSI;
    c_st.site = &fq_emlrtRSI;
    error(&st, message(&c_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m2 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 36; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m2, cv8);
    emlrtAssign(&c_y, m2);
    st.site = &rp_emlrtRSI;
    c_st.site = &eq_emlrtRSI;
    error(&st, message(&c_st, c_y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &y_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
