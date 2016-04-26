/*
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 * C source code generated on: Mon Apr 25 21:25:51 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "sortrows.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "issorted.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo jc_emlrtRSI = { 37, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo kc_emlrtRSI = { 139, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo lc_emlrtRSI = { 141, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo mc_emlrtRSI = { 148, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo nc_emlrtRSI = { 150, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo oc_emlrtRSI = { 154, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo pc_emlrtRSI = { 159, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo qc_emlrtRSI = { 142, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo rc_emlrtRSI = { 161, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo sc_emlrtRSI = { 163, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo tc_emlrtRSI = { 166, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo uc_emlrtRSI = { 168, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo vc_emlrtRSI = { 173, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo wc_emlrtRSI = { 176, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo xc_emlrtRSI = { 178, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo yc_emlrtRSI = { 182, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ad_emlrtRSI = { 184, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo bd_emlrtRSI = { 185, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo cd_emlrtRSI = { 186, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo dd_emlrtRSI = { 189, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo vf_emlrtRSI = { 23, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo wf_emlrtRSI = { 26, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo xf_emlrtRSI = { 27, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo yf_emlrtRSI = { 28, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo ag_emlrtRSI = { 42, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo bg_emlrtRSI = { 134, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo cg_emlrtRSI = { 138, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo lg_emlrtRSI = { 62, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo mg_emlrtRSI = { 63, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo ng_emlrtRSI = { 66, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo q_emlrtRTEI = { 31, 5, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo r_emlrtRTEI = { 1, 20, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo s_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 22, 5, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 61, 1, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo xc_emlrtRTEI = { 1, 31, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo yc_emlrtRTEI = { 26, 5, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

/* Function Declarations */
static void b_eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  int32_T col[2], emxArray_int32_T *idx);
static boolean_T b_eml_sort_le(const emxArray_real_T *v, const int32_T col[2],
  int32_T irow1, int32_T irow2);
static void eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  emxArray_int32_T *col, emxArray_int32_T *idx);

