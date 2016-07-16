/*
 * bspline.c
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "bspline.h"
#include "merging_emxutil.h"
#include "power.h"
#include "rdivide.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo de_emlrtRSI = { 12, "floor",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/floor.m" };

static emlrtRSInfo jq_emlrtRSI = { 15, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo kq_emlrtRSI = { 16, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo lq_emlrtRSI = { 17, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo mq_emlrtRSI = { 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo nq_emlrtRSI = { 23, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo oq_emlrtRSI = { 24, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo pq_emlrtRSI = { 25, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo qq_emlrtRSI = { 30, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo rq_emlrtRSI = { 31, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo sq_emlrtRSI = { 32, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo tq_emlrtRSI = { 39, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo uq_emlrtRSI = { 44, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo vq_emlrtRSI = { 54, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRSInfo wq_emlrtRSI = { 55, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 1, 18, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 15, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 16, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 17, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 18, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 20, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 27, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 39, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 43, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo p_emlrtECI = { -1, 17, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo q_emlrtECI = { -1, 18, 6, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo r_emlrtECI = { -1, 21, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo s_emlrtECI = { -1, 22, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo t_emlrtECI = { -1, 23, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo u_emlrtECI = { -1, 24, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo v_emlrtECI = { -1, 28, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo w_emlrtECI = { -1, 29, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo x_emlrtECI = { -1, 30, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo y_emlrtECI = { -1, 31, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 41, 13, "Ax", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 42, 13, "Ay", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 44, 26, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 44, 40, "x", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtRTEInfo sc_emlrtRTEI = { 44, 20, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 44, 55, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 44, 69, "y", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtRTEInfo tc_emlrtRTEI = { 44, 49, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 46, 7, "A", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtECInfo ab_emlrtECI = { -1, 46, 5, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo bb_emlrtECI = { -1, 54, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtECInfo cb_emlrtECI = { -1, 55, 1, "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m" };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 44, 18, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 44, 47, "param_matrix", "bspline",
  "F:/Git/correspondence/matlab_code/bspline.m", 0 };

/* Function Definitions */
void bspline(const emlrtStack *sp, const emxArray_real_T *src, const
             emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y,
             const real_T bound[2], emxArray_real_T *ref)
{
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *r15;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  int32_T i9;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  int32_T k;
  int32_T i10;
  emxArray_real_T *ty;
  emxArray_int32_T *r16;
  int32_T iv45[1];
  int32_T b_tx[1];
  int32_T iv46[1];
  emxArray_real_T *r17;
  int32_T iv47[1];
  emxArray_real_T *r18;
  int32_T iv48[1];
  emxArray_real_T *r19;
  uint32_T unnamed_idx_0;
  int32_T i11;
  int32_T i12;
  int32_T iv49[1];
  int32_T b_ty[1];
  int32_T iv50[1];
  emxArray_real_T *r20;
  int32_T iv51[1];
  emxArray_real_T *r21;
  int32_T iv52[1];
  emxArray_real_T *A;
  real_T b_y;
  int32_T i;
  emxArray_real_T *param_matrix;
  emxArray_real_T *b_param_matrix;
  real_T d1;
  int32_T iv53[2];
  boolean_T guard4 = FALSE;
  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 21 };

  const mxArray *m4;
  char_T cv23[21];
  static const char_T cv24[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *d_y;
  static const int32_T iv55[2] = { 1, 45 };

  char_T cv25[45];
  static const char_T cv26[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard3 = FALSE;
  int32_T b_control_p_x[1];
  emxArray_real_T c_control_p_x;
  int32_T iv56[1];
  boolean_T guard2 = FALSE;
  const mxArray *e_y;
  static const int32_T iv57[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv58[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T b_control_p_y[1];
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
  emxInit_real_T(sp, &Ax, 2, &nb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &ob_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &r15, 1, &ib_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_src, 1, &ib_emlrtRTEI, TRUE);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  loop_ub = src->size[0];
  i9 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_src->data[i9] = (src->data[i9] - bound[0]) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &jb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &ib_emlrtRTEI, TRUE);
  st.site = &jq_emlrtRSI;
  rdivide(&st, b_src, x);
  loop_ub = src->size[0];
  i9 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i9 = 0; i9 < loop_ub; i9++) {
    c_src->data[i9] = (src->data[i9 + src->size[0]] - bound[1]) + 1.0;
  }

  b_emxInit_real_T(sp, &y, 1, &kb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &tx, 1, &lb_emlrtRTEI, TRUE);
  st.site = &kq_emlrtRSI;
  rdivide(&st, c_src, y);
  st.site = &lq_emlrtRSI;
  i9 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)tx, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i9 = 0; i9 < loop_ub; i9++) {
    tx->data[i9] = x->data[i9];
  }

  for (k = 0; k < x->size[0]; k++) {
    b_st.site = &de_emlrtRSI;
    tx->data[k] = muDoubleScalarFloor(tx->data[k]);
  }

  i9 = x->size[0];
  i10 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i9, i10, &p_emlrtECI, sp);
  i9 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    tx->data[i9] = x->data[i9] - tx->data[i9];
  }

  b_emxInit_real_T(sp, &ty, 1, &mb_emlrtRTEI, TRUE);
  st.site = &mq_emlrtRSI;
  i9 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)ty, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ty->data[i9] = y->data[i9];
  }

  for (k = 0; k < y->size[0]; k++) {
    b_st.site = &de_emlrtRSI;
    ty->data[k] = muDoubleScalarFloor(ty->data[k]);
  }

  i9 = y->size[0];
  i10 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i9, i10, &q_emlrtECI, sp);
  i9 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ty->data[i9] = y->data[i9] - ty->data[i9];
  }

  k = tx->size[0];
  i9 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = k;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9] = 0.0;
  }

  emxInit_int32_T(sp, &r16, 1, &ib_emlrtRTEI, TRUE);
  k = tx->size[0];
  i9 = r16->size[0];
  r16->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < k; i9++) {
    r16->data[i9] = i9;
  }

  iv45[0] = r16->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv45, 1, b_tx, 1, &r_emlrtECI, sp);
  k = tx->size[0];
  for (i9 = 0; i9 < k; i9++) {
    Ax->data[r16->data[i9]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  iv46[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv46, 1, *(int32_T (*)[1])tx->size, 1,
    &s_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[r16->data[i9] + Ax->size[0]] = tx->data[i9];
  }

  loop_ub = Ax->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  b_emxInit_real_T(sp, &r17, 1, &ib_emlrtRTEI, TRUE);
  st.site = &nq_emlrtRSI;
  power(&st, tx, r17);
  i9 = r15->size[0];
  r15->size[0] = r17->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r17->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    r15->data[i9] = r17->data[i9];
  }

  emxFree_real_T(&r17);
  iv47[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv47, 1, *(int32_T (*)[1])r15->size, 1,
    &t_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[r16->data[i9] + (Ax->size[0] << 1)] = r15->data[i9];
  }

  loop_ub = Ax->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  b_emxInit_real_T(sp, &r18, 1, &ib_emlrtRTEI, TRUE);
  st.site = &oq_emlrtRSI;
  b_power(&st, tx, r18);
  i9 = r15->size[0];
  r15->size[0] = r18->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r18->size[0];
  emxFree_real_T(&tx);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r15->data[i9] = r18->data[i9];
  }

  emxFree_real_T(&r18);
  iv48[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv48, 1, *(int32_T (*)[1])r15->size, 1,
    &u_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[r16->data[i9] + Ax->size[0] * 3] = r15->data[i9];
  }

  emxInit_real_T(sp, &r19, 2, &ib_emlrtRTEI, TRUE);
  st.site = &pq_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i9 = Ax->size[0];
  i10 = r19->size[0] * r19->size[1];
  r19->size[0] = Ax->size[0];
  r19->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r19, i10, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r19->data[i10] = Ax->data[i10];
  }

  i10 = Ax->size[0];
  i11 = Ax->size[0];
  i12 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i12, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i12 = 0; i12 < loop_ub; i12++) {
    Ax->data[i12] = 0.0;
  }

  b_st.site = &ie_emlrtRSI;
  eml_xgemm(i9, r19, i10, Ax, i11);
  k = ty->size[0];
  i9 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = k;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9] = 0.0;
  }

  k = ty->size[0];
  i9 = r16->size[0];
  r16->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < k; i9++) {
    r16->data[i9] = i9;
  }

  iv49[0] = r16->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv49, 1, b_ty, 1, &v_emlrtECI, sp);
  k = ty->size[0];
  for (i9 = 0; i9 < k; i9++) {
    Ay->data[r16->data[i9]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  iv50[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv50, 1, *(int32_T (*)[1])ty->size, 1,
    &w_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[r16->data[i9] + Ay->size[0]] = ty->data[i9];
  }

  loop_ub = Ay->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  b_emxInit_real_T(sp, &r20, 1, &ib_emlrtRTEI, TRUE);
  st.site = &qq_emlrtRSI;
  power(&st, ty, r20);
  i9 = r15->size[0];
  r15->size[0] = r20->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r20->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    r15->data[i9] = r20->data[i9];
  }

  emxFree_real_T(&r20);
  iv51[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv51, 1, *(int32_T (*)[1])r15->size, 1,
    &x_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[r16->data[i9] + (Ay->size[0] << 1)] = r15->data[i9];
  }

  loop_ub = Ay->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  b_emxInit_real_T(sp, &r21, 1, &ib_emlrtRTEI, TRUE);
  st.site = &rq_emlrtRSI;
  b_power(&st, ty, r21);
  i9 = r15->size[0];
  r15->size[0] = r21->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r21->size[0];
  emxFree_real_T(&ty);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r15->data[i9] = r21->data[i9];
  }

  emxFree_real_T(&r21);
  iv52[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv52, 1, *(int32_T (*)[1])r15->size, 1,
    &y_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[r16->data[i9] + Ay->size[0] * 3] = r15->data[i9];
  }

  st.site = &sq_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i9 = Ay->size[0];
  i10 = r19->size[0] * r19->size[1];
  r19->size[0] = Ay->size[0];
  r19->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r19, i10, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r19->data[i10] = Ay->data[i10];
  }

  i10 = Ay->size[0];
  i11 = Ay->size[0];
  i12 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i12, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i12 = 0; i12 < loop_ub; i12++) {
    Ay->data[i12] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &pb_emlrtRTEI, TRUE);
  b_st.site = &ie_emlrtRSI;
  eml_xgemm(i9, r19, i10, Ay, i11);
  st.site = &tq_emlrtRSI;
  b_y = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  k = src->size[0];
  i9 = A->size[0] * A->size[1];
  A->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)A, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  i9 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)b_y;
  emxEnsureCapacity(sp, (emxArray__common *)A, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)b_y;
  emxFree_real_T(&r19);
  for (i9 = 0; i9 < loop_ub; i9++) {
    A->data[i9] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &qb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_param_matrix, 2, &qb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i9 = Ax->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &j_emlrtBCI, sp);
    i9 = Ay->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &k_emlrtBCI, sp);
    k = control_p_x->size[0];
    i9 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = k;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i9, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = control_p_x->size[1];
    i9 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i9, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      param_matrix->data[i9] = 0.0;
    }

    st.site = &uq_emlrtRSI;
    i9 = x->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &l_emlrtBCI, &st);
    b_st.site = &de_emlrtRSI;
    b_y = muDoubleScalarFloor(x->data[i]);
    st.site = &uq_emlrtRSI;
    i9 = x->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &m_emlrtBCI, &st);
    b_st.site = &de_emlrtRSI;
    if (b_y == muDoubleScalarFloor(x->data[i])) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &sc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &uq_emlrtRSI;
    i9 = y->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &n_emlrtBCI, &st);
    b_st.site = &de_emlrtRSI;
    d1 = muDoubleScalarFloor(y->data[i]);
    st.site = &uq_emlrtRSI;
    i9 = y->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &o_emlrtBCI, &st);
    b_st.site = &de_emlrtRSI;
    if (d1 == muDoubleScalarFloor(y->data[i])) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &tc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &uq_emlrtRSI;
    k = control_p_x->size[0];
    loop_ub = control_p_x->size[1];
    for (i9 = 0; i9 < 4; i9++) {
      for (i10 = 0; i10 < 4; i10++) {
        i11 = (int32_T)(b_y + (1.0 + (real_T)i9));
        i12 = (int32_T)(d1 + (1.0 + (real_T)i10));
        param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i11, 1, k,
          &q_emlrtBCI, sp) + param_matrix->size[0] *
                            (emlrtDynamicBoundsCheckFastR2012b(i12, 1, loop_ub,
          &r_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i9] *
          Ay->data[i + Ay->size[0] * i10];
      }
    }

    k = param_matrix->size[0] * param_matrix->size[1];
    i9 = b_param_matrix->size[0] * b_param_matrix->size[1];
    b_param_matrix->size[0] = 1;
    b_param_matrix->size[1] = k;
    emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i9, (int32_T)
                      sizeof(real_T), &ib_emlrtRTEI);
    for (i9 = 0; i9 < k; i9++) {
      b_param_matrix->data[b_param_matrix->size[0] * i9] = param_matrix->data[i9];
    }

    i9 = A->size[0];
    i10 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &p_emlrtBCI, sp);
    loop_ub = A->size[1];
    i9 = r16->size[0];
    r16->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                      &ib_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r16->data[i9] = i9;
    }

    iv53[0] = 1;
    iv53[1] = r16->size[0];
    emlrtSubAssignSizeCheckR2012b(iv53, 2, *(int32_T (*)[2])b_param_matrix->size,
      2, &ab_emlrtECI, sp);
    loop_ub = b_param_matrix->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      A->data[i + A->size[0] * r16->data[i9]] = b_param_matrix->
        data[b_param_matrix->size[0] * i9];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_param_matrix);
  emxFree_real_T(&param_matrix);
  emxFree_real_T(&y);
  emxFree_real_T(&x);
  k = src->size[0];
  i9 = ref->size[0] * ref->size[1];
  ref->size[0] = k;
  ref->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)ref, i9, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = src->size[0] << 1;
  for (i9 = 0; i9 < loop_ub; i9++) {
    ref->data[i9] = 0.0;
  }

  k = src->size[0];
  i9 = r16->size[0];
  r16->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < k; i9++) {
    r16->data[i9] = i9;
  }

  st.site = &vq_emlrtRSI;
  b_st.site = &df_emlrtRSI;
  k = control_p_x->size[0] * control_p_x->size[1];
  if (!(A->size[1] == k)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      k = control_p_x->size[0] * control_p_x->size[1];
      if (k == 1) {
        guard4 = TRUE;
      } else {
        c_y = NULL;
        m4 = mxCreateCharArray(2, iv54);
        for (i = 0; i < 21; i++) {
          cv23[i] = cv24[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m4, cv23);
        emlrtAssign(&c_y, m4);
        c_st.site = &rs_emlrtRSI;
        d_st.site = &ct_emlrtRSI;
        error(&c_st, message(&d_st, c_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      d_y = NULL;
      m4 = mxCreateCharArray(2, iv55);
      for (i = 0; i < 45; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m4, cv25);
      emlrtAssign(&d_y, m4);
      c_st.site = &qs_emlrtRSI;
      d_st.site = &bt_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    k = control_p_x->size[0] * control_p_x->size[1];
    if (k == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i9 = r15->size[0];
      r15->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        r15->data[i9] = 0.0;
      }

      b_control_p_x[0] = control_p_x->size[0] * control_p_x->size[1];
      c_control_p_x = *control_p_x;
      c_control_p_x.size = (int32_T *)&b_control_p_x;
      c_control_p_x.numDimensions = 1;
      b_st.site = &ie_emlrtRSI;
      d_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &c_control_p_x, A->
                  size[1], r15, A->size[0]);
    }
  }

  if (guard3 == TRUE) {
    i9 = r15->size[0];
    r15->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      r15->data[i9] = 0.0;
      k = A->size[1];
      for (i10 = 0; i10 < k; i10++) {
        r15->data[i9] += A->data[i9 + A->size[0] * i10] * control_p_x->data[i10];
      }
    }
  }

  iv56[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv56, 1, *(int32_T (*)[1])r15->size, 1,
    &bb_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ref->data[r16->data[i9]] = r15->data[i9];
  }

  loop_ub = ref->size[0];
  i9 = r16->size[0];
  r16->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r16, i9, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    r16->data[i9] = i9;
  }

  st.site = &wq_emlrtRSI;
  b_st.site = &df_emlrtRSI;
  k = control_p_y->size[0] * control_p_y->size[1];
  if (!(A->size[1] == k)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      k = control_p_y->size[0] * control_p_y->size[1];
      if (k == 1) {
        guard2 = TRUE;
      } else {
        e_y = NULL;
        m4 = mxCreateCharArray(2, iv57);
        for (i = 0; i < 21; i++) {
          cv23[i] = cv24[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m4, cv23);
        emlrtAssign(&e_y, m4);
        c_st.site = &rs_emlrtRSI;
        d_st.site = &ct_emlrtRSI;
        error(&c_st, message(&d_st, e_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      f_y = NULL;
      m4 = mxCreateCharArray(2, iv58);
      for (i = 0; i < 45; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m4, cv25);
      emlrtAssign(&f_y, m4);
      c_st.site = &qs_emlrtRSI;
      d_st.site = &bt_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    k = control_p_y->size[0] * control_p_y->size[1];
    if (k == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i9 = r15->size[0];
      r15->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        r15->data[i9] = 0.0;
      }

      b_control_p_y[0] = control_p_y->size[0] * control_p_y->size[1];
      c_control_p_x = *control_p_y;
      c_control_p_x.size = (int32_T *)&b_control_p_y;
      c_control_p_x.numDimensions = 1;
      b_st.site = &ie_emlrtRSI;
      d_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &c_control_p_x, A->
                  size[1], r15, A->size[0]);
    }
  }

  if (guard1 == TRUE) {
    i9 = r15->size[0];
    r15->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r15, i9, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      r15->data[i9] = 0.0;
      k = A->size[1];
      for (i10 = 0; i10 < k; i10++) {
        r15->data[i9] += A->data[i9 + A->size[0] * i10] * control_p_y->data[i10];
      }
    }
  }

  emxFree_real_T(&A);
  iv59[0] = r16->size[0];
  emlrtSubAssignSizeCheckR2012b(iv59, 1, *(int32_T (*)[1])r15->size, 1,
    &cb_emlrtECI, sp);
  loop_ub = r15->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ref->data[r16->data[i9] + ref->size[0]] = r15->data[i9];
  }

  emxFree_int32_T(&r16);
  emxFree_real_T(&r15);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda,
                 const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
                 int32_T ldc)
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
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  if ((m < 1) || (k < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(m);
    n_t = (ptrdiff_t)(1);
    k_t = (ptrdiff_t)(k);
    lda_t = (ptrdiff_t)(lda);
    ldb_t = (ptrdiff_t)(ldb);
    ldc_t = (ptrdiff_t)(ldc);
    alpha1_t = (double *)(&alpha1);
    Aia0_t = (double *)(&A->data[0]);
    Bib0_t = (double *)(&B->data[0]);
    beta1_t = (double *)(&beta1);
    Cic0_t = (double *)(&C->data[0]);
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
          &ldb_t, beta1_t, Cic0_t, &ldc_t);
  }
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
