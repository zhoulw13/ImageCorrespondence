/*
 * gradient.c
 *
 * Code generation for function 'gradient'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "gradient.h"
#include "merging_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 18, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo hc_emlrtRSI = { 24, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo ic_emlrtRSI = { 48, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo jc_emlrtRSI = { 67, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo kc_emlrtRSI = { 68, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo lc_emlrtRSI = { 70, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo mc_emlrtRSI = { 72, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo nc_emlrtRSI = { 74, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo oc_emlrtRSI = { 75, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo pc_emlrtRSI = { 79, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo qc_emlrtRSI = { 81, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo rc_emlrtRSI = { 83, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo sc_emlrtRSI = { 84, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo tc_emlrtRSI = { 88, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo uc_emlrtRSI = { 82, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo bd_emlrtRSI = { 66, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRSInfo cd_emlrtRSI = { 73, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 22, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRTEInfo c_emlrtRTEI = { 57, 1, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

static emlrtRTEInfo d_emlrtRTEI = { 54, 14, "gradient",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/gradient.m" };

/* Function Declarations */
static void gradf(const emlrtStack *sp, const emxArray_real_T *f,
                  emxArray_real_T *y);

/* Function Definitions */
static void gradf(const emlrtStack *sp, const emxArray_real_T *f,
                  emxArray_real_T *y)
{
  int32_T i;
  int32_T i2;
  boolean_T overflow;
  int32_T i1;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    i2 = y->size[0] * y->size[1];
    y->size[i] = f->size[i];
    emxEnsureCapacity(sp, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
  }

  if (f->size[0] < 2) {
    i = y->size[0] * y->size[1];
    y->size[0] = f->size[0];
    y->size[1] = f->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    i2 = f->size[0] * f->size[1];
    for (i = 0; i < i2; i++) {
      y->data[i] = 0.0;
    }
  } else {
    st.site = &jc_emlrtRSI;
    st.site = &jc_emlrtRSI;
    st.site = &kc_emlrtRSI;
    i2 = -1;
    st.site = &lc_emlrtRSI;
    if (1 > f->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (f->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 1; i <= f->size[1]; i++) {
      i1 = i2 + 1;
      st.site = &mc_emlrtRSI;
      i2 += f->size[0];
      st.site = &nc_emlrtRSI;
      st.site = &oc_emlrtRSI;
      st.site = &pc_emlrtRSI;
      y->data[i1] = f->data[i1 + 1] - f->data[i1];
      st.site = &qc_emlrtRSI;
      st.site = &qc_emlrtRSI;
      for (k = 1; k <= f->size[0] - 2; k++) {
        st.site = &uc_emlrtRSI;
        st.site = &rc_emlrtRSI;
        st.site = &rc_emlrtRSI;
        st.site = &sc_emlrtRSI;
        st.site = &sc_emlrtRSI;
        st.site = &uc_emlrtRSI;
        st.site = &rc_emlrtRSI;
        st.site = &sc_emlrtRSI;
        st.site = &rc_emlrtRSI;
        y->data[i1 + k] = (f->data[(i1 + k) + 1] - f->data[(i1 + k) - 1]) / 2.0;
      }

      st.site = &tc_emlrtRSI;
      y->data[i2] = f->data[i2] - f->data[i2 - 1];
    }
  }
}

void gradient(const emlrtStack *sp, const emxArray_real_T *f, emxArray_real_T
              *varargout_1, emxArray_real_T *varargout_2)
{
  boolean_T overflow;
  int32_T i2;
  int32_T i1;
  int32_T j;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &gc_emlrtRSI;
  overflow = FALSE;
  if (f->size[1] == 1) {
    overflow = TRUE;
  }

  if (overflow) {
    st.site = &hc_emlrtRSI;
    gradf(&st, f, varargout_1);
    i2 = varargout_2->size[0] * varargout_2->size[1];
    varargout_2->size[0] = f->size[0];
    varargout_2->size[1] = f->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)varargout_2, i2, (int32_T)sizeof
                      (real_T), &b_emlrtRTEI);
    i1 = f->size[0] * f->size[1];
    for (i2 = 0; i2 < i1; i2++) {
      varargout_2->data[i2] = 0.0;
    }
  } else {
    st.site = &ic_emlrtRSI;
    for (i2 = 0; i2 < 2; i2++) {
      i1 = varargout_1->size[0] * varargout_1->size[1];
      varargout_1->size[i2] = f->size[i2];
      emxEnsureCapacity(&st, (emxArray__common *)varargout_1, i1, (int32_T)
                        sizeof(real_T), &c_emlrtRTEI);
    }

    if (f->size[1] < 2) {
      i2 = varargout_1->size[0] * varargout_1->size[1];
      varargout_1->size[0] = f->size[0];
      varargout_1->size[1] = f->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)varargout_1, i2, (int32_T)
                        sizeof(real_T), &b_emlrtRTEI);
      i1 = f->size[0] * f->size[1];
      for (i2 = 0; i2 < i1; i2++) {
        varargout_1->data[i2] = 0.0;
      }
    } else {
      b_st.site = &bd_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      i1 = -1;
      b_st.site = &mc_emlrtRSI;
      i2 = (f->size[1] - 1) * f->size[0] - 1;
      b_st.site = &cd_emlrtRSI;
      if (1 > f->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (f->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (j = 1; j <= f->size[0]; j++) {
        b_st.site = &nc_emlrtRSI;
        i1++;
        b_st.site = &oc_emlrtRSI;
        i2++;
        b_st.site = &pc_emlrtRSI;
        varargout_1->data[i1] = f->data[i1 + f->size[0]] - f->data[i1];
        b_st.site = &qc_emlrtRSI;
        b_st.site = &qc_emlrtRSI;
        for (k = 1; k <= f->size[1] - 2; k++) {
          b_st.site = &uc_emlrtRSI;
          b_st.site = &rc_emlrtRSI;
          b_st.site = &rc_emlrtRSI;
          b_st.site = &sc_emlrtRSI;
          b_st.site = &sc_emlrtRSI;
          b_st.site = &uc_emlrtRSI;
          b_st.site = &rc_emlrtRSI;
          b_st.site = &sc_emlrtRSI;
          b_st.site = &rc_emlrtRSI;
          varargout_1->data[i1 + k * f->size[0]] = (f->data[i1 + (k + 1) *
            f->size[0]] - f->data[i1 + (k - 1) * f->size[0]]) / 2.0;
        }

        b_st.site = &tc_emlrtRSI;
        varargout_1->data[i2] = f->data[i2] - f->data[i2 - f->size[0]];
      }
    }

    st.site = &ic_emlrtRSI;
    gradf(&st, f, varargout_2);
  }
}

/* End of code generation (gradient.c) */
