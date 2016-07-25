/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "eml_setop.h"
#include "issorted.h"
#include "extension_emxutil.h"
#include "eml_error.h"
#include "extension_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo jg_emlrtRSI = { 803, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo kg_emlrtRSI = { 789, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo lg_emlrtRSI = { 788, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mg_emlrtRSI = { 786, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ng_emlrtRSI = { 776, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo og_emlrtRSI = { 771, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo pg_emlrtRSI = { 762, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qg_emlrtRSI = { 761, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo rg_emlrtRSI = { 759, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo sg_emlrtRSI = { 748, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo tg_emlrtRSI = { 733, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ug_emlrtRSI = { 732, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo vg_emlrtRSI = { 712, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo wg_emlrtRSI = { 706, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo xg_emlrtRSI = { 697, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo yg_emlrtRSI = { 696, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ah_emlrtRSI = { 692, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo bh_emlrtRSI = { 690, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ch_emlrtRSI = { 686, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo dh_emlrtRSI = { 683, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo eh_emlrtRSI = { 672, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo fh_emlrtRSI = { 650, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo gh_emlrtRSI = { 649, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo hh_emlrtRSI = { 648, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ih_emlrtRSI = { 619, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo jh_emlrtRSI = { 618, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo kh_emlrtRSI = { 616, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo lh_emlrtRSI = { 615, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mh_emlrtRSI = { 568, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo o_emlrtMCI = { 806, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo p_emlrtMCI = { 811, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo q_emlrtMCI = { 814, 5, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo t_emlrtRTEI = { 584, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo u_emlrtRTEI = { 589, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo v_emlrtRTEI = { 591, 1, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRTEInfo w_emlrtRTEI = { 537, 22, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ey_emlrtRSI = { 811, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo fy_emlrtRSI = { 806, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo gy_emlrtRSI = { 814, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

/* Function Declarations */
static void b_skip_to_last_equal_row(int32_T *k, const emxArray_real_T *x);
static uint8_T relop_rows(const emxArray_real_T *a, int32_T arow, const
  emxArray_real_T *b, int32_T brow);
