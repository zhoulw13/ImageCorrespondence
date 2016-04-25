/*
 * extension.c
 *
 * Code generation for function 'extension'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "repmat.h"
#include "sin.h"
#include "cos.h"
#include "mean.h"
#include "rdivide.h"
#include "power.h"
#include "sum.h"
#include "abs.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "sortrows.h"
#include "sqrt.h"
#include "std.h"
#include "getPixelsValue.h"
#include "bspline_single.h"
#include "bspline_inv.h"
#include "bspline.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 25, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo b_emlrtRSI = { 38, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo c_emlrtRSI = { 39, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo d_emlrtRSI = { 42, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo e_emlrtRSI = { 44, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo f_emlrtRSI = { 45, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo g_emlrtRSI = { 46, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo h_emlrtRSI = { 47, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo i_emlrtRSI = { 50, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo j_emlrtRSI = { 51, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo k_emlrtRSI = { 52, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo l_emlrtRSI = { 53, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo m_emlrtRSI = { 54, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo n_emlrtRSI = { 68, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo o_emlrtRSI = { 69, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo p_emlrtRSI = { 73, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo q_emlrtRSI = { 77, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo r_emlrtRSI = { 78, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo s_emlrtRSI = { 88, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo t_emlrtRSI = { 89, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo u_emlrtRSI = { 93, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo v_emlrtRSI = { 94, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo w_emlrtRSI = { 97, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo x_emlrtRSI = { 98, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo y_emlrtRSI = { 99, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo ab_emlrtRSI = { 102, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo bb_emlrtRSI = { 103, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo cb_emlrtRSI = { 104, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo db_emlrtRSI = { 106, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo eb_emlrtRSI = { 107, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo fb_emlrtRSI = { 109, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo gb_emlrtRSI = { 110, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo hb_emlrtRSI = { 113, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo ib_emlrtRSI = { 114, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo jb_emlrtRSI = { 115, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo kb_emlrtRSI = { 116, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo lb_emlrtRSI = { 117, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo mb_emlrtRSI = { 118, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo nb_emlrtRSI = { 119, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo ob_emlrtRSI = { 120, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo pb_emlrtRSI = { 122, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo qb_emlrtRSI = { 155, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRSInfo id_emlrtRSI = { 93, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo jd_emlrtRSI = { 94, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo kd_emlrtRSI = { 97, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ld_emlrtRSI = { 99, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo md_emlrtRSI = { 100, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo nd_emlrtRSI = { 101, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo od_emlrtRSI = { 105, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo pd_emlrtRSI = { 16, "eml_matrix_npages",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"
};

static emlrtRSInfo sd_emlrtRSI = { 223, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo vd_emlrtRSI = { 197, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo yd_emlrtRSI = { 177, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ae_emlrtRSI = { 178, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo og_emlrtRSI = { 23, "union",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/union.m" };

static emlrtRSInfo pg_emlrtRSI = { 65, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo bj_emlrtRSI = { 19, "setdiff",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/setdiff.m" };

static emlrtRSInfo cj_emlrtRSI = { 15, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo dj_emlrtRSI = { 16, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ej_emlrtRSI = { 52, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo fj_emlrtRSI = { 73, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ij_emlrtRSI = { 184, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo jj_emlrtRSI = { 187, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo kj_emlrtRSI = { 189, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo lj_emlrtRSI = { 192, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo mj_emlrtRSI = { 103, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo nj_emlrtRSI = { 104, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo pj_emlrtRSI = { 18, "min",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo qj_emlrtRSI = { 15, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo fl_emlrtRSI = { 11, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo gl_emlrtRSI = { 29, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo x_emlrtMCI = { 53, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo y_emlrtMCI = { 52, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo ab_emlrtMCI = { 196, 1, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo bb_emlrtMCI = { 14, 5, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 42, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo kc_emlrtRTEI = { 83, 1, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 37, 22, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo mc_emlrtRTEI = { 157, 13, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 15, 1, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 38, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 39, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 42, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 53, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo sc_emlrtRTEI = { 59, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo tc_emlrtRTEI = { 61, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtRTEInfo uc_emlrtRTEI = { 62, 9, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtDCInfo emlrtDCI = { 20, 34, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtDCInfo b_emlrtDCI = { 17, 37, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 17, 25, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 36, 22, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 37, 22, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo fb_emlrtECI = { 2, 42, 17, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo gb_emlrtECI = { 2, 45, 23, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo hb_emlrtECI = { -1, 52, 15, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo ib_emlrtECI = { -1, 53, 16, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 19, 16, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 19, 33, "j", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 19, 37, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 19, 54, "j", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo jb_emlrtECI = { -1, 54, 15, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 68, 37, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo kb_emlrtECI = { 2, 68, 24, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo lb_emlrtECI = { -1, 69, 30, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 72, 36, "single_ref_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 73, 56, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 73, 102, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 73, 121, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo mb_emlrtECI = { 2, 73, 96, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 74, 38, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 77, 49, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 78, 49, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 93, 56, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo nb_emlrtECI = { 2, 138, 24, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 138, 48, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 151, 30, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtECInfo ob_emlrtECI = { 1, 151, 52, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo pb_emlrtECI = { 2, 151, 29, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtECInfo qb_emlrtECI = { 1, 152, 54, "extension",
  "F:/Git/correspondence/matlab_code/extension.m" };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 54, 15, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 54, 15, "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 1 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 151, 13, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 155, 46, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 157, 13, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 135, 43, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 136, 43, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 137, 24, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 137, 24, "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 1 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 137, 30, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 137, 36, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 137, 36, "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 1 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 137, 42, "omega", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 19, 16, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 19, 16, "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 1 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 19, 30, "j", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 19, 37, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtDCInfo m_emlrtDCI = { 19, 37, "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 1 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 19, 51, "j", "extension",
  "F:/Git/correspondence/matlab_code/extension.m", 0 };

static emlrtRSInfo jx_emlrtRSI = { 196, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo px_emlrtRSI = { 14, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo wx_emlrtRSI = { 53, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

/* Function Declarations */
static void b_eml_li_find(const emlrtStack *sp, const boolean_T x[49], int32_T
  y_data[49], int32_T y_size[2]);
static void eml_li_find(const emlrtStack *sp, const boolean_T x[147], int32_T
  y_data[147], int32_T y_size[1]);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);

/* Function Definitions */
static void b_eml_li_find(const emlrtStack *sp, const boolean_T x[49], int32_T
  y_data[49], int32_T y_size[2])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m9;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fl_emlrtRSI;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      k++;
    }
  }

  if (k <= 49) {
  } else {
    y = NULL;
    m9 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m9);
    st.site = &px_emlrtRSI;
    error(&st, y, &bb_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &b_emlrtDCI, sp);
  y_size[0] = 1;
  y_size[1] = k;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      st.site = &gl_emlrtRSI;
      k++;
    }
  }
}

