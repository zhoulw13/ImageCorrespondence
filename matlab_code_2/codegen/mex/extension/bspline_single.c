/*
 * bspline_single.c
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "bspline_single.h"
#include "rdivide.h"
#include "power.h"
#include "floor.h"
#include "extension_emxutil.h"
#include "repmat.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo uh_emlrtRSI = { 21, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo hj_emlrtRSI = { 14, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ij_emlrtRSI = { 15, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo jj_emlrtRSI = { 16, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo kj_emlrtRSI = { 17, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo lj_emlrtRSI = { 30, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo mj_emlrtRSI = { 31, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo nj_emlrtRSI = { 32, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo oj_emlrtRSI = { 38, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo pj_emlrtRSI = { 39, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo qj_emlrtRSI = { 40, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo rj_emlrtRSI = { 55, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo sj_emlrtRSI = { 56, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo tj_emlrtRSI = { 76, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo uj_emlrtRSI = { 91, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo vj_emlrtRSI = { 109, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo wj_emlrtRSI = { 110, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo xj_emlrtRSI = { 112, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo yj_emlrtRSI = { 118, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ak_emlrtRSI = { 79, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ck_emlrtRSI = { 282, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo dk_emlrtRSI = { 283, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ek_emlrtRSI = { 289, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo fk_emlrtRSI = { 290, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo gk_emlrtRSI = { 291, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo hk_emlrtRSI = { 292, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ik_emlrtRSI = { 296, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo jk_emlrtRSI = { 299, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo kk_emlrtRSI = { 293, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo lk_emlrtRSI = { 294, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo mk_emlrtRSI = { 297, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo nk_emlrtRSI = { 300, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ok_emlrtRSI = { 301, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo xk_emlrtRSI = { 58, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRSInfo yk_emlrtRSI = { 31, "eml_xdotu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRSInfo al_emlrtRSI = { 28, "eml_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

static emlrtRSInfo kl_emlrtRSI = { 22, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ll_emlrtRSI = { 23, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ml_emlrtRSI = { 24, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo nl_emlrtRSI = { 46, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ol_emlrtRSI = { 47, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo pl_emlrtRSI = { 48, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ql_emlrtRSI = { 115, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo rl_emlrtRSI = { 121, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 1, 18, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 284, 1, "colon",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo db_emlrtRTEI = { 55, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 56, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 58, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 105, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo n_emlrtECI = { -1, 93, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo o_emlrtECI = { -1, 78, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo p_emlrtECI = { 2, 110, 13, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo q_emlrtECI = { 2, 109, 13, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo hd_emlrtRTEI = { 91, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo id_emlrtRTEI = { 91, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo jd_emlrtRTEI = { 76, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo kd_emlrtRTEI = { 76, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 13, 17, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 12, 16, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 76, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 76, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 91, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 91, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

/* Function Definitions */
void b_bspline_single(const emlrtStack *sp, const real_T src[2], const
                      emxArray_real_T *control_p_x, const emxArray_real_T
                      *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  int32_T i12;
  real_T x;
  real_T y;
  real_T d5;
  real_T tx;
  real_T ty;
  real_T Ax[4];
  real_T b_Ax[4];
  int32_T absb;
  static const real_T b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  real_T Ay_d[4];
  emxArray_real_T *Au;
  int32_T ndbl;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  int32_T cdiff;
  real_T d6;
  real_T d7;
  int32_T apnd;
  int32_T i13;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r15;
  int32_T b_control_p_x[2];
  int32_T c_param_matrix[2];
  emxArray_real_T *d_param_matrix;
  emxArray_real_T *e_param_matrix;
  emxArray_real_T *temp2;
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv20[21];
  static const char_T cv21[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 45 };

  char_T cv22[45];
  static const char_T cv23[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv40[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv41[2] = { 1, 45 };

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
  i12 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i12, &o_emlrtBCI, sp);
  i12 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i12, &n_emlrtBCI, sp);
  st.site = &hj_emlrtRSI;
  x = rdivide((src[0] - bound->data[0]) + 1.0, 30.0);
  st.site = &ij_emlrtRSI;
  y = rdivide((src[1] - bound->data[bound->size[0]]) + 1.0, 30.0);
  d5 = x;
  st.site = &jj_emlrtRSI;
  b_floor(&d5);
  tx = x - d5;
  d5 = y;
  st.site = &kj_emlrtRSI;
  b_floor(&d5);
  ty = y - d5;
  Ax[0] = 1.0;
  Ax[1] = tx;
  st.site = &kl_emlrtRSI;
  Ax[2] = c_power(tx);
  st.site = &ll_emlrtRSI;
  Ax[3] = d_power(tx);
  st.site = &ml_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  for (i12 = 0; i12 < 4; i12++) {
    b_Ax[i12] = 0.0;
    for (absb = 0; absb < 4; absb++) {
      b_Ax[i12] += Ax[absb] * b[absb + (i12 << 2)];
    }
  }

  for (i12 = 0; i12 < 4; i12++) {
    Ax[i12] = b_Ax[i12];
  }

  Ay_d[0] = 0.0;
  Ay_d[1] = 1.0;
  st.site = &nl_emlrtRSI;
  Ay_d[2] = 2.0 * ty;
  st.site = &ol_emlrtRSI;
  ty = c_power(ty);
  st.site = &ol_emlrtRSI;
  Ay_d[3] = 3.0 * ty;
  st.site = &pl_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  st.site = &pl_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  for (i12 = 0; i12 < 4; i12++) {
    d5 = 0.0;
    for (absb = 0; absb < 4; absb++) {
      d5 += Ay_d[absb] * b[absb + (i12 << 2)];
    }

    b_Ax[i12] = d5 / 30.0;
  }

  for (i12 = 0; i12 < 4; i12++) {
    Ay_d[i12] = b_Ax[i12];
  }

  emxInit_real_T(&c_st, &Au, 2, &db_emlrtRTEI, TRUE);
  st.site = &rj_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i12 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i12, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = (int32_T)ty;
  for (i12 = 0; i12 < ndbl; i12++) {
    Au->data[i12] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &eb_emlrtRTEI, TRUE);
  st.site = &sj_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i12 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i12, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = (int32_T)tx;
  for (i12 = 0; i12 < ndbl; i12++) {
    Av->data[i12] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  ndbl = control_p_x->size[0];
  i12 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  cdiff = control_p_x->size[1];
  i12 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    param_matrix->data[i12] = 0.0;
  }

  d5 = x;
  st.site = &tj_emlrtRSI;
  b_floor(&d5);
  d6 = x;
  st.site = &tj_emlrtRSI;
  b_floor(&d6);
  if (d5 == d6) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &kd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  d6 = y;
  st.site = &tj_emlrtRSI;
  b_floor(&d6);
  d7 = y;
  st.site = &tj_emlrtRSI;
  b_floor(&d7);
  if (d6 == d7) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &tj_emlrtRSI;
  ndbl = control_p_x->size[0];
  cdiff = control_p_x->size[1];
  for (i12 = 0; i12 < 4; i12++) {
    for (absb = 0; absb < 4; absb++) {
      apnd = (int32_T)(d5 + (1.0 + (real_T)i12));
      i13 = (int32_T)(d6 + (1.0 + (real_T)absb));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ndbl,
        &p_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1, cdiff,
        &q_emlrtBCI, sp) - 1)) - 1] = Ax[i12] * Ay_d[absb];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &fb_emlrtRTEI, TRUE);
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  i12 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i12 = 0; i12 < ndbl; i12++) {
    b_param_matrix->data[b_param_matrix->size[0] * i12] = param_matrix->data[i12];
  }

  emxInit_int32_T(sp, &r15, 1, &bb_emlrtRTEI, TRUE);
  ndbl = (int32_T)ty;
  i12 = r15->size[0];
  r15->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r15, i12, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i12 = 0; i12 < ndbl; i12++) {
    r15->data[i12] = i12;
  }

  b_control_p_x[0] = 1;
  b_control_p_x[1] = r15->size[0];
  emlrtSubAssignSizeCheckR2012b(b_control_p_x, 2, *(int32_T (*)[2])
    b_param_matrix->size, 2, &o_emlrtECI, sp);
  ndbl = b_param_matrix->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    Au->data[Au->size[0] * r15->data[i12]] = b_param_matrix->data
      [b_param_matrix->size[0] * i12];
  }

  ndbl = control_p_x->size[0];
  i12 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  cdiff = control_p_x->size[1];
  i12 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    param_matrix->data[i12] = 0.0;
  }

  d5 = x;
  st.site = &uj_emlrtRSI;
  b_floor(&d5);
  st.site = &uj_emlrtRSI;
  b_floor(&x);
  if (d5 == x) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &id_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  d6 = y;
  st.site = &uj_emlrtRSI;
  b_floor(&d6);
  st.site = &uj_emlrtRSI;
  b_floor(&y);
  if (d6 == y) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &uj_emlrtRSI;
  ndbl = control_p_x->size[0];
  cdiff = control_p_x->size[1];
  for (i12 = 0; i12 < 4; i12++) {
    for (absb = 0; absb < 4; absb++) {
      apnd = (int32_T)(d5 + (1.0 + (real_T)i12));
      i13 = (int32_T)(d6 + (1.0 + (real_T)absb));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ndbl,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1, cdiff,
        &s_emlrtBCI, sp) - 1)) - 1] = Ax[i12] * Ay_d[absb];
    }
  }

  ndbl = param_matrix->size[0] * param_matrix->size[1];
  i12 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i12 = 0; i12 < ndbl; i12++) {
    b_param_matrix->data[b_param_matrix->size[0] * i12] = param_matrix->data[i12];
  }

  ndbl = (int32_T)tx;
  i12 = r15->size[0];
  r15->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r15, i12, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i12 = 0; i12 < ndbl; i12++) {
    r15->data[i12] = i12;
  }

  c_param_matrix[0] = 1;
  c_param_matrix[1] = r15->size[0];
  emlrtSubAssignSizeCheckR2012b(c_param_matrix, 2, *(int32_T (*)[2])
    b_param_matrix->size, 2, &n_emlrtECI, sp);
  ndbl = b_param_matrix->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    Av->data[Av->size[0] * r15->data[i12]] = b_param_matrix->data
      [b_param_matrix->size[0] * i12];
  }

  emxFree_int32_T(&r15);

  /* { */
  /* temp1 = control_p.x; */
  /* temp2 = control_p.y; */
  /* ref(:, 1) = Au*temp1(:); */
  /* ref(:, 2) = Av*temp2(:); */
  /* } */
  st.site = &vj_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  c_st.site = &ak_emlrtRSI;
  if (control_p_x->size[0] < 1) {
    absb = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)control_p_x->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - control_p_x->size[0]) + 1;
    absb = control_p_x->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = control_p_x->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    absb = ndbl - 1;
  }

  i12 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = absb + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_param_matrix, i12, (int32_T)
                    sizeof(real_T), &cb_emlrtRTEI);
  if (absb + 1 > 0) {
    b_param_matrix->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_param_matrix->data[absb] = apnd;
      i12 = absb + (absb < 0);
      if (i12 >= 0) {
        ndbl = (int32_T)((uint32_T)i12 >> 1);
      } else {
        ndbl = ~(int32_T)((uint32_T)~i12 >> 1);
      }

      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        b_param_matrix->data[cdiff] = 1.0 + (real_T)cdiff;
        b_param_matrix->data[absb - cdiff] = apnd - cdiff;
      }

      if (ndbl << 1 == absb) {
        b_param_matrix->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        b_param_matrix->data[ndbl] = 1.0 + (real_T)ndbl;
        b_param_matrix->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  b_emxInit_real_T(&c_st, &d_param_matrix, 1, &bb_emlrtRTEI, TRUE);
  i12 = d_param_matrix->size[0];
  d_param_matrix->size[0] = b_param_matrix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = b_param_matrix->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    d_param_matrix->data[i12] = b_param_matrix->data[b_param_matrix->size[0] *
      i12] - 2.0;
  }

  st.site = &vj_emlrtRSI;
  e_repmat(&st, d_param_matrix, control_p_x->size[1], param_matrix);
  emxFree_real_T(&d_param_matrix);
  for (i12 = 0; i12 < 2; i12++) {
    b_control_p_x[i12] = control_p_x->size[i12];
  }

  for (i12 = 0; i12 < 2; i12++) {
    c_param_matrix[i12] = param_matrix->size[i12];
  }

  emlrtSizeEqCheck2DFastR2012b(b_control_p_x, c_param_matrix, &q_emlrtECI, sp);
  i12 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = control_p_x->size[0];
  param_matrix->size[1] = control_p_x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    param_matrix->data[i12] = control_p_x->data[i12] - param_matrix->data[i12];
  }

  st.site = &wj_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  c_st.site = &ak_emlrtRSI;
  if (control_p_x->size[1] < 1) {
    absb = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)control_p_x->size[1] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - control_p_x->size[1]) + 1;
    absb = control_p_x->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = control_p_x->size[1];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    absb = ndbl - 1;
  }

  i12 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = absb + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_param_matrix, i12, (int32_T)
                    sizeof(real_T), &cb_emlrtRTEI);
  if (absb + 1 > 0) {
    b_param_matrix->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_param_matrix->data[absb] = apnd;
      i12 = absb + (absb < 0);
      if (i12 >= 0) {
        ndbl = (int32_T)((uint32_T)i12 >> 1);
      } else {
        ndbl = ~(int32_T)((uint32_T)~i12 >> 1);
      }

      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        b_param_matrix->data[cdiff] = 1.0 + (real_T)cdiff;
        b_param_matrix->data[absb - cdiff] = apnd - cdiff;
      }

      if (ndbl << 1 == absb) {
        b_param_matrix->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        b_param_matrix->data[ndbl] = 1.0 + (real_T)ndbl;
        b_param_matrix->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &e_param_matrix, 2, &bb_emlrtRTEI, TRUE);
  i12 = e_param_matrix->size[0] * e_param_matrix->size[1];
  e_param_matrix->size[0] = 1;
  e_param_matrix->size[1] = b_param_matrix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)e_param_matrix, i12, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = b_param_matrix->size[0] * b_param_matrix->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    e_param_matrix->data[i12] = b_param_matrix->data[i12] - 2.0;
  }

  emxFree_real_T(&b_param_matrix);
  emxInit_real_T(sp, &temp2, 2, &gb_emlrtRTEI, TRUE);
  st.site = &wj_emlrtRSI;
  d_repmat(&st, e_param_matrix, control_p_x->size[0], temp2);
  emxFree_real_T(&e_param_matrix);
  for (i12 = 0; i12 < 2; i12++) {
    b_control_p_x[i12] = control_p_y->size[i12];
  }

  for (i12 = 0; i12 < 2; i12++) {
    c_param_matrix[i12] = temp2->size[i12];
  }

  emlrtSizeEqCheck2DFastR2012b(b_control_p_x, c_param_matrix, &p_emlrtECI, sp);
  i12 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = control_p_y->size[0];
  temp2->size[1] = control_p_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i12, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = control_p_y->size[0] * control_p_y->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    temp2->data[i12] = control_p_y->data[i12] - temp2->data[i12];
  }

  b_emxInit_real_T(sp, &b_b, 1, &bb_emlrtRTEI, TRUE);
  st.site = &ql_emlrtRSI;
  i12 = b_b->size[0];
  b_b->size[0] = param_matrix->size[0] * param_matrix->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i12, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    b_b->data[i12] = param_matrix->data[i12];
  }

  b_st.site = &gf_emlrtRSI;
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  if (!(Au->size[1] == ndbl)) {
    guard4 = FALSE;
    if (Au->size[1] == 1) {
      guard4 = TRUE;
    } else {
      ndbl = param_matrix->size[0] * param_matrix->size[1];
      if (ndbl == 1) {
        guard4 = TRUE;
      } else {
        b_y = NULL;
        m7 = mxCreateCharArray(2, iv38);
        for (ndbl = 0; ndbl < 21; ndbl++) {
          cv20[ndbl] = cv21[ndbl];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv20);
        emlrtAssign(&b_y, m7);
        c_st.site = &wy_emlrtRSI;
        d_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv39);
      for (ndbl = 0; ndbl < 45; ndbl++) {
        cv22[ndbl] = cv23[ndbl];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv22);
      emlrtAssign(&c_y, m7);
      c_st.site = &vy_emlrtRSI;
      d_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (Au->size[1] == 1) {
    guard3 = TRUE;
  } else {
    ndbl = param_matrix->size[0] * param_matrix->size[1];
    if (ndbl == 1) {
      guard3 = TRUE;
    } else {
      b_st.site = &xk_emlrtRSI;
      c_st.site = &yk_emlrtRSI;
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
    for (i12 = 0; i12 < Au->size[1]; i12++) {
      y += Au->data[Au->size[0] * i12] * param_matrix->data[i12];
    }
  }

  emxFree_real_T(&param_matrix);
  emxFree_real_T(&Au);
  ref[0] = y;
  st.site = &rl_emlrtRSI;
  i12 = b_b->size[0];
  b_b->size[0] = temp2->size[0] * temp2->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i12, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = temp2->size[0] * temp2->size[1];
  for (i12 = 0; i12 < ndbl; i12++) {
    b_b->data[i12] = temp2->data[i12];
  }

  b_st.site = &gf_emlrtRSI;
  ndbl = temp2->size[0] * temp2->size[1];
  if (!(Av->size[1] == ndbl)) {
    guard2 = FALSE;
    if (Av->size[1] == 1) {
      guard2 = TRUE;
    } else {
      ndbl = temp2->size[0] * temp2->size[1];
      if (ndbl == 1) {
        guard2 = TRUE;
      } else {
        d_y = NULL;
        m7 = mxCreateCharArray(2, iv40);
        for (ndbl = 0; ndbl < 21; ndbl++) {
          cv20[ndbl] = cv21[ndbl];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv20);
        emlrtAssign(&d_y, m7);
        c_st.site = &wy_emlrtRSI;
        d_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m7 = mxCreateCharArray(2, iv41);
      for (ndbl = 0; ndbl < 45; ndbl++) {
        cv22[ndbl] = cv23[ndbl];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv22);
      emlrtAssign(&e_y, m7);
      c_st.site = &vy_emlrtRSI;
      d_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    ndbl = temp2->size[0] * temp2->size[1];
    if (ndbl == 1) {
      guard1 = TRUE;
    } else {
      b_st.site = &xk_emlrtRSI;
      c_st.site = &yk_emlrtRSI;
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
    for (i12 = 0; i12 < Av->size[1]; i12++) {
      y += Av->data[Av->size[0] * i12] * temp2->data[i12];
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&temp2);
  emxFree_real_T(&Av);
  ref[1] = y + 0.033333333333333333;

  /* } */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bspline_single(const emlrtStack *sp, const real_T src[2], const
                    emxArray_real_T *control_p_x, const emxArray_real_T
                    *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  int32_T i10;
  real_T x;
  real_T y;
  real_T d2;
  real_T tx;
  real_T ty;
  real_T Ax_d[4];
  real_T b_Ax_d[4];
  int32_T absb;
  static const real_T b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  real_T Ay[4];
  emxArray_real_T *Au;
  int32_T ndbl;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  int32_T cdiff;
  real_T d3;
  real_T d4;
  int32_T apnd;
  int32_T i11;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r14;
  int32_T b_control_p_x[2];
  int32_T c_param_matrix[2];
  emxArray_real_T *d_param_matrix;
  emxArray_real_T *e_param_matrix;
  emxArray_real_T *temp2;
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 21 };

  const mxArray *m6;
  char_T cv16[21];
  static const char_T cv17[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 45 };

  char_T cv18[45];
  static const char_T cv19[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv36[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv37[2] = { 1, 45 };

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
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &o_emlrtBCI, sp);
  i10 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i10, &n_emlrtBCI, sp);
  st.site = &hj_emlrtRSI;
  x = rdivide((src[0] - bound->data[0]) + 1.0, 30.0);
  st.site = &ij_emlrtRSI;
  y = rdivide((src[1] - bound->data[bound->size[0]]) + 1.0, 30.0);
  d2 = x;
  st.site = &jj_emlrtRSI;
  b_floor(&d2);
  tx = x - d2;
  d2 = y;
  st.site = &kj_emlrtRSI;
  b_floor(&d2);
  ty = y - d2;
  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  st.site = &lj_emlrtRSI;
  Ax_d[2] = 2.0 * tx;
  st.site = &mj_emlrtRSI;
  tx = c_power(tx);
  st.site = &mj_emlrtRSI;
  Ax_d[3] = 3.0 * tx;
  st.site = &nj_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  st.site = &nj_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    d2 = 0.0;
    for (absb = 0; absb < 4; absb++) {
      d2 += Ax_d[absb] * b[absb + (i10 << 2)];
    }

    b_Ax_d[i10] = d2 / 30.0;
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ax_d[i10] = b_Ax_d[i10];
  }

  Ay[0] = 1.0;
  Ay[1] = ty;
  st.site = &oj_emlrtRSI;
  Ay[2] = c_power(ty);
  st.site = &pj_emlrtRSI;
  Ay[3] = d_power(ty);
  st.site = &qj_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    b_Ax_d[i10] = 0.0;
    for (absb = 0; absb < 4; absb++) {
      b_Ax_d[i10] += Ay[absb] * b[absb + (i10 << 2)];
    }
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ay[i10] = b_Ax_d[i10];
  }

  emxInit_real_T(&d_st, &Au, 2, &db_emlrtRTEI, TRUE);
  st.site = &rj_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = (int32_T)tx;
  for (i10 = 0; i10 < ndbl; i10++) {
    Au->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &eb_emlrtRTEI, TRUE);
  st.site = &sj_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = (int32_T)ty;
  for (i10 = 0; i10 < ndbl; i10++) {
    Av->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  ndbl = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  cdiff = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  d2 = x;
  st.site = &tj_emlrtRSI;
  b_floor(&d2);
  d3 = x;
  st.site = &tj_emlrtRSI;
  b_floor(&d3);
  if (d2 == d3) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &kd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  d3 = y;
  st.site = &tj_emlrtRSI;
  b_floor(&d3);
  d4 = y;
  st.site = &tj_emlrtRSI;
  b_floor(&d4);
  if (d3 == d4) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &tj_emlrtRSI;
  ndbl = control_p_x->size[0];
  cdiff = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (absb = 0; absb < 4; absb++) {
      apnd = (int32_T)(d2 + (1.0 + (real_T)i10));
      i11 = (int32_T)(d3 + (1.0 + (real_T)absb));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ndbl,
        &p_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i11, 1, cdiff,
        &q_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[absb];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &fb_emlrtRTEI, TRUE);
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i10 = 0; i10 < ndbl; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  emxInit_int32_T(sp, &r14, 1, &bb_emlrtRTEI, TRUE);
  ndbl = (int32_T)tx;
  i10 = r14->size[0];
  r14->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r14, i10, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i10 = 0; i10 < ndbl; i10++) {
    r14->data[i10] = i10;
  }

  b_control_p_x[0] = 1;
  b_control_p_x[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(b_control_p_x, 2, *(int32_T (*)[2])
    b_param_matrix->size, 2, &o_emlrtECI, sp);
  ndbl = b_param_matrix->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    Au->data[Au->size[0] * r14->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  ndbl = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  cdiff = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  d2 = x;
  st.site = &uj_emlrtRSI;
  b_floor(&d2);
  st.site = &uj_emlrtRSI;
  b_floor(&x);
  if (d2 == x) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &id_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  d3 = y;
  st.site = &uj_emlrtRSI;
  b_floor(&d3);
  st.site = &uj_emlrtRSI;
  b_floor(&y);
  if (d3 == y) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &uj_emlrtRSI;
  ndbl = control_p_x->size[0];
  cdiff = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (absb = 0; absb < 4; absb++) {
      apnd = (int32_T)(d2 + (1.0 + (real_T)i10));
      i11 = (int32_T)(d3 + (1.0 + (real_T)absb));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(apnd, 1, ndbl,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i11, 1, cdiff,
        &s_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[absb];
    }
  }

  ndbl = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i10 = 0; i10 < ndbl; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  ndbl = (int32_T)ty;
  i10 = r14->size[0];
  r14->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r14, i10, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i10 = 0; i10 < ndbl; i10++) {
    r14->data[i10] = i10;
  }

  c_param_matrix[0] = 1;
  c_param_matrix[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(c_param_matrix, 2, *(int32_T (*)[2])
    b_param_matrix->size, 2, &n_emlrtECI, sp);
  ndbl = b_param_matrix->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    Av->data[Av->size[0] * r14->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  emxFree_int32_T(&r14);

  /* { */
  /* temp1 = control_p.x; */
  /* temp2 = control_p.y; */
  /* ref(:, 1) = Au*temp1(:); */
  /* ref(:, 2) = Av*temp2(:); */
  /* } */
  st.site = &vj_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  c_st.site = &ak_emlrtRSI;
  d_st.site = &ck_emlrtRSI;
  if (control_p_x->size[0] < 1) {
    absb = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)control_p_x->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - control_p_x->size[0]) + 1;
    absb = control_p_x->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = control_p_x->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    absb = ndbl - 1;
  }

  d_st.site = &dk_emlrtRSI;
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = absb + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_param_matrix, i10, (int32_T)
                    sizeof(real_T), &cb_emlrtRTEI);
  if (absb + 1 > 0) {
    b_param_matrix->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_param_matrix->data[absb] = apnd;
      d_st.site = &ek_emlrtRSI;
      d_st.site = &fk_emlrtRSI;
      i10 = absb + (absb < 0);
      if (i10 >= 0) {
        ndbl = (int32_T)((uint32_T)i10 >> 1);
      } else {
        ndbl = ~(int32_T)((uint32_T)~i10 >> 1);
      }

      d_st.site = &gk_emlrtRSI;
      d_st.site = &gk_emlrtRSI;
      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        d_st.site = &hk_emlrtRSI;
        d_st.site = &kk_emlrtRSI;
        b_param_matrix->data[cdiff] = 1.0 + (real_T)cdiff;
        d_st.site = &lk_emlrtRSI;
        b_param_matrix->data[absb - cdiff] = apnd - cdiff;
      }

      d_st.site = &ik_emlrtRSI;
      if (ndbl << 1 == absb) {
        d_st.site = &mk_emlrtRSI;
        b_param_matrix->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        d_st.site = &jk_emlrtRSI;
        d_st.site = &nk_emlrtRSI;
        b_param_matrix->data[ndbl] = 1.0 + (real_T)ndbl;
        d_st.site = &ok_emlrtRSI;
        b_param_matrix->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  b_emxInit_real_T(&c_st, &d_param_matrix, 1, &bb_emlrtRTEI, TRUE);
  i10 = d_param_matrix->size[0];
  d_param_matrix->size[0] = b_param_matrix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = b_param_matrix->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    d_param_matrix->data[i10] = b_param_matrix->data[b_param_matrix->size[0] *
      i10] - 2.0;
  }

  st.site = &vj_emlrtRSI;
  e_repmat(&st, d_param_matrix, control_p_x->size[1], param_matrix);
  emxFree_real_T(&d_param_matrix);
  for (i10 = 0; i10 < 2; i10++) {
    b_control_p_x[i10] = control_p_x->size[i10];
  }

  for (i10 = 0; i10 < 2; i10++) {
    c_param_matrix[i10] = param_matrix->size[i10];
  }

  emlrtSizeEqCheck2DFastR2012b(b_control_p_x, c_param_matrix, &q_emlrtECI, sp);
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = control_p_x->size[0];
  param_matrix->size[1] = control_p_x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    param_matrix->data[i10] = control_p_x->data[i10] - param_matrix->data[i10];
  }

  st.site = &wj_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  c_st.site = &ak_emlrtRSI;
  d_st.site = &ck_emlrtRSI;
  if (control_p_x->size[1] < 1) {
    absb = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)control_p_x->size[1] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - control_p_x->size[1]) + 1;
    absb = control_p_x->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = control_p_x->size[1];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    absb = ndbl - 1;
  }

  d_st.site = &dk_emlrtRSI;
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = absb + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_param_matrix, i10, (int32_T)
                    sizeof(real_T), &cb_emlrtRTEI);
  if (absb + 1 > 0) {
    b_param_matrix->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_param_matrix->data[absb] = apnd;
      d_st.site = &ek_emlrtRSI;
      d_st.site = &fk_emlrtRSI;
      i10 = absb + (absb < 0);
      if (i10 >= 0) {
        ndbl = (int32_T)((uint32_T)i10 >> 1);
      } else {
        ndbl = ~(int32_T)((uint32_T)~i10 >> 1);
      }

      d_st.site = &gk_emlrtRSI;
      d_st.site = &gk_emlrtRSI;
      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        d_st.site = &hk_emlrtRSI;
        d_st.site = &kk_emlrtRSI;
        b_param_matrix->data[cdiff] = 1.0 + (real_T)cdiff;
        d_st.site = &lk_emlrtRSI;
        b_param_matrix->data[absb - cdiff] = apnd - cdiff;
      }

      d_st.site = &ik_emlrtRSI;
      if (ndbl << 1 == absb) {
        d_st.site = &mk_emlrtRSI;
        b_param_matrix->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        d_st.site = &jk_emlrtRSI;
        d_st.site = &nk_emlrtRSI;
        b_param_matrix->data[ndbl] = 1.0 + (real_T)ndbl;
        d_st.site = &ok_emlrtRSI;
        b_param_matrix->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &e_param_matrix, 2, &bb_emlrtRTEI, TRUE);
  i10 = e_param_matrix->size[0] * e_param_matrix->size[1];
  e_param_matrix->size[0] = 1;
  e_param_matrix->size[1] = b_param_matrix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)e_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  ndbl = b_param_matrix->size[0] * b_param_matrix->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    e_param_matrix->data[i10] = b_param_matrix->data[i10] - 2.0;
  }

  emxFree_real_T(&b_param_matrix);
  emxInit_real_T(sp, &temp2, 2, &gb_emlrtRTEI, TRUE);
  st.site = &wj_emlrtRSI;
  d_repmat(&st, e_param_matrix, control_p_x->size[0], temp2);
  emxFree_real_T(&e_param_matrix);
  for (i10 = 0; i10 < 2; i10++) {
    b_control_p_x[i10] = control_p_y->size[i10];
  }

  for (i10 = 0; i10 < 2; i10++) {
    c_param_matrix[i10] = temp2->size[i10];
  }

  emlrtSizeEqCheck2DFastR2012b(b_control_p_x, c_param_matrix, &p_emlrtECI, sp);
  i10 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = control_p_y->size[0];
  temp2->size[1] = control_p_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = control_p_y->size[0] * control_p_y->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    temp2->data[i10] = control_p_y->data[i10] - temp2->data[i10];
  }

  b_emxInit_real_T(sp, &b_b, 1, &bb_emlrtRTEI, TRUE);
  st.site = &xj_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = param_matrix->size[0] * param_matrix->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    b_b->data[i10] = param_matrix->data[i10];
  }

  b_st.site = &gf_emlrtRSI;
  ndbl = param_matrix->size[0] * param_matrix->size[1];
  if (!(Au->size[1] == ndbl)) {
    guard4 = FALSE;
    if (Au->size[1] == 1) {
      guard4 = TRUE;
    } else {
      ndbl = param_matrix->size[0] * param_matrix->size[1];
      if (ndbl == 1) {
        guard4 = TRUE;
      } else {
        b_y = NULL;
        m6 = mxCreateCharArray(2, iv34);
        for (ndbl = 0; ndbl < 21; ndbl++) {
          cv16[ndbl] = cv17[ndbl];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv16);
        emlrtAssign(&b_y, m6);
        c_st.site = &wy_emlrtRSI;
        e_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&e_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv35);
      for (ndbl = 0; ndbl < 45; ndbl++) {
        cv18[ndbl] = cv19[ndbl];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv18);
      emlrtAssign(&c_y, m6);
      c_st.site = &vy_emlrtRSI;
      e_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&e_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (Au->size[1] == 1) {
    guard3 = TRUE;
  } else {
    ndbl = param_matrix->size[0] * param_matrix->size[1];
    if (ndbl == 1) {
      guard3 = TRUE;
    } else {
      b_st.site = &xk_emlrtRSI;
      c_st.site = &yk_emlrtRSI;
      d_st.site = &al_emlrtRSI;
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
      y += Au->data[Au->size[0] * i10] * param_matrix->data[i10];
    }
  }

  emxFree_real_T(&param_matrix);
  emxFree_real_T(&Au);
  ref[0] = y + 0.033333333333333333;
  st.site = &yj_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = temp2->size[0] * temp2->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  ndbl = temp2->size[0] * temp2->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    b_b->data[i10] = temp2->data[i10];
  }

  b_st.site = &gf_emlrtRSI;
  ndbl = temp2->size[0] * temp2->size[1];
  if (!(Av->size[1] == ndbl)) {
    guard2 = FALSE;
    if (Av->size[1] == 1) {
      guard2 = TRUE;
    } else {
      ndbl = temp2->size[0] * temp2->size[1];
      if (ndbl == 1) {
        guard2 = TRUE;
      } else {
        d_y = NULL;
        m6 = mxCreateCharArray(2, iv36);
        for (ndbl = 0; ndbl < 21; ndbl++) {
          cv16[ndbl] = cv17[ndbl];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv16);
        emlrtAssign(&d_y, m6);
        c_st.site = &wy_emlrtRSI;
        e_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&e_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m6 = mxCreateCharArray(2, iv37);
      for (ndbl = 0; ndbl < 45; ndbl++) {
        cv18[ndbl] = cv19[ndbl];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv18);
      emlrtAssign(&e_y, m6);
      c_st.site = &vy_emlrtRSI;
      e_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&e_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    ndbl = temp2->size[0] * temp2->size[1];
    if (ndbl == 1) {
      guard1 = TRUE;
    } else {
      b_st.site = &xk_emlrtRSI;
      c_st.site = &yk_emlrtRSI;
      d_st.site = &al_emlrtRSI;
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
      y += Av->data[Av->size[0] * i10] * temp2->data[i10];
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&temp2);
  emxFree_real_T(&Av);
  ref[1] = y;

  /* } */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_single.c) */
