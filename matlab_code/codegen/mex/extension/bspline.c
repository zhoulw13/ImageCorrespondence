/*
 * bspline.c
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Mon Apr 25 21:25:51 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "bspline.h"
#include "floor.h"
#include "bspline_inv.h"
#include "extension_emxutil.h"
#include "power.h"
#include "rdivide.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI = { 15, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ce_emlrtRSI = { 16, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo de_emlrtRSI = { 17, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ee_emlrtRSI = { 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo fe_emlrtRSI = { 23, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ge_emlrtRSI = { 24, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo he_emlrtRSI = { 25, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ie_emlrtRSI = { 30, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo je_emlrtRSI = { 31, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ke_emlrtRSI = { 32, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo le_emlrtRSI = { 39, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo me_emlrtRSI = { 44, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo ne_emlrtRSI = { 54, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo oe_emlrtRSI = { 55, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo c_emlrtRTEI = { 15, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo d_emlrtRTEI = { 16, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo e_emlrtRTEI = { 17, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo f_emlrtRTEI = { 18, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo g_emlrtRTEI = { 20, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo h_emlrtRTEI = { 27, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo i_emlrtRTEI = { 39, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo j_emlrtRTEI = { 43, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 13, 16, "bound", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 14, 17, "bound", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 15, 12, "src", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 16, 12, "src", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtECInfo emlrtECI = { -1, 17, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo b_emlrtECI = { -1, 18, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo c_emlrtECI = { -1, 21, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo d_emlrtECI = { -1, 22, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo e_emlrtECI = { -1, 23, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo f_emlrtECI = { -1, 24, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo g_emlrtECI = { -1, 28, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo h_emlrtECI = { -1, 29, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo i_emlrtECI = { -1, 30, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo j_emlrtECI = { -1, 31, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 41, 13, "Ax", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 42, 13, "Ay", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtRTEInfo ad_emlrtRTEI = { 44, 20, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo bd_emlrtRTEI = { 44, 49, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 46, 7, "A", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtECInfo k_emlrtECI = { -1, 46, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo l_emlrtECI = { -1, 54, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo m_emlrtECI = { -1, 55, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 44, 26, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 44, 40, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 44, 55, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 44, 69, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 44, 18, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 44, 47, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

/* Function Definitions */
void bspline(const emlrtStack *sp, const emxArray_real_T *src, const
             emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y,
             const emxArray_real_T *bound, emxArray_real_T *ref)
{
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *b_src;
  int32_T i0;
  int32_T loop_ub;
  real_T b_bound;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  int32_T i1;
  emxArray_real_T *ty;
  int32_T tx_idx_0;
  emxArray_int32_T *r0;
  int32_T iv2[1];
  int32_T b_tx[1];
  int32_T iv3[1];
  emxArray_real_T *r1;
  int32_T iv4[1];
  int32_T iv5[1];
  emxArray_real_T *r2;
  uint32_T unnamed_idx_0;
  int32_T i2;
  int32_T i3;
  int32_T iv6[1];
  int32_T b_ty[1];
  int32_T iv7[1];
  int32_T iv8[1];
  int32_T iv9[1];
  emxArray_real_T *A;
  int32_T i;
  emxArray_real_T *param_matrix;
  emxArray_real_T *b_param_matrix;
  real_T beta1;
  real_T d0;
  int32_T iv10[2];
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv11[2] = { 1, 21 };

  const mxArray *m1;
  char_T cv4[21];
  static const char_T cv5[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv12[2] = { 1, 45 };

  char_T cv6[45];
  static const char_T cv7[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard3 = FALSE;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  int32_T iv13[1];
  boolean_T guard2 = FALSE;
  const mxArray *d_y;
  static const int32_T iv14[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv15[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv16[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Ax, 2, &g_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &h_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_src, 1, &b_emlrtRTEI, TRUE);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  i0 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, sp);
  i0 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &b_emlrtBCI, sp);
  i0 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI, sp);
  loop_ub = src->size[0];
  b_bound = bound->data[0];
  i0 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_src->data[i0] = (src->data[i0] - b_bound) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &c_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &b_emlrtRTEI, TRUE);
  st.site = &be_emlrtRSI;
  b_rdivide(&st, b_src, x);
  i0 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &d_emlrtBCI, sp);
  loop_ub = src->size[0];
  b_bound = bound->data[bound->size[0]];
  i0 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_src->data[i0] = (src->data[i0 + src->size[0]] - b_bound) + 1.0;
  }

  b_emxInit_real_T(sp, &y, 1, &d_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &tx, 1, &e_emlrtRTEI, TRUE);
  st.site = &ce_emlrtRSI;
  b_rdivide(&st, c_src, y);
  i0 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i0 = 0; i0 < loop_ub; i0++) {
    tx->data[i0] = x->data[i0];
  }

  st.site = &de_emlrtRSI;
  c_floor(tx);
  i0 = x->size[0];
  i1 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i0, i1, &emlrtECI, sp);
  i0 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    tx->data[i0] = x->data[i0] - tx->data[i0];
  }

  b_emxInit_real_T(sp, &ty, 1, &f_emlrtRTEI, TRUE);
  i0 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ty->data[i0] = y->data[i0];
  }

  st.site = &ee_emlrtRSI;
  c_floor(ty);
  i0 = y->size[0];
  i1 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i0, i1, &b_emlrtECI, sp);
  i0 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ty->data[i0] = y->data[i0] - ty->data[i0];
  }

  tx_idx_0 = tx->size[0];
  i0 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = tx_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0] = 0.0;
  }

  emxInit_int32_T(sp, &r0, 1, &b_emlrtRTEI, TRUE);
  tx_idx_0 = tx->size[0];
  i0 = r0->size[0];
  r0->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    r0->data[i0] = i0;
  }

  iv2[0] = r0->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv2, 1, b_tx, 1, &c_emlrtECI, sp);
  tx_idx_0 = tx->size[0];
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    Ax->data[r0->data[i0]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  iv3[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv3, 1, *(int32_T (*)[1])tx->size, 1,
    &d_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[r0->data[i0] + Ax->size[0]] = tx->data[i0];
  }

  loop_ub = Ax->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  b_emxInit_real_T(sp, &r1, 1, &b_emlrtRTEI, TRUE);
  st.site = &fe_emlrtRSI;
  power(&st, tx, r1);
  iv4[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv4, 1, *(int32_T (*)[1])r1->size, 1,
    &e_emlrtECI, sp);
  loop_ub = r1->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[r0->data[i0] + (Ax->size[0] << 1)] = r1->data[i0];
  }

  loop_ub = Ax->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  st.site = &ge_emlrtRSI;
  b_power(&st, tx, r1);
  iv5[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv5, 1, *(int32_T (*)[1])r1->size, 1,
    &f_emlrtECI, sp);
  loop_ub = r1->size[0];
  emxFree_real_T(&tx);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[r0->data[i0] + Ax->size[0] * 3] = r1->data[i0];
  }

  emxInit_real_T(sp, &r2, 2, &b_emlrtRTEI, TRUE);
  st.site = &he_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i0 = Ax->size[0];
  i1 = r2->size[0] * r2->size[1];
  r2->size[0] = Ax->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r2, i1, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r2->data[i1] = Ax->data[i1];
  }

  i1 = Ax->size[0];
  i2 = Ax->size[0];
  i3 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i3, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i3 = 0; i3 < loop_ub; i3++) {
    Ax->data[i3] = 0.0;
  }

  b_st.site = &te_emlrtRSI;
  eml_xgemm(i0, r2, i1, Ax, i2);
  tx_idx_0 = ty->size[0];
  i0 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = tx_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0] = 0.0;
  }

  tx_idx_0 = ty->size[0];
  i0 = r0->size[0];
  r0->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    r0->data[i0] = i0;
  }

  iv6[0] = r0->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv6, 1, b_ty, 1, &g_emlrtECI, sp);
  tx_idx_0 = ty->size[0];
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    Ay->data[r0->data[i0]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  iv7[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv7, 1, *(int32_T (*)[1])ty->size, 1,
    &h_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[r0->data[i0] + Ay->size[0]] = ty->data[i0];
  }

  loop_ub = Ay->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  st.site = &ie_emlrtRSI;
  power(&st, ty, r1);
  iv8[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv8, 1, *(int32_T (*)[1])r1->size, 1,
    &i_emlrtECI, sp);
  loop_ub = r1->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[r0->data[i0] + (Ay->size[0] << 1)] = r1->data[i0];
  }

  loop_ub = Ay->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  st.site = &je_emlrtRSI;
  b_power(&st, ty, r1);
  iv9[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv9, 1, *(int32_T (*)[1])r1->size, 1,
    &j_emlrtECI, sp);
  loop_ub = r1->size[0];
  emxFree_real_T(&ty);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[r0->data[i0] + Ay->size[0] * 3] = r1->data[i0];
  }

  emxFree_real_T(&r1);
  st.site = &ke_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i0 = Ay->size[0];
  i1 = r2->size[0] * r2->size[1];
  r2->size[0] = Ay->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r2, i1, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r2->data[i1] = Ay->data[i1];
  }

  i1 = Ay->size[0];
  i2 = Ay->size[0];
  i3 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i3, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i3 = 0; i3 < loop_ub; i3++) {
    Ay->data[i3] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &i_emlrtRTEI, TRUE);
  b_st.site = &te_emlrtRSI;
  eml_xgemm(i0, r2, i1, Ay, i2);
  st.site = &le_emlrtRSI;
  b_bound = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  tx_idx_0 = src->size[0];
  i0 = A->size[0] * A->size[1];
  A->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  i0 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)b_bound;
  emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)b_bound;
  emxFree_real_T(&r2);
  for (i0 = 0; i0 < loop_ub; i0++) {
    A->data[i0] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &j_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_param_matrix, 2, &j_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i0 = Ax->size[0];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI, sp);
    i0 = Ay->size[0];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &f_emlrtBCI, sp);
    tx_idx_0 = control_p_x->size[0];
    i0 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i0, (int32_T)sizeof
                      (real_T), &b_emlrtRTEI);
    loop_ub = control_p_x->size[1];
    i0 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i0, (int32_T)sizeof
                      (real_T), &b_emlrtRTEI);
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      param_matrix->data[i0] = 0.0;
    }

    i0 = x->size[0];
    i1 = 1 + i;
    b_bound = x->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &h_emlrtBCI,
      sp) - 1];
    st.site = &me_emlrtRSI;
    b_floor(&b_bound);
    i0 = x->size[0];
    i1 = 1 + i;
    beta1 = x->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &i_emlrtBCI, sp)
      - 1];
    st.site = &me_emlrtRSI;
    b_floor(&beta1);
    if (b_bound == beta1) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &ad_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i0 = y->size[0];
    i1 = 1 + i;
    beta1 = y->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &j_emlrtBCI, sp)
      - 1];
    st.site = &me_emlrtRSI;
    b_floor(&beta1);
    i0 = y->size[0];
    i1 = 1 + i;
    d0 = y->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &k_emlrtBCI, sp) -
      1];
    st.site = &me_emlrtRSI;
    b_floor(&d0);
    if (beta1 == d0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &bd_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &me_emlrtRSI;
    tx_idx_0 = control_p_x->size[0];
    loop_ub = control_p_x->size[1];
    for (i0 = 0; i0 < 4; i0++) {
      for (i1 = 0; i1 < 4; i1++) {
        i2 = (int32_T)(b_bound + (1.0 + (real_T)i0));
        i3 = (int32_T)(beta1 + (1.0 + (real_T)i1));
        param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, tx_idx_0,
          &l_emlrtBCI, sp) + param_matrix->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(i3, 1, loop_ub,
          &m_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i0] *
          Ay->data[i + Ay->size[0] * i1];
      }
    }

    tx_idx_0 = param_matrix->size[0] * param_matrix->size[1];
    i0 = b_param_matrix->size[0] * b_param_matrix->size[1];
    b_param_matrix->size[0] = 1;
    b_param_matrix->size[1] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i0, (int32_T)
                      sizeof(real_T), &b_emlrtRTEI);
    for (i0 = 0; i0 < tx_idx_0; i0++) {
      b_param_matrix->data[b_param_matrix->size[0] * i0] = param_matrix->data[i0];
    }

    i0 = A->size[0];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &g_emlrtBCI, sp);
    loop_ub = A->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    iv10[0] = 1;
    iv10[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(iv10, 2, *(int32_T (*)[2])b_param_matrix->size,
      2, &k_emlrtECI, sp);
    loop_ub = b_param_matrix->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      A->data[i + A->size[0] * r0->data[i0]] = b_param_matrix->
        data[b_param_matrix->size[0] * i0];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_param_matrix);
  emxFree_real_T(&param_matrix);
  tx_idx_0 = src->size[0];
  i0 = ref->size[0] * ref->size[1];
  ref->size[0] = tx_idx_0;
  ref->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)ref, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = src->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[i0] = 0.0;
  }

  tx_idx_0 = src->size[0];
  i0 = r0->size[0];
  r0->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    r0->data[i0] = i0;
  }

  st.site = &ne_emlrtRSI;
  i0 = x->size[0];
  x->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = control_p_x->data[i0];
  }

  b_st.site = &of_emlrtRSI;
  tx_idx_0 = control_p_x->size[0] * control_p_x->size[1];
  if (!(A->size[1] == tx_idx_0)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      tx_idx_0 = control_p_x->size[0] * control_p_x->size[1];
      if (tx_idx_0 == 1) {
        guard4 = TRUE;
      } else {
        b_y = NULL;
        m1 = mxCreateCharArray(2, iv11);
        for (i = 0; i < 21; i++) {
          cv4[i] = cv5[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m1, cv4);
        emlrtAssign(&b_y, m1);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m1, cv6);
      emlrtAssign(&c_y, m1);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    tx_idx_0 = control_p_x->size[0] * control_p_x->size[1];
    if (tx_idx_0 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i0 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i0 = 0; i0 < loop_ub; i0++) {
        y->data[i0] = 0.0;
      }

      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        b_bound = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(A->size[0]);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[0]);
        ldb_t = (ptrdiff_t)(A->size[1]);
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&b_bound);
        Aia0_t = (double *)(&A->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&beta1);
        Cic0_t = (double *)(&y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard3 == TRUE) {
    i0 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      y->data[i0] = 0.0;
      tx_idx_0 = A->size[1];
      for (i1 = 0; i1 < tx_idx_0; i1++) {
        y->data[i0] += A->data[i0 + A->size[0] * i1] * control_p_x->data[i1];
      }
    }
  }

  iv13[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv13, 1, *(int32_T (*)[1])y->size, 1,
    &l_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[r0->data[i0]] = y->data[i0];
  }

  loop_ub = ref->size[0];
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = i0;
  }

  st.site = &oe_emlrtRSI;
  i0 = x->size[0];
  x->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = control_p_y->size[0] * control_p_y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = control_p_y->data[i0];
  }

  b_st.site = &of_emlrtRSI;
  tx_idx_0 = control_p_y->size[0] * control_p_y->size[1];
  if (!(A->size[1] == tx_idx_0)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      tx_idx_0 = control_p_y->size[0] * control_p_y->size[1];
      if (tx_idx_0 == 1) {
        guard2 = TRUE;
      } else {
        d_y = NULL;
        m1 = mxCreateCharArray(2, iv14);
        for (i = 0; i < 21; i++) {
          cv4[i] = cv5[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m1, cv4);
        emlrtAssign(&d_y, m1);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m1 = mxCreateCharArray(2, iv15);
      for (i = 0; i < 45; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m1, cv6);
      emlrtAssign(&e_y, m1);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    tx_idx_0 = control_p_y->size[0] * control_p_y->size[1];
    if (tx_idx_0 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i0 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i0 = 0; i0 < loop_ub; i0++) {
        y->data[i0] = 0.0;
      }

      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        b_bound = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(A->size[0]);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[0]);
        ldb_t = (ptrdiff_t)(A->size[1]);
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&b_bound);
        Aia0_t = (double *)(&A->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&beta1);
        Cic0_t = (double *)(&y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard1 == TRUE) {
    i0 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      y->data[i0] = 0.0;
      tx_idx_0 = A->size[1];
      for (i1 = 0; i1 < tx_idx_0; i1++) {
        y->data[i0] += A->data[i0 + A->size[0] * i1] * control_p_y->data[i1];
      }
    }
  }

  emxFree_real_T(&A);
  emxFree_real_T(&x);
  iv16[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv16, 1, *(int32_T (*)[1])y->size, 1,
    &m_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[r0->data[i0] + ref->size[0]] = y->data[i0];
  }

  emxFree_int32_T(&r0);
  emxFree_real_T(&y);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline.c) */
