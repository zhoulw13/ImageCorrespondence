/*
 * bspline.c
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "bspline.h"
#include "floor.h"
#include "merging_emxutil.h"
#include "power.h"
#include "rdivide.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo ar_emlrtRSI = { 15, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo br_emlrtRSI = { 16, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo cr_emlrtRSI = { 17, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo dr_emlrtRSI = { 18, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo er_emlrtRSI = { 23, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo fr_emlrtRSI = { 24, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo gr_emlrtRSI = { 25, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo hr_emlrtRSI = { 30, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo ir_emlrtRSI = { 31, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo jr_emlrtRSI = { 32, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo kr_emlrtRSI = { 39, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo lr_emlrtRSI = { 44, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo mr_emlrtRSI = { 54, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRSInfo nr_emlrtRSI = { 55, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 1, 18, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 15, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 16, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 17, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 18, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 20, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 27, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 39, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 43, 5, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo p_emlrtECI = { -1, 17, 6, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo q_emlrtECI = { -1, 18, 6, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo r_emlrtECI = { -1, 21, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo s_emlrtECI = { -1, 22, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo t_emlrtECI = { -1, 23, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo u_emlrtECI = { -1, 24, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo v_emlrtECI = { -1, 28, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo w_emlrtECI = { -1, 29, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo x_emlrtECI = { -1, 30, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo y_emlrtECI = { -1, 31, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 41, 13, "Ax", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 42, 13, "Ay", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtRTEInfo vc_emlrtRTEI = { 44, 20, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 44, 49, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 46, 7, "A", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtECInfo ab_emlrtECI = { -1, 46, 5, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo bb_emlrtECI = { -1, 54, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtECInfo cb_emlrtECI = { -1, 55, 1, "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m" };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 44, 26, "x", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 44, 40, "x", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 44, 55, "y", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 44, 69, "y", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 44, 18, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 44, 47, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code_2/bspline.m", 0 };

/* Function Definitions */
void bspline(const emlrtStack *sp, const emxArray_real_T *src, const
             emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y,
             const real_T bound[2], emxArray_real_T *ref)
{
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  int32_T i8;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  int32_T i9;
  emxArray_real_T *ty;
  int32_T tx_idx_0;
  emxArray_int32_T *r6;
  int32_T iv43[1];
  int32_T b_tx[1];
  int32_T iv44[1];
  emxArray_real_T *r7;
  int32_T iv45[1];
  int32_T iv46[1];
  emxArray_real_T *r8;
  uint32_T unnamed_idx_0;
  int32_T i10;
  int32_T i11;
  int32_T iv47[1];
  int32_T b_ty[1];
  int32_T iv48[1];
  int32_T iv49[1];
  int32_T iv50[1];
  emxArray_real_T *A;
  real_T b_y;
  int32_T i;
  emxArray_real_T *param_matrix;
  emxArray_real_T *b_param_matrix;
  real_T beta1;
  real_T d1;
  int32_T iv51[2];
  boolean_T guard4 = FALSE;
  const mxArray *c_y;
  static const int32_T iv52[2] = { 1, 21 };

  const mxArray *m4;
  char_T cv23[21];
  static const char_T cv24[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *d_y;
  static const int32_T iv53[2] = { 1, 45 };

  char_T cv25[45];
  static const char_T cv26[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  int32_T iv54[1];
  boolean_T guard2 = FALSE;
  const mxArray *e_y;
  static const int32_T iv55[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv56[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv57[1];
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
  emxInit_real_T(sp, &Ax, 2, &pb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &qb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_src, 1, &kb_emlrtRTEI, TRUE);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  loop_ub = src->size[0];
  i8 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_src->data[i8] = (src->data[i8] - bound[0]) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &lb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &kb_emlrtRTEI, TRUE);
  st.site = &ar_emlrtRSI;
  rdivide(&st, b_src, x);
  loop_ub = src->size[0];
  i8 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i8 = 0; i8 < loop_ub; i8++) {
    c_src->data[i8] = (src->data[i8 + src->size[0]] - bound[1]) + 1.0;
  }

  b_emxInit_real_T(sp, &y, 1, &mb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &tx, 1, &nb_emlrtRTEI, TRUE);
  st.site = &br_emlrtRSI;
  rdivide(&st, c_src, y);
  i8 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i8 = 0; i8 < loop_ub; i8++) {
    tx->data[i8] = x->data[i8];
  }

  st.site = &cr_emlrtRSI;
  c_floor(tx);
  i8 = x->size[0];
  i9 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i8, i9, &p_emlrtECI, sp);
  i8 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = x->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    tx->data[i8] = x->data[i8] - tx->data[i8];
  }

  b_emxInit_real_T(sp, &ty, 1, &ob_emlrtRTEI, TRUE);
  i8 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    ty->data[i8] = y->data[i8];
  }

  st.site = &dr_emlrtRSI;
  c_floor(ty);
  i8 = y->size[0];
  i9 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i8, i9, &q_emlrtECI, sp);
  i8 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    ty->data[i8] = y->data[i8] - ty->data[i8];
  }

  tx_idx_0 = tx->size[0];
  i8 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = tx_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ax->data[i8] = 0.0;
  }

  emxInit_int32_T(sp, &r6, 1, &kb_emlrtRTEI, TRUE);
  tx_idx_0 = tx->size[0];
  i8 = r6->size[0];
  r6->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < tx_idx_0; i8++) {
    r6->data[i8] = i8;
  }

  iv43[0] = r6->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv43, 1, b_tx, 1, &r_emlrtECI, sp);
  tx_idx_0 = tx->size[0];
  for (i8 = 0; i8 < tx_idx_0; i8++) {
    Ax->data[r6->data[i8]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  iv44[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv44, 1, *(int32_T (*)[1])tx->size, 1,
    &s_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ax->data[r6->data[i8] + Ax->size[0]] = tx->data[i8];
  }

  loop_ub = Ax->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  b_emxInit_real_T(sp, &r7, 1, &kb_emlrtRTEI, TRUE);
  st.site = &er_emlrtRSI;
  power(&st, tx, r7);
  iv45[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv45, 1, *(int32_T (*)[1])r7->size, 1,
    &t_emlrtECI, sp);
  loop_ub = r7->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ax->data[r6->data[i8] + (Ax->size[0] << 1)] = r7->data[i8];
  }

  loop_ub = Ax->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  st.site = &fr_emlrtRSI;
  b_power(&st, tx, r7);
  iv46[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv46, 1, *(int32_T (*)[1])r7->size, 1,
    &u_emlrtECI, sp);
  loop_ub = r7->size[0];
  emxFree_real_T(&tx);
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ax->data[r6->data[i8] + Ax->size[0] * 3] = r7->data[i8];
  }

  emxInit_real_T(sp, &r8, 2, &kb_emlrtRTEI, TRUE);
  st.site = &gr_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i8 = Ax->size[0];
  i9 = r8->size[0] * r8->size[1];
  r8->size[0] = Ax->size[0];
  r8->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r8, i9, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    r8->data[i9] = Ax->data[i9];
  }

  i9 = Ax->size[0];
  i10 = Ax->size[0];
  i11 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i11, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i11 = 0; i11 < loop_ub; i11++) {
    Ax->data[i11] = 0.0;
  }

  b_st.site = &cf_emlrtRSI;
  eml_xgemm(i8, r8, i9, Ax, i10);
  tx_idx_0 = ty->size[0];
  i8 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = tx_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ay->data[i8] = 0.0;
  }

  tx_idx_0 = ty->size[0];
  i8 = r6->size[0];
  r6->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < tx_idx_0; i8++) {
    r6->data[i8] = i8;
  }

  iv47[0] = r6->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv47, 1, b_ty, 1, &v_emlrtECI, sp);
  tx_idx_0 = ty->size[0];
  for (i8 = 0; i8 < tx_idx_0; i8++) {
    Ay->data[r6->data[i8]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  iv48[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv48, 1, *(int32_T (*)[1])ty->size, 1,
    &w_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ay->data[r6->data[i8] + Ay->size[0]] = ty->data[i8];
  }

  loop_ub = Ay->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  st.site = &hr_emlrtRSI;
  power(&st, ty, r7);
  iv49[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv49, 1, *(int32_T (*)[1])r7->size, 1,
    &x_emlrtECI, sp);
  loop_ub = r7->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ay->data[r6->data[i8] + (Ay->size[0] << 1)] = r7->data[i8];
  }

  loop_ub = Ay->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  st.site = &ir_emlrtRSI;
  b_power(&st, ty, r7);
  iv50[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv50, 1, *(int32_T (*)[1])r7->size, 1,
    &y_emlrtECI, sp);
  loop_ub = r7->size[0];
  emxFree_real_T(&ty);
  for (i8 = 0; i8 < loop_ub; i8++) {
    Ay->data[r6->data[i8] + Ay->size[0] * 3] = r7->data[i8];
  }

  emxFree_real_T(&r7);
  st.site = &jr_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i8 = Ay->size[0];
  i9 = r8->size[0] * r8->size[1];
  r8->size[0] = Ay->size[0];
  r8->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r8, i9, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    r8->data[i9] = Ay->data[i9];
  }

  i9 = Ay->size[0];
  i10 = Ay->size[0];
  i11 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i11, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i11 = 0; i11 < loop_ub; i11++) {
    Ay->data[i11] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &rb_emlrtRTEI, TRUE);
  b_st.site = &cf_emlrtRSI;
  eml_xgemm(i8, r8, i9, Ay, i10);
  st.site = &kr_emlrtRSI;
  b_y = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  tx_idx_0 = src->size[0];
  i8 = A->size[0] * A->size[1];
  A->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)A, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i8 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)b_y;
  emxEnsureCapacity(sp, (emxArray__common *)A, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)b_y;
  emxFree_real_T(&r8);
  for (i8 = 0; i8 < loop_ub; i8++) {
    A->data[i8] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &sb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_param_matrix, 2, &sb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i8 = Ax->size[0];
    i9 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &j_emlrtBCI, sp);
    i8 = Ay->size[0];
    i9 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &k_emlrtBCI, sp);
    tx_idx_0 = control_p_x->size[0];
    i8 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i8, (int32_T)sizeof
                      (real_T), &kb_emlrtRTEI);
    loop_ub = control_p_x->size[1];
    i8 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i8, (int32_T)sizeof
                      (real_T), &kb_emlrtRTEI);
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      param_matrix->data[i8] = 0.0;
    }

    i8 = x->size[0];
    i9 = 1 + i;
    b_y = x->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &m_emlrtBCI, sp)
      - 1];
    st.site = &lr_emlrtRSI;
    b_floor(&b_y);
    i8 = x->size[0];
    i9 = 1 + i;
    beta1 = x->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &n_emlrtBCI, sp)
      - 1];
    st.site = &lr_emlrtRSI;
    b_floor(&beta1);
    if (b_y == beta1) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &vc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i8 = y->size[0];
    i9 = 1 + i;
    beta1 = y->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &o_emlrtBCI, sp)
      - 1];
    st.site = &lr_emlrtRSI;
    b_floor(&beta1);
    i8 = y->size[0];
    i9 = 1 + i;
    d1 = y->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &p_emlrtBCI, sp) -
      1];
    st.site = &lr_emlrtRSI;
    b_floor(&d1);
    if (beta1 == d1) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &wc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &lr_emlrtRSI;
    tx_idx_0 = control_p_x->size[0];
    loop_ub = control_p_x->size[1];
    for (i8 = 0; i8 < 4; i8++) {
      for (i9 = 0; i9 < 4; i9++) {
        i10 = (int32_T)(b_y + (1.0 + (real_T)i8));
        i11 = (int32_T)(beta1 + (1.0 + (real_T)i9));
        param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i10, 1, tx_idx_0,
          &q_emlrtBCI, sp) + param_matrix->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(i11, 1, loop_ub,
          &r_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i8] *
          Ay->data[i + Ay->size[0] * i9];
      }
    }

    tx_idx_0 = param_matrix->size[0] * param_matrix->size[1];
    i8 = b_param_matrix->size[0] * b_param_matrix->size[1];
    b_param_matrix->size[0] = 1;
    b_param_matrix->size[1] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i8, (int32_T)
                      sizeof(real_T), &kb_emlrtRTEI);
    for (i8 = 0; i8 < tx_idx_0; i8++) {
      b_param_matrix->data[b_param_matrix->size[0] * i8] = param_matrix->data[i8];
    }

    i8 = A->size[0];
    i9 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i8, &l_emlrtBCI, sp);
    loop_ub = A->size[1];
    i8 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                      &kb_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      r6->data[i8] = i8;
    }

    iv51[0] = 1;
    iv51[1] = r6->size[0];
    emlrtSubAssignSizeCheckR2012b(iv51, 2, *(int32_T (*)[2])b_param_matrix->size,
      2, &ab_emlrtECI, sp);
    loop_ub = b_param_matrix->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      A->data[i + A->size[0] * r6->data[i8]] = b_param_matrix->
        data[b_param_matrix->size[0] * i8];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_param_matrix);
  emxFree_real_T(&param_matrix);
  tx_idx_0 = src->size[0];
  i8 = ref->size[0] * ref->size[1];
  ref->size[0] = tx_idx_0;
  ref->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)ref, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = src->size[0] << 1;
  for (i8 = 0; i8 < loop_ub; i8++) {
    ref->data[i8] = 0.0;
  }

  tx_idx_0 = src->size[0];
  i8 = r6->size[0];
  r6->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < tx_idx_0; i8++) {
    r6->data[i8] = i8;
  }

  st.site = &mr_emlrtRSI;
  i8 = x->size[0];
  x->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    x->data[i8] = control_p_x->data[i8];
  }

  b_st.site = &wf_emlrtRSI;
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
        c_y = NULL;
        m4 = mxCreateCharArray(2, iv52);
        for (i = 0; i < 21; i++) {
          cv23[i] = cv24[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m4, cv23);
        emlrtAssign(&c_y, m4);
        c_st.site = &vt_emlrtRSI;
        d_st.site = &gu_emlrtRSI;
        error(&c_st, message(&d_st, c_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      d_y = NULL;
      m4 = mxCreateCharArray(2, iv53);
      for (i = 0; i < 45; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m4, cv25);
      emlrtAssign(&d_y, m4);
      c_st.site = &ut_emlrtRSI;
      d_st.site = &fu_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &o_emlrtMCI), &p_emlrtMCI);
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
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i8 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i8, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i8 = 0; i8 < loop_ub; i8++) {
        y->data[i8] = 0.0;
      }

      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        b_y = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(A->size[0]);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[0]);
        ldb_t = (ptrdiff_t)(A->size[1]);
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&b_y);
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
    i8 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i8, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      y->data[i8] = 0.0;
      tx_idx_0 = A->size[1];
      for (i9 = 0; i9 < tx_idx_0; i9++) {
        y->data[i8] += A->data[i8 + A->size[0] * i9] * control_p_x->data[i9];
      }
    }
  }

  iv54[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv54, 1, *(int32_T (*)[1])y->size, 1,
    &bb_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    ref->data[r6->data[i8]] = y->data[i8];
  }

  loop_ub = ref->size[0];
  i8 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(int32_T),
                    &kb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = i8;
  }

  st.site = &nr_emlrtRSI;
  i8 = x->size[0];
  x->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i8, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = control_p_y->size[0] * control_p_y->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    x->data[i8] = control_p_y->data[i8];
  }

  b_st.site = &wf_emlrtRSI;
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
        e_y = NULL;
        m4 = mxCreateCharArray(2, iv55);
        for (i = 0; i < 21; i++) {
          cv23[i] = cv24[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m4, cv23);
        emlrtAssign(&e_y, m4);
        c_st.site = &vt_emlrtRSI;
        d_st.site = &gu_emlrtRSI;
        error(&c_st, message(&d_st, e_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      f_y = NULL;
      m4 = mxCreateCharArray(2, iv56);
      for (i = 0; i < 45; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m4, cv25);
      emlrtAssign(&f_y, m4);
      c_st.site = &ut_emlrtRSI;
      d_st.site = &fu_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &o_emlrtMCI), &p_emlrtMCI);
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
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i8 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i8, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i8 = 0; i8 < loop_ub; i8++) {
        y->data[i8] = 0.0;
      }

      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        b_y = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(A->size[0]);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[0]);
        ldb_t = (ptrdiff_t)(A->size[1]);
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&b_y);
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
    i8 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i8, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      y->data[i8] = 0.0;
      tx_idx_0 = A->size[1];
      for (i9 = 0; i9 < tx_idx_0; i9++) {
        y->data[i8] += A->data[i8 + A->size[0] * i9] * control_p_y->data[i9];
      }
    }
  }

  emxFree_real_T(&A);
  emxFree_real_T(&x);
  iv57[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv57, 1, *(int32_T (*)[1])y->size, 1,
    &cb_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    ref->data[r6->data[i8] + ref->size[0]] = y->data[i8];
  }

  emxFree_int32_T(&r6);
  emxFree_real_T(&y);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_xgemm(int32_T m, const emxArray_real_T *A, int32_T lda, emxArray_real_T
               *C, int32_T ldc)
{
  real_T alpha1;
  real_T beta1;
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
  static const real_T B[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  if (m < 1) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(m);
    n_t = (ptrdiff_t)(4);
    k_t = (ptrdiff_t)(4);
    lda_t = (ptrdiff_t)(lda);
    ldb_t = (ptrdiff_t)(4);
    ldc_t = (ptrdiff_t)(ldc);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A->data[0]);
    Bib0_t = (double *)(&B[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
}

/* End of code generation (bspline.c) */
