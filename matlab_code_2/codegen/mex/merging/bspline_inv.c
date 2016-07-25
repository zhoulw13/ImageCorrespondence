/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
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
#include "pinv.h"
#include "rdivide.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = { 59, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo de_emlrtRSI = { 11, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ee_emlrtRSI = { 12, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo fe_emlrtRSI = { 13, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ge_emlrtRSI = { 14, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo he_emlrtRSI = { 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ie_emlrtRSI = { 16, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo je_emlrtRSI = { 17, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ke_emlrtRSI = { 18, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo le_emlrtRSI = { 23, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo me_emlrtRSI = { 24, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ne_emlrtRSI = { 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo oe_emlrtRSI = { 30, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo pe_emlrtRSI = { 31, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo qe_emlrtRSI = { 32, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo re_emlrtRSI = { 35, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo se_emlrtRSI = { 41, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo te_emlrtRSI = { 48, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ue_emlrtRSI = { 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ve_emlrtRSI = { 56, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRSInfo ef_emlrtRSI = { 15, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo gf_emlrtRSI = { 32, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo qf_emlrtRSI = { 110, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo rf_emlrtRSI = { 111, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo sf_emlrtRSI = { 112, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo tf_emlrtRSI = { 113, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo uf_emlrtRSI = { 114, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo vf_emlrtRSI = { 115, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo xm_emlrtRSI = { 24, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo kq_emlrtRSI = { 41, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo lq_emlrtRSI = { 58, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo mq_emlrtRSI = { 61, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo nq_emlrtRSI = { 66, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo oq_emlrtRSI = { 68, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo pq_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo qq_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo yq_emlrtRSI = { 215, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtMCInfo s_emlrtMCI = { 67, 5, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo t_emlrtMCI = { 66, 15, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo u_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo v_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo w_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo x_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 33, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo g_emlrtRTEI = { 65, 1, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo h_emlrtRTEI = { 13, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo i_emlrtRTEI = { 14, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo j_emlrtRTEI = { 17, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo k_emlrtRTEI = { 18, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo l_emlrtRTEI = { 20, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo m_emlrtRTEI = { 27, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo n_emlrtRTEI = { 35, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo o_emlrtRTEI = { 53, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo p_emlrtRTEI = { 54, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo q_emlrtRTEI = { 40, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo emlrtECI = { -1, 56, 45, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo b_emlrtECI = { -1, 56, 15, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo c_emlrtECI = { -1, 49, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo d_emlrtECI = { -1, 48, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo e_emlrtECI = { -1, 43, 5, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 43, 7, "A", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtRTEInfo sc_emlrtRTEI = { 41, 49, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtRTEInfo tc_emlrtRTEI = { 41, 20, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 39, 13, "Ay", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 38, 13, "Ax", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtECInfo f_emlrtECI = { -1, 31, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo g_emlrtECI = { -1, 30, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo h_emlrtECI = { -1, 29, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo i_emlrtECI = { -1, 28, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo j_emlrtECI = { -1, 24, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo k_emlrtECI = { -1, 23, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo l_emlrtECI = { -1, 22, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo m_emlrtECI = { -1, 21, 1, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo n_emlrtECI = { -1, 18, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtECInfo o_emlrtECI = { -1, 17, 6, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m" };

