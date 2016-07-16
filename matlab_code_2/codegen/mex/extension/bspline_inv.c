/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "bspline_inv.h"
#include "floor.h"
#include "extension_emxutil.h"
#include "sum.h"
#include "power.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_error.h"
#include "repmat.h"
#include "pinv.h"
#include "rdivide.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo nh_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ph_emlrtRSI = { 16, "max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo rn_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo sn_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo tn_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo un_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo vn_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo wn_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo xn_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo yn_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ao_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo bo_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo co_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo do_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo eo_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo fo_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo go_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ho_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo io_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo jo_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ko_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo iy_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo jy_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ky_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ly_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo my_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ny_emlrtRSI = { 215, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtMCInfo cb_emlrtMCI = { 67, 5, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo db_emlrtMCI = { 66, 15, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo tb_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo r_emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo s_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo t_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo u_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo v_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtRTEInfo ld_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo md_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtECInfo w_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo x_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo y_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo ab_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo bb_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo cb_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo db_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo eb_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo fb_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo gb_emlrtECI = { -1, 17, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 14, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 13, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 12, 18, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 11, 17, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtDCInfo t_emlrtDCI = { 46, 19, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo u_emlrtDCI = { 46, 27, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo v_emlrtDCI = { 40, 26, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo w_emlrtDCI = { 40, 34, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo x_emlrtDCI = { 35, 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo y_emlrtDCI = { 65, 48, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m", 4 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 41, 26, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 41, 40, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 41, 55, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 41, 69, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 41, 18, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 41, 47, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtRSInfo lab_emlrtRSI = { 67, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

/* Function Declarations */
static void c_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
  *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
  int32_T ldc);

/* Function Definitions */
static void c_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
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

