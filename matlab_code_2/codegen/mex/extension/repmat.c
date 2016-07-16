/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "repmat.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 65, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo nb_emlrtRSI = { 66, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo hf_emlrtRSI = { 11, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo if_emlrtRSI = { 58, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo jf_emlrtRSI = { 61, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo kf_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo lf_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo cj_emlrtRSI = { 54, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo dj_emlrtRSI = { 60, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo vk_emlrtRSI = { 19, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo wk_emlrtRSI = { 63, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo k_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo l_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo m_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo n_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 45, 1, "repmat",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo mab_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo nab_emlrtRSI = { 51, "eml_assert_valid_size_arg",
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
  const mxArray *m16;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 3, pArrays, "message", TRUE,
    location);
}

void b_repmat(const emlrtStack *sp, real_T m, emxArray_real_T *b)
{
  int32_T mv[2];
  int32_T outsize[2];
  int32_T ib;
  int32_T jcol;
  boolean_T b0;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, m);
  mv[0] = (int32_T)m;
  mv[1] = 1;
  for (ib = 0; ib < 2; ib++) {
    outsize[ib] = (1 + ib) * mv[ib];
  }

  ib = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b, ib, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  if (outsize[0] == 0) {
  } else {
    ib = 0;
    st.site = &if_emlrtRSI;
    for (jcol = 0; jcol < 2; jcol++) {
      st.site = &jf_emlrtRSI;
      if (1 > (int32_T)m) {
        b0 = FALSE;
      } else {
        b0 = ((int32_T)m > 2147483646);
      }

      if (b0) {
        b_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)m; itilerow++) {
        b->data[ib] = 0.0;
        st.site = &nb_emlrtRSI;
        ib++;
      }
    }
  }
}

void c_repmat(const emlrtStack *sp, const real_T a[2], real_T m, emxArray_real_T
              *b)
{
  int32_T mv[2];
  int32_T outsize[2];
  int32_T ia;
  int32_T ib;
  int32_T iacol;
  int32_T jcol;
  boolean_T b1;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, m);
  mv[0] = (int32_T)m;
  mv[1] = 1;
  for (ia = 0; ia < 2; ia++) {
    outsize[ia] = (1 + ia) * mv[ia];
  }

  ia = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b, ia, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  if (outsize[0] == 0) {
  } else {
    ia = 1;
    ib = 0;
    st.site = &if_emlrtRSI;
    iacol = 1;
    for (jcol = 0; jcol < 2; jcol++) {
      st.site = &jf_emlrtRSI;
      if (1 > (int32_T)m) {
        b1 = FALSE;
      } else {
        b1 = ((int32_T)m > 2147483646);
      }

      if (b1) {
        b_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)m; itilerow++) {
        b->data[ib] = a[iacol - 1];
        st.site = &mb_emlrtRSI;
        ia = iacol + 1;
        st.site = &nb_emlrtRSI;
        ib++;
      }

      iacol = ia;
    }
  }
}

void d_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T m,
              emxArray_real_T *b)
{
  int32_T mv[2];
  int32_T outsize[2];
  int32_T ia;
  int32_T ib;
  int32_T iacol;
  boolean_T overflow;
  int32_T jcol;
  boolean_T b5;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, m);
  mv[0] = (int32_T)m;
  mv[1] = 1;
  for (ia = 0; ia < 2; ia++) {
    outsize[ia] = a->size[ia] * mv[ia];
  }

  ia = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = outsize[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, ia, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  if ((outsize[0] == 0) || (outsize[1] == 0)) {
  } else {
    st.site = &cj_emlrtRSI;
    ia = 0;
    ib = 0;
    st.site = &if_emlrtRSI;
    iacol = 0;
    st.site = &dj_emlrtRSI;
    if (1 > a->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (a->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jcol = 1; jcol <= a->size[1]; jcol++) {
      st.site = &jf_emlrtRSI;
      if (1 > (int32_T)m) {
        b5 = FALSE;
      } else {
        b5 = ((int32_T)m > 2147483646);
      }

      if (b5) {
        b_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)m; itilerow++) {
        b->data[ib] = a->data[iacol];
        st.site = &mb_emlrtRSI;
        ia = iacol + 1;
        st.site = &nb_emlrtRSI;
        ib++;
      }

      iacol = ia;
    }
  }
}

