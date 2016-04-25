/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "repmat.h"
#include "merging_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo vb_emlrtRSI = { 19, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo wb_emlrtRSI = { 54, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo xb_emlrtRSI = { 58, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo yb_emlrtRSI = { 61, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ac_emlrtRSI = { 63, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo bc_emlrtRSI = { 65, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo cc_emlrtRSI = { 66, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo jc_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo kc_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo g_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo h_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo i_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo j_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 45, 1, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ft_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo gt_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "message", TRUE,
    location);
}

void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T guard3 = FALSE;
  boolean_T p;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 28 };

  const mxArray *m1;
  char_T cv4[28];
  int32_T i;
  static const char_T cv5[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T a;
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 21 };

  char_T cv6[21];
  static const char_T cv7[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  st.site = &jc_emlrtRSI;
  guard3 = FALSE;
  if (varargin_1 != varargin_1) {
    guard3 = TRUE;
  } else if (muDoubleScalarIsInf(varargin_1)) {
    guard3 = TRUE;
  } else {
    p = TRUE;
  }

  if (guard3 == TRUE) {
    p = FALSE;
  }

  guard1 = FALSE;
  if (p) {
    st.site = &jc_emlrtRSI;
    guard2 = FALSE;
    if (-2.147483648E+9 > varargin_1) {
      guard2 = TRUE;
    } else if (2.147483647E+9 < varargin_1) {
      guard2 = TRUE;
    } else {
      p = TRUE;
    }

    if (guard2 == TRUE) {
      p = FALSE;
    }

    if (p) {
      p = TRUE;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    p = FALSE;
  }

  if (p) {
  } else {
    y = NULL;
    m1 = mxCreateCharArray(2, iv2);
    for (i = 0; i < 28; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m1, cv4);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m1) = MIN_int32_T;
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    m1 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m1) = MAX_int32_T;
    emlrtAssign(&c_y, m1);
    st.site = &jc_emlrtRSI;
    b_st.site = &gt_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  st.site = &kc_emlrtRSI;
  if (varargin_1 <= 0.0) {
    a = 0.0;
  } else {
    a = varargin_1;
  }

  st.site = &kc_emlrtRSI;
  if (2.147483647E+9 >= a) {
  } else {
    d_y = NULL;
    m1 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 21; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m1, cv6);
    emlrtAssign(&d_y, m1);
    st.site = &kc_emlrtRSI;
    b_st.site = &ft_emlrtRSI;
    error(&st, message(&b_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
  }
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T n,
            emxArray_real_T *b)
{
  int32_T mv[2];
  int32_T b_a[2];
  int32_T outsize[2];
  int32_T ib;
  boolean_T b0;
  int32_T jtilecol;
  int32_T ia;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, n);
  mv[0] = 1;
  mv[1] = (int32_T)n;
  b_a[0] = a->size[0];
  b_a[1] = 1;
  for (ib = 0; ib < 2; ib++) {
    outsize[ib] = b_a[ib] * mv[ib];
  }

  ib = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = outsize[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, ib, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  if ((outsize[0] == 0) || (outsize[1] == 0)) {
  } else {
    st.site = &wb_emlrtRSI;
    ib = 0;
    st.site = &xb_emlrtRSI;
    if (1 > (int32_T)n) {
      b0 = FALSE;
    } else {
      b0 = ((int32_T)n > 2147483646);
    }

    if (b0) {
      b_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)n; jtilecol++) {
      st.site = &yb_emlrtRSI;
      ia = 0;
      st.site = &ac_emlrtRSI;
      if (1 > a->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (a->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 1; k <= a->size[0]; k++) {
        b->data[ib] = a->data[ia];
        st.site = &bc_emlrtRSI;
        ia++;
        st.site = &cc_emlrtRSI;
        ib++;
      }
    }
  }
}

/* End of code generation (repmat.c) */
