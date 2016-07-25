/*
 * bspline_single.c
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
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
static emlrtRSInfo ie_emlrtRSI = { 74, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo dj_emlrtRSI = { 47, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ej_emlrtRSI = { 48, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo fj_emlrtRSI = { 49, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo gj_emlrtRSI = { 50, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo hj_emlrtRSI = { 63, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ij_emlrtRSI = { 64, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo jj_emlrtRSI = { 65, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo kj_emlrtRSI = { 71, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo lj_emlrtRSI = { 72, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo mj_emlrtRSI = { 73, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo nj_emlrtRSI = { 88, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo oj_emlrtRSI = { 89, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo pj_emlrtRSI = { 109, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo qj_emlrtRSI = { 124, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo rj_emlrtRSI = { 133, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo sj_emlrtRSI = { 134, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo tj_emlrtRSI = { 58, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRSInfo uj_emlrtRSI = { 31, "eml_xdotu",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRSInfo vj_emlrtRSI = { 28, "eml_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

static emlrtRSInfo gk_emlrtRSI = { 55, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo hk_emlrtRSI = { 56, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo ik_emlrtRSI = { 57, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo jk_emlrtRSI = { 79, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo kk_emlrtRSI = { 80, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRSInfo lk_emlrtRSI = { 81, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 1, 18, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 88, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo db_emlrtRTEI = { 89, 1, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 91, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 45, 16, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 46, 17, "bound", "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtRTEInfo gd_emlrtRTEI = { 109, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo hd_emlrtRTEI = { 109, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo id_emlrtRTEI = { 124, 20, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtRTEInfo jd_emlrtRTEI = { 124, 43, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo n_emlrtECI = { -1, 111, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtECInfo o_emlrtECI = { -1, 126, 5, "bspline_single",
  "F:/Git/correspondence/matlab_code_2/bspline_single.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 109, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 109, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 124, 18, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 124, 41, "param_matrix",
  "bspline_single", "F:/Git/correspondence/matlab_code_2/bspline_single.m", 0 };

/* Function Definitions */
void b_bspline_single(const emlrtStack *sp, const real_T src[2], const
                      emxArray_real_T *control_p_x, const emxArray_real_T
                      *control_p_y, const emxArray_real_T *bound, real_T ref[2])
{
  int32_T i14;
  real_T x;
  real_T y;
  real_T d4;
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
  emxArray_real_T *param_matrix;
  int32_T control_p_x_idx_1;
  real_T d5;
  int32_T i16;
  int32_T i17;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r15;
  int32_T iv40[2];
  int32_T iv41[2];
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv42[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv20[21];
  static const char_T cv21[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv43[2] = { 1, 45 };

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
  static const int32_T iv44[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv45[2] = { 1, 45 };

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
  /* { */
  /* p0 = bspline(src, control_p, bound); */
  /* p1 = bspline(src+[1,0], control_p, bound); */
  /* if src(1) > bound(1) */
  /*     p2 = bspline(src-[1,0], control_p, bound); */
  /*     diffx = (p1-p2)/2; */
  /* else */
  /*     diffx = p1-p0; */
  /* end */
  /*  */
  /* p3 = bspline(src+[0,1], control_p, bound); */
  /* if src(2) > bound(2) */
  /*     p4 = bspline(src-[0,1], control_p, bound); */
  /*     diffy = (p3-p4)/2; */
  /* else */
  /*     diffy = p3-p0; */
  /* end */
  /*  */
  /* ref = zeros(size(src, 1), 2, 1); */
  /* if ux ~= 0 */
  /*     ref(1) = diffx(1); */
  /* end */
  /* if vx ~= 0 */
  /*     ref(2) = diffx(2); */
  /* end */
  /*  */
  /* if uy ~= 0 */
  /*     ref(1) = diffy(1); */
  /* end */
  /* if vy ~= 0 */
  /*     ref(2) = diffy(2); */
  /* end */
  /* } */
  i14 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i14, &n_emlrtBCI, sp);
  i14 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i14, &o_emlrtBCI, sp);
  st.site = &dj_emlrtRSI;
  x = rdivide((src[0] - bound->data[0]) + 1.0, 30.0);
  st.site = &ej_emlrtRSI;
  y = rdivide((src[1] - bound->data[bound->size[0]]) + 1.0, 30.0);
  d4 = x;
  st.site = &fj_emlrtRSI;
  b_floor(&d4);
  tx = x - d4;
  d4 = y;
  st.site = &gj_emlrtRSI;
  b_floor(&d4);
  ty = y - d4;
  Ax[0] = 1.0;
  Ax[1] = tx;
  st.site = &gk_emlrtRSI;
  Ax[2] = c_power(tx);
  st.site = &hk_emlrtRSI;
  b_st.site = &fe_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  Ax[3] = muDoubleScalarPower(tx, 3.0);
  st.site = &ik_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
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
  st.site = &jk_emlrtRSI;
  Ay_d[2] = 2.0 * ty;
  st.site = &kk_emlrtRSI;
  b_st.site = &fe_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  st.site = &kk_emlrtRSI;
  Ay_d[3] = 3.0 * (ty * ty);
  st.site = &lk_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  st.site = &lk_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  for (i14 = 0; i14 < 4; i14++) {
    d4 = 0.0;
    for (i15 = 0; i15 < 4; i15++) {
      d4 += Ay_d[i15] * b[i15 + (i14 << 2)];
    }

    b_Ax[i14] = d4 / 30.0;
  }

  for (i14 = 0; i14 < 4; i14++) {
    Ay_d[i14] = b_Ax[i14];
  }

  emxInit_real_T(&c_st, &Au, 2, &cb_emlrtRTEI, TRUE);
  st.site = &nj_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i14 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i14, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = (int32_T)ty;
  for (i14 = 0; i14 < i; i14++) {
    Au->data[i14] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &db_emlrtRTEI, TRUE);
  st.site = &oj_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i14 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i14, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = (int32_T)tx;
  for (i14 = 0; i14 < i; i14++) {
    Av->data[i14] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &eb_emlrtRTEI, TRUE);
  i = control_p_x->size[0];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    param_matrix->data[i14] = 0.0;
  }

  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d4 = muDoubleScalarFloor(x);
  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d4 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d5 = muDoubleScalarFloor(y);
  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d5 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &pj_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i14 = 0; i14 < 4; i14++) {
    for (i15 = 0; i15 < 4; i15++) {
      i16 = (int32_T)(d4 + (1.0 + (real_T)i14));
      i17 = (int32_T)(d5 + (1.0 + (real_T)i15));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i16, 1, i,
        &p_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i17, 1,
        control_p_x_idx_1, &q_emlrtBCI, sp) - 1)) - 1] = Ax[i14] * Ay_d[i15];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &eb_emlrtRTEI, TRUE);
  i = param_matrix->size[0] * param_matrix->size[1];
  i14 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    b_param_matrix->data[b_param_matrix->size[0] * i14] = param_matrix->data[i14];
  }

  emxInit_int32_T(sp, &r15, 1, &bb_emlrtRTEI, TRUE);
  i = (int32_T)ty;
  i14 = r15->size[0];
  r15->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r15, i14, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    r15->data[i14] = i14;
  }

  iv40[0] = 1;
  iv40[1] = r15->size[0];
  emlrtSubAssignSizeCheckR2012b(iv40, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &n_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i14 = 0; i14 < i; i14++) {
    Au->data[Au->size[0] * r15->data[i14]] = b_param_matrix->data
      [b_param_matrix->size[0] * i14];
  }

  i = control_p_x->size[0];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i14 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    param_matrix->data[i14] = 0.0;
  }

  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d4 = muDoubleScalarFloor(x);
  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d4 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &id_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d5 = muDoubleScalarFloor(y);
  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d5 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &qj_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i14 = 0; i14 < 4; i14++) {
    for (i15 = 0; i15 < 4; i15++) {
      i16 = (int32_T)(d4 + (1.0 + (real_T)i14));
      i17 = (int32_T)(d5 + (1.0 + (real_T)i15));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i16, 1, i,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i17, 1,
        control_p_x_idx_1, &s_emlrtBCI, sp) - 1)) - 1] = Ax[i14] * Ay_d[i15];
    }
  }

  i = param_matrix->size[0] * param_matrix->size[1];
  i14 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i14, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    b_param_matrix->data[b_param_matrix->size[0] * i14] = param_matrix->data[i14];
  }

  emxFree_real_T(&param_matrix);
  i = (int32_T)tx;
  i14 = r15->size[0];
  r15->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r15, i14, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i14 = 0; i14 < i; i14++) {
    r15->data[i14] = i14;
  }

  iv41[0] = 1;
  iv41[1] = r15->size[0];
  emlrtSubAssignSizeCheckR2012b(iv41, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &o_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i14 = 0; i14 < i; i14++) {
    Av->data[Av->size[0] * r15->data[i14]] = b_param_matrix->data
      [b_param_matrix->size[0] * i14];
  }

  emxFree_int32_T(&r15);
  emxFree_real_T(&b_param_matrix);
  b_emxInit_real_T(sp, &b_b, 1, &bb_emlrtRTEI, TRUE);
  st.site = &rj_emlrtRSI;
  i14 = b_b->size[0];
  b_b->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i14, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i14 = 0; i14 < i; i14++) {
    b_b->data[i14] = control_p_x->data[i14];
  }

  b_st.site = &gf_emlrtRSI;
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
        m7 = mxCreateCharArray(2, iv42);
        for (i = 0; i < 21; i++) {
          cv20[i] = cv21[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv20);
        emlrtAssign(&b_y, m7);
        c_st.site = &cy_emlrtRSI;
        d_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv43);
      for (i = 0; i < 45; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv22);
      emlrtAssign(&c_y, m7);
      c_st.site = &by_emlrtRSI;
      d_st.site = &py_emlrtRSI;
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
      b_st.site = &tj_emlrtRSI;
      c_st.site = &uj_emlrtRSI;
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
  st.site = &sj_emlrtRSI;
  i14 = b_b->size[0];
  b_b->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i14, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = control_p_y->size[0] * control_p_y->size[1];
  for (i14 = 0; i14 < i; i14++) {
    b_b->data[i14] = control_p_y->data[i14];
  }

  b_st.site = &gf_emlrtRSI;
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
        m7 = mxCreateCharArray(2, iv44);
        for (i = 0; i < 21; i++) {
          cv20[i] = cv21[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m7, cv20);
        emlrtAssign(&d_y, m7);
        c_st.site = &cy_emlrtRSI;
        d_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m7 = mxCreateCharArray(2, iv45);
      for (i = 0; i < 45; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv22);
      emlrtAssign(&e_y, m7);
      c_st.site = &by_emlrtRSI;
      d_st.site = &py_emlrtRSI;
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
      b_st.site = &tj_emlrtRSI;
      c_st.site = &uj_emlrtRSI;
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

  /* { */
  /* if (ux+uy+vx+vy) == 0 */
  /*     temp1 = control_p.x; */
  /*     temp2 = control_p.y; */
  /* 	ref(:, 1) = Au*temp1(:); */
  /* 	ref(:, 2) = Av*temp2(:); */
  /* else */
  /*     temp1 = control_p.x-repmat((1:h)'-2, 1, w); */
  /*     temp2 = control_p.y-repmat((1:w)-2, h, 1); */
  /* 	if ux ~= 0 */
  /* 		ref(:,1) = Au*temp1(:)+1/30; */
  /* 	end */
  /* 	if uy ~= 0 */
  /* 		ref(:,1) = Au*temp1(:); */
  /* 	end */
  /* 	if vx ~= 0 */
  /* 		ref(:,2) = Av*temp2(:); */
  /* 	end */
  /* 	if vy ~= 0 */
  /* 		ref(:,2) = Av*temp2(:)+1/30; */
  /* 	end */
  /* end */
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
  real_T d3;
  int32_T i12;
  int32_T i13;
  emxArray_real_T *b_param_matrix;
  emxArray_int32_T *r14;
  int32_T iv34[2];
  int32_T iv35[2];
  emxArray_real_T *b_b;
  boolean_T guard4 = FALSE;
  const mxArray *b_y;
  static const int32_T iv36[2] = { 1, 21 };

  const mxArray *m6;
  char_T cv16[21];
  static const char_T cv17[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv37[2] = { 1, 45 };

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
  static const int32_T iv38[2] = { 1, 21 };

  const mxArray *e_y;
  static const int32_T iv39[2] = { 1, 45 };

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
  /* { */
  /* p0 = bspline(src, control_p, bound); */
  /* p1 = bspline(src+[1,0], control_p, bound); */
  /* if src(1) > bound(1) */
  /*     p2 = bspline(src-[1,0], control_p, bound); */
  /*     diffx = (p1-p2)/2; */
  /* else */
  /*     diffx = p1-p0; */
  /* end */
  /*  */
  /* p3 = bspline(src+[0,1], control_p, bound); */
  /* if src(2) > bound(2) */
  /*     p4 = bspline(src-[0,1], control_p, bound); */
  /*     diffy = (p3-p4)/2; */
  /* else */
  /*     diffy = p3-p0; */
  /* end */
  /*  */
  /* ref = zeros(size(src, 1), 2, 1); */
  /* if ux ~= 0 */
  /*     ref(1) = diffx(1); */
  /* end */
  /* if vx ~= 0 */
  /*     ref(2) = diffx(2); */
  /* end */
  /*  */
  /* if uy ~= 0 */
  /*     ref(1) = diffy(1); */
  /* end */
  /* if vy ~= 0 */
  /*     ref(2) = diffy(2); */
  /* end */
  /* } */
  i10 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &n_emlrtBCI, sp);
  i10 = bound->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i10, &o_emlrtBCI, sp);
  st.site = &dj_emlrtRSI;
  x = rdivide((src[0] - bound->data[0]) + 1.0, 30.0);
  st.site = &ej_emlrtRSI;
  y = rdivide((src[1] - bound->data[bound->size[0]]) + 1.0, 30.0);
  d2 = x;
  st.site = &fj_emlrtRSI;
  b_floor(&d2);
  tx = x - d2;
  d2 = y;
  st.site = &gj_emlrtRSI;
  b_floor(&d2);
  ty = y - d2;
  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  st.site = &hj_emlrtRSI;
  Ax_d[2] = 2.0 * tx;
  st.site = &ij_emlrtRSI;
  tx = c_power(tx);
  st.site = &ij_emlrtRSI;
  Ax_d[3] = 3.0 * tx;
  st.site = &jj_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  st.site = &jj_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    d2 = 0.0;
    for (i11 = 0; i11 < 4; i11++) {
      d2 += Ax_d[i11] * b[i11 + (i10 << 2)];
    }

    b_Ax_d[i10] = d2 / 30.0;
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ax_d[i10] = b_Ax_d[i10];
  }

  Ay[0] = 1.0;
  Ay[1] = ty;
  st.site = &kj_emlrtRSI;
  b_st.site = &fe_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  d_st.site = &ie_emlrtRSI;
  Ay[2] = ty * ty;
  st.site = &lj_emlrtRSI;
  b_st.site = &fe_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  Ay[3] = muDoubleScalarPower(ty, 3.0);
  st.site = &mj_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  for (i10 = 0; i10 < 4; i10++) {
    b_Ax_d[i10] = 0.0;
    for (i11 = 0; i11 < 4; i11++) {
      b_Ax_d[i10] += Ay[i11] * b[i11 + (i10 << 2)];
    }
  }

  for (i10 = 0; i10 < 4; i10++) {
    Ay[i10] = b_Ax_d[i10];
  }

  emxInit_real_T(&d_st, &Au, 2, &cb_emlrtRTEI, TRUE);
  st.site = &nj_emlrtRSI;
  tx = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)Au, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = (int32_T)tx;
  for (i10 = 0; i10 < i; i10++) {
    Au->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &Av, 2, &db_emlrtRTEI, TRUE);
  st.site = &oj_emlrtRSI;
  ty = (real_T)control_p_x->size[0] * (real_T)control_p_x->size[1];
  i10 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)Av, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = (int32_T)ty;
  for (i10 = 0; i10 < i; i10++) {
    Av->data[i10] = 0.0;
  }

  emxInit_real_T(sp, &param_matrix, 2, &eb_emlrtRTEI, TRUE);
  i = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d2 = muDoubleScalarFloor(x);
  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d2 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &gd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d3 = muDoubleScalarFloor(y);
  st.site = &pj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d3 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &pj_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (i11 = 0; i11 < 4; i11++) {
      i12 = (int32_T)(d2 + (1.0 + (real_T)i10));
      i13 = (int32_T)(d3 + (1.0 + (real_T)i11));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i12, 1, i,
        &p_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1,
        control_p_x_idx_1, &q_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[i11];
    }
  }

  emxInit_real_T(sp, &b_param_matrix, 2, &eb_emlrtRTEI, TRUE);
  i = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  emxInit_int32_T(sp, &r14, 1, &bb_emlrtRTEI, TRUE);
  i = (int32_T)tx;
  i10 = r14->size[0];
  r14->size[0] = (int32_T)tx;
  emxEnsureCapacity(sp, (emxArray__common *)r14, i10, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    r14->data[i10] = i10;
  }

  iv34[0] = 1;
  iv34[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(iv34, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &n_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i10 = 0; i10 < i; i10++) {
    Au->data[Au->size[0] * r14->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  i = control_p_x->size[0];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  control_p_x_idx_1 = control_p_x->size[1];
  i10 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = control_p_x_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    param_matrix->data[i10] = 0.0;
  }

  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d2 = muDoubleScalarFloor(x);
  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d2 == muDoubleScalarFloor(x)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &id_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  d3 = muDoubleScalarFloor(y);
  st.site = &qj_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  if (d3 == muDoubleScalarFloor(y)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jd_emlrtRTEI,
      "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }

  st.site = &qj_emlrtRSI;
  i = control_p_x->size[0];
  control_p_x_idx_1 = control_p_x->size[1];
  for (i10 = 0; i10 < 4; i10++) {
    for (i11 = 0; i11 < 4; i11++) {
      i12 = (int32_T)(d2 + (1.0 + (real_T)i10));
      i13 = (int32_T)(d3 + (1.0 + (real_T)i11));
      param_matrix->data[(emlrtDynamicBoundsCheckFastR2012b(i12, 1, i,
        &r_emlrtBCI, sp) + param_matrix->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(i13, 1,
        control_p_x_idx_1, &s_emlrtBCI, sp) - 1)) - 1] = Ax_d[i10] * Ay[i11];
    }
  }

  i = param_matrix->size[0] * param_matrix->size[1];
  i10 = b_param_matrix->size[0] * b_param_matrix->size[1];
  b_param_matrix->size[0] = 1;
  b_param_matrix->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)b_param_matrix, i10, (int32_T)sizeof
                    (real_T), &bb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    b_param_matrix->data[b_param_matrix->size[0] * i10] = param_matrix->data[i10];
  }

  emxFree_real_T(&param_matrix);
  i = (int32_T)ty;
  i10 = r14->size[0];
  r14->size[0] = (int32_T)ty;
  emxEnsureCapacity(sp, (emxArray__common *)r14, i10, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  for (i10 = 0; i10 < i; i10++) {
    r14->data[i10] = i10;
  }

  iv35[0] = 1;
  iv35[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(iv35, 2, *(int32_T (*)[2])b_param_matrix->size,
    2, &o_emlrtECI, sp);
  i = b_param_matrix->size[1];
  for (i10 = 0; i10 < i; i10++) {
    Av->data[Av->size[0] * r14->data[i10]] = b_param_matrix->data
      [b_param_matrix->size[0] * i10];
  }

  emxFree_int32_T(&r14);
  emxFree_real_T(&b_param_matrix);
  b_emxInit_real_T(sp, &b_b, 1, &bb_emlrtRTEI, TRUE);
  st.site = &rj_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = control_p_x->size[0] * control_p_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = control_p_x->size[0] * control_p_x->size[1];
  for (i10 = 0; i10 < i; i10++) {
    b_b->data[i10] = control_p_x->data[i10];
  }

  b_st.site = &gf_emlrtRSI;
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
        m6 = mxCreateCharArray(2, iv36);
        for (i = 0; i < 21; i++) {
          cv16[i] = cv17[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv16);
        emlrtAssign(&b_y, m6);
        c_st.site = &cy_emlrtRSI;
        e_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&e_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv37);
      for (i = 0; i < 45; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv18);
      emlrtAssign(&c_y, m6);
      c_st.site = &by_emlrtRSI;
      e_st.site = &py_emlrtRSI;
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
      b_st.site = &tj_emlrtRSI;
      c_st.site = &uj_emlrtRSI;
      d_st.site = &vj_emlrtRSI;
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
  st.site = &sj_emlrtRSI;
  i10 = b_b->size[0];
  b_b->size[0] = control_p_y->size[0] * control_p_y->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i = control_p_y->size[0] * control_p_y->size[1];
  for (i10 = 0; i10 < i; i10++) {
    b_b->data[i10] = control_p_y->data[i10];
  }

  b_st.site = &gf_emlrtRSI;
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
        m6 = mxCreateCharArray(2, iv38);
        for (i = 0; i < 21; i++) {
          cv16[i] = cv17[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m6, cv16);
        emlrtAssign(&d_y, m6);
        c_st.site = &cy_emlrtRSI;
        e_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&e_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      e_y = NULL;
      m6 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 45; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m6, cv18);
      emlrtAssign(&e_y, m6);
      c_st.site = &by_emlrtRSI;
      e_st.site = &py_emlrtRSI;
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
      b_st.site = &tj_emlrtRSI;
      c_st.site = &uj_emlrtRSI;
      d_st.site = &vj_emlrtRSI;
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

  /* { */
  /* if (ux+uy+vx+vy) == 0 */
  /*     temp1 = control_p.x; */
  /*     temp2 = control_p.y; */
  /* 	ref(:, 1) = Au*temp1(:); */
  /* 	ref(:, 2) = Av*temp2(:); */
  /* else */
  /*     temp1 = control_p.x-repmat((1:h)'-2, 1, w); */
  /*     temp2 = control_p.y-repmat((1:w)-2, h, 1); */
  /* 	if ux ~= 0 */
  /* 		ref(:,1) = Au*temp1(:)+1/30; */
  /* 	end */
  /* 	if uy ~= 0 */
  /* 		ref(:,1) = Au*temp1(:); */
  /* 	end */
  /* 	if vx ~= 0 */
  /* 		ref(:,2) = Av*temp2(:); */
  /* 	end */
  /* 	if vy ~= 0 */
  /* 		ref(:,2) = Av*temp2(:)+1/30; */
  /* 	end */
  /* end */
  /* } */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_single.c) */