void e_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T n,
              emxArray_real_T *b)
{
  int32_T mv[2];
  int32_T b_a[2];
  int32_T outsize[2];
  int32_T ib;
  boolean_T b6;
  int32_T jtilecol;
  int32_T ia;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vk_emlrtRSI;
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
                    &o_emlrtRTEI);
  if ((outsize[0] == 0) || (outsize[1] == 0)) {
  } else {
    st.site = &cj_emlrtRSI;
    ib = 0;
    st.site = &if_emlrtRSI;
    if (1 > (int32_T)n) {
      b6 = FALSE;
    } else {
      b6 = ((int32_T)n > 2147483646);
    }

    if (b6) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)n; jtilecol++) {
      st.site = &jf_emlrtRSI;
      ia = 0;
      st.site = &wk_emlrtRSI;
      if (1 > a->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (a->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 1; k <= a->size[0]; k++) {
        b->data[ib] = a->data[ia];
        st.site = &mb_emlrtRSI;
        ia++;
        st.site = &nb_emlrtRSI;
        ib++;
      }
    }
  }
}

void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T guard3 = FALSE;
  boolean_T p;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 28 };

  const mxArray *m3;
  char_T cv12[28];
  int32_T i;
  static const char_T cv13[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T a;
  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 21 };

  char_T cv14[21];
  static const char_T cv15[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  st.site = &kf_emlrtRSI;
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
    st.site = &kf_emlrtRSI;
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
    m3 = mxCreateCharArray(2, iv32);
    for (i = 0; i < 28; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m3, cv12);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MIN_int32_T;
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MAX_int32_T;
    emlrtAssign(&c_y, m3);
    st.site = &kf_emlrtRSI;
    b_st.site = &nab_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  st.site = &lf_emlrtRSI;
  if (varargin_1 <= 0.0) {
    a = 0.0;
  } else {
    a = varargin_1;
  }

  st.site = &lf_emlrtRSI;
  if (2.147483647E+9 >= a) {
  } else {
    d_y = NULL;
    m3 = mxCreateCharArray(2, iv33);
    for (i = 0; i < 21; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m3, cv14);
    emlrtAssign(&d_y, m3);
    st.site = &lf_emlrtRSI;
    b_st.site = &mab_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &m_emlrtMCI), &n_emlrtMCI);
  }
}

void f_repmat(const real_T a_data[3], real_T b_data[147], int32_T b_size[2])
{
  int32_T ib;
  static const int8_T iv42[2] = { 3, 49 };

  int32_T jtilecol;
  int32_T ia;
  int32_T k;
  for (ib = 0; ib < 2; ib++) {
    b_size[ib] = iv42[ib];
  }

  ib = 0;
  for (jtilecol = 0; jtilecol < 49; jtilecol++) {
    ia = 0;
    for (k = 0; k < 3; k++) {
      b_data[ib] = a_data[ia];
      ia++;
      ib++;
    }
  }
}

void g_repmat(const real_T a[3], real_T b[147])
{
  int32_T ia;
  int32_T ib;
  int32_T iacol;
  int32_T jcol;
  int32_T itilerow;
  ia = 1;
  ib = 0;
  iacol = 1;
  for (jcol = 0; jcol < 3; jcol++) {
    for (itilerow = 0; itilerow < 49; itilerow++) {
      b[ib] = a[iacol - 1];
      ia = iacol + 1;
      ib++;
    }

    iacol = ia;
  }
}

void repmat(real_T b[49])
{
  int32_T ib;
  int32_T jtilecol;
  int32_T iacol;
  int32_T jcol;
  ib = 0;
  for (jtilecol = 0; jtilecol < 7; jtilecol++) {
    iacol = 0;
    for (jcol = 0; jcol < 7; jcol++) {
      b[ib] = -3.0 + (real_T)iacol;
      ib++;
      iacol++;
    }
  }
}

/* End of code generation (repmat.c) */