void b_eml_xgemm(int32_T m, int32_T k, const emxArray_real_T *A, int32_T lda,
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

void bspline_inv(const emlrtStack *sp, const emxArray_real_T *src, const
                 emxArray_real_T *ref, emxArray_real_T *control_p, real_T
                 *b_error)
{
  emxArray_real_T *x;
  emxArray_real_T *y;
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *temp1;
  emxArray_real_T *temp2;
  emxArray_real_T *r16;
  int32_T i16;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv43[2] = { 1, 36 };

  const mxArray *m9;
  char_T cv25[36];
  int32_T i;
  static const char_T cv26[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv44[2] = { 1, 39 };

  char_T cv27[39];
  static const char_T cv28[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  int32_T exitg6;
  int32_T exitg5;
  boolean_T guard9 = FALSE;
  const mxArray *d_y;
  static const int32_T iv45[2] = { 1, 36 };

  const mxArray *e_y;
  static const int32_T iv46[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *r17;
  emxArray_real_T *c_src;
  emxArray_real_T *r18;
  const mxArray *f_y;
  static const int32_T iv47[2] = { 1, 36 };

  const mxArray *g_y;
  static const int32_T iv48[2] = { 1, 39 };

  real_T down;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv49[2] = { 1, 36 };

  const mxArray *i_y;
  static const int32_T iv50[2] = { 1, 39 };

  real_T right;
  boolean_T exitg1;
  emxArray_real_T *tx;
  int32_T i17;
  emxArray_real_T *ty;
  emxArray_int32_T *r19;
  int32_T iv51[1];
  int32_T b_tx[1];
  int32_T iv52[1];
  emxArray_real_T *r20;
  int32_T iv53[1];
  emxArray_real_T *r21;
  int32_T iv54[1];
  emxArray_real_T *r22;
  uint32_T unnamed_idx_0;
  int32_T i18;
  int32_T i19;
  int32_T iv55[1];
  int32_T b_ty[1];
  int32_T iv56[1];
  emxArray_real_T *r23;
  int32_T iv57[1];
  emxArray_real_T *r24;
  int32_T iv58[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d8;
  int32_T iv59[2];
  emxArray_int32_T *r25;
  emxArray_real_T *a;
  const mxArray *j_y;
  static const int32_T iv60[2] = { 1, 45 };

  char_T cv29[45];
  static const char_T cv30[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *k_y;
  static const int32_T iv61[2] = { 1, 21 };

  char_T cv31[21];
  static const char_T cv32[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  const mxArray *l_y;
  static const int32_T iv62[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv63[2] = { 1, 21 };

  boolean_T guard8 = FALSE;
  const mxArray *n_y;
  static const int32_T iv64[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv65[2] = { 1, 45 };

  boolean_T guard7 = FALSE;
  int32_T sz[2];
  const mxArray *p_y;
  static const int32_T iv66[2] = { 1, 40 };

  char_T cv33[40];
  static const char_T cv34[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T iv67[2];
  const mxArray *q_y;
  static const int32_T iv68[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv69[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv70[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv71[2] = { 1, 21 };

  boolean_T guard6 = FALSE;
  const mxArray *u_y;
  static const int32_T iv72[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv73[2] = { 1, 45 };

  boolean_T guard5 = FALSE;
  int32_T b_sz[2];
  const mxArray *w_y;
  static const int32_T iv74[2] = { 1, 40 };

  int32_T iv75[2];
  boolean_T guard4 = FALSE;
  const mxArray *x_y;
  static const int32_T iv76[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv77[2] = { 1, 45 };

  boolean_T guard3 = FALSE;
  int32_T iv78[1];
  emxArray_real_T b_temp1;
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv79[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv80[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv81[1];
  emxArray_real_T *r26;
  emxArray_real_T *r27;
  emxArray_real_T *cb_y;
  emxArray_real_T *r28;
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
  b_emxInit_real_T(sp, &x, 1, &kb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &y, 1, &lb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ax, 2, &ob_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &pb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &rb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &sb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &r16, 1, &ib_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  i16 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i16, &sb_emlrtBCI, sp);
  st.site = &rn_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  i16 = src->size[0];
  guard10 = FALSE;
  if (i16 == 1) {
    guard10 = TRUE;
  } else {
    i16 = src->size[0];
    if (i16 != 1) {
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
    m9 = mxCreateCharArray(2, iv43);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&b_y, m9);
    d_st.site = &ty_emlrtRSI;
    e_st.site = &gab_emlrtRSI;
    error(&d_st, b_message(&e_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i16 = src->size[0];
  if (i16 > 0) {
  } else {
    c_y = NULL;
    m9 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&c_y, m9);
    d_st.site = &sy_emlrtRSI;
    e_st.site = &fab_emlrtRSI;
    error(&d_st, b_message(&e_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &gj_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i16 = src->size[0];
  if (i16 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &md_emlrtRSI;
      i16 = src->size[0];
      if (2 > i16) {
        overflow = FALSE;
      } else {
        i16 = src->size[0];
        overflow = (i16 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i16 = src->size[0];
        if (ix <= i16) {
          ixstart = ix;
          f_st.site = &kd_emlrtRSI;
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

    i16 = src->size[0];
    if (ixstart < i16) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      i16 = src->size[0];
      if (ixstart + 1 > i16) {
        overflow = FALSE;
      } else {
        i16 = src->size[0];
        overflow = (i16 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i16 = src->size[0];
        if (ixstart + 1 <= i16) {
          f_st.site = &hd_emlrtRSI;
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

  i16 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i16, &rb_emlrtBCI, sp);
  st.site = &sn_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  i16 = src->size[0];
  guard9 = FALSE;
  if (i16 == 1) {
    guard9 = TRUE;
  } else {
    i16 = src->size[0];
    if (i16 != 1) {
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
    m9 = mxCreateCharArray(2, iv45);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&d_y, m9);
    d_st.site = &ty_emlrtRSI;
    e_st.site = &gab_emlrtRSI;
    error(&d_st, b_message(&e_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i16 = src->size[0];
  if (i16 > 0) {
  } else {
    e_y = NULL;
    m9 = mxCreateCharArray(2, iv46);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&e_y, m9);
    d_st.site = &sy_emlrtRSI;
    e_st.site = &fab_emlrtRSI;
    error(&d_st, b_message(&e_st, e_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &gj_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i16 = src->size[0];
  if (i16 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &md_emlrtRSI;
      i16 = src->size[0];
      if (2 > i16) {
        overflow = FALSE;
      } else {
        i16 = src->size[0];
        overflow = (i16 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i16 = src->size[0];
        if (ix <= i16) {
          ixstart = ix;
          f_st.site = &kd_emlrtRSI;
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

    i16 = src->size[0];
    if (ixstart < i16) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      i16 = src->size[0];
      if (ixstart + 1 > i16) {
        overflow = FALSE;
      } else {
        i16 = src->size[0];
        overflow = (i16 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i16 = src->size[0];
        if (ixstart + 1 <= i16) {
          f_st.site = &hd_emlrtRSI;
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

  b_emxInit_real_T(&d_st, &b_src, 1, &ib_emlrtRTEI, TRUE);
  i16 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i16, &qb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i16 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_src->data[i16] = (src->data[i16] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r17, 1, &ib_emlrtRTEI, TRUE);
  st.site = &tn_emlrtRSI;
  b_rdivide(&st, b_src, r17);
  i16 = x->size[0];
  x->size[0] = r17->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)x, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r17->size[0];
  emxFree_real_T(&b_src);
  for (i16 = 0; i16 < loop_ub; i16++) {
    x->data[i16] = r17->data[i16];
  }

  emxFree_real_T(&r17);
  b_emxInit_real_T(sp, &c_src, 1, &ib_emlrtRTEI, TRUE);
  i16 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i16, &pb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i16 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    c_src->data[i16] = (src->data[i16 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r18, 1, &ib_emlrtRTEI, TRUE);
  st.site = &un_emlrtRSI;
  b_rdivide(&st, c_src, r18);
  i16 = y->size[0];
  y->size[0] = r18->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r18->size[0];
  emxFree_real_T(&c_src);
  for (i16 = 0; i16 < loop_ub; i16++) {
    y->data[i16] = r18->data[i16];
  }

  emxFree_real_T(&r18);
  st.site = &vn_emlrtRSI;
  b_st.site = &ph_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    f_y = NULL;
    m9 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&f_y, m9);
    d_st.site = &ty_emlrtRSI;
    e_st.site = &gab_emlrtRSI;
    error(&d_st, b_message(&e_st, f_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m9 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&g_y, m9);
    d_st.site = &sy_emlrtRSI;
    e_st.site = &fab_emlrtRSI;
    error(&d_st, b_message(&e_st, g_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &gj_emlrtRSI;
  ixstart = 1;
  down = x->data[0];
  if (x->size[0] > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(x->data[0])) {
      f_st.site = &md_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        f_st.site = &kd_emlrtRSI;
        if (!muDoubleScalarIsNaN(x->data[ix - 1])) {
          down = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      if (ixstart + 1 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= x->size[0]) {
        f_st.site = &hd_emlrtRSI;
        if (x->data[ixstart] > down) {
          down = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  st.site = &vn_emlrtRSI;
  b_floor(&down);
  st.site = &wn_emlrtRSI;
  b_st.site = &ph_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if ((y->size[0] == 1) || (y->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    h_y = NULL;
    m9 = mxCreateCharArray(2, iv49);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&h_y, m9);
    d_st.site = &ty_emlrtRSI;
    e_st.site = &gab_emlrtRSI;
    error(&d_st, b_message(&e_st, h_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (y->size[0] > 0) {
  } else {
    i_y = NULL;
    m9 = mxCreateCharArray(2, iv50);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&i_y, m9);
    d_st.site = &sy_emlrtRSI;
    e_st.site = &fab_emlrtRSI;
    error(&d_st, b_message(&e_st, i_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &gj_emlrtRSI;
  ixstart = 1;
  right = y->data[0];
  if (y->size[0] > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(y->data[0])) {
      f_st.site = &md_emlrtRSI;
      if (2 > y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= y->size[0])) {
        ixstart = ix;
        f_st.site = &kd_emlrtRSI;
        if (!muDoubleScalarIsNaN(y->data[ix - 1])) {
          right = y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < y->size[0]) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      if (ixstart + 1 > y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= y->size[0]) {
        f_st.site = &hd_emlrtRSI;
        if (y->data[ixstart] > right) {
          right = y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&d_st, &tx, 1, &mb_emlrtRTEI, TRUE);
  st.site = &wn_emlrtRSI;
  b_floor(&right);
  i16 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    tx->data[i16] = x->data[i16];
  }

  st.site = &xn_emlrtRSI;
  c_floor(tx);
  i16 = x->size[0];
  i17 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i16, i17, &gb_emlrtECI, sp);
  i16 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    tx->data[i16] = x->data[i16] - tx->data[i16];
  }

  b_emxInit_real_T(sp, &ty, 1, &nb_emlrtRTEI, TRUE);
  i16 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ty->data[i16] = y->data[i16];
  }

  st.site = &yn_emlrtRSI;
  c_floor(ty);
  i16 = y->size[0];
  i17 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i16, i17, &fb_emlrtECI, sp);
  i16 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ty->data[i16] = y->data[i16] - ty->data[i16];
  }

  ixstart = tx->size[0];
  i16 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ax->data[i16] = 0.0;
  }

  emxInit_int32_T(sp, &r19, 1, &ib_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i16 = r19->size[0];
  r19->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < ixstart; i16++) {
    r19->data[i16] = i16;
  }

  iv51[0] = r19->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv51, 1, b_tx, 1, &eb_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    Ax->data[r19->data[i16]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  iv52[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv52, 1, *(int32_T (*)[1])tx->size, 1,
    &db_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ax->data[r19->data[i16] + Ax->size[0]] = tx->data[i16];
  }

  loop_ub = Ax->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  b_emxInit_real_T(sp, &r20, 1, &ib_emlrtRTEI, TRUE);
  st.site = &ao_emlrtRSI;
  power(&st, tx, r20);
  i16 = r16->size[0];
  r16->size[0] = r20->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r20->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    r16->data[i16] = r20->data[i16];
  }

  emxFree_real_T(&r20);
  iv53[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv53, 1, *(int32_T (*)[1])r16->size, 1,
    &cb_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ax->data[r19->data[i16] + (Ax->size[0] << 1)] = r16->data[i16];
  }

  loop_ub = Ax->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  b_emxInit_real_T(sp, &r21, 1, &ib_emlrtRTEI, TRUE);
  st.site = &bo_emlrtRSI;
  b_power(&st, tx, r21);
  i16 = r16->size[0];
  r16->size[0] = r21->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r21->size[0];
  emxFree_real_T(&tx);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r16->data[i16] = r21->data[i16];
  }

  emxFree_real_T(&r21);
  iv54[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv54, 1, *(int32_T (*)[1])r16->size, 1,
    &bb_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ax->data[r19->data[i16] + Ax->size[0] * 3] = r16->data[i16];
  }

  emxInit_real_T(sp, &r22, 2, &ib_emlrtRTEI, TRUE);
  st.site = &co_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i16 = Ax->size[0];
  i17 = r22->size[0] * r22->size[1];
  r22->size[0] = Ax->size[0];
  r22->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r22, i17, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    r22->data[i17] = Ax->data[i17];
  }

  i17 = Ax->size[0];
  i18 = Ax->size[0];
  i19 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i19, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i19 = 0; i19 < loop_ub; i19++) {
    Ax->data[i19] = 0.0;
  }

  b_st.site = &je_emlrtRSI;
  eml_xgemm(i16, r22, i17, Ax, i18);
  ixstart = ty->size[0];
  i16 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ay->data[i16] = 0.0;
  }

  ixstart = ty->size[0];
  i16 = r19->size[0];
  r19->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < ixstart; i16++) {
    r19->data[i16] = i16;
  }

  iv55[0] = r19->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv55, 1, b_ty, 1, &ab_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i16 = 0; i16 < ixstart; i16++) {
    Ay->data[r19->data[i16]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  iv56[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv56, 1, *(int32_T (*)[1])ty->size, 1,
    &y_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ay->data[r19->data[i16] + Ay->size[0]] = ty->data[i16];
  }

  loop_ub = Ay->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  b_emxInit_real_T(sp, &r23, 1, &ib_emlrtRTEI, TRUE);
  st.site = &do_emlrtRSI;
  power(&st, ty, r23);
  i16 = r16->size[0];
  r16->size[0] = r23->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r23->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    r16->data[i16] = r23->data[i16];
  }

  emxFree_real_T(&r23);
  iv57[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv57, 1, *(int32_T (*)[1])r16->size, 1,
    &x_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ay->data[r19->data[i16] + (Ay->size[0] << 1)] = r16->data[i16];
  }

  loop_ub = Ay->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  b_emxInit_real_T(sp, &r24, 1, &ib_emlrtRTEI, TRUE);
  st.site = &eo_emlrtRSI;
  b_power(&st, ty, r24);
  i16 = r16->size[0];
  r16->size[0] = r24->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r24->size[0];
  emxFree_real_T(&ty);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r16->data[i16] = r24->data[i16];
  }

  emxFree_real_T(&r24);
  iv58[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv58, 1, *(int32_T (*)[1])r16->size, 1,
    &w_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    Ay->data[r19->data[i16] + Ay->size[0] * 3] = r16->data[i16];
  }

  st.site = &fo_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i16 = Ay->size[0];
  i17 = r22->size[0] * r22->size[1];
  r22->size[0] = Ay->size[0];
  r22->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r22, i17, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    r22->data[i17] = Ay->data[i17];
  }

  i17 = Ay->size[0];
  i18 = Ay->size[0];
  i19 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i19, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i19 = 0; i19 < loop_ub; i19++) {
    Ay->data[i19] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &qb_emlrtRTEI, TRUE);
  b_st.site = &je_emlrtRSI;
  eml_xgemm(i16, r22, i17, Ay, i18);
  st.site = &go_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &x_emlrtDCI, sp);
  i16 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &x_emlrtDCI, sp);
  i16 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &x_emlrtDCI, sp);
  emxFree_real_T(&r22);
  for (i16 = 0; i16 < loop_ub; i16++) {
    A->data[i16] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &tb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i16 = Ax->size[0];
    i17 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &ob_emlrtBCI, sp);
    i16 = Ay->size[0];
    i17 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &nb_emlrtBCI, sp);
    i16 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &v_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &w_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &v_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &w_emlrtDCI, sp);
    for (i16 = 0; i16 < loop_ub; i16++) {
      temp1->data[i16] = 0.0;
    }

    i16 = x->size[0];
    i17 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &tb_emlrtBCI,
      sp) - 1];
    st.site = &ho_emlrtRSI;
    b_floor(&mtmp);
    i16 = x->size[0];
    i17 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &ub_emlrtBCI,
      sp) - 1];
    st.site = &ho_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &md_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i16 = y->size[0];
    i17 = 1 + i;
    b_mtmp = y->data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &vb_emlrtBCI,
      sp) - 1];
    st.site = &ho_emlrtRSI;
    b_floor(&b_mtmp);
    i16 = y->size[0];
    i17 = 1 + i;
    d8 = y->data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &wb_emlrtBCI, sp)
      - 1];
    st.site = &ho_emlrtRSI;
    b_floor(&d8);
    if (b_mtmp == d8) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &ld_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &ho_emlrtRSI;
    for (i16 = 0; i16 < 4; i16++) {
      for (i17 = 0; i17 < 4; i17++) {
        i18 = (int32_T)(4.0 + down);
        i19 = (int32_T)(mtmp + (1.0 + (real_T)i16));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i17));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &xb_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &yb_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i16]
          * Ay->data[i + Ay->size[0] * i17];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i16 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    for (i16 = 0; i16 < ixstart; i16++) {
      param_matrix->data[param_matrix->size[0] * i16] = temp1->data[i16];
    }

    i16 = A->size[0];
    i17 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &mb_emlrtBCI, sp);
    loop_ub = A->size[1];
    i16 = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                      &ib_emlrtRTEI);
    for (i16 = 0; i16 < loop_ub; i16++) {
      r19->data[i16] = i16;
    }

    iv59[0] = 1;
    iv59[1] = r19->size[0];
    emlrtSubAssignSizeCheckR2012b(iv59, 2, *(int32_T (*)[2])param_matrix->size,
      2, &v_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i16 = 0; i16 < loop_ub; i16++) {
      A->data[i + A->size[0] * r19->data[i16]] = param_matrix->data
        [param_matrix->size[0] * i16];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i16 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &t_emlrtDCI, sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &u_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i16, (int32_T)sizeof
                    (real_T), &ib_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &t_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &u_emlrtDCI, sp) << 1;
  for (i16 = 0; i16 < loop_ub; i16++) {
    control_p->data[i16] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i16 = r19->size[0];
  r19->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  emxInit_int32_T(sp, &r25, 1, &ib_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i16 = r25->size[0];
  r25->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r25, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r25->data[i16] = i16;
  }

  emxInit_real_T(sp, &a, 2, &ib_emlrtRTEI, TRUE);
  st.site = &io_emlrtRSI;
  i16 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = A->size[1];
    for (i17 = 0; i17 < ixstart; i17++) {
      a->data[i17 + a->size[0] * i16] = A->data[i16 + A->size[0] * i17];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m9 = mxCreateCharArray(2, iv60);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&j_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, j_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      k_y = NULL;
      m9 = mxCreateCharArray(2, iv61);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&k_y, m9);
      c_st.site = &wy_emlrtRSI;
      h_st.site = &kab_emlrtRSI;
      error(&c_st, b_message(&h_st, k_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = a->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      ixstart = A->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        temp1->data[i16 + temp1->size[0] * i17] = 0.0;
        ix = a->size[1];
        for (i18 = 0; i18 < ix; i18++) {
          temp1->data[i16 + temp1->size[0] * i17] += a->data[i16 + a->size[0] *
            i18] * A->data[i18 + A->size[0] * i17];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i16 = 0; i16 < loop_ub; i16++) {
      temp1->data[i16] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &io_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &io_emlrtRSI;
  i16 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = A->size[1];
    for (i17 = 0; i17 < ixstart; i17++) {
      temp1->data[i17 + temp1->size[0] * i16] = A->data[i16 + A->size[0] * i17];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m9 = mxCreateCharArray(2, iv62);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&l_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, l_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      m_y = NULL;
      m9 = mxCreateCharArray(2, iv63);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&m_y, m9);
      c_st.site = &wy_emlrtRSI;
      h_st.site = &kab_emlrtRSI;
      error(&c_st, b_message(&h_st, m_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = a->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      ixstart = temp1->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        temp2->data[i16 + temp2->size[0] * i17] = 0.0;
        ix = a->size[1];
        for (i18 = 0; i18 < ix; i18++) {
          temp2->data[i16 + temp2->size[0] * i17] += a->data[i16 + a->size[0] *
            i18] * temp1->data[i18 + temp1->size[0] * i17];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i16 = 0; i16 < loop_ub; i16++) {
      temp2->data[i16] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &io_emlrtRSI;
  loop_ub = ref->size[0];
  i16 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    y->data[i16] = ref->data[i16];
  }

  b_st.site = &gf_emlrtRSI;
  i16 = ref->size[0];
  if (!(temp2->size[1] == i16)) {
    guard8 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard8 = TRUE;
    } else {
      i16 = ref->size[0];
      if (i16 == 1) {
        guard8 = TRUE;
      } else {
        n_y = NULL;
        m9 = mxCreateCharArray(2, iv64);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&n_y, m9);
        c_st.site = &wy_emlrtRSI;
        h_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&h_st, n_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m9 = mxCreateCharArray(2, iv65);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&o_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, o_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard7 = FALSE;
  if (temp2->size[1] == 1) {
    guard7 = TRUE;
  } else {
    i16 = ref->size[0];
    if (i16 == 1) {
      guard7 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i16 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i16, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i16 = 0; i16 < loop_ub; i16++) {
        x->data[i16] = 0.0;
      }

      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard7 == TRUE) {
    i16 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i16, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      x->data[i16] = 0.0;
      ixstart = temp2->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        x->data[i16] += temp2->data[i16 + temp2->size[0] * i17] * y->data[i17];
      }
    }
  }

  st.site = &io_emlrtRSI;
  b_st.site = &iy_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &iy_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &jy_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &gj_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &jy_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &nh_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &ky_emlrtRSI;
    b_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &ky_emlrtRSI;
    b_eml_error(&b_st);
  }

  for (i16 = 0; i16 < 2; i16++) {
    emlrtNonNegativeCheckFastR2012b(sz[i16], &y_emlrtDCI, &st);
  }

  i16 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  b_st.site = &ly_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &ny_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m9 = mxCreateCharArray(2, iv66);
    for (i = 0; i < 40; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m9, cv33);
    emlrtAssign(&p_y, m9);
    b_st.site = &ly_emlrtRSI;
    i_st.site = &lab_emlrtRSI;
    error(&b_st, b_message(&i_st, p_y, &cb_emlrtMCI), &db_emlrtMCI);
  }

  b_st.site = &my_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= x->size[0]; ixstart++) {
    temp1->data[ixstart] = x->data[ixstart];
  }

  iv67[0] = r19->size[0];
  iv67[1] = r25->size[0];
  emlrtSubAssignSizeCheckR2012b(iv67, 2, *(int32_T (*)[2])temp1->size, 2,
    &u_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = temp1->size[0];
    for (i17 = 0; i17 < ixstart; i17++) {
      control_p->data[r19->data[i17] + control_p->size[0] * r25->data[i16]] =
        temp1->data[i17 + temp1->size[0] * i16];
    }
  }

  loop_ub = control_p->size[0];
  i16 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r19->data[i16] = i16;
  }

  loop_ub = control_p->size[1];
  i16 = r25->size[0];
  r25->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r25, i16, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r25->data[i16] = i16;
  }

  st.site = &jo_emlrtRSI;
  i16 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = A->size[1];
    for (i17 = 0; i17 < ixstart; i17++) {
      a->data[i17 + a->size[0] * i16] = A->data[i16 + A->size[0] * i17];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m9 = mxCreateCharArray(2, iv68);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&q_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, q_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      r_y = NULL;
      m9 = mxCreateCharArray(2, iv69);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&r_y, m9);
      c_st.site = &wy_emlrtRSI;
      h_st.site = &kab_emlrtRSI;
      error(&c_st, b_message(&h_st, r_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = a->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      ixstart = A->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        temp1->data[i16 + temp1->size[0] * i17] = 0.0;
        ix = a->size[1];
        for (i18 = 0; i18 < ix; i18++) {
          temp1->data[i16 + temp1->size[0] * i17] += a->data[i16 + a->size[0] *
            i18] * A->data[i18 + A->size[0] * i17];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    i16 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i16 = 0; i16 < loop_ub; i16++) {
      temp1->data[i16] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &jo_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &jo_emlrtRSI;
  i16 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = A->size[1];
    for (i17 = 0; i17 < ixstart; i17++) {
      temp1->data[i17 + temp1->size[0] * i16] = A->data[i16 + A->size[0] * i17];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m9 = mxCreateCharArray(2, iv70);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&s_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, s_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      t_y = NULL;
      m9 = mxCreateCharArray(2, iv71);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&t_y, m9);
      c_st.site = &wy_emlrtRSI;
      h_st.site = &kab_emlrtRSI;
      error(&c_st, b_message(&h_st, t_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = a->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      ixstart = temp1->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        temp2->data[i16 + temp2->size[0] * i17] = 0.0;
        ix = a->size[1];
        for (i18 = 0; i18 < ix; i18++) {
          temp2->data[i16 + temp2->size[0] * i17] += a->data[i16 + a->size[0] *
            i18] * temp1->data[i18 + temp1->size[0] * i17];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    i16 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i16, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i16 = 0; i16 < loop_ub; i16++) {
      temp2->data[i16] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &jo_emlrtRSI;
  loop_ub = ref->size[0];
  i16 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < loop_ub; i16++) {
    y->data[i16] = ref->data[i16 + ref->size[0]];
  }

  b_st.site = &gf_emlrtRSI;
  i16 = ref->size[0];
  if (!(temp2->size[1] == i16)) {
    guard6 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard6 = TRUE;
    } else {
      i16 = ref->size[0];
      if (i16 == 1) {
        guard6 = TRUE;
      } else {
        u_y = NULL;
        m9 = mxCreateCharArray(2, iv72);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&u_y, m9);
        c_st.site = &wy_emlrtRSI;
        h_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&h_st, u_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m9 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&v_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, v_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard5 = FALSE;
  if (temp2->size[1] == 1) {
    guard5 = TRUE;
  } else {
    i16 = ref->size[0];
    if (i16 == 1) {
      guard5 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i16 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i16, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i16 = 0; i16 < loop_ub; i16++) {
        x->data[i16] = 0.0;
      }

      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard5 == TRUE) {
    i16 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i16, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      x->data[i16] = 0.0;
      ixstart = temp2->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        x->data[i16] += temp2->data[i16 + temp2->size[0] * i17] * y->data[i17];
      }
    }
  }

  st.site = &jo_emlrtRSI;
  b_st.site = &iy_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &iy_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &jy_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &gj_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &jy_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &nh_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &ky_emlrtRSI;
    b_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &ky_emlrtRSI;
    b_eml_error(&b_st);
  }

  for (i16 = 0; i16 < 2; i16++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i16], &y_emlrtDCI, &st);
  }

  i16 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  b_st.site = &ly_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &ny_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m9 = mxCreateCharArray(2, iv74);
    for (i = 0; i < 40; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m9, cv33);
    emlrtAssign(&w_y, m9);
    b_st.site = &ly_emlrtRSI;
    i_st.site = &lab_emlrtRSI;
    error(&b_st, b_message(&i_st, w_y, &cb_emlrtMCI), &db_emlrtMCI);
  }

  b_st.site = &my_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= x->size[0]; ixstart++) {
    temp1->data[ixstart] = x->data[ixstart];
  }

  iv75[0] = r19->size[0];
  iv75[1] = r25->size[0];
  emlrtSubAssignSizeCheckR2012b(iv75, 2, *(int32_T (*)[2])temp1->size, 2,
    &t_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    ixstart = temp1->size[0];
    for (i17 = 0; i17 < ixstart; i17++) {
      control_p->data[(r19->data[i17] + control_p->size[0] * r25->data[i16]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i17 + temp1->
        size[0] * i16];
    }
  }

  emxFree_int32_T(&r25);
  emxFree_int32_T(&r19);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i16 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < ixstart; i16++) {
    for (i17 = 0; i17 < loop_ub; i17++) {
      temp1->data[i17 + temp1->size[0] * i16] = control_p->data[i17 +
        control_p->size[0] * i16];
    }
  }

  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i16 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = loop_ub;
  temp2->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i16 = 0; i16 < ixstart; i16++) {
    for (i17 = 0; i17 < loop_ub; i17++) {
      temp2->data[i17 + temp2->size[0] * i16] = control_p->data[(i17 +
        control_p->size[0] * i16) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &ko_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  i16 = control_p->size[0];
  i17 = control_p->size[1];
  if (!(A->size[1] == i16 * i17)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      i16 = control_p->size[0];
      i17 = control_p->size[1];
      if (i16 * i17 == 1) {
        guard4 = TRUE;
      } else {
        x_y = NULL;
        m9 = mxCreateCharArray(2, iv76);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&x_y, m9);
        c_st.site = &wy_emlrtRSI;
        h_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&h_st, x_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m9 = mxCreateCharArray(2, iv77);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&y_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, y_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i16 = control_p->size[0];
    i17 = control_p->size[1];
    if (i16 * i17 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i16 = r16->size[0];
      r16->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r16, i16, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i16 = 0; i16 < loop_ub; i16++) {
        r16->data[i16] = 0.0;
      }

      i16 = control_p->size[0];
      i17 = control_p->size[1];
      iv78[0] = i16 * i17;
      b_temp1 = *temp1;
      b_temp1.size = (int32_T *)&iv78;
      b_temp1.numDimensions = 1;
      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1],
                  r16, A->size[0]);
    }
  }

  if (guard3 == TRUE) {
    i16 = r16->size[0];
    r16->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      r16->data[i16] = 0.0;
      ixstart = A->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        r16->data[i16] += A->data[i16 + A->size[0] * i17] * temp1->data[i17];
      }
    }
  }

  i16 = ref->size[0];
  i17 = r16->size[0];
  emlrtSizeEqCheck1DFastR2012b(i17, i16, &s_emlrtECI, sp);
  st.site = &ko_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  i16 = control_p->size[0];
  i17 = control_p->size[1];
  if (!(A->size[1] == i16 * i17)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      i16 = control_p->size[0];
      i17 = control_p->size[1];
      if (i16 * i17 == 1) {
        guard2 = TRUE;
      } else {
        ab_y = NULL;
        m9 = mxCreateCharArray(2, iv79);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&ab_y, m9);
        c_st.site = &wy_emlrtRSI;
        h_st.site = &kab_emlrtRSI;
        error(&c_st, b_message(&h_st, ab_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m9 = mxCreateCharArray(2, iv80);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&bb_y, m9);
      c_st.site = &vy_emlrtRSI;
      h_st.site = &jab_emlrtRSI;
      error(&c_st, b_message(&h_st, bb_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i16 = control_p->size[0];
    i17 = control_p->size[1];
    if (i16 * i17 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i16 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                        &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i16 = 0; i16 < loop_ub; i16++) {
        y->data[i16] = 0.0;
      }

      i16 = control_p->size[0];
      i17 = control_p->size[1];
      iv81[0] = i16 * i17;
      b_temp1 = *temp2;
      b_temp1.size = (int32_T *)&iv81;
      b_temp1.numDimensions = 1;
      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1], y,
                  A->size[0]);
    }
  }

  if (guard1 == TRUE) {
    i16 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      y->data[i16] = 0.0;
      ixstart = A->size[1];
      for (i17 = 0; i17 < ixstart; i17++) {
        y->data[i16] += A->data[i16 + A->size[0] * i17] * temp2->data[i17];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &r26, 1, &ib_emlrtRTEI, TRUE);
  i16 = ref->size[0];
  i17 = y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i17, i16, &r_emlrtECI, sp);
  i16 = r26->size[0];
  r26->size[0] = r16->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r26, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r16->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    r26->data[i16] = r16->data[i16] - ref->data[i16];
  }

  b_emxInit_real_T(sp, &r27, 1, &ib_emlrtRTEI, TRUE);
  st.site = &ko_emlrtRSI;
  power(&st, r26, r27);
  i16 = r16->size[0];
  r16->size[0] = r27->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r27->size[0];
  emxFree_real_T(&r26);
  for (i16 = 0; i16 < loop_ub; i16++) {
    r16->data[i16] = r27->data[i16];
  }

  emxFree_real_T(&r27);
  b_emxInit_real_T(sp, &cb_y, 1, &ib_emlrtRTEI, TRUE);
  i16 = cb_y->size[0];
  cb_y->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i16 = 0; i16 < loop_ub; i16++) {
    cb_y->data[i16] = y->data[i16] - ref->data[i16 + ref->size[0]];
  }

  b_emxInit_real_T(sp, &r28, 1, &ib_emlrtRTEI, TRUE);
  st.site = &ko_emlrtRSI;
  power(&st, cb_y, r28);
  i16 = y->size[0];
  y->size[0] = r28->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i16, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = r28->size[0];
  emxFree_real_T(&cb_y);
  for (i16 = 0; i16 < loop_ub; i16++) {
    y->data[i16] = r28->data[i16];
  }

  emxFree_real_T(&r28);
  st.site = &ko_emlrtRSI;
  b_st.site = &ko_emlrtRSI;
  mtmp = d_sum(&b_st, r16) + d_sum(&b_st, y);
  b_st.site = &jb_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  *b_error = mtmp / (real_T)src->size[0];
  emxFree_real_T(&r16);
  emxFree_real_T(&temp2);
  emxFree_real_T(&temp1);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emxFree_real_T(&y);
  emxFree_real_T(&x);
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

/* End of code generation (bspline_inv.c) */
