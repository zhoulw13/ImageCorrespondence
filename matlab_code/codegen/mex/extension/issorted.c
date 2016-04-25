/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "issorted.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo qg_emlrtRSI = { 157, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo yh_emlrtRSI = { 32, "issorted",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo ai_emlrtRSI = { 33, "issorted",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo bi_emlrtRSI = { 34, "issorted",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo ci_emlrtRSI = { 35, "issorted",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo di_emlrtRSI = { 21, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ei_emlrtRSI = { 73, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo fi_emlrtRSI = { 75, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo gi_emlrtRSI = { 104, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo hi_emlrtRSI = { 106, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ii_emlrtRSI = { 112, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ji_emlrtRSI = { 151, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ki_emlrtRSI = { 156, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo x_emlrtRTEI = { 152, 1, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo y_emlrtRTEI = { 32, 5, "issorted",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/issorted.m" };

/* Function Definitions */
boolean_T eml_sort_le(const emxArray_real_T *v, const emxArray_int32_T *col,
                      int32_T irow1, int32_T irow2)
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  int32_T abscolk;
  boolean_T guard3 = FALSE;
  boolean_T guard4 = FALSE;
  boolean_T b2;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;
  p = TRUE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k <= col->size[1] - 1)) {
    if (col->data[k] < 0) {
      abscolk = -col->data[k];
    } else {
      abscolk = col->data[k];
    }

    abscolk = (abscolk - 1) * v->size[0] - 1;
    guard3 = FALSE;
    guard4 = FALSE;
    if (v->data[abscolk + irow1] == v->data[abscolk + irow2]) {
      guard4 = TRUE;
    } else if (muDoubleScalarIsNaN(v->data[abscolk + irow1])) {
      if (muDoubleScalarIsNaN(v->data[abscolk + irow2])) {
        guard4 = TRUE;
      } else {
        guard3 = TRUE;
      }
    } else {
      guard3 = TRUE;
    }

    if (guard4 == TRUE) {
      b2 = TRUE;
    }

    if (guard3 == TRUE) {
      b2 = FALSE;
    }

    if (!b2) {
      if (col->data[k] < 0) {
        guard2 = FALSE;
        if (v->data[abscolk + irow1] >= v->data[abscolk + irow2]) {
          guard2 = TRUE;
        } else if (muDoubleScalarIsNaN(v->data[abscolk + irow1])) {
          guard2 = TRUE;
        } else {
          p = FALSE;
        }

        if (guard2 == TRUE) {
          p = TRUE;
        }
      } else {
        guard1 = FALSE;
        if (v->data[abscolk + irow1] <= v->data[abscolk + irow2]) {
          guard1 = TRUE;
        } else if (muDoubleScalarIsNaN(v->data[abscolk + irow2])) {
          guard1 = TRUE;
        } else {
          p = FALSE;
        }

        if (guard1 == TRUE) {
          p = TRUE;
        }
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return p;
}

boolean_T issorted(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T y;
  emxArray_int32_T *col;
  int32_T bi;
  int32_T yk;
  boolean_T b5;
  int32_T k;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = TRUE;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
  } else {
    st.site = &yh_emlrtRSI;
    b_st.site = &di_emlrtRSI;
    c_st.site = &ei_emlrtRSI;
    d_st.site = &sb_emlrtRSI;
    b_emxInit_int32_T(&b_st, &col, 2, &y_emlrtRTEI, TRUE);
    c_st.site = &fi_emlrtRSI;
    d_st.site = &gi_emlrtRSI;
    d_st.site = &hi_emlrtRSI;
    bi = x->size[1];
    d_st.site = &ii_emlrtRSI;
    e_st.site = &ji_emlrtRSI;
    yk = col->size[0] * col->size[1];
    col->size[0] = 1;
    col->size[1] = bi;
    emxEnsureCapacity(&d_st, (emxArray__common *)col, yk, (int32_T)sizeof
                      (int32_T), &x_emlrtRTEI);
    col->data[0] = 1;
    yk = 1;
    e_st.site = &ki_emlrtRSI;
    if (2 > bi) {
      b5 = FALSE;
    } else {
      b5 = (bi > 2147483646);
    }

    if (b5) {
      f_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 2; k <= bi; k++) {
      e_st.site = &qg_emlrtRSI;
      yk++;
      col->data[k - 1] = yk;
    }

    st.site = &ai_emlrtRSI;
    st.site = &bi_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    k = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (k <= x->size[0] - 1)) {
      st.site = &ci_emlrtRSI;
      st.site = &ci_emlrtRSI;
      if (!eml_sort_le(x, col, k, k + 1)) {
        y = FALSE;
        exitg1 = TRUE;
      } else {
        k++;
      }
    }

    emxFree_int32_T(&col);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (issorted.c) */
