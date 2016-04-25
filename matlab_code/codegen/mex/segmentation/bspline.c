/*
 * bspline.c
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Sun Apr 24 19:21:27 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "bspline.h"
#include "floor.h"
#include "segmentation_emxutil.h"
#include "power.h"
#include "rdivide.h"
#include "segmentation_mexutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo hq_emlrtRSI = { 15, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo iq_emlrtRSI = { 16, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo jq_emlrtRSI = { 17, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo kq_emlrtRSI = { 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo lq_emlrtRSI = { 23, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo mq_emlrtRSI = { 24, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo nq_emlrtRSI = { 25, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo oq_emlrtRSI = { 30, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo pq_emlrtRSI = { 31, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo qq_emlrtRSI = { 32, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo rq_emlrtRSI = { 39, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo sq_emlrtRSI = { 44, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo tq_emlrtRSI = { 54, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo uq_emlrtRSI = { 55, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 1, 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 15, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 16, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 17, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo bc_emlrtRTEI = { 18, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo cc_emlrtRTEI = { 20, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 27, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 39, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 43, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 13, 16, "bound", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 14, 17, "bound", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 15, 12, "src", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 16, 12, "src", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtECInfo y_emlrtECI = { -1, 17, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo ab_emlrtECI = { -1, 18, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo bb_emlrtECI = { -1, 21, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo cb_emlrtECI = { -1, 22, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo db_emlrtECI = { -1, 23, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo eb_emlrtECI = { -1, 24, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo fb_emlrtECI = { -1, 28, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo gb_emlrtECI = { -1, 29, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo hb_emlrtECI = { -1, 30, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo ib_emlrtECI = { -1, 31, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 41, 13, "Ax", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 42, 13, "Ay", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtRTEInfo mc_emlrtRTEI = { 44, 20, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 44, 49, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 46, 7, "A", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtECInfo jb_emlrtECI = { -1, 46, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo kb_emlrtECI = { -1, 54, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo lb_emlrtECI = { -1, 55, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 44, 26, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 44, 40, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 44, 55, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 44, 69, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 44, 18, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 44, 47, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

/* Function Definitions */
void bspline(const emlrtStack *sp, const emxArray_real_T *src, const
             emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y,
             const real_T bound_data[2], const int32_T bound_size[2],
             emxArray_real_T *ref)
{
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *b_src;
  int32_T i10;
  int32_T loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  int32_T i11;
  emxArray_real_T *ty;
  int32_T tx_idx_0;
  emxArray_int32_T *r17;
  int32_T iv45[1];
  int32_T b_tx[1];
  int32_T iv46[1];
  emxArray_real_T *r18;
  int32_T iv47[1];
  int32_T iv48[1];
  emxArray_real_T *r19;
  uint32_T unnamed_idx_0;
  int32_T i12;
  int32_T i13;
  int32_T iv49[1];
  int32_T b_ty[1];
  int32_T iv50[1];
  int32_T iv51[1];
  int32_T iv52[1];
  emxArray_real_T *A;
  real_T b_y;
  int32_T i;
  emxArray_real_T *param_matrix;
  emxArray_real_T *b_param_matrix;
  real_T beta1;
  real_T d1;
  int32_T iv53[2];
  boolean_T guard4 = FALSE;
  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv27[21];
  static const char_T cv28[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *d_y;
  static const int32_T iv55[2] = { 1, 45 };

  char_T cv29[45];
  static const char_T cv30[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  int32_T iv56[1];
  boolean_T guard2 = FALSE;
  const mxArray *e_y;
  static const int32_T iv57[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv58[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv59[1];
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
  emxInit_real_T(sp, &Ax, 2, &cc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &dc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_src, 1, &wb_emlrtRTEI, TRUE);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, bound_size[1], &vc_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, bound_size[1], &wc_emlrtBCI, sp);
  i10 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &xc_emlrtBCI, sp);
  loop_ub = src->size[0];
  i10 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_src->data[i10] = (src->data[i10] - bound_data[0]) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &xb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &wb_emlrtRTEI, TRUE);
  st.site = &hq_emlrtRSI;
  rdivide(&st, b_src, 30.0, x);
  i10 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i10, &yc_emlrtBCI, sp);
  loop_ub = src->size[0];
  i10 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i10 = 0; i10 < loop_ub; i10++) {
    c_src->data[i10] = (src->data[i10 + src->size[0]] - bound_data[bound_size[0]])
      + 1.0;
  }

  b_emxInit_real_T(sp, &y, 1, &yb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &tx, 1, &ac_emlrtRTEI, TRUE);
  st.site = &iq_emlrtRSI;
  rdivide(&st, c_src, 30.0, y);
  i10 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i10 = 0; i10 < loop_ub; i10++) {
    tx->data[i10] = x->data[i10];
  }

  st.site = &jq_emlrtRSI;
  c_floor(tx);
  i10 = x->size[0];
  i11 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i10, i11, &y_emlrtECI, sp);
  i10 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = x->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    tx->data[i10] = x->data[i10] - tx->data[i10];
  }

  b_emxInit_real_T(sp, &ty, 1, &bc_emlrtRTEI, TRUE);
  i10 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    ty->data[i10] = y->data[i10];
  }

  st.site = &kq_emlrtRSI;
  c_floor(ty);
  i10 = y->size[0];
  i11 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i10, i11, &ab_emlrtECI, sp);
  i10 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    ty->data[i10] = y->data[i10] - ty->data[i10];
  }

  tx_idx_0 = tx->size[0];
  i10 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = tx_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ax->data[i10] = 0.0;
  }

  b_emxInit_int32_T(sp, &r17, 1, &wb_emlrtRTEI, TRUE);
  tx_idx_0 = tx->size[0];
  i10 = r17->size[0];
  r17->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < tx_idx_0; i10++) {
    r17->data[i10] = i10;
  }

  iv45[0] = r17->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv45, 1, b_tx, 1, &bb_emlrtECI, sp);
  tx_idx_0 = tx->size[0];
  for (i10 = 0; i10 < tx_idx_0; i10++) {
    Ax->data[r17->data[i10]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  iv46[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv46, 1, *(int32_T (*)[1])tx->size, 1,
    &cb_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ax->data[r17->data[i10] + Ax->size[0]] = tx->data[i10];
  }

  loop_ub = Ax->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  b_emxInit_real_T(sp, &r18, 1, &wb_emlrtRTEI, TRUE);
  st.site = &lq_emlrtRSI;
  power(&st, tx, r18);
  iv47[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv47, 1, *(int32_T (*)[1])r18->size, 1,
    &db_emlrtECI, sp);
  loop_ub = r18->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ax->data[r17->data[i10] + (Ax->size[0] << 1)] = r18->data[i10];
  }

  loop_ub = Ax->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  st.site = &mq_emlrtRSI;
  b_power(&st, tx, r18);
  iv48[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv48, 1, *(int32_T (*)[1])r18->size, 1,
    &eb_emlrtECI, sp);
  loop_ub = r18->size[0];
  emxFree_real_T(&tx);
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ax->data[r17->data[i10] + Ax->size[0] * 3] = r18->data[i10];
  }

  emxInit_real_T(sp, &r19, 2, &wb_emlrtRTEI, TRUE);
  st.site = &nq_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i10 = Ax->size[0];
  i11 = r19->size[0] * r19->size[1];
  r19->size[0] = Ax->size[0];
  r19->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r19, i11, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    r19->data[i11] = Ax->data[i11];
  }

  i11 = Ax->size[0];
  i12 = Ax->size[0];
  i13 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i13, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i13 = 0; i13 < loop_ub; i13++) {
    Ax->data[i13] = 0.0;
  }

  b_st.site = &td_emlrtRSI;
  eml_xgemm(i10, r19, i11, Ax, i12);
  tx_idx_0 = ty->size[0];
  i10 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = tx_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ay->data[i10] = 0.0;
  }

  tx_idx_0 = ty->size[0];
  i10 = r17->size[0];
  r17->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < tx_idx_0; i10++) {
    r17->data[i10] = i10;
  }

  iv49[0] = r17->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv49, 1, b_ty, 1, &fb_emlrtECI, sp);
  tx_idx_0 = ty->size[0];
  for (i10 = 0; i10 < tx_idx_0; i10++) {
    Ay->data[r17->data[i10]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  iv50[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv50, 1, *(int32_T (*)[1])ty->size, 1,
    &gb_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ay->data[r17->data[i10] + Ay->size[0]] = ty->data[i10];
  }

  loop_ub = Ay->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  st.site = &oq_emlrtRSI;
  power(&st, ty, r18);
  iv51[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv51, 1, *(int32_T (*)[1])r18->size, 1,
    &hb_emlrtECI, sp);
  loop_ub = r18->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ay->data[r17->data[i10] + (Ay->size[0] << 1)] = r18->data[i10];
  }

  loop_ub = Ay->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  st.site = &pq_emlrtRSI;
  b_power(&st, ty, r18);
  iv52[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv52, 1, *(int32_T (*)[1])r18->size, 1,
    &ib_emlrtECI, sp);
  loop_ub = r18->size[0];
  emxFree_real_T(&ty);
  for (i10 = 0; i10 < loop_ub; i10++) {
    Ay->data[r17->data[i10] + Ay->size[0] * 3] = r18->data[i10];
  }

  emxFree_real_T(&r18);
  st.site = &qq_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i10 = Ay->size[0];
  i11 = r19->size[0] * r19->size[1];
  r19->size[0] = Ay->size[0];
  r19->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r19, i11, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    r19->data[i11] = Ay->data[i11];
  }

  i11 = Ay->size[0];
  i12 = Ay->size[0];
  i13 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i13, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i13 = 0; i13 < loop_ub; i13++) {
    Ay->data[i13] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &ec_emlrtRTEI, TRUE);
  b_st.site = &td_emlrtRSI;
  eml_xgemm(i10, r19, i11, Ay, i12);
  st.site = &rq_emlrtRSI;
  b_y = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  tx_idx_0 = src->size[0];
  i10 = A->size[0] * A->size[1];
  A->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)A, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  i10 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)b_y;
  emxEnsureCapacity(sp, (emxArray__common *)A, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)b_y;
  emxFree_real_T(&r19);
  for (i10 = 0; i10 < loop_ub; i10++) {
    A->data[i10] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &fc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_param_matrix, 2, &fc_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i10 = Ax->size[0];
    i11 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &ad_emlrtBCI, sp);
    i10 = Ay->size[0];
    i11 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &bd_emlrtBCI, sp);
    tx_idx_0 = control_p_x->size[0];
    i10 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                      (real_T), &wb_emlrtRTEI);
    loop_ub = control_p_x->size[1];
    i10 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                      (real_T), &wb_emlrtRTEI);
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      param_matrix->data[i10] = 0.0;
    }

    i10 = x->size[0];
    i11 = 1 + i;
    b_y = x->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &dd_emlrtBCI,
      sp) - 1];
    st.site = &sq_emlrtRSI;
    b_floor(&b_y);
    i10 = x->size[0];
    i11 = 1 + i;
    beta1 = x->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &ed_emlrtBCI,
      sp) - 1];
    st.site = &sq_emlrtRSI;
    b_floor(&beta1);
    if (b_y == beta1) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &mc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i10 = y->size[0];
    i11 = 1 + i;
    beta1 = y->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &fd_emlrtBCI,
      sp) - 1];
    st.site = &sq_emlrtRSI;
    b_floor(&beta1);
    i10 = y->size[0];
    i11 = 1 + i;
    d1 = y->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &gd_emlrtBCI, sp)
      - 1];
    st.site = &sq_emlrtRSI;
    b_floor(&d1);
    if (beta1 == d1) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &nc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &sq_emlrtRSI;
    tx_idx_0 = control_p_x->size[0];
    loop_ub = control_p_x->size[1];
    for (i10 = 0; i10 < 4; i10++) {
      for (i11 = 0; i11 < 4; i11++) {
        i12 = (int32_T)(b_y + (1.0 + (real_T)i10));
        i13 = (int32_T)(beta1 + (1.0 + (real_T)i11));
        param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i12, 1, tx_idx_0,
          &hd_emlrtBCI, sp) + param_matrix->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(i13, 1, loop_ub,
          &id_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i10] *
          Ay->data[i + Ay->size[0] * i11];
      }
    }

    tx_idx_0 = param_matrix->size[0] * param_matrix->size[1];
    i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
    b_param_matrix->size[0] = 1;
    b_param_matrix->size[1] = tx_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)
                      sizeof(real_T), &wb_emlrtRTEI);
    for (i10 = 0; i10 < tx_idx_0; i10++) {
      b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->
        data[i10];
    }

    i10 = A->size[0];
    i11 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &cd_emlrtBCI, sp);
    loop_ub = A->size[1];
    i10 = r17->size[0];
    r17->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                      &wb_emlrtRTEI);
    for (i10 = 0; i10 < loop_ub; i10++) {
      r17->data[i10] = i10;
    }

    iv53[0] = 1;
    iv53[1] = r17->size[0];
    emlrtSubAssignSizeCheckR2012b(iv53, 2, *(int32_T (*)[2])b_param_matrix->size,
      2, &jb_emlrtECI, sp);
    loop_ub = b_param_matrix->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      A->data[i + A->size[0] * r17->data[i10]] = b_param_matrix->
        data[b_param_matrix->size[0] * i10];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_param_matrix);
  emxFree_real_T(&param_matrix);
  tx_idx_0 = src->size[0];
  i10 = ref->size[0] * ref->size[1];
  ref->size[0] = tx_idx_0;
  ref->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)ref, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = src->size[0] << 1;
  for (i10 = 0; i10 < loop_ub; i10++) {
    ref->data[i10] = 0.0;
  }

  tx_idx_0 = src->size[0];
  i10 = r17->size[0];
  r17->size[0] = tx_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < tx_idx_0; i10++) {
    r17->data[i10] = i10;
  }

  st.site = &tq_emlrtRSI;
  i10 = x->size[0];
  x->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    x->data[i10] = control_p_x->data[i10];
  }

  b_st.site = &oe_emlrtRSI;
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
        m7 = mxCreateCharArray(2, iv54);
        for (i = 0; i < 21; i++) {
          cv27[i] = cv28[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv27);
        emlrtAssign(&c_y, m7);
        c_st.site = &dr_emlrtRSI;
        d_st.site = &pr_emlrtRSI;
        error(&c_st, message(&d_st, c_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      d_y = NULL;
      m7 = mxCreateCharArray(2, iv55);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv29);
      emlrtAssign(&d_y, m7);
      c_st.site = &cr_emlrtRSI;
      d_st.site = &or_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &s_emlrtMCI), &t_emlrtMCI);
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
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i10 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i10, (int32_T)sizeof
                        (real_T), &wb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i10 = 0; i10 < loop_ub; i10++) {
        y->data[i10] = 0.0;
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
    i10 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                      &wb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      y->data[i10] = 0.0;
      tx_idx_0 = A->size[1];
      for (i11 = 0; i11 < tx_idx_0; i11++) {
        y->data[i10] += A->data[i10 + A->size[0] * i11] * control_p_x->data[i11];
      }
    }
  }

  iv56[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv56, 1, *(int32_T (*)[1])y->size, 1,
    &kb_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    ref->data[r17->data[i10]] = y->data[i10];
  }

  loop_ub = ref->size[0];
  i10 = r17->size[0];
  r17->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r17, i10, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r17->data[i10] = i10;
  }

  st.site = &uq_emlrtRSI;
  i10 = x->size[0];
  x->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i10, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = control_p_y->size[0] * control_p_y->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    x->data[i10] = control_p_y->data[i10];
  }

  b_st.site = &oe_emlrtRSI;
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
        m7 = mxCreateCharArray(2, iv57);
        for (i = 0; i < 21; i++) {
          cv27[i] = cv28[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv27);
        emlrtAssign(&e_y, m7);
        c_st.site = &dr_emlrtRSI;
        d_st.site = &pr_emlrtRSI;
        error(&c_st, message(&d_st, e_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      f_y = NULL;
      m7 = mxCreateCharArray(2, iv58);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv29);
      emlrtAssign(&f_y, m7);
      c_st.site = &cr_emlrtRSI;
      d_st.site = &or_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &s_emlrtMCI), &t_emlrtMCI);
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
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i10 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i10, (int32_T)sizeof
                        (real_T), &wb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i10 = 0; i10 < loop_ub; i10++) {
        y->data[i10] = 0.0;
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
    i10 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                      &wb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      y->data[i10] = 0.0;
      tx_idx_0 = A->size[1];
      for (i11 = 0; i11 < tx_idx_0; i11++) {
        y->data[i10] += A->data[i10 + A->size[0] * i11] * control_p_y->data[i11];
      }
    }
  }

  emxFree_real_T(&A);
  emxFree_real_T(&x);
  iv59[0] = r17->size[0];
  emlrtSubAssignSizeCheckR2012b(iv59, 1, *(int32_T (*)[1])y->size, 1,
    &lb_emlrtECI, sp);
  loop_ub = y->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    ref->data[r17->data[i10] + ref->size[0]] = y->data[i10];
  }

  emxFree_int32_T(&r17);
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
