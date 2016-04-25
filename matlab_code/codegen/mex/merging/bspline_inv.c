/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "bspline_inv.h"
#include "floor.h"
#include "bspline.h"
#include "merging_emxutil.h"
#include "sum.h"
#include "power.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_error.h"
#include "repmat.h"
#include "pinv.h"
#include "rdivide.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo ed_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo fd_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo gd_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo hd_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo id_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo jd_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo kd_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo ld_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo md_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo nd_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo od_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo pd_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo qd_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo rd_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo sd_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo td_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo ud_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo vd_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo wd_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo ae_emlrtRSI = { 88, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ge_emlrtRSI = { 16, "max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo gm_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo wp_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo xp_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo yp_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo aq_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo bq_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo cq_emlrtRSI = { 215, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtMCInfo o_emlrtMCI = { 41, 9, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo p_emlrtMCI = { 38, 19, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo w_emlrtMCI = { 67, 5, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo x_emlrtMCI = { 66, 15, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo d_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo e_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo f_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo g_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo h_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo i_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo j_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo k_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo l_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo m_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo n_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo o_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo b_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo c_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo d_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo e_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRTEInfo pc_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtECInfo f_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo g_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo h_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo i_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo j_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo k_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo l_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo m_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo n_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo o_emlrtECI = { -1, 17, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtDCInfo emlrtDCI = { 46, 19, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo b_emlrtDCI = { 46, 27, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo c_emlrtDCI = { 40, 26, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo d_emlrtDCI = { 40, 34, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo e_emlrtDCI = { 35, 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo f_emlrtDCI = { 65, 48, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m", 4 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 41, 26, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 41, 40, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 41, 55, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 41, 69, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 41, 18, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 41, 47, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRSInfo qs_emlrtRSI = { 38, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo bt_emlrtRSI = { 67, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ct_emlrtRSI = { 41, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

/* Function Declarations */
static void b_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
  *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
  int32_T ldc);

