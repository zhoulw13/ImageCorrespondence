/*
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
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
static emlrtRSInfo yb_emlrtRSI = { 37, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ac_emlrtRSI = { 139, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo bc_emlrtRSI = { 141, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo cc_emlrtRSI = { 148, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo dc_emlrtRSI = { 150, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ec_emlrtRSI = { 154, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo fc_emlrtRSI = { 159, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo gc_emlrtRSI = { 142, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo hc_emlrtRSI = { 161, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ic_emlrtRSI = { 163, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo jc_emlrtRSI = { 166, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo kc_emlrtRSI = { 168, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo lc_emlrtRSI = { 173, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo mc_emlrtRSI = { 176, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo nc_emlrtRSI = { 178, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo oc_emlrtRSI = { 182, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo pc_emlrtRSI = { 184, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo qc_emlrtRSI = { 185, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo rc_emlrtRSI = { 186, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo sc_emlrtRSI = { 189, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo nf_emlrtRSI = { 23, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo of_emlrtRSI = { 26, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo pf_emlrtRSI = { 27, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo qf_emlrtRSI = { 28, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo rf_emlrtRSI = { 42, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo sf_emlrtRSI = { 134, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo tf_emlrtRSI = { 138, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo dg_emlrtRSI = { 62, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo eg_emlrtRSI = { 63, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRSInfo fg_emlrtRSI = { 66, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo q_emlrtRTEI = { 31, 5, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo r_emlrtRTEI = { 1, 20, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo s_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo ad_emlrtRTEI = { 61, 1, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

static emlrtRTEInfo bd_emlrtRTEI = { 26, 5, "sortrows",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/sortrows.m" };

/* Function Declarations */
static void b_eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  int32_T col[2], emxArray_int32_T *idx);
static boolean_T b_eml_sort_le(const emxArray_real_T *v, const int32_T col[2],
  int32_T irow1, int32_T irow2);