static void skip_to_last_equal_row(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static void b_skip_to_last_equal_row(int32_T *k, const emxArray_real_T *x)
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

static uint8_T relop_rows(const emxArray_real_T *a, int32_T arow, const
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
      if (b_k + 1 <= 2) {
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
  int32_T nia;
  int32_T ibfirst;
  int32_T nc;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  uint8_T r;
  int32_T k;
  const mxArray *y;
  const mxArray *m5;
  const mxArray *b_y;
  emxArray_int32_T *b_ia;
  emxArray_real_T *b_c;
  emlrtStack st;
  (void)ib_data;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  nia = a->size[0];
  ibfirst = c->size[0] * c->size[1];
  c->size[0] = nia;
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, ibfirst, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  nc = 0;
  ibfirst = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, ibfirst, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  nia = 0;
  ib_size[0] = 0;
  st.site = &lh_emlrtRSI;
  if (!issorted(a)) {
    st.site = &kh_emlrtRSI;
    eml_error(&st);
  }

  st.site = &jh_emlrtRSI;
  if (!b_issorted(b)) {
    st.site = &ih_emlrtRSI;
    eml_error(&st);
  }

  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (ibfirst <= b->size[0])) {
    st.site = &hh_emlrtRSI;
    skip_to_last_equal_row(&ialast, a);
    st.site = &gh_emlrtRSI;
    b_skip_to_last_equal_row(&iblast, b);
    st.site = &fh_emlrtRSI;
    r = relop_rows(a, iafirst, b, ibfirst);
    if (r == 0) {
      st.site = &bh_emlrtRSI;
      ialast++;
      iafirst = ialast;
      st.site = &ah_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    } else if (r == 1) {
      st.site = &yg_emlrtRSI;
      nc++;
      st.site = &xg_emlrtRSI;
      nia++;
      st.site = &wg_emlrtRSI;
      for (k = 0; k < 2; k++) {
        c->data[(nc + c->size[0] * k) - 1] = a->data[(iafirst + a->size[0] * k)
          - 1];
      }

      ia->data[nia - 1] = iafirst;
      st.site = &vg_emlrtRSI;
      ialast++;
      iafirst = ialast;
    } else {
      st.site = &sg_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    st.site = &rg_emlrtRSI;
    skip_to_last_equal_row(&ialast, a);
    st.site = &qg_emlrtRSI;
    nc++;
    st.site = &pg_emlrtRSI;
    nia++;
    st.site = &og_emlrtRSI;
    for (k = 0; k < 2; k++) {
      c->data[(nc + c->size[0] * k) - 1] = a->data[(iafirst + a->size[0] * k) -
        1];
    }

    ia->data[nia - 1] = iafirst;
    st.site = &ng_emlrtRSI;
    ialast++;
  }

  if (nc <= a->size[0]) {
  } else {
    y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m5);
    st.site = &fy_emlrtRSI;
    error(&st, y, &o_emlrtMCI);
  }

  if (nia <= a->size[0]) {
  } else {
    b_y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &ey_emlrtRSI;
    error(&st, b_y, &p_emlrtMCI);
  }

  if (1 > nia) {
    iafirst = 0;
  } else {
    iafirst = nia;
  }

  emxInit_int32_T(sp, &b_ia, 1, &w_emlrtRTEI, TRUE);
  ibfirst = b_ia->size[0];
  b_ia->size[0] = iafirst;
  emxEnsureCapacity(sp, (emxArray__common *)b_ia, ibfirst, (int32_T)sizeof
                    (int32_T), &w_emlrtRTEI);
  for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
    b_ia->data[ibfirst] = ia->data[ibfirst];
  }

  ibfirst = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, ibfirst, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  iafirst = b_ia->size[0];
  for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
    ia->data[ibfirst] = b_ia->data[ibfirst];
  }

  emxFree_int32_T(&b_ia);
  if (1 > nc) {
    iafirst = 0;
  } else {
    iafirst = nc;
  }

  emxInit_real_T(sp, &b_c, 2, &w_emlrtRTEI, TRUE);
  ibfirst = b_c->size[0] * b_c->size[1];
  b_c->size[0] = iafirst;
  b_c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_c, ibfirst, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (ibfirst = 0; ibfirst < 2; ibfirst++) {
    for (nia = 0; nia < iafirst; nia++) {
      b_c->data[nia + b_c->size[0] * ibfirst] = c->data[nia + c->size[0] *
        ibfirst];
    }
  }

  ibfirst = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, ibfirst, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (ibfirst = 0; ibfirst < 2; ibfirst++) {
    iafirst = b_c->size[0];
    for (nia = 0; nia < iafirst; nia++) {
      c->data[nia + c->size[0] * ibfirst] = b_c->data[nia + b_c->size[0] *
        ibfirst];
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
  int32_T ialast;
  int32_T nc;
  int32_T nia;
  int32_T nib;
  int32_T iafirst;
  int32_T ibfirst;
  int32_T iblast;
  uint8_T r;
  int32_T k;
  const mxArray *y;
  const mxArray *m4;
  const mxArray *b_y;
  emxArray_int32_T *b_ia;
  const mxArray *c_y;
  emxArray_int32_T *b_ib;
  emxArray_real_T *b_c;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &mh_emlrtRSI;
  ncmax = a->size[0] + b->size[0];
  ialast = c->size[0] * c->size[1];
  c->size[0] = ncmax;
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, ialast, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  nc = -1;
  ialast = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, ialast, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  nia = -1;
  ialast = ib->size[0];
  ib->size[0] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ib, ialast, (int32_T)sizeof(int32_T),
                    &v_emlrtRTEI);
  nib = 0;
  st.site = &lh_emlrtRSI;
  if (!issorted(a)) {
    st.site = &kh_emlrtRSI;
    eml_error(&st);
  }

  st.site = &jh_emlrtRSI;
  if (!b_issorted(b)) {
    st.site = &ih_emlrtRSI;
    eml_error(&st);
  }

  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (ibfirst <= b->size[0])) {
    st.site = &hh_emlrtRSI;
    skip_to_last_equal_row(&ialast, a);
    st.site = &gh_emlrtRSI;
    b_skip_to_last_equal_row(&iblast, b);
    st.site = &fh_emlrtRSI;
    r = relop_rows(a, iafirst, b, ibfirst);
    if (r == 0) {
      st.site = &eh_emlrtRSI;
      nc++;
      st.site = &dh_emlrtRSI;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
      }

      st.site = &ch_emlrtRSI;
      nia++;
      ia->data[nia] = iafirst;
      st.site = &bh_emlrtRSI;
      ialast++;
      iafirst = ialast;
      st.site = &ah_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    } else if (r == 1) {
      st.site = &yg_emlrtRSI;
      nc++;
      st.site = &xg_emlrtRSI;
      nia++;
      st.site = &wg_emlrtRSI;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
      }

      ia->data[nia] = iafirst;
      st.site = &vg_emlrtRSI;
      ialast++;
      iafirst = ialast;
    } else {
      st.site = &ug_emlrtRSI;
      nc++;
      st.site = &tg_emlrtRSI;
      nib++;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = b->data[(ibfirst + b->size[0] * k) - 1];
      }

      ib->data[nib - 1] = ibfirst;
      st.site = &sg_emlrtRSI;
      iblast++;
      ibfirst = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    st.site = &rg_emlrtRSI;
    skip_to_last_equal_row(&ialast, a);
    st.site = &qg_emlrtRSI;
    nc++;
    st.site = &pg_emlrtRSI;
    nia++;
    st.site = &og_emlrtRSI;
    for (k = 0; k < 2; k++) {
      c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
    }

    ia->data[nia] = iafirst;
    st.site = &ng_emlrtRSI;
    ialast++;
  }

  while (iblast <= b->size[0]) {
    ibfirst = iblast;
    st.site = &mg_emlrtRSI;
    b_skip_to_last_equal_row(&iblast, b);
    st.site = &lg_emlrtRSI;
    nc++;
    st.site = &kg_emlrtRSI;
    nib++;
    for (k = 0; k < 2; k++) {
      c->data[nc + c->size[0] * k] = b->data[(ibfirst + b->size[0] * k) - 1];
    }

    ib->data[nib - 1] = ibfirst;
    st.site = &jg_emlrtRSI;
    iblast++;
  }

  if (nc + 1 <= ncmax) {
  } else {
    y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m4);
    st.site = &fy_emlrtRSI;
    error(&st, y, &o_emlrtMCI);
  }

  if (nia + 1 <= a->size[0]) {
  } else {
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &ey_emlrtRSI;
    error(&st, b_y, &p_emlrtMCI);
  }

  if (1 > nia + 1) {
    ibfirst = -1;
  } else {
    ibfirst = nia;
  }

  emxInit_int32_T(sp, &b_ia, 1, &w_emlrtRTEI, TRUE);
  ialast = b_ia->size[0];
  b_ia->size[0] = ibfirst + 1;
  emxEnsureCapacity(sp, (emxArray__common *)b_ia, ialast, (int32_T)sizeof
                    (int32_T), &w_emlrtRTEI);
  for (ialast = 0; ialast <= ibfirst; ialast++) {
    b_ia->data[ialast] = ia->data[ialast];
  }

  ialast = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, ialast, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  ibfirst = b_ia->size[0];
  for (ialast = 0; ialast < ibfirst; ialast++) {
    ia->data[ialast] = b_ia->data[ialast];
  }

  emxFree_int32_T(&b_ia);
  if (nib <= b->size[0]) {
  } else {
    c_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m4);
    st.site = &gy_emlrtRSI;
    error(&st, c_y, &q_emlrtMCI);
  }

  if (1 > nib) {
    ibfirst = 0;
  } else {
    ibfirst = nib;
  }

  emxInit_int32_T(sp, &b_ib, 1, &w_emlrtRTEI, TRUE);
  ialast = b_ib->size[0];
  b_ib->size[0] = ibfirst;
  emxEnsureCapacity(sp, (emxArray__common *)b_ib, ialast, (int32_T)sizeof
                    (int32_T), &w_emlrtRTEI);
  for (ialast = 0; ialast < ibfirst; ialast++) {
    b_ib->data[ialast] = ib->data[ialast];
  }

  ialast = ib->size[0];
  ib->size[0] = b_ib->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ib, ialast, (int32_T)sizeof(int32_T),
                    &w_emlrtRTEI);
  ibfirst = b_ib->size[0];
  for (ialast = 0; ialast < ibfirst; ialast++) {
    ib->data[ialast] = b_ib->data[ialast];
  }

  emxFree_int32_T(&b_ib);
  if (1 > nc + 1) {
    ibfirst = -1;
  } else {
    ibfirst = nc;
  }

  emxInit_real_T(sp, &b_c, 2, &w_emlrtRTEI, TRUE);
  ialast = b_c->size[0] * b_c->size[1];
  b_c->size[0] = ibfirst + 1;
  b_c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)b_c, ialast, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (ialast = 0; ialast < 2; ialast++) {
    for (iafirst = 0; iafirst <= ibfirst; iafirst++) {
      b_c->data[iafirst + b_c->size[0] * ialast] = c->data[iafirst + c->size[0] *
        ialast];
    }
  }

  ialast = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c, ialast, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  for (ialast = 0; ialast < 2; ialast++) {
    ibfirst = b_c->size[0];
    for (iafirst = 0; iafirst < ibfirst; iafirst++) {
      c->data[iafirst + c->size[0] * ialast] = b_c->data[iafirst + b_c->size[0] *
        ialast];
    }
  }

  emxFree_real_T(&b_c);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_setop.c) */