/* Function Definitions */
static void b_eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  int32_T col[2], emxArray_int32_T *idx)
{
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx0;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  k = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &q_emlrtRTEI);
  st.site = &jc_emlrtRSI;
  if (x->size[0] == 0) {
    st.site = &ag_emlrtRSI;
  } else {
    st.site = &bg_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    st.site = &cg_emlrtRSI;
    st.site = &cg_emlrtRSI;
    if (1 > x->size[0] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] - 1 > 2147483645);
    }

    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0] - 1; k += 2) {
      st.site = &kc_emlrtRSI;
      st.site = &kc_emlrtRSI;
      if (b_eml_sort_le(x, col, k, k + 1)) {
      } else {
        st.site = &lc_emlrtRSI;
        idx->data[k - 1] = k + 1;
        st.site = &qc_emlrtRSI;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(sp, &idx0, 1, &s_emlrtRTEI, TRUE);
    k = idx0->size[0];
    idx0->size[0] = x->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    i = x->size[0];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[0]) {
      st.site = &mc_emlrtRSI;
      i2 = i << 1;
      j = 1;
      st.site = &nc_emlrtRSI;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        st.site = &oc_emlrtRSI;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        st.site = &pc_emlrtRSI;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          st.site = &rc_emlrtRSI;
          if (b_eml_sort_le(x, col, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            st.site = &sc_emlrtRSI;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                st.site = &tc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[q - 1];
                st.site = &uc_emlrtRSI;
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            st.site = &vc_emlrtRSI;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                st.site = &wc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[p - 1];
                st.site = &xc_emlrtRSI;
                p++;
              }
            }
          }

          st.site = &yc_emlrtRSI;
          k++;
        }

        st.site = &ad_emlrtRSI;
        st.site = &bd_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          st.site = &cd_emlrtRSI;
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
        st.site = &dd_emlrtRSI;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static boolean_T b_eml_sort_le(const emxArray_real_T *v, const int32_T col[2],
  int32_T irow1, int32_T irow2)
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  int32_T b_col;
  int32_T coloffset;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T b3;
  boolean_T guard1 = FALSE;
  p = TRUE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 2)) {
    if (col[k] < 0) {
      b_col = -col[k];
    } else {
      b_col = col[k];
    }

    coloffset = (b_col - 1) * v->size[0] - 1;
    guard2 = FALSE;
    guard3 = FALSE;
    if (v->data[coloffset + irow1] == v->data[coloffset + irow2]) {
      guard3 = TRUE;
    } else if (muDoubleScalarIsNaN(v->data[coloffset + irow1])) {
      if (muDoubleScalarIsNaN(v->data[coloffset + irow2])) {
        guard3 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard3 == TRUE) {
      b3 = TRUE;
    }

    if (guard2 == TRUE) {
      b3 = FALSE;
    }

    if (!b3) {
      guard1 = FALSE;
      if (v->data[coloffset + irow1] <= v->data[coloffset + irow2]) {
        guard1 = TRUE;
      } else if (muDoubleScalarIsNaN(v->data[coloffset + irow2])) {
        guard1 = TRUE;
      } else {
        p = FALSE;
      }

      if (guard1 == TRUE) {
        p = TRUE;
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return p;
}

static void eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  emxArray_int32_T *col, emxArray_int32_T *idx)
{
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx0;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  k = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &q_emlrtRTEI);
  st.site = &jc_emlrtRSI;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    st.site = &ag_emlrtRSI;
    if (1 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }
  } else {
    st.site = &bg_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    st.site = &cg_emlrtRSI;
    st.site = &cg_emlrtRSI;
    if (1 > x->size[0] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] - 1 > 2147483645);
    }

    if (overflow) {
      b_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0] - 1; k += 2) {
      st.site = &kc_emlrtRSI;
      st.site = &kc_emlrtRSI;
      if (eml_sort_le(x, col, k, k + 1)) {
      } else {
        st.site = &lc_emlrtRSI;
        idx->data[k - 1] = k + 1;
        st.site = &qc_emlrtRSI;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(sp, &idx0, 1, &s_emlrtRTEI, TRUE);
    k = idx0->size[0];
    idx0->size[0] = x->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    i = x->size[0];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[0]) {
      st.site = &mc_emlrtRSI;
      i2 = i << 1;
      j = 1;
      st.site = &nc_emlrtRSI;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        st.site = &oc_emlrtRSI;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        st.site = &pc_emlrtRSI;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          st.site = &rc_emlrtRSI;
          if (eml_sort_le(x, col, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            st.site = &sc_emlrtRSI;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                st.site = &tc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[q - 1];
                st.site = &uc_emlrtRSI;
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            st.site = &vc_emlrtRSI;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                st.site = &wc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[p - 1];
                st.site = &xc_emlrtRSI;
                p++;
              }
            }
          }

          st.site = &yc_emlrtRSI;
          k++;
        }

        st.site = &ad_emlrtRSI;
        st.site = &bd_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          st.site = &cd_emlrtRSI;
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
        st.site = &dd_emlrtRSI;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  int32_T m;
  int32_T col[2];
  int32_T k;
  emxArray_int32_T *idx;
  emxArray_real_T *ycol;
  int32_T b_m;
  boolean_T b15;
  int32_T i;
  boolean_T b16;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  m = y->size[0];
  for (k = 0; k < 2; k++) {
    col[k] = k + 1;
  }

  emxInit_int32_T(sp, &idx, 1, &yc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &ycol, 1, &wc_emlrtRTEI, TRUE);
  st.site = &wf_emlrtRSI;
  b_eml_sort_idx(&st, y, col, idx);
  st.site = &xf_emlrtRSI;
  b_m = y->size[0];
  col[0] = y->size[0];
  k = ycol->size[0];
  ycol->size[0] = col[0];
  emxEnsureCapacity(&st, (emxArray__common *)ycol, k, (int32_T)sizeof(real_T),
                    &wc_emlrtRTEI);
  for (k = 0; k < 2; k++) {
    b_st.site = &mg_emlrtRSI;
    if (1 > b_m) {
      b15 = FALSE;
    } else {
      b15 = (b_m > 2147483646);
    }

    if (b15) {
      c_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= b_m; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * k) - 1];
    }

    b_st.site = &ng_emlrtRSI;
    for (i = 0; i + 1 <= b_m; i++) {
      y->data[i + y->size[0] * k] = ycol->data[i];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
  st.site = &yf_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (1 > m) {
    b16 = FALSE;
  } else {
    b16 = (m > 2147483646);
  }

  if (b16) {
    b_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  emxArray_int32_T *col;
  int32_T m;
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx;
  emxArray_real_T *ycol;
  int32_T b_m;
  int32_T n;
  int32_T unnamed_idx_0;
  boolean_T b13;
  boolean_T b14;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_int32_T(sp, &col, 2, &xc_emlrtRTEI, TRUE);
  m = y->size[0];
  k = col->size[0] * col->size[1];
  col->size[0] = 1;
  col->size[1] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)col, k, (int32_T)sizeof(int32_T),
                    &vc_emlrtRTEI);
  st.site = &vf_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (1 > y->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (y->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= y->size[1]; k++) {
    col->data[k - 1] = k;
  }

  emxInit_int32_T(sp, &idx, 1, &yc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &ycol, 1, &wc_emlrtRTEI, TRUE);
  st.site = &wf_emlrtRSI;
  eml_sort_idx(&st, y, col, idx);
  st.site = &xf_emlrtRSI;
  b_m = y->size[0];
  n = y->size[1];
  unnamed_idx_0 = y->size[0];
  k = ycol->size[0];
  ycol->size[0] = unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)ycol, k, (int32_T)sizeof(real_T),
                    &wc_emlrtRTEI);
  b_st.site = &lg_emlrtRSI;
  emxFree_int32_T(&col);
  if (1 > y->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (y->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= n; k++) {
    b_st.site = &mg_emlrtRSI;
    if (1 > b_m) {
      b13 = FALSE;
    } else {
      b13 = (b_m > 2147483646);
    }

    if (b13) {
      c_st.site = &fd_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (unnamed_idx_0 = 0; unnamed_idx_0 + 1 <= b_m; unnamed_idx_0++) {
      ycol->data[unnamed_idx_0] = y->data[(idx->data[unnamed_idx_0] + y->size[0]
        * k) - 1];
    }

    b_st.site = &ng_emlrtRSI;
    for (unnamed_idx_0 = 0; unnamed_idx_0 + 1 <= b_m; unnamed_idx_0++) {
      y->data[unnamed_idx_0 + y->size[0] * k] = ycol->data[unnamed_idx_0];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
  st.site = &yf_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (1 > m) {
    b14 = FALSE;
  } else {
    b14 = (m > 2147483646);
  }

  if (b14) {
    b_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sortrows.c) */
