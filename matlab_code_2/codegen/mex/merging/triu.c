/*
 * triu.c
 *
 * Code generation for function 'triu'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "triu.h"
#include "eml_int_forloop_overflow_check.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo od_emlrtRSI = { 38, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo pd_emlrtRSI = { 39, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo qd_emlrtRSI = { 41, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo rd_emlrtRSI = { 43, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo sd_emlrtRSI = { 47, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo td_emlrtRSI = { 48, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

static emlrtRSInfo ud_emlrtRSI = { 52, "triu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/triu.m" };

/* Function Definitions */
void triu(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T m;
  int32_T istart;
  int32_T jstart;
  int32_T ncolsm1;
  boolean_T b9;
  int32_T j;
  boolean_T b_istart;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0) || (0 >= x->size[0])) {
  } else {
    istart = 1;
    jstart = muIntScalarMin_sint32(1, x->size[1]);
    st.site = &od_emlrtRSI;
    st.site = &pd_emlrtRSI;
    ncolsm1 = x->size[1] - jstart;
    if (x->size[0] - 1 < ncolsm1) {
      st.site = &qd_emlrtRSI;
      ncolsm1 = (jstart + x->size[0]) - 1;
    } else {
      st.site = &rd_emlrtRSI;
      ncolsm1 += jstart;
    }

    st.site = &sd_emlrtRSI;
    if (1 > ncolsm1) {
      b9 = FALSE;
    } else {
      b9 = (ncolsm1 > 2147483646);
    }

    if (b9) {
      b_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= ncolsm1; j++) {
      st.site = &td_emlrtRSI;
      if (istart > m) {
        b_istart = FALSE;
      } else {
        b_istart = (m > 2147483646);
      }

      if (b_istart) {
        b_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (i = istart; i <= m; i++) {
        x->data[(i + x->size[0] * (j - 1)) - 1] = 0.0;
      }

      if (j >= jstart) {
        st.site = &ud_emlrtRSI;
        istart++;
      }
    }
  }
}

/* End of code generation (triu.c) */
