/*
 * segmentation.c
 *
 * Code generation for function 'segmentation'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "ceil.h"
#include "segmentation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "mod.h"
#include "sum.h"
#include "power.h"
#include "getPixelsValue.h"
#include "bspline.h"
#include "bspline_inv.h"
#include "segmentation_mexutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo b_emlrtRSI = { 31, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo c_emlrtRSI = { 35, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo d_emlrtRSI = { 36, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo e_emlrtRSI = { 37, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo f_emlrtRSI = { 46, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo g_emlrtRSI = { 77, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo h_emlrtRSI = { 84, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo i_emlrtRSI = { 105, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo j_emlrtRSI = { 106, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo k_emlrtRSI = { 107, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo l_emlrtRSI = { 111, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo m_emlrtRSI = { 114, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo n_emlrtRSI = { 115, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo o_emlrtRSI = { 116, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo p_emlrtRSI = { 117, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo q_emlrtRSI = { 118, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo r_emlrtRSI = { 120, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo s_emlrtRSI = { 121, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo t_emlrtRSI = { 122, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo u_emlrtRSI = { 128, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo v_emlrtRSI = { 129, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo w_emlrtRSI = { 152, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo x_emlrtRSI = { 153, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo y_emlrtRSI = { 154, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo ab_emlrtRSI = { 160, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRSInfo bb_emlrtRSI = { 41, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo cb_emlrtRSI = { 230, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo db_emlrtRSI = { 232, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo wb_emlrtRSI = { 11, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo xb_emlrtRSI = { 26, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo yb_emlrtRSI = { 29, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ac_emlrtRSI = { 39, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo bc_emlrtRSI = { 41, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo cc_emlrtRSI = { 10, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo dc_emlrtRSI = { 11, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ec_emlrtRSI = { 56, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo jc_emlrtRSI = { 118, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo kc_emlrtRSI = { 117, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo lc_emlrtRSI = { 116, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo tp_emlrtRSI = { 93, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo up_emlrtRSI = { 94, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo vp_emlrtRSI = { 97, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo wp_emlrtRSI = { 99, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo xp_emlrtRSI = { 100, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo yp_emlrtRSI = { 101, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo aq_emlrtRSI = { 105, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo bq_emlrtRSI = { 16, "eml_matrix_npages",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"
};

static emlrtRSInfo dq_emlrtRSI = { 223, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo eq_emlrtRSI = { 197, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo fq_emlrtRSI = { 177, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo gq_emlrtRSI = { 178, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo b_emlrtMCI = { 123, 9, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo c_emlrtMCI = { 122, 19, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo d_emlrtMCI = { 239, 9, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo k_emlrtMCI = { 14, 5, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo l_emlrtMCI = { 57, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo m_emlrtMCI = { 56, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo n_emlrtMCI = { 125, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 51, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo b_emlrtRTEI = { 127, 5, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo d_emlrtRTEI = { 68, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo e_emlrtRTEI = { 69, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo f_emlrtRTEI = { 94, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo g_emlrtRTEI = { 98, 4, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo h_emlrtRTEI = { 115, 4, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo i_emlrtRTEI = { 120, 4, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo j_emlrtRTEI = { 121, 4, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo k_emlrtRTEI = { 133, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo l_emlrtRTEI = { 136, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo m_emlrtRTEI = { 137, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtRTEInfo n_emlrtRTEI = { 33, 6, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo r_emlrtRTEI = { 20, 9, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo s_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo ic_emlrtRTEI = { 118, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtECInfo emlrtECI = { -1, 35, 13, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo b_emlrtECI = { -1, 36, 13, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 52, 25, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 56, 18, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 56, 34, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 56, 38, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 56, 54, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo emlrtDCI = { 57, 23, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 57, 23, "DCF", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 57, 33, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 57, 33, "DCF", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtECInfo c_emlrtECI = { 1, 63, 21, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 72, 25, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 75, 32, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 75, 48, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 75, 52, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 75, 68, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 99, 24, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 101, 22, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 101, 38, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 101, 22, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 101, 22, "DCF", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 101, 42, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 101, 58, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 101, 42, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 101, 42, "DCF", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 114, 16, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 122, 28, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo e_emlrtECI = { 2, 24, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo f_emlrtECI = { 2, 68, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo g_emlrtECI = { 2, 95, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo h_emlrtECI = { 2, 134, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtECInfo i_emlrtECI = { 2, 136, 1, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 140, 8, "error_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 141, 35, "error_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 142, 29, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 144, 39, "bspline_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 146, 29, "sp_val", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 147, 31, "ref_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 105, 4, "ref_point", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 106, 14, "ref_point", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 107, 14, "ref_point", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 111, 37, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 115, 26, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 116, 4, "ref_p", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 117, 10, "ref_p", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 118, 10, "ref_p", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 122, 4, "error_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 101, 56, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 101, 36, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 79, 29, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 80, 29, "sp_val", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 75, 32, "Confidence", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 75, 32, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 75, 46, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 75, 52, "Confidence", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 75, 52, "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 1 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 75, 66, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 63, 5, "sp_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 56, 32, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 56, 52, "j", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 30, 35, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 30, 37, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 31, 35, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 31, 37, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 32, 34, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 32, 36, "Sp2", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 37, 13, "new_set", "segmentation",
  "F:/Git/correspondence/matlab_code/segmentation.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 20, 34, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo ar_emlrtRSI = { 125, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo gr_emlrtRSI = { 14, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ir_emlrtRSI = { 239, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo jr_emlrtRSI = { 122, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo lr_emlrtRSI = { 57, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ur_emlrtRSI = { 123, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

/* Function Declarations */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_b_struct_T *x);
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static void eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x);

/* Function Definitions */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m4;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &wb_emlrtRSI;
  k = 0;
  b_st.site = &ac_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      b_st.site = &bc_emlrtRSI;
      k++;
    }
  }

  if (k <= x->size[0]) {
  } else {
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &gr_emlrtRSI;
    error(&st, b_y, &k_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &g_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  j = 0;
  st.site = &xb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    b_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      st.site = &yb_emlrtRSI;
      j++;
    }
  }
}