static void eml_li_find(const emlrtStack *sp, const boolean_T x[147], int32_T
  y_data[147], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m8;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fl_emlrtRSI;
  k = 0;
  for (i = 0; i < 147; i++) {
    if (x[i]) {
      k++;
    }
  }

  if (k <= 147) {
  } else {
    y = NULL;
    m8 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m8);
    st.site = &px_emlrtRSI;
    error(&st, y, &bb_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  for (i = 0; i < 147; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      st.site = &gl_emlrtRSI;
      k++;
    }
  }
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv98[2] = { 1, 31 };

  const mxArray *m18;
  char_T cv45[31];
  static const char_T cv46[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T b;
  boolean_T overflow;
  int32_T k;
  int32_T nrows;
  int32_T j;
  const mxArray *b_y;
  emxArray_real_T *b_x;
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
  e_st.prev = &st;
  e_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &cj_emlrtRSI;
  b_st.site = &ej_emlrtRSI;
  c_st.site = &fj_emlrtRSI;
  i = idx->size[0];
  while ((i >= 1) && (!idx->data[i - 1])) {
    i--;
  }

  c_st.site = &fj_emlrtRSI;
  if (i <= x->size[0]) {
  } else {
    y = NULL;
    m18 = mxCreateCharArray(2, iv98);
    for (i = 0; i < 31; i++) {
      cv45[i] = cv46[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m18, cv45);
    emlrtAssign(&y, m18);
    b_st.site = &ej_emlrtRSI;
    e_st.site = &wx_emlrtRSI;
    error(&b_st, b_message(&e_st, y, &x_emlrtMCI), &y_emlrtMCI);
  }

  st.site = &dj_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  b = 0;
  c_st.site = &mj_emlrtRSI;
  if (1 > idx->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (idx->size[0] > 2147483646);
  }

  if (overflow) {
    d_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= idx->size[0]; k++) {
    c_st.site = &nj_emlrtRSI;
    b += idx->data[k - 1];
  }

  b_st.site = &ij_emlrtRSI;
  nrows = x->size[0] - b;
  i = 0;
  b = x->size[0];
  b_st.site = &jj_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fd_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= b; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      b_st.site = &kj_emlrtRSI;
      c_st.site = &ed_emlrtRSI;
      for (j = 0; j < 2; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      b_st.site = &lj_emlrtRSI;
      i++;
    }
  }

  if (nrows <= x->size[0]) {
  } else {
    b_y = NULL;
    m18 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m18);
    b_st.site = &jx_emlrtRSI;
    error(&b_st, b_y, &ab_emlrtMCI);
  }

  if (1 > nrows) {
    i = 0;
  } else {
    i = nrows;
  }

  emxInit_real_T(&st, &b_x, 2, &ab_emlrtRTEI, TRUE);
  b = b_x->size[0] * b_x->size[1];
  b_x->size[0] = i;
  b_x->size[1] = 2;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, b, (int32_T)sizeof(real_T),
                    &ab_emlrtRTEI);
  for (b = 0; b < 2; b++) {
    for (k = 0; k < i; k++) {
      b_x->data[k + b_x->size[0] * b] = x->data[k + x->size[0] * b];
    }
  }

  b = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = 2;
  emxEnsureCapacity(&st, (emxArray__common *)x, b, (int32_T)sizeof(real_T),
                    &ab_emlrtRTEI);
  for (b = 0; b < 2; b++) {
    i = b_x->size[0];
    for (k = 0; k < i; k++) {
      x->data[k + x->size[0] * b] = b_x->data[k + b_x->size[0] * b];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void extension(const emlrtStack *sp, emxArray_struct_T *sp_set,
               emxArray_b_struct_T *bspline_set, const emxArray_real_T *Sp2,
               const emxArray_real_T *Src_lab, const emxArray_real_T *Ref_lab,
               emxArray_real_T *errors)
{
  emxArray_real_T *Sp_new;
  int32_T surface_amount;
  int32_T iy;
  int32_T i32;
  int32_T loop_ub;
  int32_T i;
  int32_T i33;
  int32_T j;
  real_T e;
  int32_T ixstop;
  real_T patch[147];
  real_T Ps[49];
  static const int8_T iv90[49] = { -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2,
    -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3 };

  emxArray_real_T *bound;
  emxArray_real_T *single_ref_set;
  emxArray_real_T *omega;
  emxArray_real_T *temp;
  emxArray_real_T *temp_sx;
  emxArray_real_T *temp_rx;
  emxArray_real_T *temp_ry;
  emxArray_real_T *control_p;
  emxArray_real_T *b_temp;
  emxArray_boolean_T *r12;
  emxArray_boolean_T *r13;
  emxArray_real_T *t0_x;
  emxArray_real_T *t0_y;
  emxArray_real_T *varargin_2;
  emxArray_real_T *varargin_1;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  b_struct_T expl_temp;
  b_struct_T b_expl_temp;
  b_struct_T c_expl_temp;
  b_struct_T d_expl_temp;
  b_struct_T e_expl_temp;
  emxArray_boolean_T *b_Sp_new;
  emxArray_boolean_T *r14;
  emxArray_real_T *b_omega;
  emxArray_real_T *c_omega;
  emxArray_real_T *b_sp_set;
  emxArray_real_T *c_sp_set;
  emxArray_real_T *d_sp_set;
  emxArray_real_T *c_temp;
  struct_T e_sp_set;
  emxArray_real_T *b_single_ref_set;
  emxArray_real_T *f_sp_set;
  boolean_T modified;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv91[2] = { 1, 36 };

  const mxArray *m17;
  char_T cv41[36];
  int32_T b_i;
  static const char_T cv42[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv92[2] = { 1, 39 };

  char_T cv43[39];
  static const char_T cv44[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T outsz[2];
  int32_T ix;
  int32_T ixstart;
  boolean_T b_ix;
  int32_T g_sp_set;
  boolean_T exitg2;
  boolean_T b_ixstart;
  int32_T h_sp_set[2];
  int32_T d_omega[2];
  real_T d8;
  real_T dv0[2];
  int32_T ib_size[1];
  int32_T ib_data[1];
  real_T omega_data[2];
  int32_T omega_size[2];
  const mxArray *c_y;
  static const int32_T iv93[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv94[2] = { 1, 39 };

  boolean_T exitg1;
  int8_T b_omega_size[2];
  real_T ref_p[2];
  real_T offset_p[2];
  real_T jacobian[4];
  real_T b_error;
  int8_T refp_size[2];
  real_T scale[4];
  real_T d9;
  real_T d10;
  real_T rotate[4];
  real_T b_rotate[4];
  real_T jacobian_d[4];
  real_T t1[3];
  real_T tmp_data[147];
  real_T Np[147];
  boolean_T b_Np[147];
  int32_T c_Np[147];
  int32_T tmp_size[1];
  int32_T b_tmp_data[147];
  boolean_T d_Np[49];
  int32_T c_tmp_data[49];
  int8_T iv95[2];
  real_T b_jacobian_d[9];
  static const int8_T iv96[3] = { 0, 0, 1 };

  int32_T Np_ref[147];
  real_T b_Ps[147];
  real_T Pt[147];
  real_T dv1[147];
  real_T t2[3];
  int8_T iv97[2];
  int8_T refp_data[2];
  real_T c_error;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Sp_new, 2, &nc_emlrtRTEI, TRUE);
  surface_amount = sp_set->size[1];

  /* % initialize */
  iy = Sp2->size[0];
  i32 = Sp_new->size[0] * Sp_new->size[1];
  Sp_new->size[0] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)Sp_new, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = Sp2->size[1];
  i32 = Sp_new->size[0] * Sp_new->size[1];
  Sp_new->size[1] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)Sp_new, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = Sp2->size[0] * Sp2->size[1];
  for (i32 = 0; i32 < loop_ub; i32++) {
    Sp_new->data[i32] = 0.0;
  }

  i = 0;
  while (i <= sp_set->size[1] - 1) {
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &lb_emlrtBCI, sp);
    j = 1;
    while (j - 1 <= sp_set->data[i].val->size[0] - 1) {
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &ob_emlrtBCI, sp);
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &qb_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i32, &pb_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i32, &rb_emlrtBCI, sp);
      i32 = Sp_new->size[0];
      i33 = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i33,
        &pc_emlrtBCI, sp) - 1];
      i33 = (int32_T)emlrtIntegerCheckFastR2012b(e, &l_emlrtDCI, sp);
      ixstop = Sp_new->size[1];
      iy = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j, 1, iy,
        &rc_emlrtBCI, sp) + sp_set->data[i].val->size[0]) - 1];
      iy = (int32_T)emlrtIntegerCheckFastR2012b(e, &m_emlrtDCI, sp);
      Sp_new->data[(emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &oc_emlrtBCI,
        sp) + Sp_new->size[0] * (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ixstop,
        &qc_emlrtBCI, sp) - 1)) - 1] = 1.0 + (real_T)i;
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /* % adjacent patch */
  memset(&patch[0], 0, 147U * sizeof(real_T));
  st.site = &emlrtRSI;
  repmat(Ps);
  for (i32 = 0; i32 < 49; i32++) {
    patch[3 * i32] = Ps[i32];
    patch[1 + 3 * i32] = iv90[i32];
    patch[2 + 3 * i32] = 1.0;
  }

  /* % extension */
  i32 = errors->size[0];
  errors->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)errors, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = 0;
  emxInit_real_T(sp, &bound, 2, &oc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &single_ref_set, 2, &pc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &omega, 2, &qc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp, 1, &rc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_sx, 1, &sc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_rx, 1, &tc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_ry, 1, &uc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &control_p, 3, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_temp, 2, &rc_emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r12, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r13, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &varargin_2, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &varargin_1, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &ia, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &ib, 1, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &b_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &c_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &d_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &e_expl_temp, &mc_emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &b_Sp_new, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r14, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_omega, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_omega, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_sp_set, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_sp_set, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &d_sp_set, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_temp, 2, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &e_sp_set, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_single_ref_set, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &f_sp_set, 2, &emlrtRTEI, TRUE);
  while (i <= surface_amount - 1) {
    modified = TRUE;
    while (modified) {
      modified = FALSE;
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &mb_emlrtBCI, sp);
      i32 = bspline_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &nb_emlrtBCI, sp);
      st.site = &b_emlrtRSI;
      b_st.site = &gd_emlrtRSI;
      c_st.site = &hd_emlrtRSI;
      if (((sp_set->data[i].val->size[0] == 1) && (sp_set->data[i].val->size[1] ==
            1)) || (sp_set->data[i].val->size[0] != 1)) {
        overflow = TRUE;
      } else {
        overflow = FALSE;
      }

      if (overflow) {
      } else {
        y = NULL;
        m17 = mxCreateCharArray(2, iv91);
        for (b_i = 0; b_i < 36; b_i++) {
          cv41[b_i] = cv42[b_i];
        }

        emlrtInitCharArrayR2013a(&c_st, 36, m17, cv41);
        emlrtAssign(&y, m17);
        d_st.site = &lx_emlrtRSI;
        e_st.site = &yx_emlrtRSI;
        error(&d_st, b_message(&e_st, y, &c_emlrtMCI), &d_emlrtMCI);
      }

      if (sp_set->data[i].val->size[0] > 0) {
      } else {
        b_y = NULL;
        m17 = mxCreateCharArray(2, iv92);
        for (b_i = 0; b_i < 39; b_i++) {
          cv43[b_i] = cv44[b_i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m17, cv43);
        emlrtAssign(&b_y, m17);
        d_st.site = &kx_emlrtRSI;
        e_st.site = &xx_emlrtRSI;
        error(&d_st, b_message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
      }

      for (i32 = 0; i32 < 2; i32++) {
        outsz[i32] = sp_set->data[i].val->size[i32];
      }

      i32 = bound->size[0] * bound->size[1];
      bound->size[0] = 1;
      bound->size[1] = (int32_T)outsz[1];
      emxEnsureCapacity(&c_st, (emxArray__common *)bound, i32, (int32_T)sizeof
                        (real_T), &kc_emlrtRTEI);
      d_st.site = &id_emlrtRSI;
      d_st.site = &id_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      f_st.site = &pd_emlrtRSI;
      ix = 0;
      iy = -1;
      d_st.site = &kd_emlrtRSI;
      f_st.site = &ed_emlrtRSI;
      if (1 > sp_set->data[i].val->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (sp_set->data[i].val->size[1] > 2147483646);
      }

      if (overflow) {
        f_st.site = &fd_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (b_i = 1; b_i <= sp_set->data[i].val->size[1]; b_i++) {
        d_st.site = &ld_emlrtRSI;
        d_st.site = &md_emlrtRSI;
        ixstart = ix;
        f_st.site = &ae_emlrtRSI;
        f_st.site = &ae_emlrtRSI;
        f_st.site = &yd_emlrtRSI;
        ixstop = ix + sp_set->data[i].val->size[0];
        e = sp_set->data[i].val->data[ix];
        if (sp_set->data[i].val->size[0] > 1) {
          f_st.site = &xd_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[i].val->data[ix])) {
            f_st.site = &wd_emlrtRSI;
            f_st.site = &wd_emlrtRSI;
            if (ix + 2 > ixstop) {
              b_ix = FALSE;
            } else {
              b_ix = (ixstop > 2147483646);
            }

            if (b_ix) {
              g_st.site = &fd_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            g_sp_set = ix + 1;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (g_sp_set + 1 <= ixstop)) {
              f_st.site = &vd_emlrtRSI;
              ixstart = g_sp_set;
              f_st.site = &ud_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[i].val->data[g_sp_set])) {
                e = sp_set->data[i].val->data[g_sp_set];
                exitg2 = TRUE;
              } else {
                g_sp_set++;
              }
            }
          }

          if (ixstart + 1 < ixstop) {
            f_st.site = &td_emlrtRSI;
            f_st.site = &td_emlrtRSI;
            if (ixstart + 2 > ixstop) {
              b_ixstart = FALSE;
            } else {
              b_ixstart = (ixstop > 2147483646);
            }

            if (b_ixstart) {
              g_st.site = &fd_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (g_sp_set = ixstart + 1; g_sp_set + 1 <= ixstop; g_sp_set++) {
              f_st.site = &sd_emlrtRSI;
              f_st.site = &rd_emlrtRSI;
              if (sp_set->data[i].val->data[g_sp_set] < e) {
                e = sp_set->data[i].val->data[g_sp_set];
              }
            }
          }
        }

        d_st.site = &nd_emlrtRSI;
        iy++;
        bound->data[iy] = e;
        d_st.site = &od_emlrtRSI;
        ix += sp_set->data[i].val->size[0];
      }

      b_emxCopyStruct_struct_T(sp, &expl_temp, &bspline_set->data[i],
        &lc_emlrtRTEI);
      st.site = &c_emlrtRSI;
      bspline(&st, sp_set->data[i].val, expl_temp.x, expl_temp.y, bound,
              single_ref_set);

      /*         %% find adjacency area within 5 pixels */
      st.site = &d_emlrtRSI;
      b_repmat(&st, sp_set->data[i].val->size[0], omega);
      for (i32 = 0; i32 < 2; i32++) {
        h_sp_set[i32] = sp_set->data[i].val->size[i32];
      }

      for (i32 = 0; i32 < 2; i32++) {
        d_omega[i32] = omega->size[i32];
      }

      emlrtSizeEqCheck2DFastR2012b(h_sp_set, d_omega, &fb_emlrtECI, sp);
      i32 = omega->size[0] * omega->size[1];
      omega->size[0] = sp_set->data[i].val->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = omega->size[0] * omega->size[1];
      omega->size[1] = sp_set->data[i].val->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        omega->data[i32] += sp_set->data[i].val->data[i32];
      }

      for (j = 0; j < 11; j++) {
        st.site = &e_emlrtRSI;
        e = b_abs(-5.0 + (real_T)j) - 5.0;
        st.site = &e_emlrtRSI;
        d8 = 5.0 - b_abs(-5.0 + (real_T)j);
        i32 = (int32_T)(d8 + (1.0 - e));
        iy = 0;
        while (iy <= i32 - 1) {
          dv0[0] = -5.0 + (real_T)j;
          dv0[1] = e + (real_T)iy;
          st.site = &f_emlrtRSI;
          c_repmat(&st, dv0, sp_set->data[i].val->size[0], b_temp);
          for (i33 = 0; i33 < 2; i33++) {
            h_sp_set[i33] = sp_set->data[i].val->size[i33];
          }

          for (i33 = 0; i33 < 2; i33++) {
            d_omega[i33] = b_temp->size[i33];
          }

          emlrtSizeEqCheck2DFastR2012b(h_sp_set, d_omega, &gb_emlrtECI, sp);
          i33 = varargin_2->size[0] * varargin_2->size[1];
          varargin_2->size[0] = omega->size[0];
          varargin_2->size[1] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i33, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          loop_ub = omega->size[0] * omega->size[1];
          for (i33 = 0; i33 < loop_ub; i33++) {
            varargin_2->data[i33] = omega->data[i33];
          }

          st.site = &g_emlrtRSI;
          sortrows(&st, varargin_2);
          i33 = omega->size[0] * omega->size[1];
          omega->size[0] = varargin_2->size[0];
          omega->size[1] = varargin_2->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)omega, i33, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          loop_ub = varargin_2->size[0] * varargin_2->size[1];
          for (i33 = 0; i33 < loop_ub; i33++) {
            omega->data[i33] = varargin_2->data[i33];
          }

          i33 = b_temp->size[0] * b_temp->size[1];
          b_temp->size[0] = sp_set->data[i].val->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)b_temp, i33, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          i33 = b_temp->size[0] * b_temp->size[1];
          b_temp->size[1] = sp_set->data[i].val->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_temp, i33, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
          for (i33 = 0; i33 < loop_ub; i33++) {
            b_temp->data[i33] += sp_set->data[i].val->data[i33];
          }

          st.site = &h_emlrtRSI;
          b_sortrows(&st, b_temp);
          st.site = &h_emlrtRSI;
          b_st.site = &og_emlrtRSI;
          i33 = c_omega->size[0] * c_omega->size[1];
          c_omega->size[0] = omega->size[0];
          c_omega->size[1] = 2;
          emxEnsureCapacity(&b_st, (emxArray__common *)c_omega, i33, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          loop_ub = omega->size[0] * omega->size[1];
          for (i33 = 0; i33 < loop_ub; i33++) {
            c_omega->data[i33] = omega->data[i33];
          }

          c_st.site = &pg_emlrtRSI;
          do_rows(&c_st, c_omega, b_temp, omega, ia, ib);
          iy++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i32 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = omega->size[0];
      varargin_2->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = omega->size[0] * omega->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        varargin_2->data[i32] = omega->data[i32];
      }

      st.site = &i_emlrtRSI;
      sortrows(&st, varargin_2);
      i32 = omega->size[0] * omega->size[1];
      omega->size[0] = varargin_2->size[0];
      omega->size[1] = varargin_2->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = varargin_2->size[0] * varargin_2->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        omega->data[i32] = varargin_2->data[i32];
      }

      i32 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = sp_set->data[i].val->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[1] = sp_set->data[i].val->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        varargin_2->data[i32] = sp_set->data[i].val->data[i32];
      }

      st.site = &j_emlrtRSI;
      sortrows(&st, varargin_2);
      st.site = &j_emlrtRSI;
      b_st.site = &bj_emlrtRSI;
      i32 = b_omega->size[0] * b_omega->size[1];
      b_omega->size[0] = omega->size[0];
      b_omega->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = omega->size[0] * omega->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_omega->data[i32] = omega->data[i32];
      }

      c_st.site = &pg_emlrtRSI;
      b_do_rows(&c_st, b_omega, varargin_2, omega, ia, ib_data, ib_size);
      loop_ub = omega->size[0];
      i32 = r12->size[0];
      r12->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r12, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        r12->data[i32] = (omega->data[i32] < 1.0);
      }

      loop_ub = omega->size[0];
      i32 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        r13->data[i32] = (omega->data[i32 + omega->size[0]] < 1.0);
      }

      i32 = r12->size[0];
      i33 = r13->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &hb_emlrtECI, sp);
      i32 = r12->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r12, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = r12->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        r12->data[i32] = (r12->data[i32] || r13->data[i32]);
      }

      loop_ub = omega->size[0];
      iy = Sp2->size[0];
      i32 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        r13->data[i32] = (omega->data[i32] > iy);
      }

      i32 = r12->size[0];
      i33 = r13->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &hb_emlrtECI, sp);
      i32 = r12->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r12, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = r12->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        r12->data[i32] = (r12->data[i32] || r13->data[i32]);
      }

      loop_ub = omega->size[0];
      iy = Sp2->size[1];
      i32 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        r13->data[i32] = (omega->data[i32 + omega->size[0]] > iy);
      }

      i32 = r12->size[0];
      i33 = r13->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &hb_emlrtECI, sp);
      i32 = r14->size[0];
      r14->size[0] = r12->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r14, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = r12->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        r14->data[i32] = (r12->data[i32] || r13->data[i32]);
      }

      st.site = &k_emlrtRSI;
      eml_null_assignment(&st, omega, r14);
      st.site = &l_emlrtRSI;
      loop_ub = omega->size[0];
      iy = Sp2->size[0];
      i32 = temp_sx->size[0];
      temp_sx->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)temp_sx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        temp_sx->data[i32] = (omega->data[i32 + omega->size[0]] - 1.0) * (real_T)
          iy;
      }

      i32 = omega->size[0];
      i33 = temp_sx->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &ib_emlrtECI, sp);
      loop_ub = omega->size[0];
      i32 = temp->size[0];
      temp->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)temp, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < loop_ub; i32++) {
        temp->data[i32] = omega->data[i32] + temp_sx->data[i32];
      }

      emlrtMatrixMatrixIndexCheckR2012b(*(int32_T (*)[2])Sp_new->size, 2,
        *(int32_T (*)[1])temp->size, 1, &jb_emlrtECI, sp);
      i32 = b_Sp_new->size[0];
      b_Sp_new->size[0] = temp->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_Sp_new, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = temp->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        i33 = Sp_new->size[0] * Sp_new->size[1];
        e = temp->data[i32];
        ixstop = (int32_T)emlrtIntegerCheckFastR2012b(e, &i_emlrtDCI, sp);
        b_Sp_new->data[i32] = (Sp_new->data[emlrtDynamicBoundsCheckFastR2012b
          (ixstop, 1, i33, &ec_emlrtBCI, sp) - 1] != 0.0);
      }

      st.site = &m_emlrtRSI;
      eml_null_assignment(&st, omega, b_Sp_new);

      /*         %% for all adjacent pixels ...  */
      i32 = temp_sx->size[0];
      temp_sx->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_sx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp->size[0];
      temp->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp_rx->size[0];
      temp_rx->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_rx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp_ry->size[0];
      temp_ry->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_ry, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      j = 0;
      while (j <= omega->size[0] - 1) {
        /*             %% find nearest pixel q from surface i */
        i32 = omega->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(j + 1, 1, i32, &sb_emlrtBCI, sp);
        omega_size[0] = 1;
        omega_size[1] = 2;
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = omega->data[(iy + omega->size[0] * i32) - 1];
        }

        st.site = &n_emlrtRSI;
        d_repmat(&st, omega_data, omega_size, sp_set->data[i].val->size[0],
                 b_temp);
        for (i32 = 0; i32 < 2; i32++) {
          d_omega[i32] = b_temp->size[i32];
        }

        for (i32 = 0; i32 < 2; i32++) {
          h_sp_set[i32] = sp_set->data[i].val->size[i32];
        }

        emlrtSizeEqCheck2DFastR2012b(d_omega, h_sp_set, &kb_emlrtECI, sp);
        i32 = c_temp->size[0] * c_temp->size[1];
        c_temp->size[0] = b_temp->size[0];
        c_temp->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)c_temp, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = b_temp->size[0] * b_temp->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          c_temp->data[i32] = b_temp->data[i32] - sp_set->data[i].val->data[i32];
        }

        st.site = &n_emlrtRSI;
        c_abs(&st, c_temp, b_temp);
        i32 = b_temp->size[0];
        i33 = b_temp->size[0];
        emlrtSizeEqCheck1DFastR2012b(i32, i33, &lb_emlrtECI, sp);
        st.site = &o_emlrtRSI;
        loop_ub = b_temp->size[0];
        i32 = varargin_1->size[0];
        varargin_1->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)varargin_1, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < loop_ub; i32++) {
          varargin_1->data[i32] = b_temp->data[i32] + b_temp->data[i32 +
            b_temp->size[0]];
        }

        b_st.site = &pj_emlrtRSI;
        c_st.site = &qj_emlrtRSI;
        if ((varargin_1->size[0] == 1) || (varargin_1->size[0] != 1)) {
          overflow = TRUE;
        } else {
          overflow = FALSE;
        }

        if (overflow) {
        } else {
          c_y = NULL;
          m17 = mxCreateCharArray(2, iv93);
          for (b_i = 0; b_i < 36; b_i++) {
            cv41[b_i] = cv42[b_i];
          }

          emlrtInitCharArrayR2013a(&c_st, 36, m17, cv41);
          emlrtAssign(&c_y, m17);
          d_st.site = &lx_emlrtRSI;
          e_st.site = &yx_emlrtRSI;
          error(&d_st, b_message(&e_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
        }

        if (varargin_1->size[0] > 0) {
        } else {
          d_y = NULL;
          m17 = mxCreateCharArray(2, iv94);
          for (b_i = 0; b_i < 39; b_i++) {
            cv43[b_i] = cv44[b_i];
          }

          emlrtInitCharArrayR2013a(&c_st, 39, m17, cv43);
          emlrtAssign(&d_y, m17);
          d_st.site = &kx_emlrtRSI;
          e_st.site = &xx_emlrtRSI;
          error(&d_st, b_message(&e_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
        }

        d_st.site = &rj_emlrtRSI;
        ixstart = 1;
        e = varargin_1->data[0];
        ixstop = 1;
        if (varargin_1->size[0] > 1) {
          f_st.site = &xd_emlrtRSI;
          if (muDoubleScalarIsNaN(varargin_1->data[0])) {
            f_st.site = &wd_emlrtRSI;
            if (2 > varargin_1->size[0]) {
              overflow = FALSE;
            } else {
              overflow = (varargin_1->size[0] > 2147483646);
            }

            if (overflow) {
              g_st.site = &fd_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            ix = 2;
            exitg1 = FALSE;
            while ((exitg1 == FALSE) && (ix <= varargin_1->size[0])) {
              ixstart = ix;
              f_st.site = &ud_emlrtRSI;
              if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
                e = varargin_1->data[ix - 1];
                ixstop = ix;
                exitg1 = TRUE;
              } else {
                ix++;
              }
            }
          }

          if (ixstart < varargin_1->size[0]) {
            f_st.site = &td_emlrtRSI;
            f_st.site = &td_emlrtRSI;
            if (ixstart + 1 > varargin_1->size[0]) {
              overflow = FALSE;
            } else {
              overflow = (varargin_1->size[0] > 2147483646);
            }

            if (overflow) {
              g_st.site = &fd_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            while (ixstart + 1 <= varargin_1->size[0]) {
              f_st.site = &rd_emlrtRSI;
              if (varargin_1->data[ixstart] < e) {
                e = varargin_1->data[ixstart];
                ixstop = ixstart + 1;
              }

              ixstart++;
            }
          }
        }

        /*             %% compute temp correspondence */
        i32 = single_ref_set->size[0];
        emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &tb_emlrtBCI, sp);
        i32 = omega->size[0];
        i33 = j + 1;
        emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &vb_emlrtBCI, sp);
        i32 = sp_set->data[i].val->size[0];
        emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &wb_emlrtBCI, sp);
        b_omega_size[0] = 1;
        b_omega_size[1] = 2;
        for (i32 = 0; i32 < 2; i32++) {
          d_omega[i32] = b_omega_size[i32];
        }

        loop_ub = sp_set->data[i].val->size[1];
        i32 = f_sp_set->size[0] * f_sp_set->size[1];
        f_sp_set->size[0] = 1;
        f_sp_set->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)f_sp_set, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < loop_ub; i32++) {
          f_sp_set->data[f_sp_set->size[0] * i32] = sp_set->data[i].val->data
            [(ixstop + sp_set->data[i].val->size[0] * i32) - 1];
        }

        for (i32 = 0; i32 < 2; i32++) {
          h_sp_set[i32] = f_sp_set->size[i32];
        }

        emlrtSizeEqCheck2DFastR2012b(d_omega, h_sp_set, &mb_emlrtECI, sp);
        b_emxCopyStruct_struct_T(sp, &b_expl_temp, &bspline_set->data[i],
          &lc_emlrtRTEI);
        loop_ub = sp_set->data[i].val->size[1];
        i32 = sp_set->data[i].val->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &ub_emlrtBCI, sp);
        i32 = d_sp_set->size[0] * d_sp_set->size[1];
        d_sp_set->size[0] = 1;
        d_sp_set->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)d_sp_set, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < loop_ub; i32++) {
          d_sp_set->data[d_sp_set->size[0] * i32] = sp_set->data[i].val->data
            [(iy + sp_set->data[i].val->size[0] * i32) - 1];
        }

        st.site = &p_emlrtRSI;
        bspline_single(&st, d_sp_set, b_expl_temp.x, b_expl_temp.y, bound, outsz);
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = omega->data[j + omega->size[0] * i32] - sp_set->
            data[i].val->data[(ixstop + sp_set->data[i].val->size[0] * i32) - 1];
        }

        for (i32 = 0; i32 < 2; i32++) {
          ref_p[i32] = single_ref_set->data[(ixstop + single_ref_set->size[0] *
            i32) - 1] + outsz[i32] * omega_data[i32];
        }

        i32 = omega->size[0];
        i33 = j + 1;
        emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &xb_emlrtBCI, sp);
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = omega->data[j + omega->size[0] * i32];
        }

        for (i32 = 0; i32 < 2; i32++) {
          offset_p[i32] = ref_p[i32] - omega_data[i32];
        }

        /*             %% compute patch transformation jacobian matirx */
        b_emxCopyStruct_struct_T(sp, &c_expl_temp, &bspline_set->data[i],
          &lc_emlrtRTEI);
        loop_ub = sp_set->data[i].val->size[1];
        i32 = sp_set->data[i].val->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &yb_emlrtBCI, sp);
        i32 = c_sp_set->size[0] * c_sp_set->size[1];
        c_sp_set->size[0] = 1;
        c_sp_set->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)c_sp_set, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < loop_ub; i32++) {
          c_sp_set->data[c_sp_set->size[0] * i32] = sp_set->data[i].val->data
            [(iy + sp_set->data[i].val->size[0] * i32) - 1];
        }

        st.site = &q_emlrtRSI;
        b_bspline_single(&st, c_sp_set, c_expl_temp.x, c_expl_temp.y, bound,
                         outsz);
        b_emxCopyStruct_struct_T(sp, &d_expl_temp, &bspline_set->data[i],
          &lc_emlrtRTEI);
        loop_ub = sp_set->data[i].val->size[1];
        i32 = sp_set->data[i].val->size[0];
        ixstop = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &ac_emlrtBCI,
          sp);
        i32 = b_sp_set->size[0] * b_sp_set->size[1];
        b_sp_set->size[0] = 1;
        b_sp_set->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)b_sp_set, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_sp_set->data[b_sp_set->size[0] * i32] = sp_set->data[i].val->data
            [(ixstop + sp_set->data[i].val->size[0] * i32) - 1];
        }

        st.site = &r_emlrtRSI;
        c_bspline_single(&st, b_sp_set, d_expl_temp.x, d_expl_temp.y, bound,
                         ref_p);
        jacobian[0] = outsz[0];
        jacobian[2] = ref_p[0];
        jacobian[1] = outsz[1];
        jacobian[3] = ref_p[1];

        /*             %% minimize error             */
        b_error = 1.0E+7;
        refp_size[0] = 0;
        refp_size[1] = 0;
        for (b_i = 0; b_i < 3; b_i++) {
          scale[0] = 0.9 + 0.099999999999999978 * (real_T)b_i;
          scale[2] = 0.0;
          scale[1] = 0.0;
          scale[3] = 0.9 + 0.099999999999999978 * (real_T)b_i;
          for (g_sp_set = 0; g_sp_set < 3; g_sp_set++) {
            e = -0.087266462599716474 + 0.087266462599716474 * (real_T)g_sp_set;
            st.site = &s_emlrtRSI;
            b_cos(&e);
            d8 = -0.087266462599716474 + 0.087266462599716474 * (real_T)g_sp_set;
            st.site = &s_emlrtRSI;
            b_sin(&d8);
            d9 = -0.087266462599716474 + 0.087266462599716474 * (real_T)g_sp_set;
            st.site = &s_emlrtRSI;
            b_sin(&d9);
            d10 = -0.087266462599716474 + 0.087266462599716474 * (real_T)
              g_sp_set;
            st.site = &s_emlrtRSI;
            b_cos(&d10);
            rotate[0] = e;
            rotate[2] = -d8;
            rotate[1] = d9;
            rotate[3] = d10;
            st.site = &t_emlrtRSI;
            b_st.site = &te_emlrtRSI;
            c_st.site = &ue_emlrtRSI;
            d_st.site = &we_emlrtRSI;
            st.site = &t_emlrtRSI;
            b_st.site = &te_emlrtRSI;
            c_st.site = &ue_emlrtRSI;
            d_st.site = &we_emlrtRSI;
            for (i32 = 0; i32 < 2; i32++) {
              for (i33 = 0; i33 < 2; i33++) {
                b_rotate[i32 + (i33 << 1)] = 0.0;
                for (ixstop = 0; ixstop < 2; ixstop++) {
                  b_rotate[i32 + (i33 << 1)] += rotate[i32 + (ixstop << 1)] *
                    scale[ixstop + (i33 << 1)];
                }
              }

              for (i33 = 0; i33 < 2; i33++) {
                jacobian_d[i32 + (i33 << 1)] = 0.0;
                for (ixstop = 0; ixstop < 2; ixstop++) {
                  jacobian_d[i32 + (i33 << 1)] += b_rotate[i32 + (ixstop << 1)] *
                    jacobian[ixstop + (i33 << 1)];
                }
              }
            }

            for (ix = 0; ix < 3; ix++) {
              for (ixstart = 0; ixstart < 3; ixstart++) {
                i32 = omega->size[0];
                iy = emlrtDynamicBoundsCheckFastR2012b(j + 1, 1, i32,
                  &bc_emlrtBCI, sp);
                for (i32 = 0; i32 < 2; i32++) {
                  t1[i32] = omega->data[(iy + omega->size[0] * i32) - 1];
                }

                t1[2] = 0.0;
                st.site = &u_emlrtRSI;
                e_repmat(t1, tmp_data, d_omega);
                for (i32 = 0; i32 < 147; i32++) {
                  Np[i32] = patch[i32] + tmp_data[i32];
                }

                st.site = &v_emlrtRSI;
                b_st.site = &te_emlrtRSI;
                c_st.site = &ue_emlrtRSI;
                d_st.site = &we_emlrtRSI;
                for (i32 = 0; i32 < 147; i32++) {
                  e = muDoubleScalarRound(Np[i32]);
                  if (e < 2.147483648E+9) {
                    if (e >= -2.147483648E+9) {
                      iy = (int32_T)e;
                    } else {
                      iy = MIN_int32_T;
                    }
                  } else if (e >= 2.147483648E+9) {
                    iy = MAX_int32_T;
                  } else {
                    iy = 0;
                  }

                  b_Np[i32] = (iy < 1);
                  c_Np[i32] = iy;
                }

                st.site = &w_emlrtRSI;
                eml_li_find(&st, b_Np, b_tmp_data, tmp_size);
                loop_ub = tmp_size[0];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  c_Np[b_tmp_data[i32] - 1] = 1;
                }

                iy = Sp2->size[0];
                for (i32 = 0; i32 < 49; i32++) {
                  d_Np[i32] = (c_Np[3 * i32] > iy);
                }

                st.site = &x_emlrtRSI;
                b_eml_li_find(&st, d_Np, c_tmp_data, d_omega);
                loop_ub = d_omega[1];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  c_Np[3 * (c_tmp_data[d_omega[0] * i32] - 1)] = Sp2->size[0];
                }

                iy = Sp2->size[1];
                for (i32 = 0; i32 < 49; i32++) {
                  d_Np[i32] = (c_Np[1 + 3 * i32] > iy);
                }

                st.site = &y_emlrtRSI;
                b_eml_li_find(&st, d_Np, c_tmp_data, d_omega);
                loop_ub = d_omega[1];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  c_Np[1 + 3 * (c_tmp_data[d_omega[0] * i32] - 1)] = Sp2->size[1];
                }

                iv95[0] = (int8_T)(-1 + ix);
                iv95[1] = (int8_T)(-1 + ixstart);
                for (i32 = 0; i32 < 2; i32++) {
                  for (i33 = 0; i33 < 2; i33++) {
                    b_jacobian_d[i33 + 3 * i32] = jacobian_d[i33 + (i32 << 1)];
                  }
                }

                for (i32 = 0; i32 < 2; i32++) {
                  b_jacobian_d[6 + i32] = offset_p[i32] + (real_T)iv95[i32];
                }

                for (i32 = 0; i32 < 3; i32++) {
                  b_jacobian_d[2 + 3 * i32] = iv96[i32];
                }

                for (i32 = 0; i32 < 3; i32++) {
                  for (i33 = 0; i33 < 49; i33++) {
                    e = 0.0;
                    for (ixstop = 0; ixstop < 3; ixstop++) {
                      e += b_jacobian_d[i32 + 3 * ixstop] * Np[ixstop + 3 * i33];
                    }

                    e = muDoubleScalarRound(e);
                    if (e < 2.147483648E+9) {
                      if (e >= -2.147483648E+9) {
                        ixstop = (int32_T)e;
                      } else {
                        ixstop = MIN_int32_T;
                      }
                    } else if (e >= 2.147483648E+9) {
                      ixstop = MAX_int32_T;
                    } else {
                      ixstop = 0;
                    }

                    Np_ref[i32 + 3 * i33] = ixstop;
                  }
                }

                for (i32 = 0; i32 < 147; i32++) {
                  b_Np[i32] = (Np_ref[i32] < 1);
                }

                st.site = &ab_emlrtRSI;
                eml_li_find(&st, b_Np, b_tmp_data, tmp_size);
                loop_ub = tmp_size[0];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  Np_ref[b_tmp_data[i32] - 1] = 1;
                }

                iy = Sp2->size[0];
                for (i32 = 0; i32 < 49; i32++) {
                  d_Np[i32] = (Np_ref[3 * i32] > iy);
                }

                st.site = &bb_emlrtRSI;
                b_eml_li_find(&st, d_Np, c_tmp_data, d_omega);
                loop_ub = d_omega[1];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  Np_ref[3 * (c_tmp_data[d_omega[0] * i32] - 1)] = Sp2->size[0];
                }

                iy = Sp2->size[1];
                for (i32 = 0; i32 < 49; i32++) {
                  d_Np[i32] = (Np_ref[1 + 3 * i32] > iy);
                }

                st.site = &cb_emlrtRSI;
                b_eml_li_find(&st, d_Np, c_tmp_data, d_omega);
                loop_ub = d_omega[1];
                for (i32 = 0; i32 < loop_ub; i32++) {
                  Np_ref[1 + 3 * (c_tmp_data[d_omega[0] * i32] - 1)] = Sp2->
                    size[1];
                }

                for (i32 = 0; i32 < 3; i32++) {
                  for (i33 = 0; i33 < 49; i33++) {
                    b_tmp_data[i33 + 49 * i32] = c_Np[i32 + 3 * i33];
                  }
                }

                st.site = &db_emlrtRSI;
                getPixelsValue(&st, Src_lab, b_tmp_data, b_Ps);
                for (i32 = 0; i32 < 3; i32++) {
                  for (i33 = 0; i33 < 49; i33++) {
                    b_tmp_data[i33 + 49 * i32] = Np_ref[i32 + 3 * i33];
                  }
                }

                st.site = &eb_emlrtRSI;
                getPixelsValue(&st, Ref_lab, b_tmp_data, Pt);
                st.site = &fb_emlrtRSI;
                mean(b_Ps, t1);
                st.site = &fb_emlrtRSI;
                f_repmat(t1, dv1);
                for (i32 = 0; i32 < 147; i32++) {
                  dv1[i32] = b_Ps[i32] - dv1[i32];
                }

                st.site = &fb_emlrtRSI;
                b_std(&st, b_Ps, t1);
                st.site = &fb_emlrtRSI;
                f_repmat(t1, tmp_data);
                st.site = &fb_emlrtRSI;
                c_rdivide(dv1, tmp_data, b_Ps);
                st.site = &gb_emlrtRSI;
                mean(Pt, t1);
                st.site = &gb_emlrtRSI;
                f_repmat(t1, dv1);
                for (i32 = 0; i32 < 147; i32++) {
                  dv1[i32] = Pt[i32] - dv1[i32];
                }

                st.site = &gb_emlrtRSI;
                b_std(&st, Pt, t1);
                st.site = &gb_emlrtRSI;
                f_repmat(t1, tmp_data);
                st.site = &gb_emlrtRSI;
                c_rdivide(dv1, tmp_data, Pt);
                st.site = &hb_emlrtRSI;
                e_power(b_Ps, dv1);
                st.site = &hb_emlrtRSI;
                sum(dv1, t1);
                st.site = &hb_emlrtRSI;
                b_sqrt(&st, t1);
                st.site = &ib_emlrtRSI;
                e_power(Pt, dv1);
                st.site = &ib_emlrtRSI;
                sum(dv1, t2);
                st.site = &ib_emlrtRSI;
                b_sqrt(&st, t2);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&b_Ps[0])[i32];
                }

                st.site = &jb_emlrtRSI;
                d_rdivide(Ps, t1[0], *(real_T (*)[49])&b_Ps[0]);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&b_Ps[49])[i32];
                }

                st.site = &kb_emlrtRSI;
                d_rdivide(Ps, t1[1], *(real_T (*)[49])&b_Ps[49]);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&b_Ps[98])[i32];
                }

                st.site = &lb_emlrtRSI;
                d_rdivide(Ps, t1[2], *(real_T (*)[49])&b_Ps[98]);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&Pt[0])[i32];
                }

                st.site = &mb_emlrtRSI;
                d_rdivide(Ps, t2[0], *(real_T (*)[49])&Pt[0]);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&Pt[49])[i32];
                }

                st.site = &nb_emlrtRSI;
                d_rdivide(Ps, t2[1], *(real_T (*)[49])&Pt[49]);
                for (i32 = 0; i32 < 49; i32++) {
                  Ps[i32] = (*(real_T (*)[49])&Pt[98])[i32];
                }

                st.site = &ob_emlrtRSI;
                d_rdivide(Ps, t2[2], *(real_T (*)[49])&Pt[98]);
                for (i32 = 0; i32 < 147; i32++) {
                  tmp_data[i32] = b_Ps[i32] - Pt[i32];
                }

                st.site = &pb_emlrtRSI;
                e_power(tmp_data, dv1);
                st.site = &pb_emlrtRSI;
                sum(dv1, t1);
                st.site = &pb_emlrtRSI;
                e = b_sum(t1);
                if (e < b_error) {
                  b_error = e;
                  iv97[0] = (int8_T)(-1 + ix);
                  iv97[1] = (int8_T)(-1 + ixstart);
                  refp_size[0] = 1;
                  refp_size[1] = 2;
                  for (i32 = 0; i32 < 2; i32++) {
                    refp_data[i32] = iv97[i32];
                  }
                }

                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }

              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }

            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        iy = errors->size[0];
        i32 = errors->size[0];
        errors->size[0] = iy + 1;
        emxEnsureCapacity(sp, (emxArray__common *)errors, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        errors->data[iy] = b_error;
        if (b_error < 10.0) {
          modified = TRUE;
          iy = temp_sx->size[0];
          i32 = temp_sx->size[0];
          temp_sx->size[0] = iy + 1;
          emxEnsureCapacity(sp, (emxArray__common *)temp_sx, i32, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i32 = omega->size[0];
          temp_sx->data[iy] = omega->data[emlrtDynamicBoundsCheckFastR2012b(j +
            1, 1, i32, &ic_emlrtBCI, sp) - 1];
          iy = temp->size[0];
          i32 = temp->size[0];
          temp->size[0] = iy + 1;
          emxEnsureCapacity(sp, (emxArray__common *)temp, i32, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          i32 = omega->size[0];
          temp->data[iy] = omega->data[(emlrtDynamicBoundsCheckFastR2012b(j + 1,
            1, i32, &jc_emlrtBCI, sp) + omega->size[0]) - 1];
          i32 = Sp_new->size[0];
          i33 = omega->size[0];
          e = omega->data[emlrtDynamicBoundsCheckFastR2012b(j + 1, 1, i33,
            &lc_emlrtBCI, sp) - 1];
          i33 = (int32_T)emlrtIntegerCheckFastR2012b(e, &j_emlrtDCI, sp);
          ixstop = Sp_new->size[1];
          iy = omega->size[0];
          e = omega->data[(emlrtDynamicBoundsCheckFastR2012b(j + 1, 1, iy,
            &nc_emlrtBCI, sp) + omega->size[0]) - 1];
          iy = (int32_T)emlrtIntegerCheckFastR2012b(e, &k_emlrtDCI, sp);
          Sp_new->data[(emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32,
            &kc_emlrtBCI, sp) + Sp_new->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ixstop,
            &mc_emlrtBCI, sp) - 1)) - 1] = 1.0 + (real_T)i;
          for (i32 = 0; i32 < 2; i32++) {
            d_omega[i32] = refp_size[i32];
            h_sp_set[i32] = 1 + i32;
          }

          emlrtSizeEqCheck2DFastR2012b(d_omega, h_sp_set, &nb_emlrtECI, sp);
          i32 = omega->size[0];
          i33 = j + 1;
          emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &cc_emlrtBCI, sp);
          for (i32 = 0; i32 < 2; i32++) {
            omega_data[i32] = omega->data[j + omega->size[0] * i32];
          }

          for (i32 = 0; i32 < 2; i32++) {
            outsz[i32] = ((real_T)refp_data[i32] + offset_p[i32]) +
              omega_data[i32];
          }

          iy = temp_rx->size[0];
          i32 = temp_rx->size[0];
          temp_rx->size[0] = iy + 1;
          emxEnsureCapacity(sp, (emxArray__common *)temp_rx, i32, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          temp_rx->data[iy] = outsz[0];
          iy = temp_ry->size[0];
          i32 = temp_ry->size[0];
          temp_ry->size[0] = iy + 1;
          emxEnsureCapacity(sp, (emxArray__common *)temp_ry, i32, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          temp_ry->data[iy] = outsz[1];

          /*                 %{ */
          /*                 refp = refp + offset_p + omega(j, :); */
          /*                 superpixel = [superpixel; double(omega(j, :))]; */
          /*                 Sp_new(omega(j,1), omega(j,2)) = i; */
          /*                 single_ref_set = [single_ref_set; double(refp)]; */
          /*                 %} */
        }

        j++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      if (modified) {
        iy = temp_sx->size[0];
        ixstop = temp->size[0];
        emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &ob_emlrtECI, sp);
        i32 = sp_set->size[1];
        i33 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &dc_emlrtBCI, sp);
        i32 = sp_set->data[i].val->size[1];
        emlrtDimSizeEqCheckFastR2012b(2, i32, &pb_emlrtECI, sp);
        g_sp_set = sp_set->size[1];
        emxCopyStruct_struct_T(sp, &e_sp_set, &sp_set->data[i], &emlrtRTEI);
        iy = temp_sx->size[0];
        ixstop = temp->size[0];
        emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set, &fc_emlrtBCI, sp);
        i32 = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
        sp_set->data[i].val->size[0] = e_sp_set.val->size[0] + iy;
        emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set, &fc_emlrtBCI, sp);
        sp_set->data[i].val->size[1] = e_sp_set.val->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i].val, i32,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = e_sp_set.val->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_i = e_sp_set.val->size[0];
          for (i33 = 0; i33 < b_i; i33++) {
            sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set,
              &fc_emlrtBCI, sp) - 1].val->data[i33 + sp_set->
              data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set,
              &fc_emlrtBCI, sp) - 1].val->size[0] * i32] = e_sp_set.val->
              data[i33 + e_sp_set.val->size[0] * i32];
          }
        }

        for (i32 = 0; i32 < iy; i32++) {
          emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set, &fc_emlrtBCI, sp);
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set,
            &fc_emlrtBCI, sp) - 1].val->data[i32 + e_sp_set.val->size[0]] =
            temp_sx->data[i32];
        }

        for (i32 = 0; i32 < ixstop; i32++) {
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set,
            &fc_emlrtBCI, sp) - 1].val->data[(i32 + e_sp_set.val->size[0]) +
            sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, g_sp_set,
            &fc_emlrtBCI, sp) - 1].val->size[0]] = temp->data[i32];
        }

        iy = temp_rx->size[0];
        ixstop = temp_ry->size[0];
        emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &qb_emlrtECI, sp);
        iy = temp_rx->size[0];
        ixstop = temp_ry->size[0];
        i32 = b_single_ref_set->size[0] * b_single_ref_set->size[1];
        b_single_ref_set->size[0] = single_ref_set->size[0] + iy;
        b_single_ref_set->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_single_ref_set, i32,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < 2; i32++) {
          loop_ub = single_ref_set->size[0];
          for (i33 = 0; i33 < loop_ub; i33++) {
            b_single_ref_set->data[i33 + b_single_ref_set->size[0] * i32] =
              single_ref_set->data[i33 + single_ref_set->size[0] * i32];
          }
        }

        for (i32 = 0; i32 < iy; i32++) {
          b_single_ref_set->data[i32 + single_ref_set->size[0]] = temp_rx->
            data[i32];
        }

        for (i32 = 0; i32 < ixstop; i32++) {
          b_single_ref_set->data[(i32 + single_ref_set->size[0]) +
            b_single_ref_set->size[0]] = temp_ry->data[i32];
        }

        i32 = single_ref_set->size[0] * single_ref_set->size[1];
        single_ref_set->size[0] = b_single_ref_set->size[0];
        single_ref_set->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)single_ref_set, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < 2; i32++) {
          loop_ub = b_single_ref_set->size[0];
          for (i33 = 0; i33 < loop_ub; i33++) {
            single_ref_set->data[i33 + single_ref_set->size[0] * i32] =
              b_single_ref_set->data[i33 + b_single_ref_set->size[0] * i32];
          }
        }

        /* sp_set(i).val = superpixel; */
        i32 = sp_set->size[1];
        st.site = &qb_emlrtRSI;
        bspline_inv(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1,
          i32, &gc_emlrtBCI, sp) - 1].val, single_ref_set, control_p, &c_error);
        loop_ub = control_p->size[0];
        b_i = control_p->size[1];
        i32 = t0_x->size[0] * t0_x->size[1];
        t0_x->size[0] = loop_ub;
        t0_x->size[1] = b_i;
        emxEnsureCapacity(sp, (emxArray__common *)t0_x, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < b_i; i32++) {
          for (i33 = 0; i33 < loop_ub; i33++) {
            t0_x->data[i33 + t0_x->size[0] * i32] = control_p->data[i33 +
              control_p->size[0] * i32];
          }
        }

        loop_ub = control_p->size[0];
        b_i = control_p->size[1];
        i32 = t0_y->size[0] * t0_y->size[1];
        t0_y->size[0] = loop_ub;
        t0_y->size[1] = b_i;
        emxEnsureCapacity(sp, (emxArray__common *)t0_y, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < b_i; i32++) {
          for (i33 = 0; i33 < loop_ub; i33++) {
            t0_y->data[i33 + t0_y->size[0] * i32] = control_p->data[(i33 +
              control_p->size[0] * i32) + control_p->size[0] * control_p->size[1]];
          }
        }

        i32 = e_expl_temp.x->size[0] * e_expl_temp.x->size[1];
        e_expl_temp.x->size[0] = t0_x->size[0];
        e_expl_temp.x->size[1] = t0_x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_expl_temp.x, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        loop_ub = t0_x->size[0] * t0_x->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          e_expl_temp.x->data[i32] = t0_x->data[i32];
        }

        i32 = e_expl_temp.y->size[0] * e_expl_temp.y->size[1];
        e_expl_temp.y->size[0] = t0_y->size[0];
        e_expl_temp.y->size[1] = t0_y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_expl_temp.y, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        loop_ub = t0_y->size[0] * t0_y->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          e_expl_temp.y->data[i32] = t0_y->data[i32];
        }

        i32 = bspline_set->size[1];
        b_emxCopyStruct_struct_T(sp, &bspline_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i32, &hc_emlrtBCI, sp)
          - 1], &e_expl_temp, &mc_emlrtRTEI);
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&f_sp_set);
  emxFree_real_T(&b_single_ref_set);
  emxFreeStruct_struct_T(&e_sp_set);
  emxFree_real_T(&c_temp);
  emxFree_real_T(&d_sp_set);
  emxFree_real_T(&c_sp_set);
  emxFree_real_T(&b_sp_set);
  emxFree_real_T(&c_omega);
  emxFree_real_T(&b_omega);
  emxFree_boolean_T(&r14);
  emxFree_boolean_T(&b_Sp_new);
  b_emxFreeStruct_struct_T(&e_expl_temp);
  b_emxFreeStruct_struct_T(&d_expl_temp);
  b_emxFreeStruct_struct_T(&c_expl_temp);
  b_emxFreeStruct_struct_T(&b_expl_temp);
  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_int32_T(&ib);
  emxFree_int32_T(&ia);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargin_2);
  emxFree_real_T(&t0_y);
  emxFree_real_T(&t0_x);
  emxFree_boolean_T(&r13);
  emxFree_boolean_T(&r12);
  emxFree_real_T(&b_temp);
  emxFree_real_T(&control_p);
  emxFree_real_T(&temp_ry);
  emxFree_real_T(&temp_rx);
  emxFree_real_T(&temp_sx);
  emxFree_real_T(&temp);
  emxFree_real_T(&omega);
  emxFree_real_T(&single_ref_set);
  emxFree_real_T(&bound);
  emxFree_real_T(&Sp_new);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extension.c) */
