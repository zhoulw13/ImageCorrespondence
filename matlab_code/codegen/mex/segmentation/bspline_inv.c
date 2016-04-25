/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "bspline_inv.h"
#include "floor.h"
#include "bspline.h"
#include "segmentation_emxutil.h"
#include "sum.h"
#include "power.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_error.h"
#include "pinv.h"
#include "rdivide.h"
#include "segmentation_mexutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo mc_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo nc_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo oc_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo pc_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo qc_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo rc_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo sc_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo tc_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo uc_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo vc_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo wc_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo xc_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo yc_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo ad_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo bd_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo cd_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo dd_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo ed_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo fd_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRSInfo id_emlrtRSI = { 88, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo od_emlrtRSI = { 16, "max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo vd_emlrtRSI = { 15, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo xd_emlrtRSI = { 32, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ie_emlrtRSI = { 110, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo je_emlrtRSI = { 111, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ke_emlrtRSI = { 112, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo le_emlrtRSI = { 113, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo me_emlrtRSI = { 114, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ne_emlrtRSI = { 115, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ol_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ep_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo fp_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo gp_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo hp_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ip_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo jp_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo kp_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo sp_emlrtRSI = { 215, "indexIntRelop",
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

static emlrtMCInfo y_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo ab_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo bb_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo cb_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo u_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo v_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo w_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo x_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo y_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo db_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo j_emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo k_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo l_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo m_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo n_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRTEInfo jc_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtECInfo o_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo p_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo q_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo r_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo s_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo t_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo u_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo v_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo w_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtECInfo x_emlrtECI = { -1, 17, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m" };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 14, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 13, 12, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 12, 18, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 11, 17, "src", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 46, 19, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo i_emlrtDCI = { 46, 27, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo j_emlrtDCI = { 40, 26, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo k_emlrtDCI = { 40, 34, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo l_emlrtDCI = { 35, 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 4 };

static emlrtDCInfo m_emlrtDCI = { 65, 48, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m", 4 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 41, 26, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 41, 40, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 41, 55, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 41, 69, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 41, 18, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 41, 47, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code/bspline_inv.m", 0 };

static emlrtRSInfo fr_emlrtRSI = { 38, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo qr_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo rr_emlrtRSI = { 67, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo tr_emlrtRSI = { 41, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo vr_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static void b_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
  *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
  int32_T ldc);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1);

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

static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m14;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m14, 3, pArrays, "message", TRUE,
    location);
}