static emlrtDCInfo emlrtDCI = { 46, 19, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo b_emlrtDCI = { 46, 27, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo c_emlrtDCI = { 40, 26, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo d_emlrtDCI = { 40, 34, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo e_emlrtDCI = { 35, 25, "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 4 };

static emlrtDCInfo f_emlrtDCI = { 65, 48, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m", 4 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 41, 26, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 41, 40, "x", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 41, 55, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 41, 69, "y", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 41, 18, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 41, 47, "param_matrix", "bspline_inv",
  "F:/Git/correspondence/matlab_code_2/bspline_inv.m", 0 };

static emlrtRSInfo hu_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo iu_emlrtRSI = { 67, "reshape",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo lu_emlrtRSI = { 51, "eml_assert_valid_size_arg",
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
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "message", TRUE,
    location);
}

static void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T guard3 = FALSE;
  boolean_T p;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *y;
  static const int32_T iv41[2] = { 1, 28 };

  const mxArray *m3;
  char_T cv19[28];
  int32_T i;
  static const char_T cv20[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T a;
  const mxArray *d_y;
  static const int32_T iv42[2] = { 1, 21 };

  char_T cv21[21];
  static const char_T cv22[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  st.site = &pq_emlrtRSI;
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
    st.site = &pq_emlrtRSI;
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
    m3 = mxCreateCharArray(2, iv41);
    for (i = 0; i < 28; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m3, cv19);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MIN_int32_T;
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MAX_int32_T;
    emlrtAssign(&c_y, m3);
    st.site = &pq_emlrtRSI;
    b_st.site = &lu_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &u_emlrtMCI), &v_emlrtMCI);
  }

  st.site = &qq_emlrtRSI;
  if (varargin_1 <= 0.0) {
    a = 0.0;
  } else {
    a = varargin_1;
  }

  st.site = &qq_emlrtRSI;
  if (2.147483647E+9 >= a) {
  } else {
    d_y = NULL;
    m3 = mxCreateCharArray(2, iv42);
    for (i = 0; i < 21; i++) {
      cv21[i] = cv22[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m3, cv21);
    emlrtAssign(&d_y, m3);
    st.site = &qq_emlrtRSI;
    b_st.site = &hu_emlrtRSI;
    error(&st, message(&b_st, d_y, &w_emlrtMCI), &x_emlrtMCI);
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
  int32_T i1;
  boolean_T guard10 = FALSE;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 36 };

  const mxArray *m2;
  char_T cv8[36];
  int32_T i;
  static const char_T cv9[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 39 };

  char_T cv10[39];
  static const char_T cv11[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  int32_T exitg6;
  int32_T exitg5;
  boolean_T guard9 = FALSE;
  const mxArray *c_y;
  static const int32_T iv6[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv7[2] = { 1, 39 };

  real_T b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int32_T loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *e_y;
  const mxArray *f_y;
  static const int32_T iv8[2] = { 1, 36 };

  const mxArray *g_y;
  static const int32_T iv9[2] = { 1, 39 };

  real_T down;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv10[2] = { 1, 36 };

  const mxArray *i_y;
  static const int32_T iv11[2] = { 1, 39 };

  real_T right;
  boolean_T exitg1;
  emxArray_real_T *tx;
  int32_T i2;
  emxArray_real_T *ty;
  emxArray_int32_T *r0;
  int32_T iv12[1];
  int32_T b_tx[1];
  int32_T iv13[1];
  emxArray_real_T *r1;
  int32_T iv14[1];
  int32_T iv15[1];
  emxArray_real_T *r2;
  uint32_T unnamed_idx_0;
  int32_T i3;
  int32_T i4;
  int32_T iv16[1];
  int32_T b_ty[1];
  int32_T iv17[1];
  int32_T iv18[1];
  int32_T iv19[1];
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  real_T d0;
  int32_T iv20[2];
  emxArray_int32_T *r3;
  emxArray_real_T *a;
  const mxArray *j_y;
  static const int32_T iv21[2] = { 1, 45 };

  char_T cv12[45];
  static const char_T cv13[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *k_y;
  static const int32_T iv22[2] = { 1, 21 };

  char_T cv14[21];
  static const char_T cv15[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  const mxArray *l_y;
  static const int32_T iv23[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv24[2] = { 1, 21 };

  boolean_T guard8 = FALSE;
  const mxArray *n_y;
  static const int32_T iv25[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv26[2] = { 1, 45 };

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
  static const int32_T iv27[2] = { 1, 40 };

  char_T cv16[40];
  static const char_T cv17[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T iv28[2];
  const mxArray *q_y;
  static const int32_T iv29[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv30[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv32[2] = { 1, 21 };

  boolean_T guard6 = FALSE;
  const mxArray *u_y;
  static const int32_T iv33[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv34[2] = { 1, 45 };

  boolean_T guard5 = FALSE;
  int32_T b_sz[2];
  const mxArray *w_y;
  static const int32_T iv35[2] = { 1, 40 };

  int32_T iv36[2];
  boolean_T guard4 = FALSE;
  const mxArray *x_y;
  static const int32_T iv37[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv38[2] = { 1, 45 };

  boolean_T guard3 = FALSE;
  boolean_T guard2 = FALSE;
  const mxArray *ab_y;
  static const int32_T iv39[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv40[2] = { 1, 45 };

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
  emxInit_real_T(sp, &Ax, 2, &l_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Ay, 2, &m_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp1, 2, &o_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp2, 2, &p_emlrtRTEI, TRUE);

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  st.site = &de_emlrtRSI;
  b_st.site = &we_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  i1 = src->size[0];
  guard10 = FALSE;
  if (i1 == 1) {
    guard10 = TRUE;
  } else {
    i1 = src->size[0];
    if (i1 != 1) {
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
    m2 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 36; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m2, cv8);
    emlrtAssign(&y, m2);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, y, &emlrtMCI), &b_emlrtMCI);
  }

  i1 = src->size[0];
  if (i1 > 0) {
  } else {
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 39; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m2, cv10);
    emlrtAssign(&b_y, m2);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &fc_emlrtRSI;
  ixstart = 1;
  mtmp = src->data[0];
  i1 = src->size[0];
  if (i1 > 1) {
    f_st.site = &cc_emlrtRSI;
    if (muDoubleScalarIsNaN(mtmp)) {
      f_st.site = &bc_emlrtRSI;
      i1 = src->size[0];
      if (2 > i1) {
        overflow = FALSE;
      } else {
        i1 = src->size[0];
        overflow = (i1 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg6 = 0;
        i1 = src->size[0];
        if (ix <= i1) {
          ixstart = ix;
          f_st.site = &yb_emlrtRSI;
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

    i1 = src->size[0];
    if (ixstart < i1) {
      f_st.site = &xb_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
      i1 = src->size[0];
      if (ixstart + 1 > i1) {
        overflow = FALSE;
      } else {
        i1 = src->size[0];
        overflow = (i1 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg5 = 0;
        i1 = src->size[0];
        if (ixstart + 1 <= i1) {
          f_st.site = &vb_emlrtRSI;
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

  st.site = &ee_emlrtRSI;
  b_st.site = &we_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  i1 = src->size[0];
  guard9 = FALSE;
  if (i1 == 1) {
    guard9 = TRUE;
  } else {
    i1 = src->size[0];
    if (i1 != 1) {
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
    m2 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 36; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m2, cv8);
    emlrtAssign(&c_y, m2);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, c_y, &emlrtMCI), &b_emlrtMCI);
  }

  i1 = src->size[0];
  if (i1 > 0) {
  } else {
    d_y = NULL;
    m2 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 39; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m2, cv10);
    emlrtAssign(&d_y, m2);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &fc_emlrtRSI;
  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i1 = src->size[0];
  if (i1 > 1) {
    f_st.site = &cc_emlrtRSI;
    if (muDoubleScalarIsNaN(b_mtmp)) {
      f_st.site = &bc_emlrtRSI;
      i1 = src->size[0];
      if (2 > i1) {
        overflow = FALSE;
      } else {
        i1 = src->size[0];
        overflow = (i1 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      do {
        exitg4 = 0;
        i1 = src->size[0];
        if (ix <= i1) {
          ixstart = ix;
          f_st.site = &yb_emlrtRSI;
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

    i1 = src->size[0];
    if (ixstart < i1) {
      f_st.site = &xb_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
      i1 = src->size[0];
      if (ixstart + 1 > i1) {
        overflow = FALSE;
      } else {
        i1 = src->size[0];
        overflow = (i1 > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      do {
        exitg3 = 0;
        i1 = src->size[0];
        if (ixstart + 1 <= i1) {
          f_st.site = &vb_emlrtRSI;
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

  b_emxInit_real_T(&d_st, &b_src, 1, &f_emlrtRTEI, TRUE);
  loop_ub = src->size[0];
  i1 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_src, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_src->data[i1] = (src->data[i1] - mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &x, 1, &h_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &c_src, 1, &f_emlrtRTEI, TRUE);
  st.site = &fe_emlrtRSI;
  rdivide(&st, b_src, x);
  loop_ub = src->size[0];
  i1 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_src, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  emxFree_real_T(&b_src);
  for (i1 = 0; i1 < loop_ub; i1++) {
    c_src->data[i1] = (src->data[i1 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(sp, &e_y, 1, &i_emlrtRTEI, TRUE);
  st.site = &ge_emlrtRSI;
  rdivide(&st, c_src, e_y);
  st.site = &he_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  emxFree_real_T(&c_src);
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    f_y = NULL;
    m2 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 36; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m2, cv8);
    emlrtAssign(&f_y, m2);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, f_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (x->size[0] > 0) {
  } else {
    g_y = NULL;
    m2 = mxCreateCharArray(2, iv9);
    for (i = 0; i < 39; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m2, cv10);
    emlrtAssign(&g_y, m2);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, g_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &fc_emlrtRSI;
  ixstart = 1;
  down = x->data[0];
  if (x->size[0] > 1) {
    f_st.site = &cc_emlrtRSI;
    if (muDoubleScalarIsNaN(x->data[0])) {
      f_st.site = &bc_emlrtRSI;
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
        f_st.site = &yb_emlrtRSI;
        if (!muDoubleScalarIsNaN(x->data[ix - 1])) {
          down = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      f_st.site = &xb_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
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
        f_st.site = &vb_emlrtRSI;
        if (x->data[ixstart] > down) {
          down = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  st.site = &he_emlrtRSI;
  b_floor(&down);
  st.site = &ie_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  if ((e_y->size[0] == 1) || (e_y->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    h_y = NULL;
    m2 = mxCreateCharArray(2, iv10);
    for (i = 0; i < 36; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m2, cv8);
    emlrtAssign(&h_y, m2);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, h_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (e_y->size[0] > 0) {
  } else {
    i_y = NULL;
    m2 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 39; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m2, cv10);
    emlrtAssign(&i_y, m2);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, i_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &fc_emlrtRSI;
  ixstart = 1;
  right = e_y->data[0];
  if (e_y->size[0] > 1) {
    f_st.site = &cc_emlrtRSI;
    if (muDoubleScalarIsNaN(e_y->data[0])) {
      f_st.site = &bc_emlrtRSI;
      if (2 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= e_y->size[0])) {
        ixstart = ix;
        f_st.site = &yb_emlrtRSI;
        if (!muDoubleScalarIsNaN(e_y->data[ix - 1])) {
          right = e_y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < e_y->size[0]) {
      f_st.site = &xb_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
      if (ixstart + 1 > e_y->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (e_y->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= e_y->size[0]) {
        f_st.site = &vb_emlrtRSI;
        if (e_y->data[ixstart] > right) {
          right = e_y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&d_st, &tx, 1, &j_emlrtRTEI, TRUE);
  st.site = &ie_emlrtRSI;
  b_floor(&right);
  i1 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = x->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tx->data[i1] = x->data[i1];
  }

  st.site = &je_emlrtRSI;
  c_floor(tx);
  i1 = x->size[0];
  i2 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i1, i2, &o_emlrtECI, sp);
  i1 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tx, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = x->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tx->data[i1] = x->data[i1] - tx->data[i1];
  }

  b_emxInit_real_T(sp, &ty, 1, &k_emlrtRTEI, TRUE);
  i1 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ty->data[i1] = e_y->data[i1];
  }

  st.site = &ke_emlrtRSI;
  c_floor(ty);
  i1 = e_y->size[0];
  i2 = ty->size[0];
  emlrtSizeEqCheck1DFastR2012b(i1, i2, &n_emlrtECI, sp);
  i1 = ty->size[0];
  ty->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ty, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ty->data[i1] = e_y->data[i1] - ty->data[i1];
  }

  ixstart = tx->size[0];
  i1 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ax, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = tx->size[0] << 2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ax->data[i1] = 0.0;
  }

  emxInit_int32_T(sp, &r0, 1, &f_emlrtRTEI, TRUE);
  ixstart = tx->size[0];
  i1 = r0->size[0];
  r0->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < ixstart; i1++) {
    r0->data[i1] = i1;
  }

  iv12[0] = r0->size[0];
  b_tx[0] = tx->size[0];
  emlrtSubAssignSizeCheckR2012b(iv12, 1, b_tx, 1, &m_emlrtECI, sp);
  ixstart = tx->size[0];
  for (i1 = 0; i1 < ixstart; i1++) {
    Ax->data[r0->data[i1]] = 1.0;
  }

  loop_ub = Ax->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  iv13[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv13, 1, *(int32_T (*)[1])tx->size, 1,
    &l_emlrtECI, sp);
  loop_ub = tx->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ax->data[r0->data[i1] + Ax->size[0]] = tx->data[i1];
  }

  loop_ub = Ax->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  b_emxInit_real_T(sp, &r1, 1, &f_emlrtRTEI, TRUE);
  st.site = &le_emlrtRSI;
  power(&st, tx, r1);
  iv14[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv14, 1, *(int32_T (*)[1])r1->size, 1,
    &k_emlrtECI, sp);
  loop_ub = r1->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ax->data[r0->data[i1] + (Ax->size[0] << 1)] = r1->data[i1];
  }

  loop_ub = Ax->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  st.site = &me_emlrtRSI;
  b_power(&st, tx, r1);
  iv15[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv15, 1, *(int32_T (*)[1])r1->size, 1,
    &j_emlrtECI, sp);
  loop_ub = r1->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ax->data[r0->data[i1] + Ax->size[0] * 3] = r1->data[i1];
  }

  emxInit_real_T(sp, &r2, 2, &f_emlrtRTEI, TRUE);
  st.site = &ne_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ax->size[0];
  i1 = Ax->size[0];
  i2 = r2->size[0] * r2->size[1];
  r2->size[0] = Ax->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r2, i2, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r2->data[i2] = Ax->data[i2];
  }

  i2 = Ax->size[0];
  i3 = Ax->size[0];
  i4 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int32_T)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ax, i4, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ax->data[i4] = 0.0;
  }

  b_st.site = &cf_emlrtRSI;
  eml_xgemm(i1, r2, i2, Ax, i3);
  ixstart = ty->size[0];
  i1 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity(sp, (emxArray__common *)Ay, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = ty->size[0] << 2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ay->data[i1] = 0.0;
  }

  ixstart = ty->size[0];
  i1 = r0->size[0];
  r0->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < ixstart; i1++) {
    r0->data[i1] = i1;
  }

  iv16[0] = r0->size[0];
  b_ty[0] = ty->size[0];
  emlrtSubAssignSizeCheckR2012b(iv16, 1, b_ty, 1, &i_emlrtECI, sp);
  ixstart = ty->size[0];
  for (i1 = 0; i1 < ixstart; i1++) {
    Ay->data[r0->data[i1]] = 1.0;
  }

  loop_ub = Ay->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  iv17[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv17, 1, *(int32_T (*)[1])ty->size, 1,
    &h_emlrtECI, sp);
  loop_ub = ty->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ay->data[r0->data[i1] + Ay->size[0]] = ty->data[i1];
  }

  loop_ub = Ay->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  st.site = &oe_emlrtRSI;
  power(&st, ty, r1);
  iv18[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv18, 1, *(int32_T (*)[1])r1->size, 1,
    &g_emlrtECI, sp);
  loop_ub = r1->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ay->data[r0->data[i1] + (Ay->size[0] << 1)] = r1->data[i1];
  }

  loop_ub = Ay->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  st.site = &pe_emlrtRSI;
  b_power(&st, ty, r1);
  iv19[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[1])r1->size, 1,
    &f_emlrtECI, sp);
  loop_ub = r1->size[0];
  emxFree_real_T(&ty);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Ay->data[r0->data[i1] + Ay->size[0] * 3] = r1->data[i1];
  }

  st.site = &qe_emlrtRSI;
  unnamed_idx_0 = (uint32_T)Ay->size[0];
  i1 = Ay->size[0];
  i2 = r2->size[0] * r2->size[1];
  r2->size[0] = Ay->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)r2, i2, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r2->data[i2] = Ay->data[i2];
  }

  i2 = Ay->size[0];
  i3 = Ay->size[0];
  i4 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int32_T)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity(&st, (emxArray__common *)Ay, i4, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 << 2;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Ay->data[i4] = 0.0;
  }

  emxInit_real_T(&st, &A, 2, &n_emlrtRTEI, TRUE);
  b_st.site = &cf_emlrtRSI;
  eml_xgemm(i1, r2, i2, Ay, i3);
  st.site = &re_emlrtRSI;
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI, sp);
  i1 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)A, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  emlrtNonNegativeCheckFastR2012b(mtmp, &e_emlrtDCI, sp);
  i1 = A->size[0] * A->size[1];
  A->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(sp, (emxArray__common *)A, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = src->size[0] * (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &e_emlrtDCI, sp);
  emxFree_real_T(&r2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    A->data[i1] = 0.0;
  }

  i = 0;
  emxInit_real_T(sp, &param_matrix, 2, &q_emlrtRTEI, TRUE);
  while (i <= src->size[0] - 1) {
    i1 = Ax->size[0];
    i2 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &c_emlrtBCI, sp);
    i1 = Ay->size[0];
    i2 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, sp);
    i1 = temp1->size[0] * temp1->size[1];
    mtmp = 4.0 + down;
    temp1->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &c_emlrtDCI,
      sp);
    mtmp = 4.0 + right;
    temp1->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &d_emlrtDCI,
      sp);
    emxEnsureCapacity(sp, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    mtmp = 4.0 + down;
    b_mtmp = 4.0 + right;
    loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &c_emlrtDCI, sp) *
      (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &d_emlrtDCI, sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp1->data[i1] = 0.0;
    }

    i1 = x->size[0];
    i2 = 1 + i;
    mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &d_emlrtBCI, sp)
      - 1];
    st.site = &se_emlrtRSI;
    b_floor(&mtmp);
    i1 = x->size[0];
    i2 = 1 + i;
    b_mtmp = x->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI,
      sp) - 1];
    st.site = &se_emlrtRSI;
    b_floor(&b_mtmp);
    if (mtmp == b_mtmp) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &tc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    i1 = e_y->size[0];
    i2 = 1 + i;
    b_mtmp = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &f_emlrtBCI,
      sp) - 1];
    st.site = &se_emlrtRSI;
    b_floor(&b_mtmp);
    i1 = e_y->size[0];
    i2 = 1 + i;
    d0 = e_y->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &g_emlrtBCI, sp)
      - 1];
    st.site = &se_emlrtRSI;
    b_floor(&d0);
    if (b_mtmp == d0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &sc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    st.site = &se_emlrtRSI;
    for (i1 = 0; i1 < 4; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        i3 = (int32_T)(4.0 + down);
        i4 = (int32_T)(mtmp + (1.0 + (real_T)i1));
        ixstart = (int32_T)(4.0 + right);
        ix = (int32_T)(b_mtmp + (1.0 + (real_T)i2));
        temp1->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &h_emlrtBCI,
          sp) + temp1->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ix, 1,
          ixstart, &i_emlrtBCI, sp) - 1)) - 1] = Ax->data[i + Ax->size[0] * i1] *
          Ay->data[i + Ay->size[0] * i2];
      }
    }

    ixstart = temp1->size[0] * temp1->size[1];
    i1 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = 1;
    param_matrix->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)param_matrix, i1, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    for (i1 = 0; i1 < ixstart; i1++) {
      param_matrix->data[param_matrix->size[0] * i1] = temp1->data[i1];
    }

    i1 = A->size[0];
    i2 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI, sp);
    loop_ub = A->size[1];
    i1 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                      &f_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r0->data[i1] = i1;
    }

    iv20[0] = 1;
    iv20[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(iv20, 2, *(int32_T (*)[2])param_matrix->size,
      2, &e_emlrtECI, sp);
    loop_ub = param_matrix->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      A->data[i + A->size[0] * r0->data[i1]] = param_matrix->data
        [param_matrix->size[0] * i1];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&param_matrix);
  i1 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  mtmp = 4.0 + down;
  control_p->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &emlrtDCI,
    sp);
  mtmp = 4.0 + right;
  control_p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp,
    &b_emlrtDCI, sp);
  control_p->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)control_p, i1, (int32_T)sizeof
                    (real_T), &f_emlrtRTEI);
  mtmp = 4.0 + down;
  b_mtmp = 4.0 + right;
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(mtmp, &emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckFastR2012b(b_mtmp, &b_emlrtDCI, sp) << 1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    control_p->data[i1] = 0.0;
  }

  loop_ub = (int32_T)(4.0 + down);
  i1 = r0->size[0];
  r0->size[0] = (int32_T)(4.0 + down);
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  emxInit_int32_T(sp, &r3, 1, &f_emlrtRTEI, TRUE);
  loop_ub = (int32_T)(4.0 + right);
  i1 = r3->size[0];
  r3->size[0] = (int32_T)(4.0 + right);
  emxEnsureCapacity(sp, (emxArray__common *)r3, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r3->data[i1] = i1;
  }

  emxInit_real_T(sp, &a, 2, &f_emlrtRTEI, TRUE);
  st.site = &te_emlrtRSI;
  i1 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = A->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = A->size[1];
    for (i2 = 0; i2 < ixstart; i2++) {
      a->data[i2 + a->size[0] * i1] = A->data[i1 + A->size[0] * i2];
    }
  }

  b_st.site = &wf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      j_y = NULL;
      m2 = mxCreateCharArray(2, iv21);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&j_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, j_y, &o_emlrtMCI), &p_emlrtMCI);
    } else {
      k_y = NULL;
      m2 = mxCreateCharArray(2, iv22);
      for (i = 0; i < 21; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
      emlrtAssign(&k_y, m2);
      c_st.site = &vt_emlrtRSI;
      h_st.site = &gu_emlrtRSI;
      error(&c_st, message(&h_st, k_y, &q_emlrtMCI), &r_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = a->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      ixstart = A->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        temp1->data[i1 + temp1->size[0] * i2] = 0.0;
        ix = a->size[1];
        for (i3 = 0; i3 < ix; i3++) {
          temp1->data[i1 + temp1->size[0] * i2] += a->data[i1 + a->size[0] * i3]
            * A->data[i3 + A->size[0] * i2];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp1->data[i1] = 0.0;
    }

    b_st.site = &cf_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &te_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &te_emlrtRSI;
  i1 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = A->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = A->size[1];
    for (i2 = 0; i2 < ixstart; i2++) {
      temp1->data[i2 + temp1->size[0] * i1] = A->data[i1 + A->size[0] * i2];
    }
  }

  b_st.site = &wf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      l_y = NULL;
      m2 = mxCreateCharArray(2, iv23);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&l_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, l_y, &o_emlrtMCI), &p_emlrtMCI);
    } else {
      m_y = NULL;
      m2 = mxCreateCharArray(2, iv24);
      for (i = 0; i < 21; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
      emlrtAssign(&m_y, m2);
      c_st.site = &vt_emlrtRSI;
      h_st.site = &gu_emlrtRSI;
      error(&c_st, message(&h_st, m_y, &q_emlrtMCI), &r_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = a->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      ixstart = temp1->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        temp2->data[i1 + temp2->size[0] * i2] = 0.0;
        ix = a->size[1];
        for (i3 = 0; i3 < ix; i3++) {
          temp2->data[i1 + temp2->size[0] * i2] += a->data[i1 + a->size[0] * i3]
            * temp1->data[i3 + temp1->size[0] * i2];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp2->data[i1] = 0.0;
    }

    b_st.site = &cf_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  st.site = &te_emlrtRSI;
  loop_ub = ref->size[0];
  i1 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    x->data[i1] = ref->data[i1];
  }

  b_st.site = &wf_emlrtRSI;
  i1 = ref->size[0];
  if (!(temp2->size[1] == i1)) {
    guard8 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard8 = TRUE;
    } else {
      i1 = ref->size[0];
      if (i1 == 1) {
        guard8 = TRUE;
      } else {
        n_y = NULL;
        m2 = mxCreateCharArray(2, iv25);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
        emlrtAssign(&n_y, m2);
        c_st.site = &vt_emlrtRSI;
        h_st.site = &gu_emlrtRSI;
        error(&c_st, message(&h_st, n_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard8 == TRUE) {
      o_y = NULL;
      m2 = mxCreateCharArray(2, iv26);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&o_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, o_y, &o_emlrtMCI), &p_emlrtMCI);
    }
  }

  guard7 = FALSE;
  if (temp2->size[1] == 1) {
    guard7 = TRUE;
  } else {
    i1 = ref->size[0];
    if (i1 == 1) {
      guard7 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i1 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        e_y->data[i1] = 0.0;
      }

      d_st.site = &ef_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &gf_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &qf_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &rf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &sf_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &tf_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &uf_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &vf_emlrtRSI;
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
    i1 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_y->data[i1] = 0.0;
      ixstart = temp2->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        e_y->data[i1] += temp2->data[i1 + temp2->size[0] * i2] * x->data[i2];
      }
    }
  }

  st.site = &te_emlrtRSI;
  b_st.site = &kq_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  sz[0] = (int32_T)(4.0 + down);
  b_st.site = &kq_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  sz[1] = (int32_T)(4.0 + right);
  b_st.site = &lq_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  f_st.site = &fc_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &lq_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  f_st.site = &yc_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &mq_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &mq_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i1 = 0; i1 < 2; i1++) {
    emlrtNonNegativeCheckFastR2012b(sz[i1], &f_emlrtDCI, &st);
  }

  i1 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  b_st.site = &nq_emlrtRSI;
  c_st.site = &xm_emlrtRSI;
  d_st.site = &yq_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    p_y = NULL;
    m2 = mxCreateCharArray(2, iv27);
    for (i = 0; i < 40; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m2, cv16);
    emlrtAssign(&p_y, m2);
    b_st.site = &nq_emlrtRSI;
    i_st.site = &iu_emlrtRSI;
    error(&b_st, message(&i_st, p_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  b_st.site = &oq_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv28[0] = r0->size[0];
  iv28[1] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv28, 2, *(int32_T (*)[2])temp1->size, 2,
    &d_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = temp1->size[0];
    for (i2 = 0; i2 < ixstart; i2++) {
      control_p->data[r0->data[i2] + control_p->size[0] * r3->data[i1]] =
        temp1->data[i2 + temp1->size[0] * i1];
    }
  }

  loop_ub = control_p->size[0];
  i1 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = i1;
  }

  loop_ub = control_p->size[1];
  i1 = r3->size[0];
  r3->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i1, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    r3->data[i1] = i1;
  }

  st.site = &ue_emlrtRSI;
  i1 = a->size[0] * a->size[1];
  a->size[0] = A->size[1];
  a->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = A->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = A->size[1];
    for (i2 = 0; i2 < ixstart; i2++) {
      a->data[i2 + a->size[0] * i1] = A->data[i1 + A->size[0] * i2];
    }
  }

  b_st.site = &wf_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((A->size[0] == 1) &&
         (A->size[1] == 1))) {
      q_y = NULL;
      m2 = mxCreateCharArray(2, iv29);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&q_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, q_y, &o_emlrtMCI), &p_emlrtMCI);
    } else {
      r_y = NULL;
      m2 = mxCreateCharArray(2, iv30);
      for (i = 0; i < 21; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
      emlrtAssign(&r_y, m2);
      c_st.site = &vt_emlrtRSI;
      h_st.site = &gu_emlrtRSI;
      error(&c_st, message(&h_st, r_y, &q_emlrtMCI), &r_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = a->size[0];
    temp1->size[1] = A->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = a->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      ixstart = A->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        temp1->data[i1 + temp1->size[0] * i2] = 0.0;
        ix = a->size[1];
        for (i3 = 0; i3 < ix; i3++) {
          temp1->data[i1 + temp1->size[0] * i2] += a->data[i1 + a->size[0] * i3]
            * A->data[i3 + A->size[0] * i2];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)A->size[1];
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    i1 = temp1->size[0] * temp1->size[1];
    temp1->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp1->data[i1] = 0.0;
    }

    b_st.site = &cf_emlrtRSI;
    b_eml_xgemm(a->size[0], A->size[1], a->size[1], a, a->size[0], A, a->size[1],
                temp1, a->size[0]);
  }

  st.site = &ue_emlrtRSI;
  pinv(&st, temp1, a);
  st.site = &ue_emlrtRSI;
  i1 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = A->size[1];
  temp1->size[1] = A->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = A->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = A->size[1];
    for (i2 = 0; i2 < ixstart; i2++) {
      temp1->data[i2 + temp1->size[0] * i1] = A->data[i1 + A->size[0] * i2];
    }
  }

  b_st.site = &wf_emlrtRSI;
  if (!(a->size[1] == temp1->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((temp1->size[0] == 1) &&
         (temp1->size[1] == 1))) {
      s_y = NULL;
      m2 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&s_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, s_y, &o_emlrtMCI), &p_emlrtMCI);
    } else {
      t_y = NULL;
      m2 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 21; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
      emlrtAssign(&t_y, m2);
      c_st.site = &vt_emlrtRSI;
      h_st.site = &gu_emlrtRSI;
      error(&c_st, message(&h_st, t_y, &q_emlrtMCI), &r_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (temp1->size[0] == 1)) {
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = a->size[0];
    temp2->size[1] = temp1->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = a->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      ixstart = temp1->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        temp2->data[i1 + temp2->size[0] * i2] = 0.0;
        ix = a->size[1];
        for (i3 = 0; i3 < ix; i3++) {
          temp2->data[i1 + temp2->size[0] * i2] += a->data[i1 + a->size[0] * i3]
            * temp1->data[i3 + temp1->size[0] * i2];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)temp1->size[1];
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    i1 = temp2->size[0] * temp2->size[1];
    temp2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp2->data[i1] = 0.0;
    }

    b_st.site = &cf_emlrtRSI;
    b_eml_xgemm(a->size[0], temp1->size[1], a->size[1], a, a->size[0], temp1,
                a->size[1], temp2, a->size[0]);
  }

  emxFree_real_T(&a);
  st.site = &ue_emlrtRSI;
  loop_ub = ref->size[0];
  i1 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    x->data[i1] = ref->data[i1 + ref->size[0]];
  }

  b_st.site = &wf_emlrtRSI;
  i1 = ref->size[0];
  if (!(temp2->size[1] == i1)) {
    guard6 = FALSE;
    if ((temp2->size[0] == 1) && (temp2->size[1] == 1)) {
      guard6 = TRUE;
    } else {
      i1 = ref->size[0];
      if (i1 == 1) {
        guard6 = TRUE;
      } else {
        u_y = NULL;
        m2 = mxCreateCharArray(2, iv33);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
        emlrtAssign(&u_y, m2);
        c_st.site = &vt_emlrtRSI;
        h_st.site = &gu_emlrtRSI;
        error(&c_st, message(&h_st, u_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard6 == TRUE) {
      v_y = NULL;
      m2 = mxCreateCharArray(2, iv34);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&v_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, v_y, &o_emlrtMCI), &p_emlrtMCI);
    }
  }

  guard5 = FALSE;
  if (temp2->size[1] == 1) {
    guard5 = TRUE;
  } else {
    i1 = ref->size[0];
    if (i1 == 1) {
      guard5 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)temp2->size[0];
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i1 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        e_y->data[i1] = 0.0;
      }

      d_st.site = &ef_emlrtRSI;
      if ((temp2->size[0] < 1) || (temp2->size[1] < 1)) {
      } else {
        d_st.site = &gf_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &qf_emlrtRSI;
        m_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &rf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &sf_emlrtRSI;
        k_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &tf_emlrtRSI;
        lda_t = (ptrdiff_t)(temp2->size[0]);
        f_st.site = &uf_emlrtRSI;
        ldb_t = (ptrdiff_t)(temp2->size[1]);
        f_st.site = &vf_emlrtRSI;
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
    i1 = e_y->size[0];
    e_y->size[0] = temp2->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = temp2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_y->data[i1] = 0.0;
      ixstart = temp2->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        e_y->data[i1] += temp2->data[i1 + temp2->size[0] * i2] * x->data[i2];
      }
    }
  }

  st.site = &ue_emlrtRSI;
  b_st.site = &kq_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + down);
  b_sz[0] = (int32_T)(4.0 + down);
  b_st.site = &kq_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, 4.0 + right);
  b_sz[1] = (int32_T)(4.0 + right);
  b_st.site = &lq_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  f_st.site = &fc_emlrtRSI;
  ixstart = e_y->size[0];
  if (1 > ixstart) {
    ixstart = 1;
  }

  b_st.site = &lq_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  f_st.site = &yc_emlrtRSI;
  if (e_y->size[0] < ixstart) {
  } else {
    ixstart = e_y->size[0];
  }

  if ((int32_T)(4.0 + down) > ixstart) {
    b_st.site = &mq_emlrtRSI;
    d_eml_error(&b_st);
  }

  if ((int32_T)(4.0 + right) > ixstart) {
    b_st.site = &mq_emlrtRSI;
    d_eml_error(&b_st);
  }

  for (i1 = 0; i1 < 2; i1++) {
    emlrtNonNegativeCheckFastR2012b(b_sz[i1], &f_emlrtDCI, &st);
  }

  i1 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = (int32_T)(4.0 + down);
  temp1->size[1] = (int32_T)(4.0 + right);
  emxEnsureCapacity(&st, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  b_st.site = &nq_emlrtRSI;
  c_st.site = &xm_emlrtRSI;
  d_st.site = &yq_emlrtRSI;
  if (e_y->size[0] == (int32_T)(4.0 + down) * (int32_T)(4.0 + right)) {
  } else {
    w_y = NULL;
    m2 = mxCreateCharArray(2, iv35);
    for (i = 0; i < 40; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m2, cv16);
    emlrtAssign(&w_y, m2);
    b_st.site = &nq_emlrtRSI;
    i_st.site = &iu_emlrtRSI;
    error(&b_st, message(&i_st, w_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  b_st.site = &oq_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (1 > e_y->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (e_y->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= e_y->size[0]; ixstart++) {
    temp1->data[ixstart] = e_y->data[ixstart];
  }

  iv36[0] = r0->size[0];
  iv36[1] = r3->size[0];
  emlrtSubAssignSizeCheckR2012b(iv36, 2, *(int32_T (*)[2])temp1->size, 2,
    &c_emlrtECI, sp);
  loop_ub = temp1->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = temp1->size[0];
    for (i2 = 0; i2 < ixstart; i2++) {
      control_p->data[(r0->data[i2] + control_p->size[0] * r3->data[i1]) +
        control_p->size[0] * control_p->size[1]] = temp1->data[i2 + temp1->size
        [0] * i1];
    }
  }

  emxFree_int32_T(&r3);
  emxFree_int32_T(&r0);

  /* control_p(find(isnan(control_p))) = 0; */
  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i1 = temp1->size[0] * temp1->size[1];
  temp1->size[0] = loop_ub;
  temp1->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp1, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < ixstart; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp1->data[i2 + temp1->size[0] * i1] = control_p->data[i2 +
        control_p->size[0] * i1];
    }
  }

  loop_ub = control_p->size[0];
  ixstart = control_p->size[1];
  i1 = temp2->size[0] * temp2->size[1];
  temp2->size[0] = loop_ub;
  temp2->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)temp2, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  for (i1 = 0; i1 < ixstart; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp2->data[i2 + temp2->size[0] * i1] = control_p->data[(i2 +
        control_p->size[0] * i1) + control_p->size[0] * control_p->size[1]];
    }
  }

  st.site = &ve_emlrtRSI;
  i1 = control_p->size[0];
  i2 = control_p->size[1];
  i3 = x->size[0];
  x->size[0] = i1 * i2;
  emxEnsureCapacity(&st, (emxArray__common *)x, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = i1 * i2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    x->data[i1] = temp1->data[i1];
  }

  b_st.site = &wf_emlrtRSI;
  i1 = control_p->size[0];
  i2 = control_p->size[1];
  if (!(A->size[1] == i1 * i2)) {
    guard4 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard4 = TRUE;
    } else {
      i1 = control_p->size[0];
      i2 = control_p->size[1];
      if (i1 * i2 == 1) {
        guard4 = TRUE;
      } else {
        x_y = NULL;
        m2 = mxCreateCharArray(2, iv37);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
        emlrtAssign(&x_y, m2);
        c_st.site = &vt_emlrtRSI;
        h_st.site = &gu_emlrtRSI;
        error(&c_st, message(&h_st, x_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard4 == TRUE) {
      y_y = NULL;
      m2 = mxCreateCharArray(2, iv38);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&y_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, y_y, &o_emlrtMCI), &p_emlrtMCI);
    }
  }

  guard3 = FALSE;
  if (A->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i1 = control_p->size[0];
    i2 = control_p->size[1];
    if (i1 * i2 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i1 = e_y->size[0];
      e_y->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        e_y->data[i1] = 0.0;
      }

      d_st.site = &ef_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &gf_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &qf_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &rf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &sf_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &tf_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &uf_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &vf_emlrtRSI;
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
    i1 = e_y->size[0];
    e_y->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)e_y, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = A->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_y->data[i1] = 0.0;
      ixstart = A->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        e_y->data[i1] += A->data[i1 + A->size[0] * i2] * temp1->data[i2];
      }
    }
  }

  i1 = ref->size[0];
  i2 = e_y->size[0];
  emlrtSizeEqCheck1DFastR2012b(i2, i1, &b_emlrtECI, sp);
  st.site = &ve_emlrtRSI;
  i1 = control_p->size[0];
  i2 = control_p->size[1];
  i3 = x->size[0];
  x->size[0] = i1 * i2;
  emxEnsureCapacity(&st, (emxArray__common *)x, i3, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = i1 * i2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    x->data[i1] = temp2->data[i1];
  }

  b_st.site = &wf_emlrtRSI;
  i1 = control_p->size[0];
  i2 = control_p->size[1];
  if (!(A->size[1] == i1 * i2)) {
    guard2 = FALSE;
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      guard2 = TRUE;
    } else {
      i1 = control_p->size[0];
      i2 = control_p->size[1];
      if (i1 * i2 == 1) {
        guard2 = TRUE;
      } else {
        ab_y = NULL;
        m2 = mxCreateCharArray(2, iv39);
        for (i = 0; i < 21; i++) {
          cv14[i] = cv15[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m2, cv14);
        emlrtAssign(&ab_y, m2);
        c_st.site = &vt_emlrtRSI;
        h_st.site = &gu_emlrtRSI;
        error(&c_st, message(&h_st, ab_y, &q_emlrtMCI), &r_emlrtMCI);
      }
    }

    if (guard2 == TRUE) {
      bb_y = NULL;
      m2 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 45; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv12);
      emlrtAssign(&bb_y, m2);
      c_st.site = &ut_emlrtRSI;
      h_st.site = &fu_emlrtRSI;
      error(&c_st, message(&h_st, bb_y, &o_emlrtMCI), &p_emlrtMCI);
    }
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i1 = control_p->size[0];
    i2 = control_p->size[1];
    if (i1 * i2 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (uint32_T)A->size[0];
      b_st.site = &cf_emlrtRSI;
      c_st.site = &df_emlrtRSI;
      i1 = tx->size[0];
      tx->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)tx, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      loop_ub = (int32_T)unnamed_idx_0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        tx->data[i1] = 0.0;
      }

      d_st.site = &ef_emlrtRSI;
      if ((A->size[0] < 1) || (A->size[1] < 1)) {
      } else {
        d_st.site = &gf_emlrtRSI;
        mtmp = 1.0;
        b_mtmp = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        f_st.site = &qf_emlrtRSI;
        m_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &rf_emlrtRSI;
        n_t = (ptrdiff_t)(1);
        f_st.site = &sf_emlrtRSI;
        k_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &tf_emlrtRSI;
        lda_t = (ptrdiff_t)(A->size[0]);
        f_st.site = &uf_emlrtRSI;
        ldb_t = (ptrdiff_t)(A->size[1]);
        f_st.site = &vf_emlrtRSI;
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
    i1 = tx->size[0];
    tx->size[0] = A->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)tx, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    loop_ub = A->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      tx->data[i1] = 0.0;
      ixstart = A->size[1];
      for (i2 = 0; i2 < ixstart; i2++) {
        tx->data[i1] += A->data[i1 + A->size[0] * i2] * temp2->data[i2];
      }
    }
  }

  emxFree_real_T(&A);
  b_emxInit_real_T(&st, &cb_y, 1, &f_emlrtRTEI, TRUE);
  i1 = ref->size[0];
  i2 = tx->size[0];
  emlrtSizeEqCheck1DFastR2012b(i2, i1, &emlrtECI, sp);
  i1 = cb_y->size[0];
  cb_y->size[0] = e_y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)cb_y, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = e_y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    cb_y->data[i1] = e_y->data[i1] - ref->data[i1];
  }

  emxFree_real_T(&e_y);
  b_emxInit_real_T(sp, &c_tx, 1, &f_emlrtRTEI, TRUE);
  st.site = &ve_emlrtRSI;
  power(&st, cb_y, r1);
  i1 = c_tx->size[0];
  c_tx->size[0] = tx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c_tx, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = tx->size[0];
  emxFree_real_T(&cb_y);
  for (i1 = 0; i1 < loop_ub; i1++) {
    c_tx->data[i1] = tx->data[i1] - ref->data[i1 + ref->size[0]];
  }

  emxFree_real_T(&tx);
  st.site = &ve_emlrtRSI;
  power(&st, c_tx, x);
  st.site = &ve_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  mtmp = sum(&b_st, r1) + sum(&b_st, x);
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  *b_error = mtmp / (real_T)src->size[0];
  emxFree_real_T(&c_tx);
  emxFree_real_T(&r1);
  emxFree_real_T(&x);
  emxFree_real_T(&temp2);
  emxFree_real_T(&temp1);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bspline_inv.c) */