/* Function Definitions */
static void b_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
  *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
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
  if ((m < 1) || (n < 1) || (k < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(m);
    n_t = (ptrdiff_t)(n);
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

void bspline_inv(const emlrtStack *sp, const emxArray_real_T *src, const
                 emxArray_real_T *ref, emxArray_real_T *control_p)
{
  emxArray_real_T *x;
  emxArray_real_T *y;
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *temp1;
  emxArray_real_T *temp2;
  emxArray_real_T *r0;
  int32_T i2;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 36 };

  const mxArray *m3;
  char_T cv12[36];
  int32_T i;
  static const char_T cv13[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv7[2] = { 1, 39 };

  char_T cv14[39];
  static const char_T cv15[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  int32_T exitg6;
  int32_T exitg5;
  boolean_T guard9 = FALSE;
  const mxArray *d_y;
  static const int32_T iv8[2] = { 1, 36 };

  const mxArray *e_y;
  static const int32_T iv9[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *r1;
  emxArray_real_T *c_src;
  emxArray_real_T *r2;
  const mxArray *f_y;
  static const int32_T iv10[2] = { 1, 36 };

  const mxArray *g_y;
  static const int32_T iv11[2] = { 1, 39 };

  real_T down;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv12[2] = { 1, 36 };

  const mxArray *i_y;
  static const int32_T iv13[2] = { 1, 39 };

  real_T right;
  boolean_T exitg1;
  emxArray_real_T *tx;
  int32_T i3;
  emxArray_real_T *ty;
  emxArray_int32_T *r3;
  int32_T iv14[1];
  int32_T b_tx[1];
  int32_T iv15[1];
  emxArray_real_T *r4;
  int32_T iv16[1];
  emxArray_real_T *r5;
  int32_T iv17[1];
  emxArray_real_T *r6;
  uint32_T unnamed_idx_0;
  int32_T i4;
  int32_T i5;
  int32_T iv18[1];
  int32_T b_ty[1];
  int32_T iv19[1];
  emxArray_real_T *r7;
  int32_T iv20[1];
  emxArray_real_T *r8;
  int32_T iv21[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d0;
  int32_T iv22[2];
  emxArray_int32_T *r9;
  emxArray_real_T *a;
  const mxArray *j_y;
  static const int32_T iv23[2] = { 1, 45 };

  char_T cv16[45];
  static const char_T cv17[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *k_y;
  static const int32_T iv24[2] = { 1, 21 };

  char_T cv18[21];
  static const char_T cv19[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  const mxArray *l_y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv26[2] = { 1, 21 };

  boolean_T guard8 = FALSE;
  const mxArray *n_y;
  static const int32_T iv27[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv28[2] = { 1, 45 };

  boolean_T guard7 = FALSE;
  int32_T sz[2];
  const mxArray *p_y;
  static const int32_T iv29[2] = { 1, 40 };

  char_T cv20[40];
  static const char_T cv21[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T iv30[2];
  const mxArray *q_y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv32[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv34[2] = { 1, 21 };

  boolean_T guard6 = FALSE;
  const mxArray *u_y;
  static const int32_T iv35[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv36[2] = { 1, 45 };

  boolean_T guard5 = FALSE;
  int32_T b_sz[2];
  const mxArray *w_y;
  static const int32_T iv37[2] = { 1, 40 };

  int32_T iv38[2];
  boolean_T guard4 = FALSE;
  const mxArray *x_y;
  static const int32_T iv39[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv40[2] = { 1, 45 };

  boolean_T guard3 = FALSE;
  int32_T iv41[1];
  emxArray_real_T b_temp1;
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv42[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv43[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv44[1];
  emxArray_real_T *r10;
  emxArray_real_T *r11;
  emxArray_real_T *cb_y;
  emxArray_real_T *r12;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &b_st;
  h_st.tls = b_st.tls;
  i_st.prev = &st;
  i_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &x, 1, &f_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &y, 1, &g_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ax, 2, &j_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &k_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &m_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &n_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &r0, 1, &d_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  st.site = &ed_emlrtRSI;
  b_st.site = &xd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  i2 = src->size[0];
  guard10 = FALSE;
  if (i2 == 1) {
    guard10 = TRUE;
  } else {
    i2 = src->size[0];
    if (i2 != 1) {
      guard10 = TRUE;
    } else {
      overflow = FALSE;
    }
  }

  if (guard10 == TRUE) {
    overflow = TRUE;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m3, cv12);
    emlrtAssign(&b_y, m3);
    d_st.site = &qs_emlrtRSI;
    e_st.site = &ct_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i2 = src->size[0];
  if (i2 > 0) {
  } else {
    c_y = NULL;
    m3 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m3, cv14);
    emlrtAssign(&c_y, m3);
    d_st.site = &ms_emlrtRSI;
    e_st.site = &xs_emlrtRSI;
    error(&d_st, message(&e_st, c_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &ae_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i2 = src->size[0];
  if (i2 > 1) {
    f_st.site = &fe_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &ee_emlrtRSI;
      i2 = src->size[0];
      if (2 > i2) {
        overflow = FALSE;
      } else {
        i2 = src->size[0];
        overflow = (i2 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i2 = src->size[0];
        if (ix <= i2) {
          ixstart = ix;
          f_st.site = &de_emlrtRSI;
          if (!muDoubleScalarIsNaN(src->data[ix - 1])) {
            mtmp = src->data[ix - 1];
            exitg6 = 1;
          } else {
            ix++;
          }
        } else {
          exitg6 = 1;
        }
      } while (exitg6 == 0);
    }

    i2 = src->size[0];
    if (ixstart < i2) {
      f_st.site = &ce_emlrtRSI;
      f_st.site = &ce_emlrtRSI;
      i2 = src->size[0];
      if (ixstart + 1 > i2) {
        overflow = FALSE;
      } else {
        i2 = src->size[0];
        overflow = (i2 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i2 = src->size[0];
        if (ixstart + 1 <= i2) {
          f_st.site = &be_emlrtRSI;
          if (src->data[ixstart] < mtmp) {
            mtmp = src->data[ixstart];
          }

          ixstart++;
        } else {
          exitg5 = 1;
        }
      } while (exitg5 == 0);
    }
  }

  st.site = &fd_emlrtRSI;
  b_st.site = &xd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  i2 = src->size[0];
  guard9 = FALSE;
  if (i2 == 1) {
    guard9 = TRUE;
  } else {
    i2 = src->size[0];
    if (i2 != 1) {
      guard9 = TRUE;
    } else {
      overflow = FALSE;
    }
  }

  if (guard9 == TRUE) {
    overflow = TRUE;
  }

  if (overflow) {
  } else {
    d_y = NULL;
    m3 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m3, cv12);
    emlrtAssign(&d_y, m3);
    d_st.site = &qs_emlrtRSI;
    e_st.site = &ct_emlrtRSI;
    error(&d_st, message(&e_st, d_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i2 = src->size[0];
  if (i2 > 0) {
  } else {
    e_y = NULL;
    m3 = mxCreateCharArray(2, iv9);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m3, cv14);
    emlrtAssign(&e_y, m3);
    d_st.site = &ms_emlrtRSI;
    e_st.site = &xs_emlrtRSI;
    error(&d_st, message(&e_st, e_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &ae_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i2 = src->size[0];
  if (i2 > 1) {
    f_st.site = &fe_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &ee_emlrtRSI;
      i2 = src->size[0];
      if (2 > i2) {
        overflow = FALSE;
      } else {
        i2 = src->size[0];
        overflow = (i2 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i2 = src->size[0];
        if (ix <= i2) {
          ixstart = ix;
          f_st.site = &de_emlrtRSI;
          if (!muDoubleScalarIsNaN(src->data[(ix + src->size[0]) - 1])) {
            b_mtmp = src->data[(ix + src->size[0]) - 1];
            exitg4 = 1;
          } else {
            ix++;
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);
    }

    i2 = src->size[0];
    if (ixstart < i2) {
      f_st.site = &ce_emlrtRSI;
      f_st.site = &ce_emlrtRSI;
      i2 = src->size[0];
      if (ixstart + 1 > i2) {
        overflow = FALSE;
      } else {
        i2 = src->size[0];
        overflow = (i2 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i2 = src->size[0];
        if (ixstart + 1 <= i2) {
          f_st.site = &be_emlrtRSI;
          if (src->data[ixstart + src->size[0]] < b_mtmp) {
            b_mtmp = src->data[ixstart + src->size[0]];
          }

          ixstart++;
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);
    }
  }

  b_emxInit_real_T(&d_st, &b_src, 1, &d_emlrtRTEI, TRUE);
  loop_ub = src->size[0];
  i2 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_src->data[i2] = (src->data[i2] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r1, 1, &d_emlrtRTEI, TRUE);
  st.site = &gd_emlrtRSI;
  rdivide(&st, b_src, r1);
  i2 = x->size[0];
  x->size[0] = r1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)x, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r1->size[0];
  emxFree_real_T(&b_src);
  for (i2 = 0; i2 < loop_ub; i2++) {
    x->data[i2] = r1->data[i2];
  }

  emxFree_real_T(&r1);
  b_emxInit_real_T(sp, &c_src, 1, &d_emlrtRTEI, TRUE);
  loop_ub = src->size[0];
  i2 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_src->data[i2] = (src->data[i2 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r2, 1, &d_emlrtRTEI, TRUE);
  st.site = &hd_emlrtRSI;
  rdivide(&st, c_src, r2);
  i2 = y->size[0];
  y->size[0] = r2->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r2->size[0];
  emxFree_real_T(&c_src);
  for (i2 = 0; i2 < loop_ub; i2++) {
    y->data[i2] = r2->data[i2];
  }

  emxFree_real_T(&r2);
  st.site = &id_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    f_y = NULL;
    m3 = mxCreateCharArray(2, iv10);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m3, cv12);
    emlrtAssign(&f_y, m3);
    d_st.site = &qs_emlrtRSI;
    e_st.site = &ct_emlrtRSI;
    error(&d_st, message(&e_st, f_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m3 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m3, cv14);
    emlrtAssign(&g_y, m3);
    d_st.site = &ms_emlrtRSI;
    e_st.site = &xs_emlrtRSI;
    error(&d_st, message(&e_st, g_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &ae_emlrtRSI;
  ixstart = 1;
  down = x->data[0];
  if (x->size[0] > 1) {
    f_st.site = &fe_emlrtRSI;
    if (muDoubleScalarIsNaN(x->data[0])) {
      f_st.site = &ee_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        f_st.site = &de_emlrtRSI;
        if (!muDoubleScalarIsNaN(x->data[ix - 1])) {
          down = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      f_st.site = &ce_emlrtRSI;
      f_st.site = &ce_emlrtRSI;
      if (ixstart + 1 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= x->size[0]) {
        f_st.site = &be_emlrtRSI;
        if (x->data[ixstart] > down) {
          down = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  st.site = &id_emlrtRSI;
  b_floor(&down);
  st.site = &jd_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  if ((y->size[0] == 1) || (y->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    h_y = NULL;
    m3 = mxCreateCharArray(2, iv12);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m3, cv12);
    emlrtAssign(&h_y, m3);
    d_st.site = &qs_emlrtRSI;
    e_st.site = &ct_emlrtRSI;
    error(&d_st, message(&e_st, h_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  if (y->size[0] > 0) {
  } else {
    i_y = NULL;
    m3 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m3, cv14);
    emlrtAssign(&i_y, m3);
    d_st.site = &ms_emlrtRSI;
    e_st.site = &xs_emlrtRSI;
    error(&d_st, message(&e_st, i_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &ae_emlrtRSI;
  ixstart = 1;
  right = y->data[0];
  if (y->size[0] > 1) {
    f_st.site = &fe_emlrtRSI;
    if (muDoubleScalarIsNaN(y->data[0])) {
      f_st.site = &ee_emlrtRSI;
      if (2 > y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= y->size[0])) {
        ixstart = ix;
        f_st.site = &de_emlrtRSI;
        if (!muDoubleScalarIsNaN(y->data[ix - 1])) {
          right = y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < y->size[0]) {
      f_st.site = &ce_emlrtRSI;
      f_st.site = &ce_emlrtRSI;
      if (ixstart + 1 > y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= y->size[0]) {
        f_st.site = &be_emlrtRSI;
        if (y->data[ixstart] > right) {
          right = y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&d_st, &tx, 1, &h_emlrtRTEI, TRUE);
  st.site = &jd_emlrtRSI;
  b_floor(&right);
  i2 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = x->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    tx->data[i2] = x->data[i2];
  }

  st.site = &kd_emlrtRSI;
  c_floor(tx);
  i2 = x->size[0];
  i3 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i2, i3, &o_emlrtECI, sp);
  i2 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = x->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    tx->data[i2] = x->data[i2] - tx->data[i2];
  }

  b_emxInit_real_T(sp, &ty, 1, &i_emlrtRTEI, TRUE);
  i2 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = y->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ty->data[i2] = y->data[i2];
  }

  st.site = &ld_emlrtRSI;
  c_floor(ty);
  i2 = y->size[0];
  i3 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i2, i3, &n_emlrtECI, sp);
  i2 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = y->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ty->data[i2] = y->data[i2] - ty->data[i2];
  }

  ixstart = tx->size[0];
  i2 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ax->data[i2] = 0.0;
  }

  emxInit_int32_T(sp, &r3, 1, &d_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i2 = r3->size[0];
  r3->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < ixstart; i2++) {
    r3->data[i2] = i2;
  }

  iv14[0] = r3->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv14, 1, b_tx, 1, &m_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i2 = 0; i2 < ixstart; i2++) {
    Ax->data[r3->data[i2]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  iv15[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv15, 1, *(int32_T (*)[1])tx->size, 1,
    &l_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ax->data[r3->data[i2] + Ax->size[0]] = tx->data[i2];
  }

  loop_ub = Ax->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  b_emxInit_real_T(sp, &r4, 1, &d_emlrtRTEI, TRUE);
  st.site = &md_emlrtRSI;
  power(&st, tx, r4);
  i2 = r0->size[0];
  r0->size[0] = r4->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r4->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r4->data[i2];
  }

  emxFree_real_T(&r4);
  iv16[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv16, 1, *(int32_T (*)[1])r0->size, 1,
    &k_emlrtECI, sp);
  loop_ub = r0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ax->data[r3->data[i2] + (Ax->size[0] << 1)] = r0->data[i2];
  }

  loop_ub = Ax->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  b_emxInit_real_T(sp, &r5, 1, &d_emlrtRTEI, TRUE);
  st.site = &nd_emlrtRSI;
  b_power(&st, tx, r5);
  i2 = r0->size[0];
  r0->size[0] = r5->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r5->size[0];
  emxFree_real_T(&tx);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r5->data[i2];
  }

  emxFree_real_T(&r5);
  iv17[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv17, 1, *(int32_T (*)[1])r0->size, 1,
    &j_emlrtECI, sp);
  loop_ub = r0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ax->data[r3->data[i2] + Ax->size[0] * 3] = r0->data[i2];
  }

  emxInit_real_T(sp, &r6, 2, &d_emlrtRTEI, TRUE);
  st.site = &od_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i2 = Ax->size[0];
  i3 = r6->size[0] * r6->size[1];
  r6->size[0] = Ax->size[0];
  r6->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r6, i3, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    r6->data[i3] = Ax->data[i3];
  }

  i3 = Ax->size[0];
  i4 = Ax->size[0];
  i5 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i5, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i5 = 0; i5 < loop_ub; i5++) {
    Ax->data[i5] = 0.0;
  }

  b_st.site = &me_emlrtRSI;
  eml_xgemm(i2, r6, i3, Ax, i4);
  ixstart = ty->size[0];
  i2 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ay->data[i2] = 0.0;
  }

  ixstart = ty->size[0];
  i2 = r3->size[0];
  r3->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < ixstart; i2++) {
    r3->data[i2] = i2;
  }

  iv18[0] = r3->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv18, 1, b_ty, 1, &i_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i2 = 0; i2 < ixstart; i2++) {
    Ay->data[r3->data[i2]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  iv19[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[1])ty->size, 1,
    &h_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ay->data[r3->data[i2] + Ay->size[0]] = ty->data[i2];
  }

  loop_ub = Ay->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  b_emxInit_real_T(sp, &r7, 1, &d_emlrtRTEI, TRUE);
  st.site = &pd_emlrtRSI;
  power(&st, ty, r7);
  i2 = r0->size[0];
  r0->size[0] = r7->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r7->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r7->data[i2];
  }

  emxFree_real_T(&r7);
  iv20[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv20, 1, *(int32_T (*)[1])r0->size, 1,
    &g_emlrtECI, sp);
  loop_ub = r0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ay->data[r3->data[i2] + (Ay->size[0] << 1)] = r0->data[i2];
  }

  loop_ub = Ay->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  b_emxInit_real_T(sp, &r8, 1, &d_emlrtRTEI, TRUE);
  st.site = &qd_emlrtRSI;
  b_power(&st, ty, r8);
  i2 = r0->size[0];
  r0->size[0] = r8->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r8->size[0];
  emxFree_real_T(&ty);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r8->data[i2];
  }

  emxFree_real_T(&r8);
  iv21[0] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv21, 1, *(int32_T (*)[1])r0->size, 1,
    &f_emlrtECI, sp);
  loop_ub = r0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Ay->data[r3->data[i2] + Ay->size[0] * 3] = r0->data[i2];
  }

  st.site = &rd_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i2 = Ay->size[0];
  i3 = r6->size[0] * r6->size[1];
  r6->size[0] = Ay->size[0];
  r6->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r6, i3, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    r6->data[i3] = Ay->data[i3];
  }

  i3 = Ay->size[0];
  i4 = Ay->size[0];
  i5 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i5, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i5 = 0; i5 < loop_ub; i5++) {
    Ay->data[i5] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &l_emlrtRTEI, TRUE);
  b_st.site = &me_emlrtRSI;
  eml_xgemm(i2, r6, i3, Ay, i4);
  st.site = &sd_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI, sp);
  i2 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI, sp);
  i2 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &e_emlrtDCI, sp);
  emxFree_real_T(&r6);
  for (i2 = 0; i2 < loop_ub; i2++) {
    A->data[i2] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &o_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i2 = Ax->size[0];
    i3 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &c_emlrtBCI, sp);
    i2 = Ay->size[0];
    i3 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &b_emlrtBCI, sp);
    i2 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &c_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &d_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &c_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &d_emlrtDCI, sp);
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp1->data[i2] = 0.0;
    }

    i2 = x->size[0];
    i3 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &d_emlrtBCI, sp)
      - 1];
    st.site = &td_emlrtRSI;
    b_floor(&mtmp);
    i2 = x->size[0];
    i3 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &e_emlrtBCI,
      sp) - 1];
    st.site = &td_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i2 = y->size[0];
    i3 = 1 + i;
    b_mtmp = y->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &f_emlrtBCI,
      sp) - 1];
    st.site = &td_emlrtRSI;
    b_floor(&b_mtmp);
    i2 = y->size[0];
    i3 = 1 + i;
    d0 = y->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &g_emlrtBCI, sp) -
      1];
    st.site = &td_emlrtRSI;
    b_floor(&d0);
    if (b_mtmp == d0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &pc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &td_emlrtRSI;
    for (i2 = 0; i2 < 4; i2++) {
      for (i3 = 0; i3 < 4; i3++) {
        i4 = (int32_T)(4.0 + down);
        i5 = (int32_T)(mtmp + (1.0 + (real_T)i2));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i3));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &h_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &i_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i2] *
          Ay->data[i + Ay->size[0] * i3];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i2 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i2, (int32_T)sizeof
                      (real_T), &d_emlrtRTEI);
    for (i2 = 0; i2 < ixstart; i2++) {
      param_matrix->data[param_matrix->size[0] * i2] = temp1->data[i2];
    }

    i2 = A->size[0];
    i3 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &emlrtBCI, sp);
    loop_ub = A->size[1];
    i2 = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                      &d_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      r3->data[i2] = i2;
    }

    iv22[0] = 1;
    iv22[1] = r3->size[0];
    emlrtSubAssignSizeCheckR2012b(iv22, 2, *(int32_T (*)[2])param_matrix->size,
      2, &e_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      A->data[i + A->size[0] * r3->data[i2]] = param_matrix->data
        [param_matrix->size[0] * i2];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i2 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &emlrtDCI,
    sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &b_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i2, (int32_T)sizeof
                    (real_T), &d_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &b_emlrtDCI, sp) << 1;
  for (i2 = 0; i2 < loop_ub; i2++) {
    control_p->data[i2] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i2 = r3->size[0];
  r3->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  emxInit_int32_T(sp, &r9, 1, &d_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i2 = r9->size[0];
  r9->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r9, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r9->data[i2] = i2;
  }

  emxInit_real_T(sp, &a, 2, &d_emlrtRTEI, TRUE);
  st.site = &ud_emlrtRSI;
  i2 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = A->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = A->size[1];
    for (i3 = 0; i3 < ixstart; i3++) {
      a->data[i3 + a->size[0] * i2] = A->data[i2 + A->size[0] * i3];
    }
  }

  b_st.site = &hf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m3 = mxCreateCharArray(2, iv23);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&j_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, j_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      k_y = NULL;
      m3 = mxCreateCharArray(2, iv24);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
      emlrtAssign(&k_y, m3);
      c_st.site = &ps_emlrtRSI;
      h_st.site = &at_emlrtRSI;
      error(&c_st, message(&h_st, k_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = a->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ixstart = A->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        temp1->data[i2 + temp1->size[0] * i3] = 0.0;
        ix = a->size[1];
        for (i4 = 0; i4 < ix; i4++) {
          temp1->data[i2 + temp1->size[0] * i3] += a->data[i2 + a->size[0] * i4]
            * A->data[i4 + A->size[0] * i3];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp1->data[i2] = 0.0;
    }

    b_st.site = &me_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &ud_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &ud_emlrtRSI;
  i2 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = A->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = A->size[1];
    for (i3 = 0; i3 < ixstart; i3++) {
      temp1->data[i3 + temp1->size[0] * i2] = A->data[i2 + A->size[0] * i3];
    }
  }

  b_st.site = &hf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m3 = mxCreateCharArray(2, iv25);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&l_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, l_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      m_y = NULL;
      m3 = mxCreateCharArray(2, iv26);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
      emlrtAssign(&m_y, m3);
      c_st.site = &ps_emlrtRSI;
      h_st.site = &at_emlrtRSI;
      error(&c_st, message(&h_st, m_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = a->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ixstart = temp1->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        temp2->data[i2 + temp2->size[0] * i3] = 0.0;
        ix = a->size[1];
        for (i4 = 0; i4 < ix; i4++) {
          temp2->data[i2 + temp2->size[0] * i3] += a->data[i2 + a->size[0] * i4]
            * temp1->data[i4 + temp1->size[0] * i3];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp2->data[i2] = 0.0;
    }

    b_st.site = &me_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &ud_emlrtRSI;
  loop_ub = ref->size[0];
  i2 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    y->data[i2] = ref->data[i2];
  }

  b_st.site = &hf_emlrtRSI;
  i2 = ref->size[0];
  if (!(temp2->size[1] == i2)) {
    guard8 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard8 = TRUE;
    } else {
      i2 = ref->size[0];
      if (i2 == 1) {
        guard8 = TRUE;
      } else {
        n_y = NULL;
        m3 = mxCreateCharArray(2, iv27);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
        emlrtAssign(&n_y, m3);
        c_st.site = &ps_emlrtRSI;
        h_st.site = &at_emlrtRSI;
        error(&c_st, message(&h_st, n_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m3 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&o_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, o_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard7 = FALSE;
  if (temp2->size[1] == 1) {
    guard7 = TRUE;
  } else {
    i2 = ref->size[0];
    if (i2 == 1) {
      guard7 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i2 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i2, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        x->data[i2] = 0.0;
      }

      b_st.site = &me_emlrtRSI;
      d_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard7 == TRUE) {
    i2 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      x->data[i2] = 0.0;
      ixstart = temp2->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        x->data[i2] += temp2->data[i2 + temp2->size[0] * i3] * y->data[i3];
      }
    }
  }

  st.site = &ud_emlrtRSI;
  b_st.site = &wp_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &wp_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &xp_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  f_st.site = &ae_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &xp_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  f_st.site = &gm_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &yp_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &yp_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i2 = 0; i2 < 2; i2++) {
    emlrtNonNegativeCheckFastR2012b(sz[i2], &f_emlrtDCI, &st);
  }

  i2 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  b_st.site = &aq_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &cq_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m3 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 40; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m3, cv20);
    emlrtAssign(&p_y, m3);
    b_st.site = &aq_emlrtRSI;
    i_st.site = &bt_emlrtRSI;
    error(&b_st, message(&i_st, p_y, &w_emlrtMCI), &x_emlrtMCI);
  }

  b_st.site = &bq_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= x->size[0]; ixstart++) {
    temp1->data[ixstart] = x->data[ixstart];
  }

  iv30[0] = r3->size[0];
  iv30[1] = r9->size[0];
  emlrtSubAssignSizeCheckR2012b(iv30, 2, *(int32_T (*)[2])temp1->size, 2,
    &d_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = temp1->size[0];
    for (i3 = 0; i3 < ixstart; i3++) {
      control_p->data[r3->data[i3] + control_p->size[0] * r9->data[i2]] =
        temp1->data[i3 + temp1->size[0] * i2];
    }
  }

  loop_ub = control_p->size[0];
  i2 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r3->data[i2] = i2;
  }

  loop_ub = control_p->size[1];
  i2 = r9->size[0];
  r9->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r9, i2, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r9->data[i2] = i2;
  }

  st.site = &vd_emlrtRSI;
  i2 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = A->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = A->size[1];
    for (i3 = 0; i3 < ixstart; i3++) {
      a->data[i3 + a->size[0] * i2] = A->data[i2 + A->size[0] * i3];
    }
  }

  b_st.site = &hf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m3 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&q_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, q_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      r_y = NULL;
      m3 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
      emlrtAssign(&r_y, m3);
      c_st.site = &ps_emlrtRSI;
      h_st.site = &at_emlrtRSI;
      error(&c_st, message(&h_st, r_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = a->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ixstart = A->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        temp1->data[i2 + temp1->size[0] * i3] = 0.0;
        ix = a->size[1];
        for (i4 = 0; i4 < ix; i4++) {
          temp1->data[i2 + temp1->size[0] * i3] += a->data[i2 + a->size[0] * i4]
            * A->data[i4 + A->size[0] * i3];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    i2 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp1->data[i2] = 0.0;
    }

    b_st.site = &me_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &vd_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &vd_emlrtRSI;
  i2 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = A->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = A->size[1];
    for (i3 = 0; i3 < ixstart; i3++) {
      temp1->data[i3 + temp1->size[0] * i2] = A->data[i2 + A->size[0] * i3];
    }
  }

  b_st.site = &hf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m3 = mxCreateCharArray(2, iv33);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&s_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, s_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      t_y = NULL;
      m3 = mxCreateCharArray(2, iv34);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
      emlrtAssign(&t_y, m3);
      c_st.site = &ps_emlrtRSI;
      h_st.site = &at_emlrtRSI;
      error(&c_st, message(&h_st, t_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = a->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ixstart = temp1->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        temp2->data[i2 + temp2->size[0] * i3] = 0.0;
        ix = a->size[1];
        for (i4 = 0; i4 < ix; i4++) {
          temp2->data[i2 + temp2->size[0] * i3] += a->data[i2 + a->size[0] * i4]
            * temp1->data[i4 + temp1->size[0] * i3];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    i2 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp2->data[i2] = 0.0;
    }

    b_st.site = &me_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &vd_emlrtRSI;
  loop_ub = ref->size[0];
  i2 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    y->data[i2] = ref->data[i2 + ref->size[0]];
  }

  b_st.site = &hf_emlrtRSI;
  i2 = ref->size[0];
  if (!(temp2->size[1] == i2)) {
    guard6 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard6 = TRUE;
    } else {
      i2 = ref->size[0];
      if (i2 == 1) {
        guard6 = TRUE;
      } else {
        u_y = NULL;
        m3 = mxCreateCharArray(2, iv35);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
        emlrtAssign(&u_y, m3);
        c_st.site = &ps_emlrtRSI;
        h_st.site = &at_emlrtRSI;
        error(&c_st, message(&h_st, u_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m3 = mxCreateCharArray(2, iv36);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&v_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, v_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard5 = FALSE;
  if (temp2->size[1] == 1) {
    guard5 = TRUE;
  } else {
    i2 = ref->size[0];
    if (i2 == 1) {
      guard5 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i2 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i2, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        x->data[i2] = 0.0;
      }

      b_st.site = &me_emlrtRSI;
      d_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard5 == TRUE) {
    i2 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      x->data[i2] = 0.0;
      ixstart = temp2->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        x->data[i2] += temp2->data[i2 + temp2->size[0] * i3] * y->data[i3];
      }
    }
  }

  st.site = &vd_emlrtRSI;
  b_st.site = &wp_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &wp_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &xp_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  f_st.site = &ae_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &xp_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  f_st.site = &gm_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &yp_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &yp_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i2 = 0; i2 < 2; i2++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i2], &f_emlrtDCI, &st);
  }

  i2 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  b_st.site = &aq_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &cq_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m3 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 40; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m3, cv20);
    emlrtAssign(&w_y, m3);
    b_st.site = &aq_emlrtRSI;
    i_st.site = &bt_emlrtRSI;
    error(&b_st, message(&i_st, w_y, &w_emlrtMCI), &x_emlrtMCI);
  }

  b_st.site = &bq_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= x->size[0]; ixstart++) {
    temp1->data[ixstart] = x->data[ixstart];
  }

  iv38[0] = r3->size[0];
  iv38[1] = r9->size[0];
  emlrtSubAssignSizeCheckR2012b(iv38, 2, *(int32_T (*)[2])temp1->size, 2,
    &c_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ixstart = temp1->size[0];
    for (i3 = 0; i3 < ixstart; i3++) {
      control_p->data[(r3->data[i3] + control_p->size[0] * r9->data[i2]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i3 + temp1->size
        [0] * i2];
    }
  }

  emxFree_int32_T(&r9);
  emxFree_int32_T(&r3);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i2 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < ixstart; i2++) {
    for (i3 = 0; i3 < loop_ub; i3++) {
      temp1->data[i3 + temp1->size[0] * i2] = control_p->data[i3 +
        control_p->size[0] * i2];
    }
  }

  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i2 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = loop_ub;
  temp2->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i2 = 0; i2 < ixstart; i2++) {
    for (i3 = 0; i3 < loop_ub; i3++) {
      temp2->data[i3 + temp2->size[0] * i2] = control_p->data[(i3 +
        control_p->size[0] * i2) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &wd_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  i2 = control_p->size[0];
  i3 = control_p->size[1];
  if (!(A->size[1] == i2 * i3)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      i2 = control_p->size[0];
      i3 = control_p->size[1];
      if (i2 * i3 == 1) {
        guard4 = TRUE;
      } else {
        x_y = NULL;
        m3 = mxCreateCharArray(2, iv39);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
        emlrtAssign(&x_y, m3);
        c_st.site = &ps_emlrtRSI;
        h_st.site = &at_emlrtRSI;
        error(&c_st, message(&h_st, x_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m3 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&y_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, y_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i2 = control_p->size[0];
    i3 = control_p->size[1];
    if (i2 * i3 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i2 = r0->size[0];
      r0->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        r0->data[i2] = 0.0;
      }

      i2 = control_p->size[0];
      i3 = control_p->size[1];
      iv41[0] = i2 * i3;
      b_temp1 = *temp1;
      b_temp1.size = (int32_T *)&iv41;
      b_temp1.numDimensions = 1;
      b_st.site = &me_emlrtRSI;
      d_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1],
                  r0, A->size[0]);
    }
  }

  if (guard3 == TRUE) {
    i2 = r0->size[0];
    r0->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = A->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      r0->data[i2] = 0.0;
      ixstart = A->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        r0->data[i2] += A->data[i2 + A->size[0] * i3] * temp1->data[i3];
      }
    }
  }

  i2 = ref->size[0];
  i3 = r0->size[0];
  emlrtSizeEqCheck1DFastR2012b(i3, i2, &b_emlrtECI, sp);
  st.site = &wd_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  i2 = control_p->size[0];
  i3 = control_p->size[1];
  if (!(A->size[1] == i2 * i3)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      i2 = control_p->size[0];
      i3 = control_p->size[1];
      if (i2 * i3 == 1) {
        guard2 = TRUE;
      } else {
        ab_y = NULL;
        m3 = mxCreateCharArray(2, iv42);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m3, cv18);
        emlrtAssign(&ab_y, m3);
        c_st.site = &ps_emlrtRSI;
        h_st.site = &at_emlrtRSI;
        error(&c_st, message(&h_st, ab_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m3 = mxCreateCharArray(2, iv43);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv16);
      emlrtAssign(&bb_y, m3);
      c_st.site = &os_emlrtRSI;
      h_st.site = &ys_emlrtRSI;
      error(&c_st, message(&h_st, bb_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i2 = control_p->size[0];
    i3 = control_p->size[1];
    if (i2 * i3 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i2 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        y->data[i2] = 0.0;
      }

      i2 = control_p->size[0];
      i3 = control_p->size[1];
      iv44[0] = i2 * i3;
      b_temp1 = *temp2;
      b_temp1.size = (int32_T *)&iv44;
      b_temp1.numDimensions = 1;
      b_st.site = &me_emlrtRSI;
      d_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1], y,
                  A->size[0]);
    }
  }

  if (guard1 == TRUE) {
    i2 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    loop_ub = A->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      y->data[i2] = 0.0;
      ixstart = A->size[1];
      for (i3 = 0; i3 < ixstart; i3++) {
        y->data[i2] += A->data[i2 + A->size[0] * i3] * temp2->data[i3];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &r10, 1, &d_emlrtRTEI, TRUE);
  i2 = ref->size[0];
  i3 = y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i3, i2, &emlrtECI, sp);
  i2 = r10->size[0];
  r10->size[0] = r0->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r10, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r10->data[i2] = r0->data[i2] - ref->data[i2];
  }

  b_emxInit_real_T(sp, &r11, 1, &d_emlrtRTEI, TRUE);
  st.site = &wd_emlrtRSI;
  power(&st, r10, r11);
  i2 = r0->size[0];
  r0->size[0] = r11->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r11->size[0];
  emxFree_real_T(&r10);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r11->data[i2];
  }

  emxFree_real_T(&r11);
  b_emxInit_real_T(sp, &cb_y, 1, &d_emlrtRTEI, TRUE);
  st.site = &wd_emlrtRSI;
  sum(&st, r0);
  i2 = cb_y->size[0];
  cb_y->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = y->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    cb_y->data[i2] = y->data[i2] - ref->data[i2 + ref->size[0]];
  }

  b_emxInit_real_T(sp, &r12, 1, &d_emlrtRTEI, TRUE);
  st.site = &wd_emlrtRSI;
  power(&st, cb_y, r12);
  i2 = r0->size[0];
  r0->size[0] = r12->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i2, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  loop_ub = r12->size[0];
  emxFree_real_T(&cb_y);
  for (i2 = 0; i2 < loop_ub; i2++) {
    r0->data[i2] = r12->data[i2];
  }

  emxFree_real_T(&r12);
  st.site = &wd_emlrtRSI;
  sum(&st, r0);
  emxFree_real_T(&r0);
  emxFree_real_T(&temp2);
  emxFree_real_T(&temp1);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emxFree_real_T(&y);
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_inv.c) */
