/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Sat May 21 13:33:56 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "eml_setop.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_error.h"
#include "issorted.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo rg_emlrtRSI = { 803, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo sg_emlrtRSI = { 789, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo tg_emlrtRSI = { 788, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ug_emlrtRSI = { 786, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo vg_emlrtRSI = { 776, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo wg_emlrtRSI = { 771, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo xg_emlrtRSI = { 762, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo yg_emlrtRSI = { 761, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ah_emlrtRSI = { 759, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo bh_emlrtRSI = { 748, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ch_emlrtRSI = { 733, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo dh_emlrtRSI = { 732, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo eh_emlrtRSI = { 712, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo fh_emlrtRSI = { 706, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo gh_emlrtRSI = { 697, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo hh_emlrtRSI = { 696, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ih_emlrtRSI = { 692, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo jh_emlrtRSI = { 690, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo kh_emlrtRSI = { 686, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo lh_emlrtRSI = { 683, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mh_emlrtRSI = { 672, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo nh_emlrtRSI = { 650, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo oh_emlrtRSI = { 649, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ph_emlrtRSI = { 648, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qh_emlrtRSI = { 619, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo rh_emlrtRSI = { 618, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo sh_emlrtRSI = { 616, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo th_emlrtRSI = { 615, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo uh_emlrtRSI = { 568, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qi_emlrtRSI = { 483, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo si_emlrtRSI = { 522, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ti_emlrtRSI = { 523, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ui_emlrtRSI = { 524, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo o_emlrtMCI = { 806, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo p_emlrtMCI = { 811, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo q_emlrtMCI = { 814, 5, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo v_emlrtMCI = { 548, 5, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo w_emlrtMCI = { 547, 15, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo t_emlrtRTEI = { 584, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo u_emlrtRTEI = { 589, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo v_emlrtRTEI = { 591, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo w_emlrtRTEI = { 537, 22, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qx_emlrtRSI = { 811, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo rx_emlrtRSI = { 806, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo sx_emlrtRSI = { 547, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo tx_emlrtRSI = { 814, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo fy_emlrtRSI = { 548, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

/* Function Declarations */
static uint8_T b_relop_rows(const emxArray_real_T *a, int32_T arow, const
  emxArray_real_T *b, int32_T brow);
static uint8_T relop_rows(const emlrtStack *sp, const emxArray_real_T *a,
  int32_T arow, const emxArray_real_T *b, int32_T brow);
