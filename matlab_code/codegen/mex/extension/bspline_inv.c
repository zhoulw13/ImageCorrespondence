/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Mon Apr 25 21:25:51 2016
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
static emlrtRSInfo cc_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo ve_emlrtRSI = { 15, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo xe_emlrtRSI = { 32, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo if_emlrtRSI = { 110, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo jf_emlrtRSI = { 111, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo kf_emlrtRSI = { 112, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo lf_emlrtRSI = { 113, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo mf_emlrtRSI = { 114, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo nf_emlrtRSI = { 115, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo vh_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo xh_emlrtRSI = { 16, "max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo fm_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo gm_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo hm_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo im_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo jm_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo km_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo lm_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo mm_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo nm_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo om_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo pm_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo qm_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo rm_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo sm_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo tm_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo um_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo vm_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo wm_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo xm_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo yw_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ax_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo bx_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo cx_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo dx_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo fx_emlrtRSI = { 215, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtMCInfo cb_emlrtMCI = { 67, 5, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo db_emlrtMCI = { 66, 15, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo tb_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo p_emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo q_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo r_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo s_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo t_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRTEInfo hd_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo id_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtECInfo u_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo v_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo w_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo x_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo y_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo ab_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo bb_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo cb_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo db_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo eb_emlrtECI = { -1, 17, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 14, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 13, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 12, 18, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 11, 17, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 46, 19, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo d_emlrtDCI = { 46, 27, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo e_emlrtDCI = { 40, 26, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo f_emlrtDCI = { 40, 34, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo g_emlrtDCI = { 35, 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo h_emlrtDCI = { 65, 48, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m", 4 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 41, 26, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 41, 40, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 41, 55, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 41, 69, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 41, 18, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 41, 47, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRSInfo ey_emlrtRSI = { 67, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

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
                 emxArray_real_T *ref, emxArray_real_T *control_p, real_T
                 *b_error)
{
  emxArray_real_T *Ax;
  emxArray_real_T *Ay;
  emxArray_real_T *temp1;
  emxArray_real_T *temp2;
  int32_T i20;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv39[2] = { 1, 36 };

  const mxArray *m10;
  char_T cv27[36];
  int32_T i;
  static const char_T cv28[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv40[2] = { 1, 39 };

  char_T cv29[39];
  static const char_T cv30[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  int32_T exitg6;
  int32_T exitg5;
  boolean_T guard9 = FALSE;
  const mxArray *c_y;
  static const int32_T iv41[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv42[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *e_y;
  const mxArray *f_y;
  static const int32_T iv43[2] = { 1, 36 };

  const mxArray *g_y;
  static const int32_T iv44[2] = { 1, 39 };

  real_T down;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv45[2] = { 1, 36 };

  const mxArray *i_y;
  static const int32_T iv46[2] = { 1, 39 };

  real_T right;
  boolean_T exitg1;
  emxArray_real_T *tx;
  int32_T i21;
  emxArray_real_T *ty;
  emxArray_int32_T *r6;
  int32_T iv47[1];
  int32_T b_tx[1];
  int32_T iv48[1];
  emxArray_real_T *r7;
  int32_T iv49[1];
  int32_T iv50[1];
  emxArray_real_T *r8;
  uint32_T unnamed_idx_0;
  int32_T i22;
  int32_T i23;
  int32_T iv51[1];
  int32_T b_ty[1];
  int32_T iv52[1];
  int32_T iv53[1];
  int32_T iv54[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d7;
  int32_T iv55[2];
  emxArray_int32_T *r9;
  emxArray_real_T *a;
  const mxArray *j_y;
  static const int32_T iv56[2] = { 1, 45 };

  char_T cv31[45];
  static const char_T cv32[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *k_y;
  static const int32_T iv57[2] = { 1, 21 };

  char_T cv33[21];
  static const char_T cv34[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  const mxArray *l_y;
  static const int32_T iv58[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv59[2] = { 1, 21 };

  boolean_T guard8 = FALSE;
  const mxArray *n_y;
  static const int32_T iv60[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv61[2] = { 1, 45 };

  boolean_T guard7 = FALSE;
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
  int32_T sz[2];
  const mxArray *p_y;
  static const int32_T iv62[2] = { 1, 40 };

  char_T cv35[40];
  static const char_T cv36[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T iv63[2];
  const mxArray *q_y;
  static const int32_T iv64[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv65[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv66[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv67[2] = { 1, 21 };

  boolean_T guard6 = FALSE;
  const mxArray *u_y;
  static const int32_T iv68[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv69[2] = { 1, 45 };

  boolean_T guard5 = FALSE;
  int32_T b_sz[2];
  const mxArray *w_y;
  static const int32_T iv70[2] = { 1, 40 };

  int32_T iv71[2];
  boolean_T guard4 = FALSE;
  const mxArray *x_y;
  static const int32_T iv72[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv73[2] = { 1, 45 };

  boolean_T guard3 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv74[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv75[2] = { 1, 45 };

  boolean_T guard1 = FALSE;
  emxArray_real_T *cb_y;
  emxArray_real_T *c_tx;
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
  emxInit_real_T(sp, &Ax, 2, &ob_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &pb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &rb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &sb_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &eb_emlrtBCI, sp);
  st.site = &fm_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
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
    y = NULL;
    m10 = mxCreateCharArray(2, iv39);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv27);
    emlrtAssign(&y, m10);
    d_st.site = &lx_emlrtRSI;
    e_st.site = &yx_emlrtRSI;
    error(&d_st, b_message(&e_st, y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i20 = src->size[0];
  if (i20 > 0) {
  } else {
    b_y = NULL;
    m10 = mxCreateCharArray(2, iv40);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv29);
    emlrtAssign(&b_y, m10);
    d_st.site = &kx_emlrtRSI;
    e_st.site = &xx_emlrtRSI;
    error(&d_st, b_message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &rj_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i20 = src->size[0];
  if (i20 > 1) {
    f_st.site = &xd_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &wd_emlrtRSI;
      i20 = src->size[0];
      if (2 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i20 = src->size[0];
        if (ix <= i20) {
          ixstart = ix;
          f_st.site = &ud_emlrtRSI;
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
      f_st.site = &td_emlrtRSI;
      f_st.site = &td_emlrtRSI;
      i20 = src->size[0];
      if (ixstart + 1 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i20 = src->size[0];
        if (ixstart + 1 <= i20) {
          f_st.site = &rd_emlrtRSI;
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
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i20, &db_emlrtBCI, sp);
  st.site = &gm_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
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
    c_y = NULL;
    m10 = mxCreateCharArray(2, iv41);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv27);
    emlrtAssign(&c_y, m10);
    d_st.site = &lx_emlrtRSI;
    e_st.site = &yx_emlrtRSI;
    error(&d_st, b_message(&e_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i20 = src->size[0];
  if (i20 > 0) {
  } else {
    d_y = NULL;
    m10 = mxCreateCharArray(2, iv42);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv29);
    emlrtAssign(&d_y, m10);
    d_st.site = &kx_emlrtRSI;
    e_st.site = &xx_emlrtRSI;
    error(&d_st, b_message(&e_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &rj_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i20 = src->size[0];
  if (i20 > 1) {
    f_st.site = &xd_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &wd_emlrtRSI;
      i20 = src->size[0];
      if (2 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i20 = src->size[0];
        if (ix <= i20) {
          ixstart = ix;
          f_st.site = &ud_emlrtRSI;
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
      f_st.site = &td_emlrtRSI;
      f_st.site = &td_emlrtRSI;
      i20 = src->size[0];
      if (ixstart + 1 > i20) {
        overflow = FALSE;
      } else {
        i20 = src->size[0];
        overflow = (i20 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i20 = src->size[0];
        if (ixstart + 1 <= i20) {
          f_st.site = &rd_emlrtRSI;
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
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &cb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i20 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_src->data[i20] = (src->data[i20] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &kb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &ib_emlrtRTEI, TRUE);
  st.site = &hm_emlrtRSI;
  b_rdivide(&st, b_src, x);
  i20 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i20, &bb_emlrtBCI, sp);
  loop_ub = src->size[0];
  i20 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i20 = 0; i20 < loop_ub; i20++) {
    c_src->data[i20] = (src->data[i20 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &e_y, 1, &lb_emlrtRTEI, TRUE);
  st.site = &im_emlrtRSI;
  b_rdivide(&st, c_src, e_y);
  st.site = &jm_emlrtRSI;
  b_st.site = &xh_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  emxFree_real_T(&c_src);
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    f_y = NULL;
    m10 = mxCreateCharArray(2, iv43);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv27);
    emlrtAssign(&f_y, m10);
    d_st.site = &lx_emlrtRSI;
    e_st.site = &yx_emlrtRSI;
    error(&d_st, b_message(&e_st, f_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m10 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv29);
    emlrtAssign(&g_y, m10);
    d_st.site = &kx_emlrtRSI;
    e_st.site = &xx_emlrtRSI;
    error(&d_st, b_message(&e_st, g_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &rj_emlrtRSI;
  ixstart = 1;
  down = x->data[0];
  if (x->size[0] > 1) {
    f_st.site = &xd_emlrtRSI;
    if (muDoubleScalarIsNaN(x->data[0])) {
      f_st.site = &wd_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        f_st.site = &ud_emlrtRSI;
        if (!muDoubleScalarIsNaN(x->data[ix - 1])) {
          down = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      f_st.site = &td_emlrtRSI;
      f_st.site = &td_emlrtRSI;
      if (ixstart + 1 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= x->size[0]) {
        f_st.site = &rd_emlrtRSI;
        if (x->data[ixstart] > down) {
          down = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  st.site = &jm_emlrtRSI;
  b_floor(&down);
  st.site = &km_emlrtRSI;
  b_st.site = &xh_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  if ((e_y->size[0] == 1) || (e_y->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    h_y = NULL;
    m10 = mxCreateCharArray(2, iv45);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m10, cv27);
    emlrtAssign(&h_y, m10);
    d_st.site = &lx_emlrtRSI;
    e_st.site = &yx_emlrtRSI;
    error(&d_st, b_message(&e_st, h_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  if (e_y->size[0] > 0) {
  } else {
    i_y = NULL;
    m10 = mxCreateCharArray(2, iv46);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv29);
    emlrtAssign(&i_y, m10);
    d_st.site = &kx_emlrtRSI;
    e_st.site = &xx_emlrtRSI;
    error(&d_st, b_message(&e_st, i_y, &e_emlrtMCI), &f_emlrtMCI);
  }

  d_st.site = &rj_emlrtRSI;
  ixstart = 1;
  right = e_y->data[0];
  if (e_y->size[0] > 1) {
    f_st.site = &xd_emlrtRSI;
    if (muDoubleScalarIsNaN(e_y->data[0])) {
      f_st.site = &wd_emlrtRSI;
      if (2 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= e_y->size[0])) {
        ixstart = ix;
        f_st.site = &ud_emlrtRSI;
        if (!muDoubleScalarIsNaN(e_y->data[ix - 1])) {
          right = e_y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < e_y->size[0]) {
      f_st.site = &td_emlrtRSI;
      f_st.site = &td_emlrtRSI;
      if (ixstart + 1 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= e_y->size[0]) {
        f_st.site = &rd_emlrtRSI;
        if (e_y->data[ixstart] > right) {
          right = e_y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&d_st, &tx, 1, &mb_emlrtRTEI, TRUE);
  st.site = &km_emlrtRSI;
  b_floor(&right);
  i20 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    tx->data[i20] = x->data[i20];
  }

  st.site = &lm_emlrtRSI;
  c_floor(tx);
  i20 = x->size[0];
  i21 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i20, i21, &eb_emlrtECI, sp);
  i20 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = x->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    tx->data[i20] = x->data[i20] - tx->data[i20];
  }

  b_emxInit_real_T(sp, &ty, 1, &nb_emlrtRTEI, TRUE);
  i20 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ty->data[i20] = e_y->data[i20];
  }

  st.site = &mm_emlrtRSI;
  c_floor(ty);
  i20 = e_y->size[0];
  i21 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i20, i21, &db_emlrtECI, sp);
  i20 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ty->data[i20] = e_y->data[i20] - ty->data[i20];
  }

  ixstart = tx->size[0];
  i20 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[i20] = 0.0;
  }

  emxInit_int32_T(sp, &r6, 1, &ib_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i20 = r6->size[0];
  r6->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    r6->data[i20] = i20;
  }

  iv47[0] = r6->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv47, 1, b_tx, 1, &cb_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i20 = 0; i20 < ixstart; i20++) {
    Ax->data[r6->data[i20]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  iv48[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv48, 1, *(int32_T (*)[1])tx->size, 1,
    &bb_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r6->data[i20] + Ax->size[0]] = tx->data[i20];
  }

  loop_ub = Ax->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  b_emxInit_real_T(sp, &r7, 1, &ib_emlrtRTEI, TRUE);
  st.site = &nm_emlrtRSI;
  power(&st, tx, r7);
  iv49[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv49, 1, *(int32_T (*)[1])r7->size, 1,
    &ab_emlrtECI, sp);
  loop_ub = r7->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r6->data[i20] + (Ax->size[0] << 1)] = r7->data[i20];
  }

  loop_ub = Ax->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  st.site = &om_emlrtRSI;
  b_power(&st, tx, r7);
  iv50[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv50, 1, *(int32_T (*)[1])r7->size, 1,
    &y_emlrtECI, sp);
  loop_ub = r7->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ax->data[r6->data[i20] + Ax->size[0] * 3] = r7->data[i20];
  }

  emxInit_real_T(sp, &r8, 2, &ib_emlrtRTEI, TRUE);
  st.site = &pm_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i20 = Ax->size[0];
  i21 = r8->size[0] * r8->size[1];
  r8->size[0] = Ax->size[0];
  r8->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r8, i21, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    r8->data[i21] = Ax->data[i21];
  }

  i21 = Ax->size[0];
  i22 = Ax->size[0];
  i23 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i23, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23] = 0.0;
  }

  b_st.site = &te_emlrtRSI;
  eml_xgemm(i20, r8, i21, Ax, i22);
  ixstart = ty->size[0];
  i20 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[i20] = 0.0;
  }

  ixstart = ty->size[0];
  i20 = r6->size[0];
  r6->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    r6->data[i20] = i20;
  }

  iv51[0] = r6->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv51, 1, b_ty, 1, &x_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i20 = 0; i20 < ixstart; i20++) {
    Ay->data[r6->data[i20]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  iv52[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv52, 1, *(int32_T (*)[1])ty->size, 1,
    &w_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r6->data[i20] + Ay->size[0]] = ty->data[i20];
  }

  loop_ub = Ay->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  st.site = &qm_emlrtRSI;
  power(&st, ty, r7);
  iv53[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv53, 1, *(int32_T (*)[1])r7->size, 1,
    &v_emlrtECI, sp);
  loop_ub = r7->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r6->data[i20] + (Ay->size[0] << 1)] = r7->data[i20];
  }

  loop_ub = Ay->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  st.site = &rm_emlrtRSI;
  b_power(&st, ty, r7);
  iv54[0] = r6->size[0];
  emlrtSubAssignSizeCheckR2012b(iv54, 1, *(int32_T (*)[1])r7->size, 1,
    &u_emlrtECI, sp);
  loop_ub = r7->size[0];
  emxFree_real_T(&ty);
  for (i20 = 0; i20 < loop_ub; i20++) {
    Ay->data[r6->data[i20] + Ay->size[0] * 3] = r7->data[i20];
  }

  st.site = &sm_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i20 = Ay->size[0];
  i21 = r8->size[0] * r8->size[1];
  r8->size[0] = Ay->size[0];
  r8->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r8, i21, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    r8->data[i21] = Ay->data[i21];
  }

  i21 = Ay->size[0];
  i22 = Ay->size[0];
  i23 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i23, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &qb_emlrtRTEI, TRUE);
  b_st.site = &te_emlrtRSI;
  eml_xgemm(i20, r8, i21, Ay, i22);
  st.site = &tm_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &g_emlrtDCI, sp);
  i20 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &g_emlrtDCI, sp);
  i20 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &g_emlrtDCI, sp);
  emxFree_real_T(&r8);
  for (i20 = 0; i20 < loop_ub; i20++) {
    A->data[i20] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &tb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i20 = Ax->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ab_emlrtBCI, sp);
    i20 = Ay->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &y_emlrtBCI, sp);
    i20 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &f_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &f_emlrtDCI, sp);
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    i20 = x->size[0];
    i21 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &fb_emlrtBCI,
      sp) - 1];
    st.site = &um_emlrtRSI;
    b_floor(&mtmp);
    i20 = x->size[0];
    i21 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &gb_emlrtBCI,
      sp) - 1];
    st.site = &um_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &id_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i20 = e_y->size[0];
    i21 = 1 + i;
    b_mtmp = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
      &hb_emlrtBCI, sp) - 1];
    st.site = &um_emlrtRSI;
    b_floor(&b_mtmp);
    i20 = e_y->size[0];
    i21 = 1 + i;
    d7 = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ib_emlrtBCI,
      sp) - 1];
    st.site = &um_emlrtRSI;
    b_floor(&d7);
    if (b_mtmp == d7) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &hd_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &um_emlrtRSI;
    for (i20 = 0; i20 < 4; i20++) {
      for (i21 = 0; i21 < 4; i21++) {
        i22 = (int32_T)(4.0 + down);
        i23 = (int32_T)(mtmp + (1.0 + (real_T)i20));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i21));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &jb_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &kb_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i20]
          * Ay->data[i + Ay->size[0] * i21];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i20 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    for (i20 = 0; i20 < ixstart; i20++) {
      param_matrix->data[param_matrix->size[0] * i20] = temp1->data[i20];
    }

    i20 = A->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &x_emlrtBCI, sp);
    loop_ub = A->size[1];
    i20 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                      &ib_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      r6->data[i20] = i20;
    }

    iv55[0] = 1;
    iv55[1] = r6->size[0];
    emlrtSubAssignSizeCheckR2012b(iv55, 2, *(int32_T (*)[2])param_matrix->size,
      2, &t_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i20 = 0; i20 < loop_ub; i20++) {
      A->data[i + A->size[0] * r6->data[i20]] = param_matrix->data
        [param_matrix->size[0] * i20];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i20 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &c_emlrtDCI, sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &d_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i20, (int32_T)sizeof
                    (real_T), &ib_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &c_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &d_emlrtDCI, sp) << 1;
  for (i20 = 0; i20 < loop_ub; i20++) {
    control_p->data[i20] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i20 = r6->size[0];
  r6->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  emxInit_int32_T(sp, &r9, 1, &ib_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i20 = r9->size[0];
  r9->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r9, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r9->data[i20] = i20;
  }

  emxInit_real_T(sp, &a, 2, &ib_emlrtRTEI, TRUE);
  st.site = &vm_emlrtRSI;
  i20 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      a->data[i21 + a->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &of_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m10 = mxCreateCharArray(2, iv56);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&j_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&h_st, j_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      k_y = NULL;
      m10 = mxCreateCharArray(2, iv57);
      for (i = 0; i < 21; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
      emlrtAssign(&k_y, m10);
      c_st.site = &ox_emlrtRSI;
      h_st.site = &dy_emlrtRSI;
      error(&c_st, b_message(&h_st, k_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
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
                      (real_T), &ib_emlrtRTEI);
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    b_st.site = &te_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &vm_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &vm_emlrtRSI;
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      temp1->data[i21 + temp1->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &of_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m10 = mxCreateCharArray(2, iv58);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&l_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&h_st, l_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      m_y = NULL;
      m10 = mxCreateCharArray(2, iv59);
      for (i = 0; i < 21; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
      emlrtAssign(&m_y, m10);
      c_st.site = &ox_emlrtRSI;
      h_st.site = &dy_emlrtRSI;
      error(&c_st, b_message(&h_st, m_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
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
                      (real_T), &ib_emlrtRTEI);
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp2->data[i20] = 0.0;
    }

    b_st.site = &te_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &vm_emlrtRSI;
  loop_ub = ref->size[0];
  i20 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    x->data[i20] = ref->data[i20];
  }

  b_st.site = &of_emlrtRSI;
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
        m10 = mxCreateCharArray(2, iv60);
        for (i = 0; i < 21; i++) {
          cv33[i] = cv34[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
        emlrtAssign(&n_y, m10);
        c_st.site = &ox_emlrtRSI;
        h_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&h_st, n_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m10 = mxCreateCharArray(2, iv61);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&o_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
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
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i20 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i20, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        e_y->data[i20] = 0.0;
      }

      d_st.site = &ve_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &xe_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &if_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &jf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &kf_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &lf_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &mf_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &nf_emlrtRSI;
        ldc_t = (ptrdiff_t)(temp2->size[0]);
        alpha1_t = (double *)(&mtmp);
        Aia0_t = (double *)(&temp2->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&b_mtmp);
        Cic0_t = (double *)(&e_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard7 == TRUE) {
    i20 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i20, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      e_y->data[i20] = 0.0;
      ixstart = temp2->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        e_y->data[i20] += temp2->data[i20 + temp2->size[0] * i21] * x->data[i21];
      }
    }
  }

  st.site = &vm_emlrtRSI;
  b_st.site = &yw_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &yw_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &ax_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &rj_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &ax_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &vh_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &bx_emlrtRSI;
    e_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &bx_emlrtRSI;
    e_eml_error(&b_st);
  }

  for (i20 = 0; i20 < 2; i20++) {
    emlrtNonNegativeCheckFastR2012b(sz[i20], &h_emlrtDCI, &st);
  }

  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  b_st.site = &cx_emlrtRSI;
  c_st.site = &cc_emlrtRSI;
  d_st.site = &fx_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m10 = mxCreateCharArray(2, iv62);
    for (i = 0; i < 40; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m10, cv35);
    emlrtAssign(&p_y, m10);
    b_st.site = &cx_emlrtRSI;
    i_st.site = &ey_emlrtRSI;
    error(&b_st, b_message(&i_st, p_y, &cb_emlrtMCI), &db_emlrtMCI);
  }

  b_st.site = &dx_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv63[0] = r6->size[0];
  iv63[1] = r9->size[0];
  emlrtSubAssignSizeCheckR2012b(iv63, 2, *(int32_T (*)[2])temp1->size, 2,
    &s_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = temp1->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      control_p->data[r6->data[i21] + control_p->size[0] * r9->data[i20]] =
        temp1->data[i21 + temp1->size[0] * i20];
    }
  }

  loop_ub = control_p->size[0];
  i20 = r6->size[0];
  r6->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r6, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r6->data[i20] = i20;
  }

  loop_ub = control_p->size[1];
  i20 = r9->size[0];
  r9->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r9, i20, (int32_T)sizeof(int32_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    r9->data[i20] = i20;
  }

  st.site = &wm_emlrtRSI;
  i20 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      a->data[i21 + a->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &of_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m10 = mxCreateCharArray(2, iv64);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&q_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&h_st, q_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      r_y = NULL;
      m10 = mxCreateCharArray(2, iv65);
      for (i = 0; i < 21; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
      emlrtAssign(&r_y, m10);
      c_st.site = &ox_emlrtRSI;
      h_st.site = &dy_emlrtRSI;
      error(&c_st, b_message(&h_st, r_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
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
                      (real_T), &ib_emlrtRTEI);
    i20 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp1->data[i20] = 0.0;
    }

    b_st.site = &te_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &wm_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &wm_emlrtRSI;
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = A->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = A->size[1];
    for (i21 = 0; i21 < ixstart; i21++) {
      temp1->data[i21 + temp1->size[0] * i20] = A->data[i20 + A->size[0] * i21];
    }
  }

  b_st.site = &of_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m10 = mxCreateCharArray(2, iv66);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&s_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
      error(&c_st, b_message(&h_st, s_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      t_y = NULL;
      m10 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 21; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
      emlrtAssign(&t_y, m10);
      c_st.site = &ox_emlrtRSI;
      h_st.site = &dy_emlrtRSI;
      error(&c_st, b_message(&h_st, t_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
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
                      (real_T), &ib_emlrtRTEI);
    i20 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i20, (int32_T)sizeof
                      (real_T), &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      temp2->data[i20] = 0.0;
    }

    b_st.site = &te_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &wm_emlrtRSI;
  loop_ub = ref->size[0];
  i20 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < loop_ub; i20++) {
    x->data[i20] = ref->data[i20 + ref->size[0]];
  }

  b_st.site = &of_emlrtRSI;
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
        m10 = mxCreateCharArray(2, iv68);
        for (i = 0; i < 21; i++) {
          cv33[i] = cv34[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
        emlrtAssign(&u_y, m10);
        c_st.site = &ox_emlrtRSI;
        h_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&h_st, u_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m10 = mxCreateCharArray(2, iv69);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&v_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
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
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i20 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i20, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        e_y->data[i20] = 0.0;
      }

      d_st.site = &ve_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &xe_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &if_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &jf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &kf_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &lf_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &mf_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &nf_emlrtRSI;
        ldc_t = (ptrdiff_t)(temp2->size[0]);
        alpha1_t = (double *)(&mtmp);
        Aia0_t = (double *)(&temp2->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&b_mtmp);
        Cic0_t = (double *)(&e_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard5 == TRUE) {
    i20 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i20, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      e_y->data[i20] = 0.0;
      ixstart = temp2->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        e_y->data[i20] += temp2->data[i20 + temp2->size[0] * i21] * x->data[i21];
      }
    }
  }

  st.site = &wm_emlrtRSI;
  b_st.site = &yw_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &yw_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &ax_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &rj_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &ax_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &vh_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &bx_emlrtRSI;
    e_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &bx_emlrtRSI;
    e_eml_error(&b_st);
  }

  for (i20 = 0; i20 < 2; i20++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i20], &h_emlrtDCI, &st);
  }

  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  b_st.site = &cx_emlrtRSI;
  c_st.site = &cc_emlrtRSI;
  d_st.site = &fx_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m10 = mxCreateCharArray(2, iv70);
    for (i = 0; i < 40; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m10, cv35);
    emlrtAssign(&w_y, m10);
    b_st.site = &cx_emlrtRSI;
    i_st.site = &ey_emlrtRSI;
    error(&b_st, b_message(&i_st, w_y, &cb_emlrtMCI), &db_emlrtMCI);
  }

  b_st.site = &dx_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv71[0] = r6->size[0];
  iv71[1] = r9->size[0];
  emlrtSubAssignSizeCheckR2012b(iv71, 2, *(int32_T (*)[2])temp1->size, 2,
    &r_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    ixstart = temp1->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      control_p->data[(r6->data[i21] + control_p->size[0] * r9->data[i20]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i21 + temp1->
        size[0] * i20];
    }
  }

  emxFree_int32_T(&r9);
  emxFree_int32_T(&r6);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i20 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
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
                    &ib_emlrtRTEI);
  for (i20 = 0; i20 < ixstart; i20++) {
    for (i21 = 0; i21 < loop_ub; i21++) {
      temp2->data[i21 + temp2->size[0] * i20] = control_p->data[(i21 +
        control_p->size[0] * i20) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &xm_emlrtRSI;
  i20 = control_p->size[0];
  i21 = control_p->size[1];
  i22 = x->size[0];
  x->size[0] = i20 * i21;
  emxEnsureCapacity(&st, (emxArray__common *)x, i22, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = i20 * i21;
  for (i20 = 0; i20 < loop_ub; i20++) {
    x->data[i20] = temp1->data[i20];
  }

  b_st.site = &of_emlrtRSI;
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
        m10 = mxCreateCharArray(2, iv72);
        for (i = 0; i < 21; i++) {
          cv33[i] = cv34[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
        emlrtAssign(&x_y, m10);
        c_st.site = &ox_emlrtRSI;
        h_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&h_st, x_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m10 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&y_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
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
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i20 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i20, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        e_y->data[i20] = 0.0;
      }

      d_st.site = &ve_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &xe_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &if_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &jf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &kf_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &lf_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &mf_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &nf_emlrtRSI;
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&mtmp);
        Aia0_t = (double *)(&A->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&b_mtmp);
        Cic0_t = (double *)(&e_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard3 == TRUE) {
    i20 = e_y->size[0];
    e_y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i20, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      e_y->data[i20] = 0.0;
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        e_y->data[i20] += A->data[i20 + A->size[0] * i21] * temp1->data[i21];
      }
    }
  }

  i20 = ref->size[0];
  i21 = e_y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i21, i20, &q_emlrtECI, sp);
  st.site = &xm_emlrtRSI;
  i20 = control_p->size[0];
  i21 = control_p->size[1];
  i22 = x->size[0];
  x->size[0] = i20 * i21;
  emxEnsureCapacity(&st, (emxArray__common *)x, i22, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = i20 * i21;
  for (i20 = 0; i20 < loop_ub; i20++) {
    x->data[i20] = temp2->data[i20];
  }

  b_st.site = &of_emlrtRSI;
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
        m10 = mxCreateCharArray(2, iv74);
        for (i = 0; i < 21; i++) {
          cv33[i] = cv34[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m10, cv33);
        emlrtAssign(&ab_y, m10);
        c_st.site = &ox_emlrtRSI;
        h_st.site = &dy_emlrtRSI;
        error(&c_st, b_message(&h_st, ab_y, &i_emlrtMCI), &j_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m10 = mxCreateCharArray(2, iv75);
      for (i = 0; i < 45; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv31);
      emlrtAssign(&bb_y, m10);
      c_st.site = &nx_emlrtRSI;
      h_st.site = &cy_emlrtRSI;
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
      b_st.site = &te_emlrtRSI;
      c_st.site = &ue_emlrtRSI;
      i20 = tx->size[0];
      tx->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)tx, i20, (int32_T)sizeof
                        (real_T), &ib_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i20 = 0; i20 < loop_ub; i20++) {
        tx->data[i20] = 0.0;
      }

      d_st.site = &ve_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &xe_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &if_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &jf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &kf_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &lf_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &mf_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &nf_emlrtRSI;
        ldc_t = (ptrdiff_t)(A->size[0]);
        alpha1_t = (double *)(&mtmp);
        Aia0_t = (double *)(&A->data[0]);
        Bib0_t = (double *)(&x->data[0]);
        beta1_t = (double *)(&b_mtmp);
        Cic0_t = (double *)(&tx->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }
  }

  if (guard1 == TRUE) {
    i20 = tx->size[0];
    tx->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)tx, i20, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = A->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      tx->data[i20] = 0.0;
      ixstart = A->size[1];
      for (i21 = 0; i21 < ixstart; i21++) {
        tx->data[i20] += A->data[i20 + A->size[0] * i21] * temp2->data[i21];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &cb_y, 1, &ib_emlrtRTEI, TRUE);
  i20 = ref->size[0];
  i21 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i21, i20, &p_emlrtECI, sp);
  i20 = cb_y->size[0];
  cb_y->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i20 = 0; i20 < loop_ub; i20++) {
    cb_y->data[i20] = e_y->data[i20] - ref->data[i20];
  }

  emxFree_real_T(&e_y);
  b_emxInit_real_T(sp, &c_tx, 1, &ib_emlrtRTEI, TRUE);
  st.site = &xm_emlrtRSI;
  power(&st, cb_y, r7);
  i20 = c_tx->size[0];
  c_tx->size[0] = tx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c_tx, i20, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = tx->size[0];
  emxFree_real_T(&cb_y);
  for (i20 = 0; i20 < loop_ub; i20++) {
    c_tx->data[i20] = tx->data[i20] - ref->data[i20 + ref->size[0]];
  }

  emxFree_real_T(&tx);
  st.site = &xm_emlrtRSI;
  power(&st, c_tx, x);
  st.site = &xm_emlrtRSI;
  b_st.site = &xm_emlrtRSI;
  mtmp = c_sum(&b_st, r7) + c_sum(&b_st, x);
  b_st.site = &ub_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  *b_error = mtmp / (real_T)src->size[0];
  emxFree_real_T(&c_tx);
  emxFree_real_T(&r7);
  emxFree_real_T(&x);
  emxFree_real_T(&temp2);
  emxFree_real_T(&temp1);
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

/* End of code generation (bspline_inv.c) */
