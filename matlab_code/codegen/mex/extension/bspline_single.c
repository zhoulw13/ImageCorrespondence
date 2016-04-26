/*
 * bspline_single.c
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Mon Apr 25 21:25:51 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "bspline_single.h"
#include "rdivide.h"
#include "floor.h"
#include "power.h"
#include "extension_emxutil.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo se_emlrtRSI = { 74, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo sj_emlrtRSI = { 14, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo tj_emlrtRSI = { 15, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo uj_emlrtRSI = { 16, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo vj_emlrtRSI = { 17, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo wj_emlrtRSI = { 22, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo xj_emlrtRSI = { 23, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo yj_emlrtRSI = { 24, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo ak_emlrtRSI = { 30, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo bk_emlrtRSI = { 31, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo ck_emlrtRSI = { 32, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo dk_emlrtRSI = { 38, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo ek_emlrtRSI = { 39, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo fk_emlrtRSI = { 40, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo gk_emlrtRSI = { 46, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo hk_emlrtRSI = { 47, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo ik_emlrtRSI = { 48, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo jk_emlrtRSI = { 55, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo kk_emlrtRSI = { 56, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo lk_emlrtRSI = { 76, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo mk_emlrtRSI = { 91, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo nk_emlrtRSI = { 100, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo ok_emlrtRSI = { 101, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRSInfo pk_emlrtRSI = { 58, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRSInfo qk_emlrtRSI = { 31, "eml_xdotu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRSInfo rk_emlrtRSI = { 28, "eml_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 1, 18, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo db_emlrtRTEI = { 55, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 56, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 58, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 12, 16, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 13, 17, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 14, 12, "src", "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 15, 12, "src", "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtRTEInfo dd_emlrtRTEI = { 76, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo ed_emlrtRTEI = { 76, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo fd_emlrtRTEI = { 91, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtRTEInfo gd_emlrtRTEI = { 91, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtECInfo n_emlrtECI = { -1, 78, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtECInfo o_emlrtECI = { -1, 93, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code/bspline_single.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 76, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 76, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 91, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 91, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code/bspline_single.m", 0 };

/* Function Definitions */
void b_bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const
                      emxArray_real_T *control_p_x, const emxArray_real_T
                      *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  int32_T i10;
  real_T x;
  real_T y;
  real_T d4;
  real_T tx;
  real_T ty;
  real_T Ax_d[4];
  real_T b_Ax_d[4];
  int32_T i11;
  static const real_T b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  real_T Ay[4];
  emxArray_real_T *Au;
  int32_T i;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  int32_T control_p_x_idx_1;
  real_T d5;
  int32_T i12;
  int32_T i13;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r4;
  int32_T iv26[2];
  int32_T iv27[2];
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv28[2] = { 1, 21 };

  const mxArray *m6;
  char_T cv18[21];
  static const char_T cv19[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv29[2] = { 1, 45 };

  char_T cv20[45];
  static const char_T cv21[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard3 = FALSE;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  boolean_T guard2 = FALSE;
  const mxArray *d_y;
  static const int32_T iv30[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv31[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  i10 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &n_emlrtBCI, sp);
  i10 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i10, &o_emlrtBCI, sp);
  i10 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &p_emlrtBCI, sp);
  st.site = &sj_emlrtRSI;
  x = rdivide((src->data[0] - bound->data[0]) + 1.0, 30.0);
  i10 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i10, &q_emlrtBCI, sp);
  st.site = &tj_emlrtRSI;
  y = rdivide((src->data[src->size[0]] - bound->data[bound->size[0]]) + 1.0,
              30.0);
  d4 = x;
  st.site = &uj_emlrtRSI;
  b_floor(&d4);
  tx = x - d4;
  d4 = y;
  st.site = &vj_emlrtRSI;
  b_floor(&d4);
  ty = y - d4;
  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  st.site = &ak_emlrtRSI;
  Ax_d[2] = 2.0 * tx;
  st.site = &bk_emlrtRSI;
  tx = c_power(tx);
  st.site = &bk_emlrtRSI;
  Ax_d[3] = 3.0 * tx;
  st.site = &ck_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  d_st.site = &we_emlrtRSI;
  st.site = &ck_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    d4 = 0.0;
    for (i11 = 0; i11 < 4; i11++) {
      d4 += Ax_d[i11] * b[i11 + (i10 << 2)];
    }

    b_Ax_d[i10] = d4 / 30.0;
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ax_d[i10] = b_Ax_d[i10];
  }

  Ay[0] = 1.0;
  Ay[1] = ty;
  st.site = &dk_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  c_st.site = &re_emlrtRSI;
  d_st.site = &se_emlrtRSI;
  Ay[2] = ty * ty;
  st.site = &ek_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  c_st.site = &re_emlrtRSI;
  Ay[3] = muDoubleScalarPower(ty, 3.0);
  st.site = &fk_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  d_st.site = &we_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    b_Ax_d[i10] = 0.0;
    for (i11 = 0; i11 < 4; i11++) {
      b_Ax_d[i10] += Ay[i11] * b[i11 + (i10 << 2)];
    }
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ay[i10] = b_Ax_d[i10];
  }

  emxInit_real_T(&d_st, &Au, 2, &db_emlrtRTEI, TRUE);
  st.site = &jk_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i10, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)tx;
  for (i10 = 0; i10 < i; i10++) {
    Au->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &eb_emlrtRTEI, TRUE);
  st.site = &kk_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i10, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)ty;
  for (i10 = 0; i10 < i; i10++) {
    Av->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d4 = muDoubleScalarFloor(x);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d4 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d5 = muDoubleScalarFloor(y);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d5 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ed_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (i11 = 0; i11 < 4; i11++) {
      i12 = (int32_T)(d4 + (1.0 + (real_T)i10));
      i13 = (int32_T)(d5 + (1.0 + (real_T)i11));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i12, 1, i,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1,
        control_p_x_idx_1, &s_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[i11];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  emxInit_int32_T(sp, &r4, 1, &cb_emlrtRTEI, TRUE);
  i = (int32_T)tx;
  i10 = r4->size[0];
  r4->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r4, i10, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    r4->data[i10] = i10;
  }

  iv26[0] = 1;
  iv26[1] = r4->size[0];
  emlrtSubAssignSizeCheckR2012b(iv26, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &n_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i10 = 0; i10 < i; i10++) {
    Au->data[Au->size[0] * r4->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  i = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d4 = muDoubleScalarFloor(x);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d4 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &fd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d5 = muDoubleScalarFloor(y);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d5 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (i11 = 0; i11 < 4; i11++) {
      i12 = (int32_T)(d4 + (1.0 + (real_T)i10));
      i13 = (int32_T)(d5 + (1.0 + (real_T)i11));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i12, 1, i,
        &t_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1,
        control_p_x_idx_1, &u_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[i11];
    }
  }

  i = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  emxFree_real_T(&param_matrix);
  i = (int32_T)ty;
  i10 = r4->size[0];
  r4->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r4, i10, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    r4->data[i10] = i10;
  }

  iv27[0] = 1;
  iv27[1] = r4->size[0];
  emlrtSubAssignSizeCheckR2012b(iv27, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &o_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i10 = 0; i10 < i; i10++) {
    Av->data[Av->size[0] * r4->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  emxFree_int32_T(&r4);
  emxFree_real_T(&b_param_matrix);
  b_emxInit_real_T(sp, &b_b, 1, &cb_emlrtRTEI, TRUE);
  st.site = &nk_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    b_b->data[i10] = control_p_x->data[i10];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_x->size[0] * control_p_x->size[1];
  if (!(Au->size[1] == i)) {
    guard4 = FALSE;
    if (Au->size[1] == 1) {
      guard4 = TRUE;
    } else {
      i = control_p_x->size[0] * control_p_x->size[1];
      if (i == 1) {
        guard4 = TRUE;
      } else {
        b_y = NULL;
        m6 = mxCreateCharArray(2, iv28);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv18);
        emlrtAssign(&b_y, m6);
        c_st.site = &ox_emlrtRSI;
        e_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&e_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv29);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv20);
      emlrtAssign(&c_y, m6);
      c_st.site = &nx_emlrtRSI;
      e_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&e_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (Au->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i = control_p_x->size[0] * control_p_x->size[1];
    if (i == 1) {
      guard3 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      d_st.site = &rk_emlrtRSI;
      if (Au->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Au->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Au->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard3 == TRUE) {
    y = 0.0;
    for (i10 = 0; i10 < Au->size[1]; i10++) {
      y += Au->data[Au->size[0] * i10] * control_p_x->data[i10];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  st.site = &ok_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_y->size[0] * control_p_y->size[1];
  for (i10 = 0; i10 < i; i10++) {
    b_b->data[i10] = control_p_y->data[i10];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_y->size[0] * control_p_y->size[1];
  if (!(Av->size[1] == i)) {
    guard2 = FALSE;
    if (Av->size[1] == 1) {
      guard2 = TRUE;
    } else {
      i = control_p_y->size[0] * control_p_y->size[1];
      if (i == 1) {
        guard2 = TRUE;
      } else {
        d_y = NULL;
        m6 = mxCreateCharArray(2, iv30);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv18);
        emlrtAssign(&d_y, m6);
        c_st.site = &ox_emlrtRSI;
        e_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&e_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m6 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv20);
      emlrtAssign(&e_y, m6);
      c_st.site = &nx_emlrtRSI;
      e_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&e_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i = control_p_y->size[0] * control_p_y->size[1];
    if (i == 1) {
      guard1 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      d_st.site = &rk_emlrtRSI;
      if (Av->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Av->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Av->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i10 = 0; i10 < Av->size[1]; i10++) {
      y += Av->data[Av->size[0] * i10] * control_p_y->data[i10];
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&Av);
  ref[1] = y;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const
                    emxArray_real_T *control_p_x, const emxArray_real_T
                    *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  emxArray_real_T *Au;
  int32_T i6;
  real_T x;
  real_T y;
  real_T d1;
  real_T tx;
  real_T ty;
  real_T Ax[4];
  real_T Ax_d[4];
  real_T Ay[4];
  real_T Ay_d[4];
  int32_T i;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  int32_T control_p_x_idx_1;
  real_T d2;
  real_T b_Ax_d[4];
  real_T d3;
  int32_T i7;
  static const real_T b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  real_T b_Ay[4];
  int32_T i8;
  int32_T i9;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r3;
  int32_T iv20[2];
  int32_T iv21[2];
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 21 };

  const mxArray *m5;
  char_T cv14[21];
  static const char_T cv15[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv23[2] = { 1, 45 };

  char_T cv16[45];
  static const char_T cv17[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard3 = FALSE;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  boolean_T guard2 = FALSE;
  const mxArray *d_y;
  static const int32_T iv24[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv25[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
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
  emxInit_real_T(sp, &Au, 2, &db_emlrtRTEI, TRUE);

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  i6 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &n_emlrtBCI, sp);
  i6 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i6, &o_emlrtBCI, sp);
  i6 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &p_emlrtBCI, sp);
  st.site = &sj_emlrtRSI;
  x = rdivide((src->data[0] - bound->data[0]) + 1.0, 30.0);
  i6 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i6, &q_emlrtBCI, sp);
  st.site = &tj_emlrtRSI;
  y = rdivide((src->data[src->size[0]] - bound->data[bound->size[0]]) + 1.0,
              30.0);
  d1 = x;
  st.site = &uj_emlrtRSI;
  b_floor(&d1);
  tx = x - d1;
  d1 = y;
  st.site = &vj_emlrtRSI;
  b_floor(&d1);
  ty = y - d1;
  Ax[0] = 1.0;
  Ax[1] = tx;
  st.site = &wj_emlrtRSI;
  Ax[2] = c_power(tx);
  st.site = &xj_emlrtRSI;
  Ax[3] = d_power(tx);
  st.site = &yj_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  st.site = &ak_emlrtRSI;
  Ax_d[2] = 2.0 * tx;
  st.site = &bk_emlrtRSI;
  tx = c_power(tx);
  st.site = &bk_emlrtRSI;
  Ax_d[3] = 3.0 * tx;
  st.site = &ck_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  st.site = &ck_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  Ay[0] = 1.0;
  Ay[1] = ty;
  st.site = &dk_emlrtRSI;
  Ay[2] = c_power(ty);
  st.site = &ek_emlrtRSI;
  Ay[3] = d_power(ty);
  st.site = &fk_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  Ay_d[0] = 0.0;
  Ay_d[1] = 1.0;
  st.site = &gk_emlrtRSI;
  Ay_d[2] = 2.0 * ty;
  st.site = &hk_emlrtRSI;
  tx = c_power(ty);
  st.site = &hk_emlrtRSI;
  Ay_d[3] = 3.0 * tx;
  st.site = &ik_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  st.site = &ik_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  st.site = &jk_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i6 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i6, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)tx;
  for (i6 = 0; i6 < i; i6++) {
    Au->data[i6] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &eb_emlrtRTEI, TRUE);
  st.site = &kk_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i6 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i6, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)ty;
  for (i6 = 0; i6 < i; i6++) {
    Av->data[i6] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = control_p_x->size[0];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i6 = 0; i6 < i; i6++) {
    param_matrix->data[i6] = 0.0;
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d1 = muDoubleScalarFloor(x);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d1 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d2 = muDoubleScalarFloor(y);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d2 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ed_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i6 = 0; i6 < 4; i6++) {
    d3 = 0.0;
    for (i7 = 0; i7 < 4; i7++) {
      d3 += Ax_d[i7] * b[i7 + (i6 << 2)];
    }

    b_Ax_d[i6] = d3 / 30.0;
  }

  for (i6 = 0; i6 < 4; i6++) {
    b_Ay[i6] = 0.0;
    for (i7 = 0; i7 < 4; i7++) {
      b_Ay[i6] += Ay[i7] * b[i7 + (i6 << 2)];
    }
  }

  for (i6 = 0; i6 < 4; i6++) {
    for (i7 = 0; i7 < 4; i7++) {
      i8 = (int32_T)(d1 + (1.0 + (real_T)i6));
      i9 = (int32_T)(d2 + (1.0 + (real_T)i7));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i8, 1, i,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i9, 1,
        control_p_x_idx_1, &s_emlrtBCI, sp) - 1)) - 1] = b_Ax_d[i6] * b_Ay[i7];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = param_matrix->size[0] * param_matrix->size[1];
  i6 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i6 = 0; i6 < i; i6++) {
    b_param_matrix->data[b_param_matrix->size[0] * i6] = param_matrix->data[i6];
  }

  emxInit_int32_T(sp, &r3, 1, &cb_emlrtRTEI, TRUE);
  i = (int32_T)tx;
  i6 = r3->size[0];
  r3->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i6, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i6 = 0; i6 < i; i6++) {
    r3->data[i6] = i6;
  }

  iv20[0] = 1;
  iv20[1] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv20, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &n_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i6 = 0; i6 < i; i6++) {
    Au->data[Au->size[0] * r3->data[i6]] = b_param_matrix->data
      [b_param_matrix->size[0] * i6];
  }

  i = control_p_x->size[0];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i6 = 0; i6 < i; i6++) {
    param_matrix->data[i6] = 0.0;
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d1 = muDoubleScalarFloor(x);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d1 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &fd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d2 = muDoubleScalarFloor(y);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d2 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i6 = 0; i6 < 4; i6++) {
    b_Ay[i6] = 0.0;
    for (i7 = 0; i7 < 4; i7++) {
      b_Ay[i6] += Ax[i7] * b[i7 + (i6 << 2)];
    }
  }

  for (i6 = 0; i6 < 4; i6++) {
    d3 = 0.0;
    for (i7 = 0; i7 < 4; i7++) {
      d3 += Ay_d[i7] * b[i7 + (i6 << 2)];
    }

    Ax_d[i6] = d3 / 30.0;
  }

  for (i6 = 0; i6 < 4; i6++) {
    for (i7 = 0; i7 < 4; i7++) {
      i8 = (int32_T)(d1 + (1.0 + (real_T)i6));
      i9 = (int32_T)(d2 + (1.0 + (real_T)i7));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i8, 1, i,
        &t_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i9, 1,
        control_p_x_idx_1, &u_emlrtBCI, sp) - 1)) - 1] = b_Ay[i6] * Ax_d[i7];
    }
  }

  i = param_matrix->size[0] * param_matrix->size[1];
  i6 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i6, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i6 = 0; i6 < i; i6++) {
    b_param_matrix->data[b_param_matrix->size[0] * i6] = param_matrix->data[i6];
  }

  emxFree_real_T(&param_matrix);
  i = (int32_T)ty;
  i6 = r3->size[0];
  r3->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i6, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i6 = 0; i6 < i; i6++) {
    r3->data[i6] = i6;
  }

  iv21[0] = 1;
  iv21[1] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv21, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &o_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i6 = 0; i6 < i; i6++) {
    Av->data[Av->size[0] * r3->data[i6]] = b_param_matrix->data
      [b_param_matrix->size[0] * i6];
  }

  emxFree_int32_T(&r3);
  emxFree_real_T(&b_param_matrix);
  b_emxInit_real_T(sp, &b_b, 1, &cb_emlrtRTEI, TRUE);
  st.site = &nk_emlrtRSI;
  i6 = b_b->size[0];
  b_b->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i6, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i6 = 0; i6 < i; i6++) {
    b_b->data[i6] = control_p_x->data[i6];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_x->size[0] * control_p_x->size[1];
  if (!(Au->size[1] == i)) {
    guard4 = FALSE;
    if (Au->size[1] == 1) {
      guard4 = TRUE;
    } else {
      i = control_p_x->size[0] * control_p_x->size[1];
      if (i == 1) {
        guard4 = TRUE;
      } else {
        b_y = NULL;
        m5 = mxCreateCharArray(2, iv22);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv14);
        emlrtAssign(&b_y, m5);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv23);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&c_y, m5);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (Au->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i = control_p_x->size[0] * control_p_x->size[1];
    if (i == 1) {
      guard3 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      if (Au->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Au->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Au->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard3 == TRUE) {
    y = 0.0;
    for (i6 = 0; i6 < Au->size[1]; i6++) {
      y += Au->data[Au->size[0] * i6] * control_p_x->data[i6];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  st.site = &ok_emlrtRSI;
  i6 = b_b->size[0];
  b_b->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i6, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_y->size[0] * control_p_y->size[1];
  for (i6 = 0; i6 < i; i6++) {
    b_b->data[i6] = control_p_y->data[i6];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_y->size[0] * control_p_y->size[1];
  if (!(Av->size[1] == i)) {
    guard2 = FALSE;
    if (Av->size[1] == 1) {
      guard2 = TRUE;
    } else {
      i = control_p_y->size[0] * control_p_y->size[1];
      if (i == 1) {
        guard2 = TRUE;
      } else {
        d_y = NULL;
        m5 = mxCreateCharArray(2, iv24);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv14);
        emlrtAssign(&d_y, m5);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m5 = mxCreateCharArray(2, iv25);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&e_y, m5);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i = control_p_y->size[0] * control_p_y->size[1];
    if (i == 1) {
      guard1 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      if (Av->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Av->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Av->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i6 = 0; i6 < Av->size[1]; i6++) {
      y += Av->data[Av->size[0] * i6] * control_p_y->data[i6];
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&Av);
  ref[1] = y;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_bspline_single(const emlrtStack *sp, const emxArray_real_T *src, const
                      emxArray_real_T *control_p_x, const emxArray_real_T
                      *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  int32_T i14;
  real_T x;
  real_T y;
  real_T tx;
  real_T ty;
  real_T Ax[4];
  real_T b_Ax[4];
  int32_T i15;
  static const real_T b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  real_T Ay_d[4];
  emxArray_real_T *Au;
  int32_T i;
  emxArray_real_T *Av;
  real_T b_y;
  emxArray_real_T *param_matrix;
  int32_T control_p_x_idx_1;
  real_T d6;
  int32_T i16;
  int32_T i17;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r5;
  int32_T iv32[2];
  int32_T iv33[2];
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *c_y;
  static const int32_T iv34[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv22[21];
  static const char_T cv23[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *d_y;
  static const int32_T iv35[2] = { 1, 45 };

  char_T cv24[45];
  static const char_T cv25[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard3 = FALSE;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  boolean_T guard2 = FALSE;
  const mxArray *e_y;
  static const int32_T iv36[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv37[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
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

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  i14 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i14, &n_emlrtBCI, sp);
  i14 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i14, &o_emlrtBCI, sp);
  i14 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i14, &p_emlrtBCI, sp);
  st.site = &sj_emlrtRSI;
  x = rdivide((src->data[0] - bound->data[0]) + 1.0, 30.0);
  i14 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i14, &q_emlrtBCI, sp);
  st.site = &tj_emlrtRSI;
  y = rdivide((src->data[src->size[0]] - bound->data[bound->size[0]]) + 1.0,
              30.0);
  tx = x;
  st.site = &uj_emlrtRSI;
  b_floor(&tx);
  tx = x - tx;
  st.site = &vj_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  ty = y - muDoubleScalarFloor(y);
  Ax[0] = 1.0;
  Ax[1] = tx;
  st.site = &wj_emlrtRSI;
  Ax[2] = c_power(tx);
  st.site = &xj_emlrtRSI;
  Ax[3] = d_power(tx);
  st.site = &yj_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  for (i14 = 0; i14 < 4; i14++) {
    b_Ax[i14] = 0.0;
    for (i15 = 0; i15 < 4; i15++) {
      b_Ax[i14] += Ax[i15] * b[i15 + (i14 << 2)];
    }
  }

  for (i14 = 0; i14 < 4; i14++) {
    Ax[i14] = b_Ax[i14];
  }

  Ay_d[0] = 0.0;
  Ay_d[1] = 1.0;
  st.site = &gk_emlrtRSI;
  Ay_d[2] = 2.0 * ty;
  st.site = &hk_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  c_st.site = &re_emlrtRSI;
  st.site = &hk_emlrtRSI;
  Ay_d[3] = 3.0 * (ty * ty);
  st.site = &ik_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  c_st.site = &ue_emlrtRSI;
  st.site = &ik_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  for (i14 = 0; i14 < 4; i14++) {
    tx = 0.0;
    for (i15 = 0; i15 < 4; i15++) {
      tx += Ay_d[i15] * b[i15 + (i14 << 2)];
    }

    b_Ax[i14] = tx / 30.0;
  }

  for (i14 = 0; i14 < 4; i14++) {
    Ay_d[i14] = b_Ax[i14];
  }

  emxInit_real_T(&c_st, &Au, 2, &db_emlrtRTEI, TRUE);
  st.site = &jk_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i14 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i14, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)ty;
  for (i14 = 0; i14 < i; i14++) {
    Au->data[i14] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &eb_emlrtRTEI, TRUE);
  st.site = &kk_emlrtRSI;
  b_y = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i14 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)b_y;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i14, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = (int32_T)b_y;
  for (i14 = 0; i14 < i; i14++) {
    Av->data[i14] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = control_p_x->size[0];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    param_matrix->data[i14] = 0.0;
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  tx = muDoubleScalarFloor(x);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (tx == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d6 = muDoubleScalarFloor(y);
  st.site = &lk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d6 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ed_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &lk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i14 = 0; i14 < 4; i14++) {
    for (i15 = 0; i15 < 4; i15++) {
      i16 = (int32_T)(tx + (1.0 + (real_T)i14));
      i17 = (int32_T)(d6 + (1.0 + (real_T)i15));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i16, 1, i,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i17, 1,
        control_p_x_idx_1, &s_emlrtBCI, sp) - 1)) - 1] = Ax[i14] * Ay_d[i15];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &fb_emlrtRTEI, TRUE);
  i = param_matrix->size[0] * param_matrix->size[1];
  i14 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    b_param_matrix->data[b_param_matrix->size[0] * i14] = param_matrix->data[i14];
  }

  emxInit_int32_T(sp, &r5, 1, &cb_emlrtRTEI, TRUE);
  i = (int32_T)ty;
  i14 = r5->size[0];
  r5->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r5, i14, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    r5->data[i14] = i14;
  }

  iv32[0] = 1;
  iv32[1] = r5->size[0];
  emlrtSubAssignSizeCheckR2012b(iv32, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &n_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i14 = 0; i14 < i; i14++) {
    Au->data[Au->size[0] * r5->data[i14]] = b_param_matrix->data
      [b_param_matrix->size[0] * i14];
  }

  i = control_p_x->size[0];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    param_matrix->data[i14] = 0.0;
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  tx = muDoubleScalarFloor(x);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (tx == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &fd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  d6 = muDoubleScalarFloor(y);
  st.site = &mk_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (d6 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &mk_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i14 = 0; i14 < 4; i14++) {
    for (i15 = 0; i15 < 4; i15++) {
      i16 = (int32_T)(tx + (1.0 + (real_T)i14));
      i17 = (int32_T)(d6 + (1.0 + (real_T)i15));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i16, 1, i,
        &t_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i17, 1,
        control_p_x_idx_1, &u_emlrtBCI, sp) - 1)) - 1] = Ax[i14] * Ay_d[i15];
    }
  }

  i = param_matrix->size[0] * param_matrix->size[1];
  i14 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i14, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    b_param_matrix->data[b_param_matrix->size[0] * i14] = param_matrix->data[i14];
  }

  emxFree_real_T(&param_matrix);
  i = (int32_T)b_y;
  i14 = r5->size[0];
  r5->size[0] = (int32_T)b_y;
  emxEnsureCapacity(sp, (emxArray__common *)r5, i14, (int32_T)sizeof(int32_T),
                    &cb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    r5->data[i14] = i14;
  }

  iv33[0] = 1;
  iv33[1] = r5->size[0];
  emlrtSubAssignSizeCheckR2012b(iv33, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &o_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i14 = 0; i14 < i; i14++) {
    Av->data[Av->size[0] * r5->data[i14]] = b_param_matrix->data
      [b_param_matrix->size[0] * i14];
  }

  emxFree_int32_T(&r5);
  emxFree_real_T(&b_param_matrix);
  b_emxInit_real_T(sp, &b_b, 1, &cb_emlrtRTEI, TRUE);
  st.site = &nk_emlrtRSI;
  i14 = b_b->size[0];
  b_b->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i14, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    b_b->data[i14] = control_p_x->data[i14];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_x->size[0] * control_p_x->size[1];
  if (!(Au->size[1] == i)) {
    guard4 = FALSE;
    if (Au->size[1] == 1) {
      guard4 = TRUE;
    } else {
      i = control_p_x->size[0] * control_p_x->size[1];
      if (i == 1) {
        guard4 = TRUE;
      } else {
        c_y = NULL;
        m7 = mxCreateCharArray(2, iv34);
        for (i = 0; i < 21; i++) {
          cv22[i] = cv23[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv22);
        emlrtAssign(&c_y, m7);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, c_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      d_y = NULL;
      m7 = mxCreateCharArray(2, iv35);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv24);
      emlrtAssign(&d_y, m7);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (Au->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i = control_p_x->size[0] * control_p_x->size[1];
    if (i == 1) {
      guard3 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      if (Au->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Au->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Au->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard3 == TRUE) {
    y = 0.0;
    for (i14 = 0; i14 < Au->size[1]; i14++) {
      y += Au->data[Au->size[0] * i14] * control_p_x->data[i14];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  st.site = &ok_emlrtRSI;
  i14 = b_b->size[0];
  b_b->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i14, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  i = control_p_y->size[0] * control_p_y->size[1];
  for (i14 = 0; i14 < i; i14++) {
    b_b->data[i14] = control_p_y->data[i14];
  }

  b_st.site = &of_emlrtRSI;
  i = control_p_y->size[0] * control_p_y->size[1];
  if (!(Av->size[1] == i)) {
    guard2 = FALSE;
    if (Av->size[1] == 1) {
      guard2 = TRUE;
    } else {
      i = control_p_y->size[0] * control_p_y->size[1];
      if (i == 1) {
        guard2 = TRUE;
      } else {
        e_y = NULL;
        m7 = mxCreateCharArray(2, iv36);
        for (i = 0; i < 21; i++) {
          cv22[i] = cv23[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv22);
        emlrtAssign(&e_y, m7);
        c_st.site = &ox_emlrtRSI;
        d_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&d_st, e_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      f_y = NULL;
      m7 = mxCreateCharArray(2, iv37);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv24);
      emlrtAssign(&f_y, m7);
      c_st.site = &nx_emlrtRSI;
      d_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&d_st, f_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i = control_p_y->size[0] * control_p_y->size[1];
    if (i == 1) {
      guard1 = TRUE;
    } else {
      b_st.site = &pk_emlrtRSI;
      c_st.site = &qk_emlrtRSI;
      if (Av->size[1] < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)(Av->size[1]);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(1);
        xix0_t = (double *)(&Av->data[0]);
        yiy0_t = (double *)(&b_b->data[0]);
        y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i14 = 0; i14 < Av->size[1]; i14++) {
      y += Av->data[Av->size[0] * i14] * control_p_y->data[i14];
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&Av);
  ref[1] = y;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_single.c) */
