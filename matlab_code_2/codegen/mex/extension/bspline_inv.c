/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
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
static emlrtRSInfo rb_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo nh_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ph_emlrtRSI = { 16, "max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo nm_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo om_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo pm_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo qm_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo rm_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo sm_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo tm_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo um_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo vm_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo wm_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo xm_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ym_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo an_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo bn_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo cn_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo dn_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo en_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo fn_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo gn_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ex_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo fx_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo gx_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo hx_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ix_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo jx_emlrtRSI = { 215, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtMCInfo ab_emlrtMCI = { 67, 5, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo bb_emlrtMCI = { 66, 15, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo p_emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo q_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo r_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo s_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo t_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtRTEInfo kd_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo ld_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtECInfo u_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo v_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo w_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo x_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo y_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo ab_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo bb_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo cb_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo db_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo eb_emlrtECI = { -1, 17, 6, "bspline_inv",
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

static emlrtRSInfo ry_emlrtRSI = { 67, "reshape",
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
  int32_T i20;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv47[2] = { 1, 36 };

  const mxArray *m9;
  char_T cv25[36];
  int32_T i;
  static const char_T cv26[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv48[2] = { 1, 39 };

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
  static const int32_T iv49[2] = { 1, 36 };

  const mxArray *e_y;
  static const int32_T iv50[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *r17;
  emxArray_real_T *c_src;
  emxArray_real_T *r18;
  const mxArray *f_y;
  static const int32_T iv51[2] = { 1, 36 };

  const mxArray *g_y;
  static const int32_T iv52[2] = { 1, 39 };

  real_T down;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv53[2] = { 1, 36 };

  const mxArray *i_y;
  static const int32_T iv54[2] = { 1, 39 };

  real_T right;
  boolean_T exitg1;
  emxArray_real_T *tx;
  int32_T i21;
  emxArray_real_T *ty;
  emxArray_int32_T *r19;
  int32_T iv55[1];
  int32_T b_tx[1];
  int32_T iv56[1];
  emxArray_real_T *r20;
  int32_T iv57[1];
  emxArray_real_T *r21;
  int32_T iv58[1];
  emxArray_real_T *r22;
  uint32_T unnamed_idx_0;
  int32_T i22;
  int32_T i23;
  int32_T iv59[1];
  int32_T b_ty[1];
  int32_T iv60[1];
  emxArray_real_T *r23;
  int32_T iv61[1];
  emxArray_real_T *r24;
  int32_T iv62[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d6;
  int32_T iv63[2];
  emxArray_int32_T *r25;
  emxArray_real_T *a;
  const mxArray *j_y;
  static const int32_T iv64[2] = { 1, 45 };

  char_T cv29[45];
  static const char_T cv30[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *k_y;
  static const int32_T iv65[2] = { 1, 21 };

  char_T cv31[21];
  static const char_T cv32[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  const mxArray *l_y;
  static const int32_T iv66[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv67[2] = { 1, 21 };

  boolean_T guard8 = FALSE;
  const mxArray *n_y;
  static const int32_T iv68[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv69[2] = { 1, 45 };

  boolean_T guard7 = FALSE;
  int32_T sz[2];
  const mxArray *p_y;
  static const int32_T iv70[2] = { 1, 40 };

  char_T cv33[40];
  static const char_T cv34[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T iv71[2];
  const mxArray *q_y;
  static const int32_T iv72[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv73[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv74[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv75[2] = { 1, 21 };

  boolean_T guard6 = FALSE;
  const mxArray *u_y;
  static const int32_T iv76[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv77[2] = { 1, 45 };

  boolean_T guard5 = FALSE;
  int32_T b_sz[2];
  const mxArray *w_y;
  static const int32_T iv78[2] = { 1, 40 };

  int32_T iv79[2];
  boolean_T guard4 = FALSE;
  const mxArray *x_y;
  static const int32_T iv80[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv81[2] = { 1, 45 };

  boolean_T guard3 = FALSE;
  int32_T iv82[1];
  emxArray_real_T b_temp1;
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv83[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv84[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  int32_T iv85[1];
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
  b_emxInit_real_T(sp, &x, 1, &ib_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &y, 1, &jb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ax, 2, &mb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &nb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &pb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &qb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &r16, 1, &gb_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &sb_emlrtBCI, sp);
  st.site = &nm_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  i20 = src->size[0];
  guard10 = FALSE;
  if (i20 == 1) {
    guard10 = TRUE;
  } else {
    i20 = src->size[0];
    if (i20 != 1) {
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
    m9 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&b_y, m9);
    d_st.site = &yx_emlrtRSI;
    e_st.site = &my_emlrtRSI;
    error(&d_st, b_message(&e_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i20 = src->size[0];
  if (i20 > 0) {
  } else {
    c_y = NULL;
    m9 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&c_y, m9);
    d_st.site = &xx_emlrtRSI;
    e_st.site = &ly_emlrtRSI;
    error(&d_st, b_message(&e_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &cj_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i20 = src->size[0];
  if (i20 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &md_emlrtRSI;
      i20 = src->size[0];
      if (2 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i20 = src->size[0];
        if (ix <= i20) {
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

    i20 = src->size[0];
    if (ixstart < i20) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      i20 = src->size[0];
      if (ixstart + 1 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i20 = src->size[0];
        if (ixstart + 1 <= i20) {
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

  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i20, &rb_emlrtBCI, sp);
  st.site = &om_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  i20 = src->size[0];
  guard9 = FALSE;
  if (i20 == 1) {
    guard9 = TRUE;
  } else {
    i20 = src->size[0];
    if (i20 != 1) {
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
    m9 = mxCreateCharArray(2, iv49);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&d_y, m9);
    d_st.site = &yx_emlrtRSI;
    e_st.site = &my_emlrtRSI;
    error(&d_st, b_message(&e_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i20 = src->size[0];
  if (i20 > 0) {
  } else {
    e_y = NULL;
    m9 = mxCreateCharArray(2, iv50);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&e_y, m9);
    d_st.site = &xx_emlrtRSI;
    e_st.site = &ly_emlrtRSI;
    error(&d_st, b_message(&e_st, e_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &cj_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i20 = src->size[0];
  if (i20 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &md_emlrtRSI;
      i20 = src->size[0];
      if (2 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i20 = src->size[0];
        if (ix <= i20) {
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

    i20 = src->size[0];
    if (ixstart < i20) {
      f_st.site = &jd_emlrtRSI;
      f_st.site = &jd_emlrtRSI;
      i20 = src->size[0];
      if (ixstart + 1 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i20 = src->size[0];
        if (ixstart + 1 <= i20) {
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

  b_emxInit_real_T(&d_st, &b_src, 1, &gb_emlrtRTEI, TRUE);
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &qb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i20 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_src->data[i20] = (src->data[i20] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r17, 1, &gb_emlrtRTEI, TRUE);
  st.site = &pm_emlrtRSI;
  b_rdivide(&st, b_src, r17);
  i20 = x->size[0];
  x->size[0] = r17->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r17->size[0];
  emxFree_real_T(&b_src);
  for (i20 = 0; i20 < loop_ub; i20++) {
    x->data[i20] = r17->data[i20];
  }

  emxFree_real_T(&r17);
  b_emxInit_real_T(sp, &c_src, 1, &gb_emlrtRTEI, TRUE);
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i20, &pb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i20 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    c_src->data[i20] = (src->data[i20 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &r18, 1, &gb_emlrtRTEI, TRUE);
  st.site = &qm_emlrtRSI;
  b_rdivide(&st, c_src, r18);
  i20 = y->size[0];
  y->size[0] = r18->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r18->size[0];
  emxFree_real_T(&c_src);
  for (i20 = 0; i20 < loop_ub; i20++) {
    y->data[i20] = r18->data[i20];
  }

  emxFree_real_T(&r18);
  st.site = &rm_emlrtRSI;
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
    m9 = mxCreateCharArray(2, iv51);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&f_y, m9);
    d_st.site = &yx_emlrtRSI;
    e_st.site = &my_emlrtRSI;
    error(&d_st, b_message(&e_st, f_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m9 = mxCreateCharArray(2, iv52);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&g_y, m9);
    d_st.site = &xx_emlrtRSI;
    e_st.site = &ly_emlrtRSI;
    error(&d_st, b_message(&e_st, g_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &cj_emlrtRSI;
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

  st.site = &rm_emlrtRSI;
  b_floor(&down);
  st.site = &sm_emlrtRSI;
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
    m9 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 36; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m9, cv25);
    emlrtAssign(&h_y, m9);
    d_st.site = &yx_emlrtRSI;
    e_st.site = &my_emlrtRSI;
    error(&d_st, b_message(&e_st, h_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (y->size[0] > 0) {
  } else {
    i_y = NULL;
    m9 = mxCreateCharArray(2, iv54);
    for (i = 0; i < 39; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m9, cv27);
    emlrtAssign(&i_y, m9);
    d_st.site = &xx_emlrtRSI;
    e_st.site = &ly_emlrtRSI;
    error(&d_st, b_message(&e_st, i_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &cj_emlrtRSI;
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

  b_emxInit_real_T(&d_st, &tx, 1, &kb_emlrtRTEI, TRUE);
  st.site = &sm_emlrtRSI;
  b_floor(&right);
  i20 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = x->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    tx->data[i20] = x->data[i20];
  }

  st.site = &tm_emlrtRSI;
  c_floor(tx);
  i20 = x->size[0];
  i21 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i20, i21, &eb_emlrtECI, sp);
  i20 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = x->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    tx->data[i20] = x->data[i20] - tx->data[i20];
  }

  b_emxInit_real_T(sp, &ty, 1, &lb_emlrtRTEI, TRUE);
  i20 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ty->data[i20] = y->data[i20];
  }

  st.site = &um_emlrtRSI;
  c_floor(ty);
  i20 = y->size[0];
  i21 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i20, i21, &db_emlrtECI, sp);
  i20 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ty->data[i20] = y->data[i20] - ty->data[i20];
  }

  ixstart = tx->size[0];
  i20 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[i20] = 0.0;
  }

  emxInit_int32_T(sp, &r19, 1, &gb_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i20 = r19->size[0];
  r19->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    r19->data[i20] = i20;
  }

  iv55[0] = r19->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv55, 1, b_tx, 1, &cb_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i20 = 0; i20 < ixstart; i20++) {
    Ax->data[r19->data[i20]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  iv56[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv56, 1, *(int32_T (*)[1])tx->size, 1,
    &bb_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r19->data[i20] + Ax->size[0]] = tx->data[i20];
  }

  loop_ub = Ax->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  b_emxInit_real_T(sp, &r20, 1, &gb_emlrtRTEI, TRUE);
  st.site = &vm_emlrtRSI;
  power(&st, tx, r20);
  i20 = r16->size[0];
  r16->size[0] = r20->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r20->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    r16->data[i20] = r20->data[i20];
  }

  emxFree_real_T(&r20);
  iv57[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv57, 1, *(int32_T (*)[1])r16->size, 1,
    &ab_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r19->data[i20] + (Ax->size[0] << 1)] = r16->data[i20];
  }

  loop_ub = Ax->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  b_emxInit_real_T(sp, &r21, 1, &gb_emlrtRTEI, TRUE);
  st.site = &wm_emlrtRSI;
  b_power(&st, tx, r21);
  i20 = r16->size[0];
  r16->size[0] = r21->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r21->size[0];
  emxFree_real_T(&tx);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r16->data[i20] = r21->data[i20];
  }

  emxFree_real_T(&r21);
  iv58[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv58, 1, *(int32_T (*)[1])r16->size, 1,
    &y_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r19->data[i20] + Ax->size[0] * 3] = r16->data[i20];
  }

  emxInit_real_T(sp, &r22, 2, &gb_emlrtRTEI, TRUE);
  st.site = &xm_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i20 = Ax->size[0];
  i21 = r22->size[0] * r22->size[1];
  r22->size[0] = Ax->size[0];
  r22->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r22, i21, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    r22->data[i21] = Ax->data[i21];
  }

  i21 = Ax->size[0];
  i22 = Ax->size[0];
  i23 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i23, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23] = 0.0;
  }

  b_st.site = &je_emlrtRSI;
  eml_xgemm(i20, r22, i21, Ax, i22);
  ixstart = ty->size[0];
  i20 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[i20] = 0.0;
  }

  ixstart = ty->size[0];
  i20 = r19->size[0];
  r19->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    r19->data[i20] = i20;
  }

  iv59[0] = r19->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv59, 1, b_ty, 1, &x_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i20 = 0; i20 < ixstart; i20++) {
    Ay->data[r19->data[i20]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  iv60[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv60, 1, *(int32_T (*)[1])ty->size, 1,
    &w_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r19->data[i20] + Ay->size[0]] = ty->data[i20];
  }

  loop_ub = Ay->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  b_emxInit_real_T(sp, &r23, 1, &gb_emlrtRTEI, TRUE);
  st.site = &ym_emlrtRSI;
  power(&st, ty, r23);
  i20 = r16->size[0];
  r16->size[0] = r23->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r23->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    r16->data[i20] = r23->data[i20];
  }

  emxFree_real_T(&r23);
  iv61[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv61, 1, *(int32_T (*)[1])r16->size, 1,
    &v_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r19->data[i20] + (Ay->size[0] << 1)] = r16->data[i20];
  }

  loop_ub = Ay->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  b_emxInit_real_T(sp, &r24, 1, &gb_emlrtRTEI, TRUE);
  st.site = &an_emlrtRSI;
  b_power(&st, ty, r24);
  i20 = r16->size[0];
  r16->size[0] = r24->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r24->size[0];
  emxFree_real_T(&ty);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r16->data[i20] = r24->data[i20];
  }

  emxFree_real_T(&r24);
  iv62[0] = r19->size[0];
  emlrtSubAssignSizeCheckR2012b(iv62, 1, *(int32_T (*)[1])r16->size, 1,
    &u_emlrtECI, sp);
  loop_ub = r16->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r19->data[i20] + Ay->size[0] * 3] = r16->data[i20];
  }

  st.site = &bn_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i20 = Ay->size[0];
  i21 = r22->size[0] * r22->size[1];
  r22->size[0] = Ay->size[0];
  r22->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r22, i21, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    r22->data[i21] = Ay->data[i21];
  }

  i21 = Ay->size[0];
  i22 = Ay->size[0];
  i23 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i23, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &ob_emlrtRTEI, TRUE);
  b_st.site = &je_emlrtRSI;
  eml_xgemm(i20, r22, i21, Ay, i22);
  st.site = &cn_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &x_emlrtDCI, sp);
  i20 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &x_emlrtDCI, sp);
  i20 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &x_emlrtDCI, sp);
  emxFree_real_T(&r22);
  for (i20 = 0; i20 < loop_ub; i20++) {
    A->data[i20] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &rb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i20 = Ax->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ob_emlrtBCI, sp);
    i20 = Ay->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &nb_emlrtBCI, sp);
    i20 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &v_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &w_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &v_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &w_emlrtDCI, sp);
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    i20 = x->size[0];
    i21 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &tb_emlrtBCI,
      sp) - 1];
    st.site = &dn_emlrtRSI;
    b_floor(&mtmp);
    i20 = x->size[0];
    i21 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ub_emlrtBCI,
      sp) - 1];
    st.site = &dn_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &ld_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i20 = y->size[0];
    i21 = 1 + i;
    b_mtmp = y->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &vb_emlrtBCI,
      sp) - 1];
    st.site = &dn_emlrtRSI;
    b_floor(&b_mtmp);
    i20 = y->size[0];
    i21 = 1 + i;
    d6 = y->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &wb_emlrtBCI, sp)
      - 1];
    st.site = &dn_emlrtRSI;
    b_floor(&d6);
    if (b_mtmp == d6) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &kd_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &dn_emlrtRSI;
    for (i20 = 0; i20 < 4; i20++) {
      for (i21 = 0; i21 < 4; i21++) {
        i22 = (int32_T)(4.0 + down);
        i23 = (int32_T)(mtmp + (1.0 + (real_T)i20));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i21));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &xb_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &yb_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i20]
          * Ay->data[i + Ay->size[0] * i21];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i20 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    for (i20 = 0; i20 < ixstart; i20++) {
      param_matrix->data[param_matrix->size[0] * i20] = temp1->data[i20];
    }

    i20 = A->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &mb_emlrtBCI, sp);
    loop_ub = A->size[1];
    i20 = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                      &gb_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      r19->data[i20] = i20;
    }

    iv63[0] = 1;
    iv63[1] = r19->size[0];
    emlrtSubAssignSizeCheckR2012b(iv63, 2, *(int32_T (*)[2])param_matrix->size,
      2, &t_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i20 = 0; i20 < loop_ub; i20++) {
      A->data[i + A->size[0] * r19->data[i20]] = param_matrix->data
        [param_matrix->size[0] * i20];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i20 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &t_emlrtDCI, sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &u_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i20, (int32_T)sizeof
                    (real_T), &gb_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &t_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &u_emlrtDCI, sp) << 1;
  for (i20 = 0; i20 < loop_ub; i20++) {
    control_p->data[i20] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i20 = r19->size[0];
  r19->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  emxInit_int32_T(sp, &r25, 1, &gb_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i20 = r25->size[0];
  r25->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r25, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r25->data[i20] = i20;
  }

  emxInit_real_T(sp, &a, 2, &gb_emlrtRTEI, TRUE);
  st.site = &en_emlrtRSI;
  i20 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      a->data[i21 + a->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m9 = mxCreateCharArray(2, iv64);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&j_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, j_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      k_y = NULL;
      m9 = mxCreateCharArray(2, iv65);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&k_y, m9);
      c_st.site = &cy_emlrtRSI;
      h_st.site = &qy_emlrtRSI;
      error(&c_st, b_message(&h_st, k_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        temp1->data[i20 + temp1->size[0] * i21] = 0.0;
        ix = a->size[1];
        for (i22 = 0; i22 < ix; i22++) {
          temp1->data[i20 + temp1->size[0] * i21] += a->data[i20 + a->size[0] *
            i22] * A->data[i22 + A->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &en_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &en_emlrtRSI;
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      temp1->data[i21 + temp1->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m9 = mxCreateCharArray(2, iv66);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&l_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, l_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      m_y = NULL;
      m9 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&m_y, m9);
      c_st.site = &cy_emlrtRSI;
      h_st.site = &qy_emlrtRSI;
      error(&c_st, b_message(&h_st, m_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      ixstart = temp1->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        temp2->data[i20 + temp2->size[0] * i21] = 0.0;
        ix = a->size[1];
        for (i22 = 0; i22 < ix; i22++) {
          temp2->data[i20 + temp2->size[0] * i21] += a->data[i20 + a->size[0] *
            i22] * temp1->data[i22 + temp1->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp2->data[i20] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &en_emlrtRSI;
  loop_ub = ref->size[0];
  i20 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    y->data[i20] = ref->data[i20];
  }

  b_st.site = &gf_emlrtRSI;
  i20 = ref->size[0];
  if (!(temp2->size[1] == i20)) {
    guard8 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard8 = TRUE;
    } else {
      i20 = ref->size[0];
      if (i20 == 1) {
        guard8 = TRUE;
      } else {
        n_y = NULL;
        m9 = mxCreateCharArray(2, iv68);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&n_y, m9);
        c_st.site = &cy_emlrtRSI;
        h_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&h_st, n_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m9 = mxCreateCharArray(2, iv69);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&o_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, o_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard7 = FALSE;
  if (temp2->size[1] == 1) {
    guard7 = TRUE;
  } else {
    i20 = ref->size[0];
    if (i20 == 1) {
      guard7 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i20 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        x->data[i20] = 0.0;
      }

      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard7 == TRUE) {
    i20 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      x->data[i20] = 0.0;
      ixstart = temp2->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        x->data[i20] += temp2->data[i20 + temp2->size[0] * i21] * y->data[i21];
      }
    }
  }

  st.site = &en_emlrtRSI;
  b_st.site = &ex_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &ex_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &fx_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &cj_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &fx_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &nh_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &gx_emlrtRSI;
    b_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &gx_emlrtRSI;
    b_eml_error(&b_st);
  }

  for (i20 = 0; i20 < 2; i20++) {
    emlrtNonNegativeCheckFastR2012b(sz[i20], &y_emlrtDCI, &st);
  }

  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  b_st.site = &hx_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  d_st.site = &jx_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m9 = mxCreateCharArray(2, iv70);
    for (i = 0; i < 40; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m9, cv33);
    emlrtAssign(&p_y, m9);
    b_st.site = &hx_emlrtRSI;
    i_st.site = &ry_emlrtRSI;
    error(&b_st, b_message(&i_st, p_y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  b_st.site = &ix_emlrtRSI;
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

  iv71[0] = r19->size[0];
  iv71[1] = r25->size[0];
  emlrtSubAssignSizeCheckR2012b(iv71, 2, *(int32_T (*)[2])temp1->size, 2,
    &s_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = temp1->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      control_p->data[r19->data[i21] + control_p->size[0] * r25->data[i20]] =
        temp1->data[i21 + temp1->size[0] * i20];
    }
  }

  loop_ub = control_p->size[0];
  i20 = r19->size[0];
  r19->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r19, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r19->data[i20] = i20;
  }

  loop_ub = control_p->size[1];
  i20 = r25->size[0];
  r25->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r25, i20, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r25->data[i20] = i20;
  }

  st.site = &fn_emlrtRSI;
  i20 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      a->data[i21 + a->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m9 = mxCreateCharArray(2, iv72);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&q_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, q_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      r_y = NULL;
      m9 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&r_y, m9);
      c_st.site = &cy_emlrtRSI;
      h_st.site = &qy_emlrtRSI;
      error(&c_st, b_message(&h_st, r_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        temp1->data[i20 + temp1->size[0] * i21] = 0.0;
        ix = a->size[1];
        for (i22 = 0; i22 < ix; i22++) {
          temp1->data[i20 + temp1->size[0] * i21] += a->data[i20 + a->size[0] *
            i22] * A->data[i22 + A->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &fn_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &fn_emlrtRSI;
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      temp1->data[i21 + temp1->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &gf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m9 = mxCreateCharArray(2, iv74);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&s_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, s_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      t_y = NULL;
      m9 = mxCreateCharArray(2, iv75);
      for (i = 0; i < 21; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
      emlrtAssign(&t_y, m9);
      c_st.site = &cy_emlrtRSI;
      h_st.site = &qy_emlrtRSI;
      error(&c_st, b_message(&h_st, t_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      ixstart = temp1->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        temp2->data[i20 + temp2->size[0] * i21] = 0.0;
        ix = a->size[1];
        for (i22 = 0; i22 < ix; i22++) {
          temp2->data[i20 + temp2->size[0] * i21] += a->data[i20 + a->size[0] *
            i22] * temp1->data[i22 + temp1->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &gb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp2->data[i20] = 0.0;
    }

    b_st.site = &je_emlrtRSI;
    c_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &fn_emlrtRSI;
  loop_ub = ref->size[0];
  i20 = y->size[0];
  y->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    y->data[i20] = ref->data[i20 + ref->size[0]];
  }

  b_st.site = &gf_emlrtRSI;
  i20 = ref->size[0];
  if (!(temp2->size[1] == i20)) {
    guard6 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard6 = TRUE;
    } else {
      i20 = ref->size[0];
      if (i20 == 1) {
        guard6 = TRUE;
      } else {
        u_y = NULL;
        m9 = mxCreateCharArray(2, iv76);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&u_y, m9);
        c_st.site = &cy_emlrtRSI;
        h_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&h_st, u_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m9 = mxCreateCharArray(2, iv77);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&v_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, v_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard5 = FALSE;
  if (temp2->size[1] == 1) {
    guard5 = TRUE;
  } else {
    i20 = ref->size[0];
    if (i20 == 1) {
      guard5 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      i20 = x->size[0];
      x->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        x->data[i20] = 0.0;
      }

      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(temp2->size[0], temp2->size[1], temp2, temp2->size[0], y,
                  temp2->size[1], x, temp2->size[0]);
    }
  }

  if (guard5 == TRUE) {
    i20 = x->size[0];
    x->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      x->data[i20] = 0.0;
      ixstart = temp2->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        x->data[i20] += temp2->data[i20 + temp2->size[0] * i21] * y->data[i21];
      }
    }
  }

  st.site = &fn_emlrtRSI;
  b_st.site = &ex_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &ex_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &fx_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &cj_emlrtRSI;
  ixstart = x->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &fx_emlrtRSI;
  c_st.site = &ph_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  f_st.site = &nh_emlrtRSI;
  if (x->size[0] < ixstart) {
  } else {
    ixstart = x->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &gx_emlrtRSI;
    b_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &gx_emlrtRSI;
    b_eml_error(&b_st);
  }

  for (i20 = 0; i20 < 2; i20++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i20], &y_emlrtDCI, &st);
  }

  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  b_st.site = &hx_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  d_st.site = &jx_emlrtRSI;
  if (x->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m9 = mxCreateCharArray(2, iv78);
    for (i = 0; i < 40; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m9, cv33);
    emlrtAssign(&w_y, m9);
    b_st.site = &hx_emlrtRSI;
    i_st.site = &ry_emlrtRSI;
    error(&b_st, b_message(&i_st, w_y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  b_st.site = &ix_emlrtRSI;
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

  iv79[0] = r19->size[0];
  iv79[1] = r25->size[0];
  emlrtSubAssignSizeCheckR2012b(iv79, 2, *(int32_T (*)[2])temp1->size, 2,
    &r_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = temp1->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      control_p->data[(r19->data[i21] + control_p->size[0] * r25->data[i20]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i21 + temp1->
        size[0] * i20];
    }
  }

  emxFree_int32_T(&r25);
  emxFree_int32_T(&r19);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    for (i21 = 0; i21 < loop_ub; i21++) {
      temp1->data[i21 + temp1->size[0] * i20] = control_p->data[i21 +
        control_p->size[0] * i20];
    }
  }

  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i20 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = loop_ub;
  temp2->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    for (i21 = 0; i21 < loop_ub; i21++) {
      temp2->data[i21 + temp2->size[0] * i20] = control_p->data[(i21 +
        control_p->size[0] * i20) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &gn_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  i20 = control_p->size[0];
  i21 = control_p->size[1];
  if (!(A->size[1] == i20 * i21)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      i20 = control_p->size[0];
      i21 = control_p->size[1];
      if (i20 * i21 == 1) {
        guard4 = TRUE;
      } else {
        x_y = NULL;
        m9 = mxCreateCharArray(2, iv80);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&x_y, m9);
        c_st.site = &cy_emlrtRSI;
        h_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&h_st, x_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m9 = mxCreateCharArray(2, iv81);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&y_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, y_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i20 = control_p->size[0];
    i21 = control_p->size[1];
    if (i20 * i21 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i20 = r16->size[0];
      r16->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r16, i20, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        r16->data[i20] = 0.0;
      }

      i20 = control_p->size[0];
      i21 = control_p->size[1];
      iv82[0] = i20 * i21;
      b_temp1 = *temp1;
      b_temp1.size = (int32_T *)&iv82;
      b_temp1.numDimensions = 1;
      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1],
                  r16, A->size[0]);
    }
  }

  if (guard3 == TRUE) {
    i20 = r16->size[0];
    r16->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      r16->data[i20] = 0.0;
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        r16->data[i20] += A->data[i20 + A->size[0] * i21] * temp1->data[i21];
      }
    }
  }

  i20 = ref->size[0];
  i21 = r16->size[0];
  emlrtSizeEqCheck1DFastR2012b(i21, i20, &q_emlrtECI, sp);
  st.site = &gn_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  i20 = control_p->size[0];
  i21 = control_p->size[1];
  if (!(A->size[1] == i20 * i21)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      i20 = control_p->size[0];
      i21 = control_p->size[1];
      if (i20 * i21 == 1) {
        guard2 = TRUE;
      } else {
        ab_y = NULL;
        m9 = mxCreateCharArray(2, iv83);
        for (i = 0; i < 21; i++) {
          cv31[i] = cv32[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m9, cv31);
        emlrtAssign(&ab_y, m9);
        c_st.site = &cy_emlrtRSI;
        h_st.site = &qy_emlrtRSI;
        error(&c_st, b_message(&h_st, ab_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m9 = mxCreateCharArray(2, iv84);
      for (i = 0; i < 45; i++) {
        cv29[i] = cv30[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv29);
      emlrtAssign(&bb_y, m9);
      c_st.site = &by_emlrtRSI;
      h_st.site = &py_emlrtRSI;
      error(&c_st, b_message(&h_st, bb_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i20 = control_p->size[0];
    i21 = control_p->size[1];
    if (i20 * i21 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      i20 = y->size[0];
      y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        y->data[i20] = 0.0;
      }

      i20 = control_p->size[0];
      i21 = control_p->size[1];
      iv85[0] = i20 * i21;
      b_temp1 = *temp2;
      b_temp1.size = (int32_T *)&iv85;
      b_temp1.numDimensions = 1;
      b_st.site = &je_emlrtRSI;
      b_eml_xgemm(A->size[0], A->size[1], A, A->size[0], &b_temp1, A->size[1], y,
                  A->size[0]);
    }
  }

  if (guard1 == TRUE) {
    i20 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                      &gb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      y->data[i20] = 0.0;
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        y->data[i20] += A->data[i20 + A->size[0] * i21] * temp2->data[i21];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &r26, 1, &gb_emlrtRTEI, TRUE);
  i20 = ref->size[0];
  i21 = y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i21, i20, &p_emlrtECI, sp);
  i20 = r26->size[0];
  r26->size[0] = r16->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r26, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r16->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    r26->data[i20] = r16->data[i20] - ref->data[i20];
  }

  b_emxInit_real_T(sp, &r27, 1, &gb_emlrtRTEI, TRUE);
  st.site = &gn_emlrtRSI;
  power(&st, r26, r27);
  i20 = r16->size[0];
  r16->size[0] = r27->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r27->size[0];
  emxFree_real_T(&r26);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r16->data[i20] = r27->data[i20];
  }

  emxFree_real_T(&r27);
  b_emxInit_real_T(sp, &cb_y, 1, &gb_emlrtRTEI, TRUE);
  i20 = cb_y->size[0];
  cb_y->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    cb_y->data[i20] = y->data[i20] - ref->data[i20 + ref->size[0]];
  }

  b_emxInit_real_T(sp, &r28, 1, &gb_emlrtRTEI, TRUE);
  st.site = &gn_emlrtRSI;
  power(&st, cb_y, r28);
  i20 = y->size[0];
  y->size[0] = r28->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i20, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = r28->size[0];
  emxFree_real_T(&cb_y);
  for (i20 = 0; i20 < loop_ub; i20++) {
    y->data[i20] = r28->data[i20];
  }

  emxFree_real_T(&r28);
  st.site = &gn_emlrtRSI;
  b_st.site = &gn_emlrtRSI;
  mtmp = d_sum(&b_st, r16) + d_sum(&b_st, y);
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
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