static void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T guard3 = FALSE;
  boolean_T p;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *y;
  static const int32_T iv43[2] = { 1, 28 };

  const mxArray *m6;
  char_T cv23[28];
  int32_T i;
  static const char_T cv24[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T a;
  const mxArray *d_y;
  static const int32_T iv44[2] = { 1, 21 };

  char_T cv25[21];
  static const char_T cv26[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  st.site = &jp_emlrtRSI;
  guard3 = FALSE;
  if (varargin_1 != varargin_1) {
    guard3 = TRUE;
  } else if (muDoubleScalarIsInf(varargin_1)) {
    guard3 = TRUE;
  } else {
    p = TRUE;
  }

  if (guard3 == TRUE) {
    p = FALSE;
  }

  guard1 = FALSE;
  if (p) {
    st.site = &jp_emlrtRSI;
    guard2 = FALSE;
    if (-2.147483648E+9 > varargin_1) {
      guard2 = TRUE;
    } else if (2.147483647E+9 < varargin_1) {
      guard2 = TRUE;
    } else {
      p = TRUE;
    }

    if (guard2 == TRUE) {
      p = FALSE;
    }

    if (p) {
      p = TRUE;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    p = FALSE;
  }

  if (p) {
  } else {
    y = NULL;
    m6 = mxCreateCharArray(2, iv43);
    for (i = 0; i < 28; i++) {
      cv23[i] = cv24[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m6, cv23);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MIN_int32_T;
    emlrtAssign(&b_y, m6);
    c_y = NULL;
    m6 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MAX_int32_T;
    emlrtAssign(&c_y, m6);
    st.site = &jp_emlrtRSI;
    b_st.site = &vr_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &y_emlrtMCI), &ab_emlrtMCI);
  }

  st.site = &kp_emlrtRSI;
  if (varargin_1 <= 0.0) {
    a = 0.0;
  } else {
    a = varargin_1;
  }

  st.site = &kp_emlrtRSI;
  if (2.147483647E+9 >= a) {
  } else {
    d_y = NULL;
    m6 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 21; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m6, cv25);
    emlrtAssign(&d_y, m6);
    st.site = &kp_emlrtRSI;
    b_st.site = &qr_emlrtRSI;
    error(&st, message(&b_st, d_y, &bb_emlrtMCI), &cb_emlrtMCI);
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
  int32_T i4;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 36 };

  const mxArray *m5;
  char_T cv12[36];
  int32_T i;
  static const char_T cv13[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
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
  const mxArray *c_y;
  static const int32_T iv8[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv9[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *e_y;
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
  int32_T i5;
  emxArray_real_T *ty;
  emxArray_int32_T *r11;
  int32_T iv14[1];
  int32_T b_tx[1];
  int32_T iv15[1];
  emxArray_real_T *r12;
  int32_T iv16[1];
  int32_T iv17[1];
  emxArray_real_T *r13;
  uint32_T unnamed_idx_0;
  int32_T i6;
  int32_T i7;
  int32_T iv18[1];
  int32_T b_ty[1];
  int32_T iv19[1];
  int32_T iv20[1];
  int32_T iv21[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d0;
  int32_T iv22[2];
  emxArray_int32_T *r14;
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
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv41[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv42[2] = { 1, 45 };

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
  emxInit_real_T(sp, &Ax, 2, &ab_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &bb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &db_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &eb_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  i4 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &oc_emlrtBCI, sp);
  st.site = &mc_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  i4 = src->size[0];
  guard10 = FALSE;
  if (i4 == 1) {
    guard10 = TRUE;
  } else {
    i4 = src->size[0];
    if (i4 != 1) {
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
    m5 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m5, cv12);
    emlrtAssign(&y, m5);
    d_st.site = &fr_emlrtRSI;
    e_st.site = &tr_emlrtRSI;
    error(&d_st, message(&e_st, y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i4 = src->size[0];
  if (i4 > 0) {
  } else {
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m5, cv14);
    emlrtAssign(&b_y, m5);
    d_st.site = &er_emlrtRSI;
    e_st.site = &sr_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &id_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i4 = src->size[0];
  if (i4 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &md_emlrtRSI;
      i4 = src->size[0];
      if (2 > i4) {
        overflow = FALSE;
      } else {
        i4 = src->size[0];
        overflow = (i4 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i4 = src->size[0];
        if (ix <= i4) {
          ixstart = ix;
          f_st.site = &ld_emlrtRSI;
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

    i4 = src->size[0];
    if (ixstart < i4) {
      f_st.site = &kd_emlrtRSI;
      f_st.site = &kd_emlrtRSI;
      i4 = src->size[0];
      if (ixstart + 1 > i4) {
        overflow = FALSE;
      } else {
        i4 = src->size[0];
        overflow = (i4 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i4 = src->size[0];
        if (ixstart + 1 <= i4) {
          f_st.site = &jd_emlrtRSI;
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

  i4 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i4, &nc_emlrtBCI, sp);
  st.site = &nc_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  i4 = src->size[0];
  guard9 = FALSE;
  if (i4 == 1) {
    guard9 = TRUE;
  } else {
    i4 = src->size[0];
    if (i4 != 1) {
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
    m5 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m5, cv12);
    emlrtAssign(&c_y, m5);
    d_st.site = &fr_emlrtRSI;
    e_st.site = &tr_emlrtRSI;
    error(&d_st, message(&e_st, c_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i4 = src->size[0];
  if (i4 > 0) {
  } else {
    d_y = NULL;
    m5 = mxCreateCharArray(2, iv9);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m5, cv14);
    emlrtAssign(&d_y, m5);
    d_st.site = &er_emlrtRSI;
    e_st.site = &sr_emlrtRSI;
    error(&d_st, message(&e_st, d_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &id_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i4 = src->size[0];
  if (i4 > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &md_emlrtRSI;
      i4 = src->size[0];
      if (2 > i4) {
        overflow = FALSE;
      } else {
        i4 = src->size[0];
        overflow = (i4 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i4 = src->size[0];
        if (ix <= i4) {
          ixstart = ix;
          f_st.site = &ld_emlrtRSI;
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

    i4 = src->size[0];
    if (ixstart < i4) {
      f_st.site = &kd_emlrtRSI;
      f_st.site = &kd_emlrtRSI;
      i4 = src->size[0];
      if (ixstart + 1 > i4) {
        overflow = FALSE;
      } else {
        i4 = src->size[0];
        overflow = (i4 > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i4 = src->size[0];
        if (ixstart + 1 <= i4) {
          f_st.site = &jd_emlrtRSI;
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

  b_emxInit_real_T(&d_st, &b_src, 1, &t_emlrtRTEI, TRUE);
  i4 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &mc_emlrtBCI, sp);
  loop_ub = src->size[0];
  i4 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_src->data[i4] = (src->data[i4] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &v_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &t_emlrtRTEI, TRUE);
  st.site = &oc_emlrtRSI;
  rdivide(&st, b_src, 30.0, x);
  i4 = src->size[1];
  emlrtDynamicBoundsCheckFastR2012b(2, 1, i4, &lc_emlrtBCI, sp);
  loop_ub = src->size[0];
  i4 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_src->data[i4] = (src->data[i4 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &e_y, 1, &w_emlrtRTEI, TRUE);
  st.site = &pc_emlrtRSI;
  rdivide(&st, c_src, 30.0, e_y);
  st.site = &qc_emlrtRSI;
  b_st.site = &od_emlrtRSI;
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
    m5 = mxCreateCharArray(2, iv10);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m5, cv12);
    emlrtAssign(&f_y, m5);
    d_st.site = &fr_emlrtRSI;
    e_st.site = &tr_emlrtRSI;
    error(&d_st, message(&e_st, f_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m5 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m5, cv14);
    emlrtAssign(&g_y, m5);
    d_st.site = &er_emlrtRSI;
    e_st.site = &sr_emlrtRSI;
    error(&d_st, message(&e_st, g_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &id_emlrtRSI;
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
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        f_st.site = &ld_emlrtRSI;
        if (!muDoubleScalarIsNaN(x->data[ix - 1])) {
          down = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      f_st.site = &kd_emlrtRSI;
      f_st.site = &kd_emlrtRSI;
      if (ixstart + 1 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= x->size[0]) {
        f_st.site = &jd_emlrtRSI;
        if (x->data[ixstart] > down) {
          down = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  st.site = &qc_emlrtRSI;
  b_floor(&down);
  st.site = &rc_emlrtRSI;
  b_st.site = &od_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  if ((e_y->size[0] == 1) || (e_y->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    h_y = NULL;
    m5 = mxCreateCharArray(2, iv12);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m5, cv12);
    emlrtAssign(&h_y, m5);
    d_st.site = &fr_emlrtRSI;
    e_st.site = &tr_emlrtRSI;
    error(&d_st, message(&e_st, h_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  if (e_y->size[0] > 0) {
  } else {
    i_y = NULL;
    m5 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 39; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m5, cv14);
    emlrtAssign(&i_y, m5);
    d_st.site = &er_emlrtRSI;
    e_st.site = &sr_emlrtRSI;
    error(&d_st, message(&e_st, i_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  d_st.site = &id_emlrtRSI;
  ixstart = 1;
  right = e_y->data[0];
  if (e_y->size[0] > 1) {
    f_st.site = &nd_emlrtRSI;
    if (muDoubleScalarIsNaN(e_y->data[0])) {
      f_st.site = &md_emlrtRSI;
      if (2 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= e_y->size[0])) {
        ixstart = ix;
        f_st.site = &ld_emlrtRSI;
        if (!muDoubleScalarIsNaN(e_y->data[ix - 1])) {
          right = e_y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < e_y->size[0]) {
      f_st.site = &kd_emlrtRSI;
      f_st.site = &kd_emlrtRSI;
      if (ixstart + 1 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= e_y->size[0]) {
        f_st.site = &jd_emlrtRSI;
        if (e_y->data[ixstart] > right) {
          right = e_y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&d_st, &tx, 1, &x_emlrtRTEI, TRUE);
  st.site = &rc_emlrtRSI;
  b_floor(&right);
  i4 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = x->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    tx->data[i4] = x->data[i4];
  }

  st.site = &sc_emlrtRSI;
  c_floor(tx);
  i4 = x->size[0];
  i5 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i4, i5, &x_emlrtECI, sp);
  i4 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = x->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    tx->data[i4] = x->data[i4] - tx->data[i4];
  }

  b_emxInit_real_T(sp, &ty, 1, &y_emlrtRTEI, TRUE);
  i4 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ty->data[i4] = e_y->data[i4];
  }

  st.site = &tc_emlrtRSI;
  c_floor(ty);
  i4 = e_y->size[0];
  i5 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i4, i5, &w_emlrtECI, sp);
  i4 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ty->data[i4] = e_y->data[i4] - ty->data[i4];
  }

  ixstart = tx->size[0];
  i4 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ax->data[i4] = 0.0;
  }

  b_emxInit_int32_T(sp, &r11, 1, &t_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i4 = r11->size[0];
  r11->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < ixstart; i4++) {
    r11->data[i4] = i4;
  }

  iv14[0] = r11->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv14, 1, b_tx, 1, &v_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i4 = 0; i4 < ixstart; i4++) {
    Ax->data[r11->data[i4]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  iv15[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv15, 1, *(int32_T (*)[1])tx->size, 1,
    &u_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ax->data[r11->data[i4] + Ax->size[0]] = tx->data[i4];
  }

  loop_ub = Ax->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  b_emxInit_real_T(sp, &r12, 1, &t_emlrtRTEI, TRUE);
  st.site = &uc_emlrtRSI;
  power(&st, tx, r12);
  iv16[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv16, 1, *(int32_T (*)[1])r12->size, 1,
    &t_emlrtECI, sp);
  loop_ub = r12->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ax->data[r11->data[i4] + (Ax->size[0] << 1)] = r12->data[i4];
  }

  loop_ub = Ax->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  st.site = &vc_emlrtRSI;
  b_power(&st, tx, r12);
  iv17[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv17, 1, *(int32_T (*)[1])r12->size, 1,
    &s_emlrtECI, sp);
  loop_ub = r12->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ax->data[r11->data[i4] + Ax->size[0] * 3] = r12->data[i4];
  }

  emxInit_real_T(sp, &r13, 2, &t_emlrtRTEI, TRUE);
  st.site = &wc_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i4 = Ax->size[0];
  i5 = r13->size[0] * r13->size[1];
  r13->size[0] = Ax->size[0];
  r13->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r13, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    r13->data[i5] = Ax->data[i5];
  }

  i5 = Ax->size[0];
  i6 = Ax->size[0];
  i7 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i7, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i7 = 0; i7 < loop_ub; i7++) {
    Ax->data[i7] = 0.0;
  }

  b_st.site = &td_emlrtRSI;
  eml_xgemm(i4, r13, i5, Ax, i6);
  ixstart = ty->size[0];
  i4 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ay->data[i4] = 0.0;
  }

  ixstart = ty->size[0];
  i4 = r11->size[0];
  r11->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < ixstart; i4++) {
    r11->data[i4] = i4;
  }

  iv18[0] = r11->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv18, 1, b_ty, 1, &r_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i4 = 0; i4 < ixstart; i4++) {
    Ay->data[r11->data[i4]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  iv19[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[1])ty->size, 1,
    &q_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ay->data[r11->data[i4] + Ay->size[0]] = ty->data[i4];
  }

  loop_ub = Ay->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  st.site = &xc_emlrtRSI;
  power(&st, ty, r12);
  iv20[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv20, 1, *(int32_T (*)[1])r12->size, 1,
    &p_emlrtECI, sp);
  loop_ub = r12->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ay->data[r11->data[i4] + (Ay->size[0] << 1)] = r12->data[i4];
  }

  loop_ub = Ay->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  st.site = &yc_emlrtRSI;
  b_power(&st, ty, r12);
  iv21[0] = r11->size[0];
  emlrtSubAssignSizeCheckR2012b(iv21, 1, *(int32_T (*)[1])r12->size, 1,
    &o_emlrtECI, sp);
  loop_ub = r12->size[0];
  emxFree_real_T(&ty);
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ay->data[r11->data[i4] + Ay->size[0] * 3] = r12->data[i4];
  }

  st.site = &ad_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i4 = Ay->size[0];
  i5 = r13->size[0] * r13->size[1];
  r13->size[0] = Ay->size[0];
  r13->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r13, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    r13->data[i5] = Ay->data[i5];
  }

  i5 = Ay->size[0];
  i6 = Ay->size[0];
  i7 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i7, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i7 = 0; i7 < loop_ub; i7++) {
    Ay->data[i7] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &cb_emlrtRTEI, TRUE);
  b_st.site = &td_emlrtRSI;
  eml_xgemm(i4, r13, i5, Ay, i6);
  st.site = &bd_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &l_emlrtDCI, sp);
  i4 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &l_emlrtDCI, sp);
  i4 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &l_emlrtDCI, sp);
  emxFree_real_T(&r13);
  for (i4 = 0; i4 < loop_ub; i4++) {
    A->data[i4] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &fb_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i4 = Ax->size[0];
    i5 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &kc_emlrtBCI, sp);
    i4 = Ay->size[0];
    i5 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &jc_emlrtBCI, sp);
    i4 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &j_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &k_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &j_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &k_emlrtDCI, sp);
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp1->data[i4] = 0.0;
    }

    i4 = x->size[0];
    i5 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &pc_emlrtBCI, sp)
      - 1];
    st.site = &cd_emlrtRSI;
    b_floor(&mtmp);
    i4 = x->size[0];
    i5 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &qc_emlrtBCI,
      sp) - 1];
    st.site = &cd_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &kc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i4 = e_y->size[0];
    i5 = 1 + i;
    b_mtmp = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &rc_emlrtBCI,
      sp) - 1];
    st.site = &cd_emlrtRSI;
    b_floor(&b_mtmp);
    i4 = e_y->size[0];
    i5 = 1 + i;
    d0 = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &sc_emlrtBCI, sp)
      - 1];
    st.site = &cd_emlrtRSI;
    b_floor(&d0);
    if (b_mtmp == d0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &jc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &cd_emlrtRSI;
    for (i4 = 0; i4 < 4; i4++) {
      for (i5 = 0; i5 < 4; i5++) {
        i6 = (int32_T)(4.0 + down);
        i7 = (int32_T)(mtmp + (1.0 + (real_T)i4));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i5));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &tc_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &uc_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i4]
          * Ay->data[i + Ay->size[0] * i5];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i4 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i4, (int32_T)sizeof
                      (real_T), &t_emlrtRTEI);
    for (i4 = 0; i4 < ixstart; i4++) {
      param_matrix->data[param_matrix->size[0] * i4] = temp1->data[i4];
    }

    i4 = A->size[0];
    i5 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &ic_emlrtBCI, sp);
    loop_ub = A->size[1];
    i4 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                      &t_emlrtRTEI);
    for (i4 = 0; i4 < loop_ub; i4++) {
      r11->data[i4] = i4;
    }

    iv22[0] = 1;
    iv22[1] = r11->size[0];
    emlrtSubAssignSizeCheckR2012b(iv22, 2, *(int32_T (*)[2])param_matrix->size,
      2, &n_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      A->data[i + A->size[0] * r11->data[i4]] = param_matrix->data
        [param_matrix->size[0] * i4];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i4 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &h_emlrtDCI, sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &i_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i4, (int32_T)sizeof
                    (real_T), &t_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &h_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &i_emlrtDCI, sp) << 1;
  for (i4 = 0; i4 < loop_ub; i4++) {
    control_p->data[i4] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i4 = r11->size[0];
  r11->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  b_emxInit_int32_T(sp, &r14, 1, &t_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i4 = r14->size[0];
  r14->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r14, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r14->data[i4] = i4;
  }

  emxInit_real_T(sp, &a, 2, &t_emlrtRTEI, TRUE);
  st.site = &dd_emlrtRSI;
  i4 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = A->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      a->data[i5 + a->size[0] * i4] = A->data[i4 + A->size[0] * i5];
    }
  }

  b_st.site = &oe_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m5 = mxCreateCharArray(2, iv23);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&j_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, j_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      k_y = NULL;
      m5 = mxCreateCharArray(2, iv24);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
      emlrtAssign(&k_y, m5);
      c_st.site = &dr_emlrtRSI;
      h_st.site = &pr_emlrtRSI;
      error(&c_st, message(&h_st, k_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = a->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ixstart = A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        temp1->data[i4 + temp1->size[0] * i5] = 0.0;
        ix = a->size[1];
        for (i6 = 0; i6 < ix; i6++) {
          temp1->data[i4 + temp1->size[0] * i5] += a->data[i4 + a->size[0] * i6]
            * A->data[i6 + A->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp1->data[i4] = 0.0;
    }

    b_st.site = &td_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &dd_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &dd_emlrtRSI;
  i4 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = A->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      temp1->data[i5 + temp1->size[0] * i4] = A->data[i4 + A->size[0] * i5];
    }
  }

  b_st.site = &oe_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m5 = mxCreateCharArray(2, iv25);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&l_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, l_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      m_y = NULL;
      m5 = mxCreateCharArray(2, iv26);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
      emlrtAssign(&m_y, m5);
      c_st.site = &dr_emlrtRSI;
      h_st.site = &pr_emlrtRSI;
      error(&c_st, message(&h_st, m_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = a->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ixstart = temp1->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        temp2->data[i4 + temp2->size[0] * i5] = 0.0;
        ix = a->size[1];
        for (i6 = 0; i6 < ix; i6++) {
          temp2->data[i4 + temp2->size[0] * i5] += a->data[i4 + a->size[0] * i6]
            * temp1->data[i6 + temp1->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp2->data[i4] = 0.0;
    }

    b_st.site = &td_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &dd_emlrtRSI;
  loop_ub = ref->size[0];
  i4 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    x->data[i4] = ref->data[i4];
  }

  b_st.site = &oe_emlrtRSI;
  i4 = ref->size[0];
  if (!(temp2->size[1] == i4)) {
    guard8 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard8 = TRUE;
    } else {
      i4 = ref->size[0];
      if (i4 == 1) {
        guard8 = TRUE;
      } else {
        n_y = NULL;
        m5 = mxCreateCharArray(2, iv27);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
        emlrtAssign(&n_y, m5);
        c_st.site = &dr_emlrtRSI;
        h_st.site = &pr_emlrtRSI;
        error(&c_st, message(&h_st, n_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m5 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&o_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, o_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard7 = FALSE;
  if (temp2->size[1] == 1) {
    guard7 = TRUE;
  } else {
    i4 = ref->size[0];
    if (i4 == 1) {
      guard7 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i4 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i4, (int32_T)sizeof
                        (real_T), &t_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i4 = 0; i4 < loop_ub; i4++) {
        e_y->data[i4] = 0.0;
      }

      d_st.site = &vd_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &xd_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &ie_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &je_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &ke_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &le_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &me_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &ne_emlrtRSI;
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
    i4 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      e_y->data[i4] = 0.0;
      ixstart = temp2->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        e_y->data[i4] += temp2->data[i4 + temp2->size[0] * i5] * x->data[i5];
      }
    }
  }

  st.site = &dd_emlrtRSI;
  b_st.site = &ep_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &ep_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &fp_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &id_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &fp_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &ol_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &gp_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &gp_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i4 = 0; i4 < 2; i4++) {
    emlrtNonNegativeCheckFastR2012b(sz[i4], &m_emlrtDCI, &st);
  }

  i4 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  b_st.site = &hp_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  d_st.site = &sp_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m5 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 40; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m5, cv20);
    emlrtAssign(&p_y, m5);
    b_st.site = &hp_emlrtRSI;
    i_st.site = &rr_emlrtRSI;
    error(&b_st, message(&i_st, p_y, &w_emlrtMCI), &x_emlrtMCI);
  }

  b_st.site = &ip_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv30[0] = r11->size[0];
  iv30[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(iv30, 2, *(int32_T (*)[2])temp1->size, 2,
    &m_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = temp1->size[0];
    for (i5 = 0; i5 < ixstart; i5++) {
      control_p->data[r11->data[i5] + control_p->size[0] * r14->data[i4]] =
        temp1->data[i5 + temp1->size[0] * i4];
    }
  }

  loop_ub = control_p->size[0];
  i4 = r11->size[0];
  r11->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r11, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r11->data[i4] = i4;
  }

  loop_ub = control_p->size[1];
  i4 = r14->size[0];
  r14->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r14, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r14->data[i4] = i4;
  }

  st.site = &ed_emlrtRSI;
  i4 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = A->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      a->data[i5 + a->size[0] * i4] = A->data[i4 + A->size[0] * i5];
    }
  }

  b_st.site = &oe_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m5 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&q_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, q_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      r_y = NULL;
      m5 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
      emlrtAssign(&r_y, m5);
      c_st.site = &dr_emlrtRSI;
      h_st.site = &pr_emlrtRSI;
      error(&c_st, message(&h_st, r_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = a->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ixstart = A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        temp1->data[i4 + temp1->size[0] * i5] = 0.0;
        ix = a->size[1];
        for (i6 = 0; i6 < ix; i6++) {
          temp1->data[i4 + temp1->size[0] * i5] += a->data[i4 + a->size[0] * i6]
            * A->data[i6 + A->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i4 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp1->data[i4] = 0.0;
    }

    b_st.site = &td_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &ed_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &ed_emlrtRSI;
  i4 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = A->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      temp1->data[i5 + temp1->size[0] * i4] = A->data[i4 + A->size[0] * i5];
    }
  }

  b_st.site = &oe_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m5 = mxCreateCharArray(2, iv33);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&s_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, s_y, &s_emlrtMCI), &t_emlrtMCI);
    } else {
      t_y = NULL;
      m5 = mxCreateCharArray(2, iv34);
      for (i = 0; i < 21; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
      emlrtAssign(&t_y, m5);
      c_st.site = &dr_emlrtRSI;
      h_st.site = &pr_emlrtRSI;
      error(&c_st, message(&h_st, t_y, &u_emlrtMCI), &v_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = a->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ixstart = temp1->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        temp2->data[i4 + temp2->size[0] * i5] = 0.0;
        ix = a->size[1];
        for (i6 = 0; i6 < ix; i6++) {
          temp2->data[i4 + temp2->size[0] * i5] += a->data[i4 + a->size[0] * i6]
            * temp1->data[i6 + temp1->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i4 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp2->data[i4] = 0.0;
    }

    b_st.site = &td_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &ed_emlrtRSI;
  loop_ub = ref->size[0];
  i4 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    x->data[i4] = ref->data[i4 + ref->size[0]];
  }

  b_st.site = &oe_emlrtRSI;
  i4 = ref->size[0];
  if (!(temp2->size[1] == i4)) {
    guard6 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard6 = TRUE;
    } else {
      i4 = ref->size[0];
      if (i4 == 1) {
        guard6 = TRUE;
      } else {
        u_y = NULL;
        m5 = mxCreateCharArray(2, iv35);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
        emlrtAssign(&u_y, m5);
        c_st.site = &dr_emlrtRSI;
        h_st.site = &pr_emlrtRSI;
        error(&c_st, message(&h_st, u_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m5 = mxCreateCharArray(2, iv36);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&v_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, v_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard5 = FALSE;
  if (temp2->size[1] == 1) {
    guard5 = TRUE;
  } else {
    i4 = ref->size[0];
    if (i4 == 1) {
      guard5 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i4 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i4, (int32_T)sizeof
                        (real_T), &t_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i4 = 0; i4 < loop_ub; i4++) {
        e_y->data[i4] = 0.0;
      }

      d_st.site = &vd_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &xd_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &ie_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &je_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &ke_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &le_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &me_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &ne_emlrtRSI;
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
    i4 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      e_y->data[i4] = 0.0;
      ixstart = temp2->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        e_y->data[i4] += temp2->data[i4 + temp2->size[0] * i5] * x->data[i5];
      }
    }
  }

  st.site = &ed_emlrtRSI;
  b_st.site = &ep_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &ep_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &fp_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &id_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &fp_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &hd_emlrtRSI;
  f_st.site = &ol_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &gp_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &gp_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i4 = 0; i4 < 2; i4++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i4], &m_emlrtDCI, &st);
  }

  i4 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  b_st.site = &hp_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  d_st.site = &sp_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m5 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 40; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m5, cv20);
    emlrtAssign(&w_y, m5);
    b_st.site = &hp_emlrtRSI;
    i_st.site = &rr_emlrtRSI;
    error(&b_st, message(&i_st, w_y, &w_emlrtMCI), &x_emlrtMCI);
  }

  b_st.site = &ip_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv38[0] = r11->size[0];
  iv38[1] = r14->size[0];
  emlrtSubAssignSizeCheckR2012b(iv38, 2, *(int32_T (*)[2])temp1->size, 2,
    &l_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = temp1->size[0];
    for (i5 = 0; i5 < ixstart; i5++) {
      control_p->data[(r11->data[i5] + control_p->size[0] * r14->data[i4]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i5 + temp1->size
        [0] * i4];
    }
  }

  emxFree_int32_T(&r14);
  emxFree_int32_T(&r11);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i4 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < ixstart; i4++) {
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp1->data[i5 + temp1->size[0] * i4] = control_p->data[i5 +
        control_p->size[0] * i4];
    }
  }

  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i4 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = loop_ub;
  temp2->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 < ixstart; i4++) {
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp2->data[i5 + temp2->size[0] * i4] = control_p->data[(i5 +
        control_p->size[0] * i4) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &fd_emlrtRSI;
  i4 = control_p->size[0];
  i5 = control_p->size[1];
  i6 = x->size[0];
  x->size[0] = i4 * i5;
  emxEnsureCapacity(&st, (emxArray__common *)x, i6, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = i4 * i5;
  for (i4 = 0; i4 < loop_ub; i4++) {
    x->data[i4] = temp1->data[i4];
  }

  b_st.site = &oe_emlrtRSI;
  i4 = control_p->size[0];
  i5 = control_p->size[1];
  if (!(A->size[1] == i4 * i5)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      i4 = control_p->size[0];
      i5 = control_p->size[1];
      if (i4 * i5 == 1) {
        guard4 = TRUE;
      } else {
        x_y = NULL;
        m5 = mxCreateCharArray(2, iv39);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
        emlrtAssign(&x_y, m5);
        c_st.site = &dr_emlrtRSI;
        h_st.site = &pr_emlrtRSI;
        error(&c_st, message(&h_st, x_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m5 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&y_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, y_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i4 = control_p->size[0];
    i5 = control_p->size[1];
    if (i4 * i5 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i4 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i4, (int32_T)sizeof
                        (real_T), &t_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i4 = 0; i4 < loop_ub; i4++) {
        e_y->data[i4] = 0.0;
      }

      d_st.site = &vd_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &xd_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &ie_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &je_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &ke_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &le_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &me_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &ne_emlrtRSI;
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
    i4 = e_y->size[0];
    e_y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = A->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      e_y->data[i4] = 0.0;
      ixstart = A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        e_y->data[i4] += A->data[i4 + A->size[0] * i5] * temp1->data[i5];
      }
    }
  }

  i4 = ref->size[0];
  i5 = e_y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i5, i4, &k_emlrtECI, sp);
  st.site = &fd_emlrtRSI;
  i4 = control_p->size[0];
  i5 = control_p->size[1];
  i6 = x->size[0];
  x->size[0] = i4 * i5;
  emxEnsureCapacity(&st, (emxArray__common *)x, i6, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = i4 * i5;
  for (i4 = 0; i4 < loop_ub; i4++) {
    x->data[i4] = temp2->data[i4];
  }

  b_st.site = &oe_emlrtRSI;
  i4 = control_p->size[0];
  i5 = control_p->size[1];
  if (!(A->size[1] == i4 * i5)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      i4 = control_p->size[0];
      i5 = control_p->size[1];
      if (i4 * i5 == 1) {
        guard2 = TRUE;
      } else {
        ab_y = NULL;
        m5 = mxCreateCharArray(2, iv41);
        for (i = 0; i < 21; i++) {
          cv18[i] = cv19[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m5, cv18);
        emlrtAssign(&ab_y, m5);
        c_st.site = &dr_emlrtRSI;
        h_st.site = &pr_emlrtRSI;
        error(&c_st, message(&h_st, ab_y, &u_emlrtMCI), &v_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m5 = mxCreateCharArray(2, iv42);
      for (i = 0; i < 45; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m5, cv16);
      emlrtAssign(&bb_y, m5);
      c_st.site = &cr_emlrtRSI;
      h_st.site = &or_emlrtRSI;
      error(&c_st, message(&h_st, bb_y, &s_emlrtMCI), &t_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i4 = control_p->size[0];
    i5 = control_p->size[1];
    if (i4 * i5 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      i4 = tx->size[0];
      tx->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)tx, i4, (int32_T)sizeof
                        (real_T), &t_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i4 = 0; i4 < loop_ub; i4++) {
        tx->data[i4] = 0.0;
      }

      d_st.site = &vd_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &xd_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &ie_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &je_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &ke_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &le_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &me_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &ne_emlrtRSI;
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
    i4 = tx->size[0];
    tx->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)tx, i4, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = A->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      tx->data[i4] = 0.0;
      ixstart = A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        tx->data[i4] += A->data[i4 + A->size[0] * i5] * temp2->data[i5];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &cb_y, 1, &t_emlrtRTEI, TRUE);
  i4 = ref->size[0];
  i5 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i5, i4, &j_emlrtECI, sp);
  i4 = cb_y->size[0];
  cb_y->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    cb_y->data[i4] = e_y->data[i4] - ref->data[i4];
  }

  emxFree_real_T(&e_y);
  b_emxInit_real_T(sp, &c_tx, 1, &t_emlrtRTEI, TRUE);
  st.site = &fd_emlrtRSI;
  power(&st, cb_y, r12);
  i4 = c_tx->size[0];
  c_tx->size[0] = tx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c_tx, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = tx->size[0];
  emxFree_real_T(&cb_y);
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_tx->data[i4] = tx->data[i4] - ref->data[i4 + ref->size[0]];
  }

  emxFree_real_T(&tx);
  st.site = &fd_emlrtRSI;
  power(&st, c_tx, x);
  st.site = &fd_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  mtmp = sum(&b_st, r12) + sum(&b_st, x);
  b_st.site = &sb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  *b_error = mtmp / (real_T)src->size[0];
  emxFree_real_T(&c_tx);
  emxFree_real_T(&r12);
  emxFree_real_T(&x);
  emxFree_real_T(&temp2);
  emxFree_real_T(&temp1);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_inv.c) */