static void skip_to_last_equal_row(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static uint8_T b_relop_rows(const emxArray_real_T *a, int32_T arow, const
  emxArray_real_T *b, int32_T brow)
{
  uint8_T p;
  int32_T k;
  int32_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T b_p;
  boolean_T guard1 = FALSE;
  k = 0;
  do {
    exitg1 = 0;
    if (k + 1 <= 2) {
      absxk = muDoubleScalarAbs(b->data[(brow + b->size[0] * k) - 1] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      guard2 = FALSE;
      guard3 = FALSE;
      if (muDoubleScalarAbs(b->data[(brow + b->size[0] * k) - 1] - a->data[(arow
            + a->size[0] * k) - 1]) < absxk) {
        guard3 = TRUE;
      } else if (muDoubleScalarIsInf(a->data[(arow + a->size[0] * k) - 1])) {
        if (muDoubleScalarIsInf(b->data[(brow + b->size[0] * k) - 1]) &&
            ((a->data[(arow + a->size[0] * k) - 1] > 0.0) == (b->data[(brow +
               b->size[0] * k) - 1] > 0.0))) {
          guard3 = TRUE;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard2 = TRUE;
      }

      if (guard3 == TRUE) {
        b_p = TRUE;
      }

      if (guard2 == TRUE) {
        b_p = FALSE;
      }

      if (b_p) {
        k++;
      } else {
        guard1 = FALSE;
        if (a->data[(arow + a->size[0] * k) - 1] < b->data[(brow + b->size[0] *
             k) - 1]) {
          guard1 = TRUE;
        } else if (muDoubleScalarIsNaN(b->data[(brow + b->size[0] * k) - 1])) {
          guard1 = TRUE;
        } else {
          b_p = FALSE;
        }

        if (guard1 == TRUE) {
          b_p = TRUE;
        }

        if (b_p) {
          p = 1;
        } else {
          p = 2;
        }

        exitg1 = 1;
      }
    } else {
      p = 0;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

static uint8_T relop_rows(const emlrtStack *sp, const emxArray_real_T *a,
  int32_T arow, const emxArray_real_T *b, int32_T brow)
{
  uint8_T p;
  boolean_T overflow;
  int32_T k;
  int32_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T guard1 = FALSE;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &si_emlrtRSI;
  if (1 > a->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (a->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  k = 0;
  do {
    exitg1 = 0;
    if (k + 1 <= a->size[1]) {
      st.site = &ti_emlrtRSI;
      absxk = muDoubleScalarAbs(b->data[(brow + b->size[0] * k) - 1] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      guard2 = FALSE;
      guard3 = FALSE;
      if (muDoubleScalarAbs(b->data[(brow + b->size[0] * k) - 1] - a->data[(arow
            + a->size[0] * k) - 1]) < absxk) {
        guard3 = TRUE;
      } else if (muDoubleScalarIsInf(a->data[(arow + a->size[0] * k) - 1])) {
        if (muDoubleScalarIsInf(b->data[(brow + b->size[0] * k) - 1]) &&
            ((a->data[(arow + a->size[0] * k) - 1] > 0.0) == (b->data[(brow +
               b->size[0] * k) - 1] > 0.0))) {
          guard3 = TRUE;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard2 = TRUE;
      }

      if (guard3 == TRUE) {
        overflow = TRUE;
      }

      if (guard2 == TRUE) {
        overflow = FALSE;
      }

      if (overflow) {
        k++;
      } else {
        st.site = &ui_emlrtRSI;
        guard1 = FALSE;
        if (a->data[(arow + a->size[0] * k) - 1] < b->data[(brow + b->size[0] *
             k) - 1]) {
          guard1 = TRUE;
        } else if (muDoubleScalarIsNaN(b->data[(brow + b->size[0] * k) - 1])) {
          guard1 = TRUE;
        } else {
          overflow = FALSE;
        }

        if (guard1 == TRUE) {
          overflow = TRUE;
        }

        if (overflow) {
          p = 1;
        } else {
          p = 2;
        }

        exitg1 = 1;
      }
    } else {
      p = 0;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

static void skip_to_last_equal_row(int32_T *k, const emxArray_real_T *x)
{
  int32_T j;
  boolean_T exitg1;
  int32_T b_k;
  int32_T exitg2;
  real_T absxk;
  int32_T exponent;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T p;
  boolean_T guard1 = FALSE;
  uint8_T b_p;
  j = *k - 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (*k < x->size[0])) {
    b_k = 0;
    do {
      exitg2 = 0;
      if (b_k + 1 < 3) {
        absxk = muDoubleScalarAbs(x->data[*k + x->size[0] * b_k] / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &exponent);
            absxk = ldexp(1.0, exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        guard2 = FALSE;
        guard3 = FALSE;
        if (muDoubleScalarAbs(x->data[*k + x->size[0] * b_k] - x->data[j +
                              x->size[0] * b_k]) < absxk) {
          guard3 = TRUE;
        } else if (muDoubleScalarIsInf(x->data[j + x->size[0] * b_k])) {
          if (muDoubleScalarIsInf(x->data[*k + x->size[0] * b_k]) && ((x->data[j
                + x->size[0] * b_k] > 0.0) == (x->data[*k + x->size[0] * b_k] >
                0.0))) {
            guard3 = TRUE;
          } else {
            guard2 = TRUE;
          }
        } else {
          guard2 = TRUE;
        }

        if (guard3 == TRUE) {
          p = TRUE;
        }

        if (guard2 == TRUE) {
          p = FALSE;
        }

        if (p) {
          b_k++;
        } else {
          guard1 = FALSE;
          if (x->data[j + x->size[0] * b_k] < x->data[*k + x->size[0] * b_k]) {
            guard1 = TRUE;
          } else if (muDoubleScalarIsNaN(x->data[*k + x->size[0] * b_k])) {
            guard1 = TRUE;
          } else {
            p = FALSE;
          }

          if (guard1 == TRUE) {
            p = TRUE;
          }

          if (p) {
            b_p = 1;
          } else {
            b_p = 2;
          }

          exitg2 = 1;
        }
      } else {
        b_p = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (b_p == 0) {
      (*k)++;
    } else {
      exitg1 = TRUE;
    }
  }
}

void b_do_rows(const emlrtStack *sp, const emxArray_real_T *a, const
               emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
               int32_T ib_data[1], int32_T ib_size[1])
{
  boolean_T b6;
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 36 };

  const mxArray *m4;
  char_T cv12[36];
  int32_T i;
  static const char_T cv13[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'e', 't', 'x', 'o', 'r', '_', 'A', 'a', 'n', 'd',
    'B', 'C', 'o', 'l', 'n', 'u', 'm', 'A', 'g', 'r', 'e', 'e' };

  int32_T iafirst;
  int32_T nc;
  int32_T nia;
  int32_T ibfirst;
  int32_T ialast;
  int32_T iblast;
  boolean_T exitg3;
  boolean_T exitg2;
  uint8_T r;
  boolean_T exitg1;
  const mxArray *b_y;
  const mxArray *c_y;
  emxArray_int32_T *b_ia;
  emxArray_real_T *b_c;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (void)ib_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b6 = (2 == b->size[1]);
  if (b6) {
  } else {
    y = NULL;
    m4 = mxCreateCharArray(2, iv19);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m4, cv12);
    emlrtAssign(&y, m4);
    st.site = &sx_emlrtRSI;
    b_st.site = &fy_emlrtRSI;
    error(&st, b_message(&b_st, y, &v_emlrtMCI), &w_emlrtMCI);
  }

  i = a->size[0];
  iafirst = c->size[0] * c->size[1];
  c->size[0] = i;
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, iafirst, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  nc = 0;
  iafirst = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, iafirst, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  nia = 0;
  ib_size[0] = 0;
  st.site = &th_emlrtRSI;
  if (!issorted(&st, a)) {
    st.site = &sh_emlrtRSI;
    eml_error(&st);
  }

  st.site = &rh_emlrtRSI;
  if (!issorted(&st, b)) {
    st.site = &qh_emlrtRSI;
    eml_error(&st);
  }

  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (ibfirst <= b->size[0])) {
    st.site = &ph_emlrtRSI;
    i = ialast;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (ialast < a->size[0])) {
      c_st.site = &qi_emlrtRSI;
      if (relop_rows(&c_st, a, i, a, ialast + 1) == 0) {
        ialast++;
      } else {
        exitg3 = TRUE;
      }
    }

    st.site = &oh_emlrtRSI;
    i = iblast;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (iblast < b->size[0])) {
      c_st.site = &qi_emlrtRSI;
      if (relop_rows(&c_st, b, i, b, iblast + 1) == 0) {
        iblast++;
      } else {
        exitg2 = TRUE;
      }
    }

    st.site = &nh_emlrtRSI;
    r = relop_rows(&st, a, iafirst, b, ibfirst);
    if (r == 0) {
      st.site = &jh_emlrtRSI;
      ialast++;
      iafirst = ialast;
      st.site = &ih_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    } else if (r == 1) {
      st.site = &hh_emlrtRSI;
      nc++;
      st.site = &gh_emlrtRSI;
      nia++;
      st.site = &fh_emlrtRSI;
      for (i = 0; i < 2; i++) {
        c->data[(nc + c->size[0] * i) - 1] = a->data[(iafirst + a->size[0] * i)
          - 1];
      }

      ia->data[nia - 1] = iafirst;
      st.site = &eh_emlrtRSI;
      ialast++;
      iafirst = ialast;
    } else {
      st.site = &bh_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    st.site = &ah_emlrtRSI;
    i = ialast;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ialast < a->size[0])) {
      c_st.site = &qi_emlrtRSI;
      if (relop_rows(&c_st, a, i, a, ialast + 1) == 0) {
        ialast++;
      } else {
        exitg1 = TRUE;
      }
    }

    st.site = &yg_emlrtRSI;
    nc++;
    st.site = &xg_emlrtRSI;
    nia++;
    st.site = &wg_emlrtRSI;
    for (i = 0; i < 2; i++) {
      c->data[(nc + c->size[0] * i) - 1] = a->data[(iafirst + a->size[0] * i) -
        1];
    }

    ia->data[nia - 1] = iafirst;
    st.site = &vg_emlrtRSI;
    ialast++;
  }

  if (nc <= a->size[0]) {
  } else {
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &rx_emlrtRSI;
    error(&st, b_y, &o_emlrtMCI);
  }

  if (nia <= a->size[0]) {
  } else {
    c_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m4);
    st.site = &qx_emlrtRSI;
    error(&st, c_y, &p_emlrtMCI);
  }

  if (1 > nia) {
    nia = 0;
  }

  emxInit_int32_T(sp, &b_ia, 1, &w_emlrtRTEI, TRUE);
  iafirst = b_ia->size[0];
  b_ia->size[0] = nia;
  emxEnsureCapacity(sp, (emxArray__common *)b_ia, iafirst, (int32_T)sizeof
                    (int32_T), &w_emlrtRTEI);
  for (iafirst = 0; iafirst < nia; iafirst++) {
    b_ia->data[iafirst] = ia->data[iafirst];
  }

  iafirst = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, iafirst, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  nia = b_ia->size[0];
  for (iafirst = 0; iafirst < nia; iafirst++) {
    ia->data[iafirst] = b_ia->data[iafirst];
  }

  emxFree_int32_T(&b_ia);
  if (1 > nc) {
    nia = 0;
  } else {
    nia = nc;
  }

  emxInit_real_T(sp, &b_c, 2, &w_emlrtRTEI, TRUE);
  iafirst = b_c->size[0] * b_c->size[1];
  b_c->size[0] = nia;
  b_c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_c, iafirst, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (iafirst = 0; iafirst < 2; iafirst++) {
    for (i = 0; i < nia; i++) {
      b_c->data[i + b_c->size[0] * iafirst] = c->data[i + c->size[0] * iafirst];
    }
  }

  iafirst = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, iafirst, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (iafirst = 0; iafirst < 2; iafirst++) {
    nia = b_c->size[0];
    for (i = 0; i < nia; i++) {
      c->data[i + c->size[0] * iafirst] = b_c->data[i + b_c->size[0] * iafirst];
    }
  }

  emxFree_real_T(&b_c);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void do_rows(const emlrtStack *sp, const emxArray_real_T *a, const
             emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
             emxArray_int32_T *ib)
{
  int32_T ncmax;
  int32_T j;
  int32_T nc;
  int32_T nia;
  int32_T nib;
  boolean_T y;
  boolean_T exitg3;
  boolean_T p;
  int32_T iafirst;
  boolean_T exitg4;
  int32_T coloffset;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T b4;
  boolean_T guard1 = FALSE;
  int32_T ialast;
  int32_T iblast;
  boolean_T exitg2;
  uint8_T r;
  boolean_T exitg1;
  const mxArray *b_y;
  const mxArray *m3;
  const mxArray *c_y;
  emxArray_int32_T *b_ia;
  const mxArray *d_y;
  emxArray_int32_T *b_ib;
  emxArray_real_T *b_c;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &uh_emlrtRSI;
  ncmax = a->size[0] + b->size[0];
  j = c->size[0] * c->size[1];
  c->size[0] = ncmax;
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, j, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  nc = -1;
  j = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, j, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  nia = 0;
  j = ib->size[0];
  ib->size[0] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ib, j, (int32_T)sizeof(int32_T),
                    &v_emlrtRTEI);
  nib = 0;
  st.site = &th_emlrtRSI;
  if (!issorted(&st, a)) {
    st.site = &sh_emlrtRSI;
    eml_error(&st);
  }

  st.site = &rh_emlrtRSI;
  y = TRUE;
  if (b->size[0] == 0) {
  } else {
    j = 1;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (j <= b->size[0] - 1)) {
      p = TRUE;
      iafirst = 0;
      exitg4 = FALSE;
      while ((exitg4 == FALSE) && (iafirst < 2)) {
        coloffset = iafirst * b->size[0];
        guard2 = FALSE;
        guard3 = FALSE;
        if (b->data[(coloffset + j) - 1] == b->data[coloffset + j]) {
          guard3 = TRUE;
        } else if (muDoubleScalarIsNaN(b->data[(coloffset + j) - 1])) {
          if (muDoubleScalarIsNaN(b->data[coloffset + j])) {
            guard3 = TRUE;
          } else {
            guard2 = TRUE;
          }
        } else {
          guard2 = TRUE;
        }

        if (guard3 == TRUE) {
          b4 = TRUE;
        }

        if (guard2 == TRUE) {
          b4 = FALSE;
        }

        if (!b4) {
          guard1 = FALSE;
          if (b->data[(coloffset + j) - 1] <= b->data[coloffset + j]) {
            guard1 = TRUE;
          } else if (muDoubleScalarIsNaN(b->data[coloffset + j])) {
            guard1 = TRUE;
          } else {
            p = FALSE;
          }

          if (guard1 == TRUE) {
            p = TRUE;
          }

          exitg4 = TRUE;
        } else {
          iafirst++;
        }
      }

      if (!p) {
        y = FALSE;
        exitg3 = TRUE;
      } else {
        j++;
      }
    }
  }

  if (!y) {
    st.site = &qh_emlrtRSI;
    eml_error(&st);
  }

  iafirst = 1;
  coloffset = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (coloffset <= b->size[0])) {
    st.site = &ph_emlrtRSI;
    j = ialast;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (ialast < a->size[0])) {
      b_st.site = &qi_emlrtRSI;
      if (relop_rows(&b_st, a, j, a, ialast + 1) == 0) {
        ialast++;
      } else {
        exitg2 = TRUE;
      }
    }

    st.site = &oh_emlrtRSI;
    skip_to_last_equal_row(&iblast, b);
    st.site = &nh_emlrtRSI;
    r = b_relop_rows(a, iafirst, b, coloffset);
    if (r == 0) {
      st.site = &mh_emlrtRSI;
      nc++;
      st.site = &lh_emlrtRSI;
      for (j = 0; j < 2; j++) {
        c->data[nc + c->size[0] * j] = a->data[(iafirst + a->size[0] * j) - 1];
      }

      st.site = &kh_emlrtRSI;
      nia++;
      ia->data[nia - 1] = iafirst;
      st.site = &jh_emlrtRSI;
      ialast++;
      iafirst = ialast;
      st.site = &ih_emlrtRSI;
      iblast++;
      coloffset = iblast;
    } else if (r == 1) {
      st.site = &hh_emlrtRSI;
      nc++;
      st.site = &gh_emlrtRSI;
      nia++;
      st.site = &fh_emlrtRSI;
      for (j = 0; j < 2; j++) {
        c->data[nc + c->size[0] * j] = a->data[(iafirst + a->size[0] * j) - 1];
      }

      ia->data[nia - 1] = iafirst;
      st.site = &eh_emlrtRSI;
      ialast++;
      iafirst = ialast;
    } else {
      st.site = &dh_emlrtRSI;
      nc++;
      st.site = &ch_emlrtRSI;
      nib++;
      for (j = 0; j < 2; j++) {
        c->data[nc + c->size[0] * j] = b->data[(coloffset + b->size[0] * j) - 1];
      }

      ib->data[nib - 1] = coloffset;
      st.site = &bh_emlrtRSI;
      iblast++;
      coloffset = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    st.site = &ah_emlrtRSI;
    j = ialast;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ialast < a->size[0])) {
      b_st.site = &qi_emlrtRSI;
      if (relop_rows(&b_st, a, j, a, ialast + 1) == 0) {
        ialast++;
      } else {
        exitg1 = TRUE;
      }
    }

    st.site = &yg_emlrtRSI;
    nc++;
    st.site = &xg_emlrtRSI;
    nia++;
    st.site = &wg_emlrtRSI;
    for (j = 0; j < 2; j++) {
      c->data[nc + c->size[0] * j] = a->data[(iafirst + a->size[0] * j) - 1];
    }

    ia->data[nia - 1] = iafirst;
    st.site = &vg_emlrtRSI;
    ialast++;
  }

  while (iblast <= b->size[0]) {
    coloffset = iblast;
    st.site = &ug_emlrtRSI;
    skip_to_last_equal_row(&iblast, b);
    st.site = &tg_emlrtRSI;
    nc++;
    st.site = &sg_emlrtRSI;
    nib++;
    for (j = 0; j < 2; j++) {
      c->data[nc + c->size[0] * j] = b->data[(coloffset + b->size[0] * j) - 1];
    }

    ib->data[nib - 1] = coloffset;
    st.site = &rg_emlrtRSI;
    iblast++;
  }

  if (nc + 1 <= ncmax) {
  } else {
    b_y = NULL;
    m3 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m3);
    st.site = &rx_emlrtRSI;
    error(&st, b_y, &o_emlrtMCI);
  }

  if (nia <= a->size[0]) {
  } else {
    c_y = NULL;
    m3 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m3);
    st.site = &qx_emlrtRSI;
    error(&st, c_y, &p_emlrtMCI);
  }

  if (1 > nia) {
    coloffset = 0;
  } else {
    coloffset = nia;
  }

  emxInit_int32_T(sp, &b_ia, 1, &w_emlrtRTEI, TRUE);
  j = b_ia->size[0];
  b_ia->size[0] = coloffset;
  emxEnsureCapacity(sp, (emxArray__common *)b_ia, j, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  for (j = 0; j < coloffset; j++) {
    b_ia->data[j] = ia->data[j];
  }

  j = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, j, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  coloffset = b_ia->size[0];
  for (j = 0; j < coloffset; j++) {
    ia->data[j] = b_ia->data[j];
  }

  emxFree_int32_T(&b_ia);
  if (nib <= b->size[0]) {
  } else {
    d_y = NULL;
    m3 = mxCreateString("Assertion failed.");
    emlrtAssign(&d_y, m3);
    st.site = &tx_emlrtRSI;
    error(&st, d_y, &q_emlrtMCI);
  }

  if (1 > nib) {
    coloffset = 0;
  } else {
    coloffset = nib;
  }

  emxInit_int32_T(sp, &b_ib, 1, &w_emlrtRTEI, TRUE);
  j = b_ib->size[0];
  b_ib->size[0] = coloffset;
  emxEnsureCapacity(sp, (emxArray__common *)b_ib, j, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  for (j = 0; j < coloffset; j++) {
    b_ib->data[j] = ib->data[j];
  }

  j = ib->size[0];
  ib->size[0] = b_ib->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ib, j, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  coloffset = b_ib->size[0];
  for (j = 0; j < coloffset; j++) {
    ib->data[j] = b_ib->data[j];
  }

  emxFree_int32_T(&b_ib);
  if (1 > nc + 1) {
    coloffset = -1;
  } else {
    coloffset = nc;
  }

  emxInit_real_T(sp, &b_c, 2, &w_emlrtRTEI, TRUE);
  j = b_c->size[0] * b_c->size[1];
  b_c->size[0] = coloffset + 1;
  b_c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_c, j, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (j = 0; j < 2; j++) {
    for (iafirst = 0; iafirst <= coloffset; iafirst++) {
      b_c->data[iafirst + b_c->size[0] * j] = c->data[iafirst + c->size[0] * j];
    }
  }

  j = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, j, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (j = 0; j < 2; j++) {
    coloffset = b_c->size[0];
    for (iafirst = 0; iafirst < coloffset; iafirst++) {
      c->data[iafirst + c->size[0] * j] = b_c->data[iafirst + b_c->size[0] * j];
    }
  }

  emxFree_real_T(&b_c);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_setop.c) */