static void eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x, const
  int32_T col_data[2], emxArray_int32_T *idx);

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
  st.site = &yb_emlrtRSI;
  if (x->size[0] == 0) {
    st.site = &rf_emlrtRSI;
  } else {
    st.site = &sf_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    st.site = &tf_emlrtRSI;
    st.site = &tf_emlrtRSI;
    if (1 > x->size[0] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] - 1 > 2147483645);
    }

    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0] - 1; k += 2) {
      st.site = &ac_emlrtRSI;
      st.site = &ac_emlrtRSI;
      if (b_eml_sort_le(x, col, k, k + 1)) {
      } else {
        st.site = &bc_emlrtRSI;
        idx->data[k - 1] = k + 1;
        st.site = &gc_emlrtRSI;
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
      st.site = &cc_emlrtRSI;
      i2 = i << 1;
      j = 1;
      st.site = &dc_emlrtRSI;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        st.site = &ec_emlrtRSI;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        st.site = &fc_emlrtRSI;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          st.site = &hc_emlrtRSI;
          if (b_eml_sort_le(x, col, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            st.site = &ic_emlrtRSI;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                st.site = &jc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[q - 1];
                st.site = &kc_emlrtRSI;
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            st.site = &lc_emlrtRSI;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                st.site = &mc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[p - 1];
                st.site = &nc_emlrtRSI;
                p++;
              }
            }
          }

          st.site = &oc_emlrtRSI;
          k++;
        }

        st.site = &pc_emlrtRSI;
        st.site = &qc_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          st.site = &rc_emlrtRSI;
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
        st.site = &sc_emlrtRSI;
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
  int32_T col_data[2], emxArray_int32_T *idx)
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
  st.site = &yb_emlrtRSI;
  if (x->size[0] == 0) {
    st.site = &rf_emlrtRSI;
  } else {
    st.site = &sf_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    st.site = &tf_emlrtRSI;
    st.site = &tf_emlrtRSI;
    if (1 > x->size[0] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] - 1 > 2147483645);
    }

    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0] - 1; k += 2) {
      st.site = &ac_emlrtRSI;
      st.site = &ac_emlrtRSI;
      if (eml_sort_le(x, col_data, k, k + 1)) {
      } else {
        st.site = &bc_emlrtRSI;
        idx->data[k - 1] = k + 1;
        st.site = &gc_emlrtRSI;
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
      st.site = &cc_emlrtRSI;
      i2 = i << 1;
      j = 1;
      st.site = &dc_emlrtRSI;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        st.site = &ec_emlrtRSI;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        st.site = &fc_emlrtRSI;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          st.site = &hc_emlrtRSI;
          if (eml_sort_le(x, col_data, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            st.site = &ic_emlrtRSI;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                st.site = &jc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[q - 1];
                st.site = &kc_emlrtRSI;
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            st.site = &lc_emlrtRSI;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                st.site = &mc_emlrtRSI;
                k++;
                idx0->data[k] = idx->data[p - 1];
                st.site = &nc_emlrtRSI;
                p++;
              }
            }
          }

          st.site = &oc_emlrtRSI;
          k++;
        }

        st.site = &pc_emlrtRSI;
        st.site = &qc_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          st.site = &rc_emlrtRSI;
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
        st.site = &sc_emlrtRSI;
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
  boolean_T b13;
  int32_T i;
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
  m = y->size[0];
  for (k = 0; k < 2; k++) {
    col[k] = k + 1;
  }

  emxInit_int32_T(sp, &idx, 1, &bd_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &ycol, 1, &ad_emlrtRTEI, TRUE);
  st.site = &of_emlrtRSI;
  b_eml_sort_idx(&st, y, col, idx);
  st.site = &pf_emlrtRSI;
  b_m = y->size[0];
  col[0] = y->size[0];
  k = ycol->size[0];
  ycol->size[0] = col[0];
  emxEnsureCapacity(&st, (emxArray__common *)ycol, k, (int32_T)sizeof(real_T),
                    &ad_emlrtRTEI);
  for (k = 0; k < 2; k++) {
    b_st.site = &eg_emlrtRSI;
    if (1 > b_m) {
      b13 = FALSE;
    } else {
      b13 = (b_m > 2147483646);
    }

    if (b13) {
      c_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= b_m; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * k) - 1];
    }

    b_st.site = &fg_emlrtRSI;
    for (i = 0; i + 1 <= b_m; i++) {
      y->data[i + y->size[0] * k] = ycol->data[i];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
  st.site = &qf_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (1 > m) {
    b14 = FALSE;
  } else {
    b14 = (m > 2147483646);
  }

  if (b14) {
    b_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  int32_T m;
  int32_T col_data[2];
  int32_T k;
  emxArray_int32_T *idx;
  emxArray_real_T *ycol;
  int32_T b_m;
  int32_T i;
  boolean_T b11;
  boolean_T b12;
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
  st.site = &nf_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  for (k = 0; k < 2; k++) {
    col_data[k] = k + 1;
  }

  emxInit_int32_T(sp, &idx, 1, &bd_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &ycol, 1, &ad_emlrtRTEI, TRUE);
  st.site = &of_emlrtRSI;
  eml_sort_idx(&st, y, col_data, idx);
  st.site = &pf_emlrtRSI;
  b_m = y->size[0];
  k = y->size[0];
  i = ycol->size[0];
  ycol->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)ycol, i, (int32_T)sizeof(real_T),
                    &ad_emlrtRTEI);
  b_st.site = &dg_emlrtRSI;
  for (k = 0; k < 2; k++) {
    b_st.site = &eg_emlrtRSI;
    if (1 > b_m) {
      b11 = FALSE;
    } else {
      b11 = (b_m > 2147483646);
    }

    if (b11) {
      c_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= b_m; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * k) - 1];
    }

    b_st.site = &fg_emlrtRSI;
    for (i = 0; i + 1 <= b_m; i++) {
      y->data[i + y->size[0] * k] = ycol->data[i];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
  st.site = &qf_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (1 > m) {
    b12 = FALSE;
  } else {
    b12 = (m > 2147483646);
  }

  if (b12) {
    b_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sortrows.c) */