static void b_eml_null_assignment(const emlrtStack *sp, emxArray_b_struct_T *x)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv71[2] = { 1, 31 };

  const mxArray *m16;
  char_T cv37[31];
  int32_T i;
  static const char_T cv38[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T k;
  const mxArray *b_y;
  emxArray_b_struct_T *b_x;
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
  d_st.prev = &st;
  d_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &cc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  overflow = TRUE;
  if (1 > x->size[1]) {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m16 = mxCreateCharArray(2, iv71);
    for (i = 0; i < 31; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m16, cv37);
    emlrtAssign(&y, m16);
    b_st.site = &ec_emlrtRSI;
    d_st.site = &lr_emlrtRSI;
    error(&b_st, message(&d_st, y, &l_emlrtMCI), &m_emlrtMCI);
  }

  st.site = &dc_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &lc_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  if (1 > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= i; k++) {
    b_st.site = &jc_emlrtRSI;
    b_emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &ic_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m16 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m16);
    b_st.site = &ar_emlrtRSI;
    error(&b_st, b_y, &n_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  b_emxInit_struct_T(&st, &b_x, 2, &s_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  b_emxEnsureCapacity_struct_T(&st, b_x, k, &s_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &s_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  b_emxEnsureCapacity_struct_T(&st, x, k, &s_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->
      size[0] * k], &s_emlrtRTEI);
  }

  b_emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b3;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m3;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = x->size[0] << 1;
  st.site = &wb_emlrtRSI;
  k = 0;
  b_st.site = &ac_emlrtRSI;
  if (1 > n) {
    b3 = FALSE;
  } else {
    b3 = (n > 2147483646);
  }

  if (b3) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      b_st.site = &bc_emlrtRSI;
      k++;
    }
  }

  if (k <= n) {
  } else {
    b_y = NULL;
    m3 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m3);
    st.site = &gr_emlrtRSI;
    error(&st, b_y, &k_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &g_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  j = 0;
  st.site = &xb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      st.site = &yb_emlrtRSI;
      j++;
    }
  }
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv70[2] = { 1, 31 };

  const mxArray *m15;
  char_T cv35[31];
  int32_T i;
  static const char_T cv36[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T k;
  const mxArray *b_y;
  emxArray_struct_T *b_x;
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
  d_st.prev = &st;
  d_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &cc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  overflow = TRUE;
  if (1 > x->size[1]) {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m15 = mxCreateCharArray(2, iv70);
    for (i = 0; i < 31; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m15, cv35);
    emlrtAssign(&y, m15);
    b_st.site = &ec_emlrtRSI;
    d_st.site = &lr_emlrtRSI;
    error(&b_st, message(&d_st, y, &l_emlrtMCI), &m_emlrtMCI);
  }

  st.site = &dc_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &lc_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  if (1 > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= i; k++) {
    b_st.site = &jc_emlrtRSI;
    emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &ic_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m15 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m15);
    b_st.site = &ar_emlrtRSI;
    error(&b_st, b_y, &n_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_struct_T(&st, &b_x, 2, &s_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity_struct_T(&st, b_x, k, &s_emlrtRTEI);
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &s_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_struct_T(&st, x, k, &s_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->size[0]
      * k], &s_emlrtRTEI);
  }

  emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void segmentation(const emlrtStack *sp, const emxArray_real_T *Sp2, const
                  emxArray_real_T *Confidence, const emxArray_real_T *DCF, const
                  emxArray_real_T *Ref, emxArray_struct_T *sp_set,
                  emxArray_real_T *sp_val, emxArray_b_struct_T *bspline_set,
                  emxArray_struct_T *ref_set)
{
  struct_T r0;
  int32_T i0;
  int32_T i;
  emxArray_real_T *sp_val2;
  emxArray_real_T *error_set;
  emxArray_real_T *ref_point;
  struct_T r1;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_boolean_T *b_ref_point;
  emxArray_real_T *b_ii;
  emxArray_int32_T *c_ii;
  emxArray_int32_T *d_ii;
  int32_T j;
  int32_T i1;
  real_T A;
  int32_T loop_ub;
  int32_T iy;
  int32_T idx;
  boolean_T b0;
  int32_T ix;
  boolean_T exitg3;
  boolean_T guard2 = FALSE;
  const mxArray *y;
  const mxArray *m0;
  boolean_T b1;
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 36 };

  char_T cv0[36];
  int32_T b_i;
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'f', 'i', 'n', 'd', '_', 'i', 'n', 'c', 'o', 'm',
    'p', 'a', 't', 'i', 'b', 'l', 'e', 'S', 'h', 'a', 'p', 'e' };

  boolean_T b2;
  boolean_T exitg2;
  boolean_T guard1 = FALSE;
  const mxArray *c_y;
  int32_T e_ii[1];
  int32_T f_ii[1];
  int32_T ixstop;
  int32_T surface_amount;
  real_T outsz[2];
  emxArray_struct_T *sp_set2;
  struct_T r2;
  real_T con;
  b_struct_T r3;
  struct_T r4;
  emxArray_int32_T *ref_p;
  emxArray_real_T *val_p;
  emxArray_real_T *val_o;
  emxArray_real_T *control_p;
  b_struct_T r5;
  struct_T r6;
  emxArray_real_T *r7;
  emxArray_real_T *b_val_p;
  emxArray_boolean_T *b_ref_p;
  emxArray_boolean_T *c_ref_p;
  emxArray_boolean_T *d_ref_p;
  emxArray_boolean_T *c_ref_point;
  emxArray_boolean_T *d_ref_point;
  emxArray_boolean_T *e_ref_point;
  emxArray_real_T *f_ref_point;
  real_T b_error;
  const mxArray *d_y;
  static const int32_T iv1[2] = { 1, 39 };

  char_T cv2[39];
  static const char_T cv3[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T bound_size[2];
  boolean_T b_ix;
  boolean_T exitg1;
  boolean_T b_idx;
  int32_T c_val_p[2];
  int32_T b_val_o[2];
  real_T b_x[3];
  emxArray_real_T *error_set2;
  emxArray_struct_T *ref_set2;
  emxArray_b_struct_T *bspline_set2;
  struct_T r8;
  b_struct_T r9;
  struct_T r10;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_struct_T(sp, &r0, &emlrtRTEI, TRUE);
  emlrtDimSizeGeqCheckFastR2012b(2, 0, &e_emlrtECI, sp);
  i0 = r0.val->size[0] * r0.val->size[1];
  r0.val->size[0] = 0;
  r0.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r0.val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, sp_set, i0, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &sp_set->data[0], &r0, &emlrtRTEI);
  i0 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = 0;
  sp_val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);

  /* % get superpixels in coordinate form */
  i = 1;
  emxFreeStruct_struct_T(&r0);
  b_emxInit_real_T(sp, &sp_val2, 1, &e_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &error_set, 1, &f_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_point, 2, &g_emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &r1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, TRUE);
  b_emxInit_int32_T(sp, &ii, 1, &n_emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &b_ref_point, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_ii, 1, &emlrtRTEI, TRUE);
  b_emxInit_int32_T(sp, &c_ii, 1, &emlrtRTEI, TRUE);
  b_emxInit_int32_T(sp, &d_ii, 1, &emlrtRTEI, TRUE);
  while (i - 1 <= Sp2->size[0] - 1) {
    j = 1;
    while (j - 1 <= Sp2->size[1] - 1) {
      st.site = &emlrtRSI;
      i0 = x->size[0] * x->size[1];
      x->size[0] = sp_val->size[0];
      x->size[1] = sp_val->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      i0 = Sp2->size[0];
      i1 = Sp2->size[1];
      A = Sp2->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bc_emlrtBCI,
        &st) + Sp2->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i1,
        &cc_emlrtBCI, &st) - 1)) - 1];
      loop_ub = sp_val->size[0] * sp_val->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        x->data[i0] = (sp_val->data[i0] == A);
      }

      b_st.site = &bb_emlrtRSI;
      iy = x->size[0] * x->size[1];
      idx = 0;
      i0 = ii->size[0];
      ii->size[0] = iy;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                        (int32_T), &b_emlrtRTEI);
      c_st.site = &cb_emlrtRSI;
      d_st.site = &eb_emlrtRSI;
      if (1 > iy) {
        b0 = FALSE;
      } else {
        b0 = (iy > 2147483646);
      }

      if (b0) {
        d_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      ix = 1;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (ix <= iy)) {
        guard2 = FALSE;
        if (x->data[ix - 1]) {
          c_st.site = &db_emlrtRSI;
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= iy) {
            exitg3 = TRUE;
          } else {
            guard2 = TRUE;
          }
        } else {
          guard2 = TRUE;
        }

        if (guard2 == TRUE) {
          ix++;
        }
      }

      if (idx <= iy) {
      } else {
        y = NULL;
        m0 = mxCreateString("Assertion failed.");
        emlrtAssign(&y, m0);
        c_st.site = &ir_emlrtRSI;
        error(&c_st, y, &d_emlrtMCI);
      }

      if (iy == 1) {
        if (idx == 0) {
          i0 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        i0 = c_ii->size[0];
        c_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          c_ii->data[i0] = ii->data[i0];
        }

        i0 = ii->size[0];
        ii->size[0] = c_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = c_ii->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          ii->data[i0] = c_ii->data[i0];
        }
      }

      i0 = b_ii->size[0];
      b_ii->size[0] = ii->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_ii, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = ii->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_ii->data[i0] = ii->data[i0];
      }

      st.site = &emlrtRSI;
      if (sum(&st, b_ii) == 0.0) {
        st.site = &b_emlrtRSI;
        i0 = x->size[0] * x->size[1];
        x->size[0] = Sp2->size[0];
        x->size[1] = Sp2->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof
                          (boolean_T), &emlrtRTEI);
        i0 = Sp2->size[0];
        i1 = Sp2->size[1];
        A = Sp2->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &dc_emlrtBCI,
          &st) + Sp2->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i1,
          &ec_emlrtBCI, &st) - 1)) - 1];
        loop_ub = Sp2->size[0] * Sp2->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          x->data[i0] = (Sp2->data[i0] == A);
        }

        b_st.site = &bb_emlrtRSI;
        iy = x->size[0] * x->size[1];
        idx = 0;
        if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
            (x->size[1] <= 1)) {
          b1 = TRUE;
        } else {
          b1 = FALSE;
        }

        if (b1) {
        } else {
          b_y = NULL;
          m0 = mxCreateCharArray(2, iv0);
          for (b_i = 0; b_i < 36; b_i++) {
            cv0[b_i] = cv1[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 36, m0, cv0);
          emlrtAssign(&b_y, m0);
          c_st.site = &jr_emlrtRSI;
          h_st.site = &ur_emlrtRSI;
          error(&c_st, message(&h_st, b_y, &b_emlrtMCI), &c_emlrtMCI);
        }

        i0 = ii->size[0];
        ii->size[0] = iy;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                          (int32_T), &b_emlrtRTEI);
        c_st.site = &cb_emlrtRSI;
        d_st.site = &eb_emlrtRSI;
        if (1 > iy) {
          b2 = FALSE;
        } else {
          b2 = (iy > 2147483646);
        }

        if (b2) {
          d_st.site = &fb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        ix = 1;
        exitg2 = FALSE;
        while ((exitg2 == FALSE) && (ix <= iy)) {
          guard1 = FALSE;
          if (x->data[ix - 1]) {
            c_st.site = &db_emlrtRSI;
            idx++;
            ii->data[idx - 1] = ix;
            if (idx >= iy) {
              exitg2 = TRUE;
            } else {
              guard1 = TRUE;
            }
          } else {
            guard1 = TRUE;
          }

          if (guard1 == TRUE) {
            ix++;
          }
        }

        if (idx <= iy) {
        } else {
          c_y = NULL;
          m0 = mxCreateString("Assertion failed.");
          emlrtAssign(&c_y, m0);
          c_st.site = &ir_emlrtRSI;
          error(&c_st, c_y, &d_emlrtMCI);
        }

        if (iy == 1) {
          if (idx == 0) {
            i0 = ii->size[0];
            ii->size[0] = 0;
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                              (int32_T), &emlrtRTEI);
          }
        } else {
          if (1 > idx) {
            loop_ub = 0;
          } else {
            loop_ub = idx;
          }

          i0 = d_ii->size[0];
          d_ii->size[0] = loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i0, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            d_ii->data[i0] = ii->data[i0];
          }

          i0 = ii->size[0];
          ii->size[0] = d_ii->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
          loop_ub = d_ii->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            ii->data[i0] = d_ii->data[i0];
          }
        }

        i0 = sp_val2->size[0];
        sp_val2->size[0] = ii->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)sp_val2, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = ii->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          sp_val2->data[i0] = ii->data[i0];
        }

        i0 = error_set->size[0];
        error_set->size[0] = sp_val->size[0] + 1;
        emxEnsureCapacity(sp, (emxArray__common *)error_set, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = sp_val->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          error_set->data[i0] = sp_val->data[i0];
        }

        i0 = Sp2->size[0];
        i1 = Sp2->size[1];
        error_set->data[sp_val->size[0]] = Sp2->data
          [(emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &fc_emlrtBCI, sp) +
            Sp2->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i1,
              &gc_emlrtBCI, sp) - 1)) - 1];
        idx = error_set->size[0];
        i0 = sp_val->size[0] * sp_val->size[1];
        sp_val->size[0] = idx;
        emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        i0 = sp_val->size[0] * sp_val->size[1];
        sp_val->size[1] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = error_set->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          sp_val->data[i0] = error_set->data[i0];
        }

        iy = sp_val2->size[0];
        i0 = ref_point->size[0] * ref_point->size[1];
        ref_point->size[0] = iy;
        ref_point->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)ref_point, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = sp_val2->size[0] << 1;
        for (i0 = 0; i0 < loop_ub; i0++) {
          ref_point->data[i0] = 0.0;
        }

        iy = sp_val2->size[0];
        i0 = ii->size[0];
        ii->size[0] = iy;
        emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i0 = 0; i0 < iy; i0++) {
          ii->data[i0] = i0;
        }

        st.site = &c_emlrtRSI;
        b_mod(&st, sp_val2, Sp2->size[0], error_set);
        e_ii[0] = ii->size[0];
        emlrtSubAssignSizeCheckR2012b(e_ii, 1, *(int32_T (*)[1])error_set->size,
          1, &emlrtECI, sp);
        loop_ub = error_set->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          ref_point->data[ii->data[i0]] = error_set->data[i0];
        }

        loop_ub = ref_point->size[0];
        i0 = ii->size[0];
        ii->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          ii->data[i0] = i0;
        }

        st.site = &d_emlrtRSI;
        b_st.site = &sb_emlrtRSI;
        rdivide(&b_st, sp_val2, Sp2->size[0], error_set);
        st.site = &d_emlrtRSI;
        b_ceil(error_set);
        f_ii[0] = ii->size[0];
        emlrtSubAssignSizeCheckR2012b(f_ii, 1, *(int32_T (*)[1])error_set->size,
          1, &b_emlrtECI, sp);
        loop_ub = error_set->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          ref_point->data[ii->data[i0] + ref_point->size[0]] = error_set->
            data[i0];
        }

        i0 = b_ref_point->size[0] * b_ref_point->size[1];
        b_ref_point->size[0] = ref_point->size[0];
        b_ref_point->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_ref_point, i0, (int32_T)
                          sizeof(boolean_T), &emlrtRTEI);
        loop_ub = ref_point->size[0] * ref_point->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          b_ref_point->data[i0] = (ref_point->data[i0] == 0.0);
        }

        st.site = &e_emlrtRSI;
        eml_li_find(&st, b_ref_point, ii);
        idx = ref_point->size[0];
        loop_ub = ii->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          i1 = idx << 1;
          ixstop = ii->data[i0];
          ref_point->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i1,
            &hc_emlrtBCI, sp) - 1] = Sp2->size[0];
        }

        i0 = r1.val->size[0] * r1.val->size[1];
        r1.val->size[0] = ref_point->size[0];
        r1.val->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)r1.val, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = ref_point->size[0] * ref_point->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1.val->data[i0] = ref_point->data[i0];
        }

        ix = sp_set->size[1];
        i0 = sp_set->size[0] * sp_set->size[1];
        sp_set->size[1] = ix + 1;
        emxEnsureCapacity_struct_T(sp, sp_set, i0, &emlrtRTEI);
        emxCopyStruct_struct_T(sp, &sp_set->data[ix], &r1, &emlrtRTEI);
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_int32_T(&d_ii);
  emxFree_int32_T(&c_ii);
  emxFree_real_T(&b_ii);
  emxFree_boolean_T(&b_ref_point);
  emxFree_boolean_T(&x);
  emxFreeStruct_struct_T(&r1);
  st.site = &f_emlrtRSI;
  eml_null_assignment(&st, sp_set);

  /* % remove point with low confidence */
  surface_amount = sp_set->size[1];
  i = 0;
  while (i <= surface_amount - 1) {
    i0 = sp_set->size[1];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, sp);
    i0 = sp_val2->size[0];
    sp_val2->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i0 = error_set->size[0];
    error_set->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)error_set, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    j = 1;
    while (j - 1 <= sp_set->data[i].val->size[0] - 1) {
      i0 = sp_set->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp);
      i0 = sp_set->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, sp);
      i0 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI, sp);
      i0 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &e_emlrtBCI, sp);
      i0 = sp_set->data[i].val->size[0];
      outsz[0] = sp_set->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j,
        1, i0, &yb_emlrtBCI, sp) - 1];
      i0 = sp_set->data[i].val->size[0];
      outsz[1] = sp_set->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j,
        1, i0, &ac_emlrtBCI, sp) + sp_set->data[i].val->size[0]) - 1];
      i0 = DCF->size[1];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(outsz[1], &b_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &g_emlrtBCI, sp);
      i0 = DCF->size[0];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(outsz[0], &emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &f_emlrtBCI, sp);
      if ((DCF->data[((int32_T)outsz[0] + DCF->size[0] * ((int32_T)outsz[1] - 1))
           - 1] > 0.0) && (DCF->data[((int32_T)outsz[0] + DCF->size[0] *
            ((int32_T)outsz[1] - 1)) - 1] <= Sp2->size[1]) && (DCF->data
           [(((int32_T)outsz[0] + DCF->size[0] * ((int32_T)outsz[1] - 1)) +
             DCF->size[0] * DCF->size[1]) - 1] > 0.0) && (DCF->data[(((int32_T)
             outsz[0] + DCF->size[0] * ((int32_T)outsz[1] - 1)) + DCF->size[0] *
            DCF->size[1]) - 1] <= Sp2->size[0])) {
        ix = sp_val2->size[0];
        i0 = sp_val2->size[0];
        sp_val2->size[0] = ix + 1;
        emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        sp_val2->data[ix] = outsz[0];
        ix = error_set->size[0];
        i0 = error_set->size[0];
        error_set->size[0] = ix + 1;
        emxEnsureCapacity(sp, (emxArray__common *)error_set, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        error_set->data[ix] = outsz[1];
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    iy = sp_val2->size[0];
    idx = error_set->size[0];
    emlrtDimSizeEqCheckFastR2012b(iy, idx, &c_emlrtECI, sp);
    ix = sp_set->size[1];
    iy = sp_val2->size[0];
    idx = error_set->size[0];
    emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, ix, &xb_emlrtBCI, sp);
    i0 = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
    sp_set->data[i].val->size[0] = iy;
    emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, ix, &xb_emlrtBCI, sp);
    sp_set->data[i].val->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i].val, i0, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    for (i0 = 0; i0 < iy; i0++) {
      emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, ix, &xb_emlrtBCI, sp);
      sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, ix, &xb_emlrtBCI,
        sp) - 1].val->data[i0] = sp_val2->data[i0];
    }

    for (i0 = 0; i0 < idx; i0++) {
      sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, ix, &xb_emlrtBCI,
        sp) - 1].val->data[i0 + sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i
        + 1, 1, ix, &xb_emlrtBCI, sp) - 1].val->size[0]] = error_set->data[i0];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_struct_T(sp, &sp_set2, 2, &d_emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &r2, &emlrtRTEI, TRUE);

  /* % remove surface with low confidence */
  emlrtDimSizeGeqCheckFastR2012b(2, 0, &f_emlrtECI, sp);
  i0 = r2.val->size[0] * r2.val->size[1];
  r2.val->size[0] = 0;
  r2.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r2.val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = sp_set2->size[0] * sp_set2->size[1];
  sp_set2->size[0] = 1;
  sp_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, sp_set2, i0, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &sp_set2->data[0], &r2, &emlrtRTEI);
  i0 = sp_val2->size[0];
  sp_val2->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = 0;
  emxFreeStruct_struct_T(&r2);
  while (i <= sp_set->size[1] - 1) {
    i0 = sp_set->size[1];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &h_emlrtBCI, sp);
    con = 0.0;
    j = 1;
    while (j - 1 <= sp_set->data[i].val->size[0] - 1) {
      i0 = sp_set->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &i_emlrtBCI, sp);
      i0 = sp_set->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &k_emlrtBCI, sp);
      i0 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &j_emlrtBCI, sp);
      i0 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &l_emlrtBCI, sp);
      i0 = Confidence->size[0];
      i1 = sp_set->data[i].val->size[0];
      A = sp_set->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i1,
        &ub_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(A, &e_emlrtDCI, sp);
      ixstop = Confidence->size[1];
      iy = sp_set->data[i].val->size[0];
      A = sp_set->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j, 1, iy,
        &wb_emlrtBCI, sp) + sp_set->data[i].val->size[0]) - 1];
      iy = (int32_T)emlrtIntegerCheckFastR2012b(A, &f_emlrtDCI, sp);
      con += Confidence->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
        &tb_emlrtBCI, sp) + Confidence->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ixstop, &vb_emlrtBCI, sp) - 1))
        - 1];
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    st.site = &g_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    con /= (real_T)sp_set->data[i].val->size[0];
    if (con >= 0.8) {
      ix = sp_set2->size[1];
      i0 = sp_set2->size[0] * sp_set2->size[1];
      sp_set2->size[1] = ix + 1;
      emxEnsureCapacity_struct_T(sp, sp_set2, i0, &emlrtRTEI);
      i0 = sp_set->size[1];
      emxCopyStruct_struct_T(sp, &sp_set2->data[ix], &sp_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i0, &rb_emlrtBCI, sp) -
        1], &emlrtRTEI);
      ix = sp_val2->size[0];
      i0 = sp_val2->size[0];
      sp_val2->size[0] = ix + 1;
      emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i0 = sp_val->size[0] * sp_val->size[1];
      sp_val2->data[ix] = sp_val->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
        1, i0, &sb_emlrtBCI, sp) - 1];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  st.site = &h_emlrtRSI;
  eml_null_assignment(&st, sp_set2);
  i0 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = sp_set2->size[1];
  emxEnsureCapacity_struct_T(sp, sp_set, i0, &emlrtRTEI);
  loop_ub = sp_set2->size[0] * sp_set2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    emxCopyStruct_struct_T(sp, &sp_set->data[i0], &sp_set2->data[i0], &emlrtRTEI);
  }

  iy = sp_val2->size[0];
  i0 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = sp_val2->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sp_val->data[i0] = sp_val2->data[i0];
  }

  b_emxInitStruct_struct_T(sp, &r3, &emlrtRTEI, TRUE);

  /* % compute bsplines of superpixels */
  surface_amount = sp_set2->size[1];
  i0 = r3.x->size[0] * r3.x->size[1];
  r3.x->size[0] = 0;
  r3.x->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r3.x, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = r3.y->size[0] * r3.y->size[1];
  r3.y->size[0] = 0;
  r3.y->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r3.y, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = bspline_set->size[0] * bspline_set->size[1];
  bspline_set->size[0] = 1;
  bspline_set->size[1] = 1;
  b_emxEnsureCapacity_struct_T(sp, bspline_set, i0, &emlrtRTEI);
  b_emxCopyStruct_struct_T(sp, &bspline_set->data[0], &r3, &emlrtRTEI);
  i0 = error_set->size[0];
  error_set->size[0] = sp_set2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)error_set, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = sp_set2->size[1];
  b_emxFreeStruct_struct_T(&r3);
  for (i0 = 0; i0 < loop_ub; i0++) {
    error_set->data[i0] = 0.0;
  }

  emxInitStruct_struct_T(sp, &r4, &emlrtRTEI, TRUE);
  emlrtDimSizeGeqCheckFastR2012b(2, 0, &g_emlrtECI, sp);
  i0 = r4.val->size[0] * r4.val->size[1];
  r4.val->size[0] = 0;
  r4.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r4.val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = ref_set->size[0] * ref_set->size[1];
  ref_set->size[0] = 1;
  ref_set->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, ref_set, i0, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &ref_set->data[0], &r4, &emlrtRTEI);
  i = 0;
  emxFreeStruct_struct_T(&r4);
  emxInit_int32_T(sp, &ref_p, 2, &h_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_p, 2, &i_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_o, 2, &j_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &control_p, 3, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &r5, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &r6, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r7, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_val_p, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &b_ref_p, 1, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &c_ref_p, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &d_ref_p, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &c_ref_point, 1, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &d_ref_point, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &e_ref_point, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &f_ref_point, 2, &emlrtRTEI, TRUE);
  while (i <= sp_set2->size[1] - 1) {
    i0 = ref_point->size[0] * ref_point->size[1];
    ref_point->size[0] = 0;
    ref_point->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)ref_point, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i0 = sp_set2->size[1];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &m_emlrtBCI, sp);
    j = 0;
    while (j <= sp_set2->data[i].val->size[0] - 1) {
      i0 = sp_set2->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &n_emlrtBCI, sp);
      i0 = sp_set2->size[1];
      i1 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &q_emlrtBCI, sp);
      i0 = sp_set2->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &o_emlrtBCI, sp);
      i0 = sp_set2->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &r_emlrtBCI, sp);
      i0 = sp_set2->data[i].val->size[0];
      A = sp_set2->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j + 1, 1,
        i0, &pb_emlrtBCI, sp) + sp_set2->data[i].val->size[0]) - 1];
      i0 = DCF->size[1];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(A, &d_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &s_emlrtBCI, sp);
      i0 = sp_set2->data[i].val->size[0];
      A = sp_set2->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j + 1, 1,
        i0, &qb_emlrtBCI, sp) - 1];
      i0 = DCF->size[0];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(A, &c_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &p_emlrtBCI, sp);
      idx = (int32_T)sp_set2->data[i].val->data[j + sp_set2->data[i].val->size[0]];
      ix = (int32_T)sp_set2->data[i].val->data[j];
      iy = (int32_T)sp_set2->data[i].val->data[j + sp_set2->data[i].val->size[0]];
      ixstop = (int32_T)sp_set2->data[i].val->data[j];
      i0 = f_ref_point->size[0] * f_ref_point->size[1];
      f_ref_point->size[0] = ref_point->size[0] + 1;
      f_ref_point->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)f_ref_point, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i0 = 0; i0 < 2; i0++) {
        loop_ub = ref_point->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_ref_point->data[i1 + f_ref_point->size[0] * i0] = ref_point->data[i1
            + ref_point->size[0] * i0];
        }
      }

      f_ref_point->data[ref_point->size[0]] = DCF->data[((ix + DCF->size[0] *
        (idx - 1)) + DCF->size[0] * DCF->size[1]) - 1];
      f_ref_point->data[ref_point->size[0] + f_ref_point->size[0]] = DCF->data
        [(ixstop + DCF->size[0] * (iy - 1)) - 1];
      i0 = ref_point->size[0] * ref_point->size[1];
      ref_point->size[0] = f_ref_point->size[0];
      ref_point->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)ref_point, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i0 = 0; i0 < 2; i0++) {
        loop_ub = f_ref_point->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ref_point->data[i1 + ref_point->size[0] * i0] = f_ref_point->data[i1 +
            f_ref_point->size[0] * i0];
        }
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i0 = e_ref_point->size[0] * e_ref_point->size[1];
    e_ref_point->size[0] = ref_point->size[0];
    e_ref_point->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)e_ref_point, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    loop_ub = ref_point->size[0] * ref_point->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      e_ref_point->data[i0] = (ref_point->data[i0] < 1.0);
    }

    st.site = &i_emlrtRSI;
    eml_li_find(&st, e_ref_point, ii);
    idx = ref_point->size[0];
    loop_ub = ii->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i1 = idx << 1;
      ixstop = ii->data[i0];
      ref_point->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i1,
        &cb_emlrtBCI, sp) - 1] = 1.0;
    }

    loop_ub = ref_point->size[0];
    ix = Sp2->size[0];
    i0 = d_ref_point->size[0];
    d_ref_point->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)d_ref_point, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      d_ref_point->data[i0] = (ref_point->data[i0] > ix);
    }

    st.site = &j_emlrtRSI;
    b_eml_li_find(&st, d_ref_point, ii);
    idx = ref_point->size[0];
    ix = ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      i1 = ii->data[i0];
      ref_point->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, idx, &db_emlrtBCI,
        sp) - 1] = Sp2->size[0];
    }

    loop_ub = ref_point->size[0];
    ix = Sp2->size[1];
    i0 = c_ref_point->size[0];
    c_ref_point->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)c_ref_point, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      c_ref_point->data[i0] = (ref_point->data[i0 + ref_point->size[0]] > ix);
    }

    st.site = &k_emlrtRSI;
    b_eml_li_find(&st, c_ref_point, ii);
    idx = ref_point->size[0];
    ix = ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      i1 = ii->data[i0];
      ref_point->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, idx,
        &eb_emlrtBCI, sp) + ref_point->size[0]) - 1] = Sp2->size[1];
    }

    i0 = r6.val->size[0] * r6.val->size[1];
    r6.val->size[0] = ref_point->size[0];
    r6.val->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)r6.val, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = ref_point->size[0] * ref_point->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      r6.val->data[i0] = ref_point->data[i0];
    }

    ix = ref_set->size[1];
    i0 = ref_set->size[0] * ref_set->size[1];
    ref_set->size[1] = ix + 1;
    emxEnsureCapacity_struct_T(sp, ref_set, i0, &emlrtRTEI);
    emxCopyStruct_struct_T(sp, &ref_set->data[ix], &r6, &emlrtRTEI);
    i0 = sp_set2->size[1];
    st.site = &l_emlrtRSI;
    bspline_inv(&st, sp_set2->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1,
      i0, &fb_emlrtBCI, sp) - 1].val, ref_point, control_p, &b_error);
    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i0 = r5.x->size[0] * r5.x->size[1];
    r5.x->size[0] = loop_ub;
    r5.x->size[1] = ix;
    emxEnsureCapacity(sp, (emxArray__common *)r5.x, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ix; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        r5.x->data[i1 + r5.x->size[0] * i0] = control_p->data[i1 +
          control_p->size[0] * i0];
      }
    }

    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i0 = r5.y->size[0] * r5.y->size[1];
    r5.y->size[0] = loop_ub;
    r5.y->size[1] = ix;
    emxEnsureCapacity(sp, (emxArray__common *)r5.y, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ix; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        r5.y->data[i1 + r5.y->size[0] * i0] = control_p->data[(i1 +
          control_p->size[0] * i0) + control_p->size[0] * control_p->size[1]];
      }
    }

    st.site = &m_emlrtRSI;
    i0 = sp_set2->size[1];
    i1 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &t_emlrtBCI, &st);
    b_st.site = &gd_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    if (sp_set2->data[i].val->size[0] > 0) {
    } else {
      d_y = NULL;
      m0 = mxCreateCharArray(2, iv1);
      for (b_i = 0; b_i < 39; b_i++) {
        cv2[b_i] = cv3[b_i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m0, cv2);
      emlrtAssign(&d_y, m0);
      d_st.site = &er_emlrtRSI;
      e_st.site = &sr_emlrtRSI;
      error(&d_st, message(&e_st, d_y, &q_emlrtMCI), &r_emlrtMCI);
    }

    for (i0 = 0; i0 < 2; i0++) {
      outsz[i0] = sp_set2->data[i].val->size[i0];
    }

    bound_size[0] = 1;
    bound_size[1] = (int32_T)outsz[1];
    d_st.site = &tp_emlrtRSI;
    d_st.site = &tp_emlrtRSI;
    d_st.site = &up_emlrtRSI;
    f_st.site = &bq_emlrtRSI;
    ix = 0;
    iy = -1;
    d_st.site = &vp_emlrtRSI;
    f_st.site = &eb_emlrtRSI;
    for (b_i = 1; b_i <= sp_set2->data[i].val->size[1]; b_i++) {
      d_st.site = &wp_emlrtRSI;
      d_st.site = &xp_emlrtRSI;
      idx = ix;
      f_st.site = &gq_emlrtRSI;
      f_st.site = &gq_emlrtRSI;
      f_st.site = &fq_emlrtRSI;
      ixstop = ix + sp_set2->data[i].val->size[0];
      A = sp_set2->data[i].val->data[ix];
      if (sp_set2->data[i].val->size[0] > 1) {
        f_st.site = &nd_emlrtRSI;
        if (muDoubleScalarIsNaN(sp_set2->data[i].val->data[ix])) {
          f_st.site = &md_emlrtRSI;
          f_st.site = &md_emlrtRSI;
          if (ix + 2 > ixstop) {
            b_ix = FALSE;
          } else {
            b_ix = (ixstop > 2147483646);
          }

          if (b_ix) {
            g_st.site = &fb_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          loop_ub = ix + 1;
          exitg1 = FALSE;
          while ((exitg1 == FALSE) && (loop_ub + 1 <= ixstop)) {
            f_st.site = &eq_emlrtRSI;
            idx = loop_ub;
            f_st.site = &ld_emlrtRSI;
            if (!muDoubleScalarIsNaN(sp_set2->data[i].val->data[loop_ub])) {
              A = sp_set2->data[i].val->data[loop_ub];
              exitg1 = TRUE;
            } else {
              loop_ub++;
            }
          }
        }

        if (idx + 1 < ixstop) {
          f_st.site = &kd_emlrtRSI;
          f_st.site = &kd_emlrtRSI;
          if (idx + 2 > ixstop) {
            b_idx = FALSE;
          } else {
            b_idx = (ixstop > 2147483646);
          }

          if (b_idx) {
            g_st.site = &fb_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          for (loop_ub = idx + 1; loop_ub + 1 <= ixstop; loop_ub++) {
            f_st.site = &dq_emlrtRSI;
            f_st.site = &jd_emlrtRSI;
            if (sp_set2->data[i].val->data[loop_ub] < A) {
              A = sp_set2->data[i].val->data[loop_ub];
            }
          }
        }
      }

      d_st.site = &yp_emlrtRSI;
      iy++;
      outsz[iy] = A;
      d_st.site = &aq_emlrtRSI;
      ix += sp_set2->data[i].val->size[0];
    }

    i0 = sp_set2->size[1];
    st.site = &n_emlrtRSI;
    bspline(&st, sp_set2->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i0,
             &gb_emlrtBCI, sp) - 1].val, r5.x, r5.y, outsz, bound_size, r7);
    i0 = ref_p->size[0] * ref_p->size[1];
    ref_p->size[0] = r7->size[0];
    ref_p->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)ref_p, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    loop_ub = r7->size[0] * r7->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      A = muDoubleScalarRound(r7->data[i0]);
      if (A < 2.147483648E+9) {
        if (A >= -2.147483648E+9) {
          i1 = (int32_T)A;
        } else {
          i1 = MIN_int32_T;
        }
      } else if (A >= 2.147483648E+9) {
        i1 = MAX_int32_T;
      } else {
        i1 = 0;
      }

      ref_p->data[i0] = i1;
    }

    i0 = d_ref_p->size[0] * d_ref_p->size[1];
    d_ref_p->size[0] = ref_p->size[0];
    d_ref_p->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)d_ref_p, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    loop_ub = ref_p->size[0] * ref_p->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      d_ref_p->data[i0] = (ref_p->data[i0] < 1);
    }

    st.site = &o_emlrtRSI;
    eml_li_find(&st, d_ref_p, ii);
    idx = ref_p->size[0];
    loop_ub = ii->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i1 = idx << 1;
      ixstop = ii->data[i0];
      ref_p->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i1, &hb_emlrtBCI,
        sp) - 1] = 1;
    }

    loop_ub = ref_p->size[0];
    ix = Sp2->size[0];
    i0 = c_ref_p->size[0];
    c_ref_p->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)c_ref_p, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      c_ref_p->data[i0] = (ref_p->data[i0] > ix);
    }

    st.site = &p_emlrtRSI;
    b_eml_li_find(&st, c_ref_p, ii);
    idx = ref_p->size[0];
    ix = ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      i1 = ii->data[i0];
      ref_p->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, idx, &ib_emlrtBCI, sp)
        - 1] = Sp2->size[0];
    }

    loop_ub = ref_p->size[0];
    ix = Sp2->size[1];
    i0 = b_ref_p->size[0];
    b_ref_p->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)b_ref_p, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_ref_p->data[i0] = (ref_p->data[i0 + ref_p->size[0]] > ix);
    }

    st.site = &q_emlrtRSI;
    b_eml_li_find(&st, b_ref_p, ii);
    idx = ref_p->size[0];
    ix = ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      i1 = ii->data[i0];
      ref_p->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, idx, &jb_emlrtBCI,
        sp) + ref_p->size[0]) - 1] = Sp2->size[1];
    }

    st.site = &r_emlrtRSI;
    getPixelsValue(&st, Ref, ref_p, val_p);
    st.site = &s_emlrtRSI;
    i0 = ref_p->size[0] * ref_p->size[1];
    ref_p->size[0] = ref_point->size[0];
    ref_p->size[1] = 2;
    emxEnsureCapacity(&st, (emxArray__common *)ref_p, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    loop_ub = ref_point->size[0] * ref_point->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      A = muDoubleScalarRound(ref_point->data[i0]);
      if (A < 2.147483648E+9) {
        if (A >= -2.147483648E+9) {
          i1 = (int32_T)A;
        } else {
          i1 = MIN_int32_T;
        }
      } else if (A >= 2.147483648E+9) {
        i1 = MAX_int32_T;
      } else {
        i1 = 0;
      }

      ref_p->data[i0] = i1;
    }

    ix = ref_p->size[0];
    i0 = val_o->size[0] * val_o->size[1];
    val_o->size[0] = ix;
    val_o->size[1] = 3;
    emxEnsureCapacity(&st, (emxArray__common *)val_o, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = ref_p->size[0] * 3;
    for (i0 = 0; i0 < loop_ub; i0++) {
      val_o->data[i0] = 0.0;
    }

    b_i = 1;
    while (b_i - 1 <= ref_p->size[0] - 1) {
      ix = val_o->size[0];
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, ix, &u_emlrtBCI, &st);
      idx = Ref->size[0];
      for (i0 = 0; i0 < 3; i0++) {
        i1 = Ref->size[0];
        ixstop = ref_p->size[0];
        ixstop = ref_p->data[emlrtDynamicBoundsCheckFastR2012b(b_i, 1, ixstop,
          &mb_emlrtBCI, &st) - 1];
        iy = Ref->size[1];
        ix = ref_p->size[0];
        ix = ref_p->data[(emlrtDynamicBoundsCheckFastR2012b(b_i, 1, ix,
          &ob_emlrtBCI, &st) + ref_p->size[0]) - 1];
        val_o->data[(b_i + val_o->size[0] * i0) - 1] = Ref->data
          [(emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i1, &lb_emlrtBCI, &st)
            + idx * (emlrtDynamicBoundsCheckFastR2012b(ix, 1, iy, &nb_emlrtBCI,
              &st) - 1)) - 1];
      }

      b_i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      c_val_p[i0] = val_p->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_val_o[i0] = val_o->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(c_val_p, b_val_o, &d_emlrtECI, sp);
    i0 = b_val_p->size[0] * b_val_p->size[1];
    b_val_p->size[0] = val_p->size[0];
    b_val_p->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b_val_p, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = val_p->size[0] * val_p->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_val_p->data[i0] = val_p->data[i0] - val_o->data[i0];
    }

    st.site = &t_emlrtRSI;
    c_power(&st, b_val_p, val_p);
    st.site = &t_emlrtRSI;
    b_sum(&st, val_p, b_x);
    st.site = &t_emlrtRSI;
    A = b_x[0];
    for (ix = 0; ix < 2; ix++) {
      A += b_x[ix + 1];
    }

    st.site = &t_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    i0 = error_set->size[0];
    error_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i0, &kb_emlrtBCI,
      sp) - 1] = A / (real_T)sp_set2->data[i].val->size[0];
    ix = bspline_set->size[1];
    i0 = bspline_set->size[0] * bspline_set->size[1];
    bspline_set->size[1] = ix + 1;
    b_emxEnsureCapacity_struct_T(sp, bspline_set, i0, &emlrtRTEI);
    b_emxCopyStruct_struct_T(sp, &bspline_set->data[ix], &r5, &emlrtRTEI);
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&f_ref_point);
  emxFree_boolean_T(&e_ref_point);
  emxFree_boolean_T(&d_ref_point);
  emxFree_boolean_T(&c_ref_point);
  emxFree_boolean_T(&d_ref_p);
  emxFree_boolean_T(&c_ref_p);
  emxFree_boolean_T(&b_ref_p);
  emxFree_real_T(&b_val_p);
  emxFree_real_T(&r7);
  emxFree_int32_T(&ii);
  emxFreeStruct_struct_T(&r6);
  b_emxFreeStruct_struct_T(&r5);
  emxFree_real_T(&control_p);
  emxFree_real_T(&val_o);
  emxFree_real_T(&val_p);
  emxFree_int32_T(&ref_p);
  emxFree_real_T(&ref_point);
  b_emxInit_real_T(sp, &error_set2, 1, &k_emlrtRTEI, TRUE);
  emxInit_struct_T(sp, &ref_set2, 2, &l_emlrtRTEI, TRUE);
  b_emxInit_struct_T(sp, &bspline_set2, 2, &m_emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &r8, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &r9, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &r10, &emlrtRTEI, TRUE);
  st.site = &u_emlrtRSI;
  b_eml_null_assignment(&st, bspline_set);
  st.site = &v_emlrtRSI;
  eml_null_assignment(&st, ref_set);

  /* % remove surfaces with too big error */
  i0 = error_set2->size[0];
  error_set2->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)error_set2, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  emlrtDimSizeGeqCheckFastR2012b(2, 0, &h_emlrtECI, sp);
  i0 = r8.val->size[0] * r8.val->size[1];
  r8.val->size[0] = 0;
  r8.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r8.val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = sp_set2->size[0] * sp_set2->size[1];
  sp_set2->size[0] = 1;
  sp_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, sp_set2, i0, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &sp_set2->data[0], &r8, &emlrtRTEI);
  i0 = sp_val2->size[0];
  sp_val2->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  emlrtDimSizeGeqCheckFastR2012b(2, 0, &i_emlrtECI, sp);
  i0 = r10.val->size[0] * r10.val->size[1];
  r10.val->size[0] = 0;
  r10.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r10.val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = ref_set2->size[0] * ref_set2->size[1];
  ref_set2->size[0] = 1;
  ref_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, ref_set2, i0, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &ref_set2->data[0], &r10, &emlrtRTEI);
  i0 = r9.x->size[0] * r9.x->size[1];
  r9.x->size[0] = 0;
  r9.x->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r9.x, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = r9.y->size[0] * r9.y->size[1];
  r9.y->size[0] = 0;
  r9.y->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r9.y, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = bspline_set2->size[0] * bspline_set2->size[1];
  bspline_set2->size[0] = 1;
  bspline_set2->size[1] = 1;
  b_emxEnsureCapacity_struct_T(sp, bspline_set2, i0, &emlrtRTEI);
  b_emxCopyStruct_struct_T(sp, &bspline_set2->data[0], &r9, &emlrtRTEI);
  i = 1;
  emxFreeStruct_struct_T(&r10);
  b_emxFreeStruct_struct_T(&r9);
  emxFreeStruct_struct_T(&r8);
  while (i - 1 <= surface_amount - 1) {
    i0 = error_set->size[0];
    if (error_set->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &v_emlrtBCI,
         sp) - 1] < 100.0) {
      ix = error_set2->size[0];
      i0 = error_set2->size[0];
      error_set2->size[0] = ix + 1;
      emxEnsureCapacity(sp, (emxArray__common *)error_set2, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i0 = error_set->size[0];
      error_set2->data[ix] = error_set->data[emlrtDynamicBoundsCheckFastR2012b(i,
        1, i0, &w_emlrtBCI, sp) - 1];
      ix = sp_set2->size[1];
      i0 = sp_set2->size[0] * sp_set2->size[1];
      sp_set2->size[1] = ix + 1;
      emxEnsureCapacity_struct_T(sp, sp_set2, i0, &emlrtRTEI);
      i0 = sp_set->size[1];
      emxCopyStruct_struct_T(sp, &sp_set2->data[ix], &sp_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &x_emlrtBCI, sp) - 1],
        &emlrtRTEI);
      ix = bspline_set2->size[1];
      i0 = bspline_set2->size[0] * bspline_set2->size[1];
      bspline_set2->size[1] = ix + 1;
      b_emxEnsureCapacity_struct_T(sp, bspline_set2, i0, &emlrtRTEI);
      i0 = bspline_set->size[1];
      b_emxCopyStruct_struct_T(sp, &bspline_set2->data[ix], &bspline_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &y_emlrtBCI, sp) - 1],
        &emlrtRTEI);
      ix = sp_val2->size[0];
      i0 = sp_val2->size[0];
      sp_val2->size[0] = ix + 1;
      emxEnsureCapacity(sp, (emxArray__common *)sp_val2, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i0 = sp_val->size[0];
      sp_val2->data[ix] = sp_val->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i0, &ab_emlrtBCI, sp) - 1];
      ix = ref_set2->size[1];
      i0 = ref_set2->size[0] * ref_set2->size[1];
      ref_set2->size[1] = ix + 1;
      emxEnsureCapacity_struct_T(sp, ref_set2, i0, &emlrtRTEI);
      i0 = ref_set->size[1];
      emxCopyStruct_struct_T(sp, &ref_set2->data[ix], &ref_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bb_emlrtBCI, sp) - 1],
        &emlrtRTEI);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&error_set);
  st.site = &w_emlrtRSI;
  eml_null_assignment(&st, sp_set2);
  st.site = &x_emlrtRSI;
  b_eml_null_assignment(&st, bspline_set2);
  st.site = &y_emlrtRSI;
  eml_null_assignment(&st, ref_set2);
  i0 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = sp_set2->size[1];
  emxEnsureCapacity_struct_T(sp, sp_set, i0, &emlrtRTEI);
  loop_ub = sp_set2->size[0] * sp_set2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    emxCopyStruct_struct_T(sp, &sp_set->data[i0], &sp_set2->data[i0], &emlrtRTEI);
  }

  emxFree_struct_T(&sp_set2);
  iy = sp_val2->size[0];
  i0 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)sp_val, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = sp_val2->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sp_val->data[i0] = sp_val2->data[i0];
  }

  emxFree_real_T(&sp_val2);
  i0 = bspline_set->size[0] * bspline_set->size[1];
  bspline_set->size[0] = 1;
  bspline_set->size[1] = bspline_set2->size[1];
  b_emxEnsureCapacity_struct_T(sp, bspline_set, i0, &emlrtRTEI);
  loop_ub = bspline_set2->size[0] * bspline_set2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_emxCopyStruct_struct_T(sp, &bspline_set->data[i0], &bspline_set2->data[i0],
      &emlrtRTEI);
  }

  b_emxFree_struct_T(&bspline_set2);
  st.site = &ab_emlrtRSI;
  sum(&st, error_set2);
  i0 = ref_set->size[0] * ref_set->size[1];
  ref_set->size[0] = 1;
  ref_set->size[1] = ref_set2->size[1];
  emxEnsureCapacity_struct_T(sp, ref_set, i0, &emlrtRTEI);
  loop_ub = ref_set2->size[0] * ref_set2->size[1];
  emxFree_real_T(&error_set2);
  for (i0 = 0; i0 < loop_ub; i0++) {
    emxCopyStruct_struct_T(sp, &ref_set->data[i0], &ref_set2->data[i0],
      &emlrtRTEI);
  }

  emxFree_struct_T(&ref_set2);

  /* { */
  /* figure;  */
  /* subplot(1,2,1); */
  /* imshow(result); */
  /* subplot(1,2,2); */
  /* imshow(result2); */
  /* } */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (segmentation.c) */