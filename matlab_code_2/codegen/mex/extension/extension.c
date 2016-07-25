/*
 * extension.c
 *
 * Code generation for function 'extension'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "repmat.h"
#include "sum.h"
#include "sin.h"
#include "cos.h"
#include "mean.h"
#include "rdivide.h"
#include "power.h"
#include "abs.h"
#include "extension_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "sortrows.h"
#include "std.h"
#include "getPixelsValue.h"
#include "bspline_single.h"
#include "bspline_inv.h"
#include "bspline.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo b_emlrtRSI = { 38, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo c_emlrtRSI = { 45, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo d_emlrtRSI = { 46, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo e_emlrtRSI = { 50, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo f_emlrtRSI = { 52, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo g_emlrtRSI = { 53, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo h_emlrtRSI = { 54, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo i_emlrtRSI = { 55, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo j_emlrtRSI = { 58, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo k_emlrtRSI = { 59, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo l_emlrtRSI = { 60, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo m_emlrtRSI = { 61, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo n_emlrtRSI = { 62, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo o_emlrtRSI = { 76, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo p_emlrtRSI = { 77, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo q_emlrtRSI = { 80, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo r_emlrtRSI = { 81, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo s_emlrtRSI = { 88, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo t_emlrtRSI = { 89, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo u_emlrtRSI = { 101, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo v_emlrtRSI = { 102, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo w_emlrtRSI = { 106, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo x_emlrtRSI = { 108, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo y_emlrtRSI = { 110, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo ab_emlrtRSI = { 111, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo bb_emlrtRSI = { 113, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo cb_emlrtRSI = { 114, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo db_emlrtRSI = { 127, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo eb_emlrtRSI = { 164, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo fb_emlrtRSI = { 178, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo gb_emlrtRSI = { 185, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRSInfo xc_emlrtRSI = { 93, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo yc_emlrtRSI = { 94, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ad_emlrtRSI = { 97, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo bd_emlrtRSI = { 99, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo cd_emlrtRSI = { 100, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo dd_emlrtRSI = { 101, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ed_emlrtRSI = { 105, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo fd_emlrtRSI = { 16, "eml_matrix_npages",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"
};

static emlrtRSInfo id_emlrtRSI = { 223, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ld_emlrtRSI = { 197, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo od_emlrtRSI = { 177, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo pd_emlrtRSI = { 178, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo gg_emlrtRSI = { 23, "union",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/union.m" };

static emlrtRSInfo hg_emlrtRSI = { 65, "eml_setop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo li_emlrtRSI = { 19, "setdiff",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/setdiff.m" };

static emlrtRSInfo mi_emlrtRSI = { 15, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ni_emlrtRSI = { 16, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo oi_emlrtRSI = { 52, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo pi_emlrtRSI = { 73, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo si_emlrtRSI = { 184, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ti_emlrtRSI = { 187, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ui_emlrtRSI = { 189, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo vi_emlrtRSI = { 192, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo wi_emlrtRSI = { 103, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo xi_emlrtRSI = { 104, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo aj_emlrtRSI = { 18, "min",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo bj_emlrtRSI = { 15, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo nx_emlrtRSI = { 10, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ox_emlrtRSI = { 11, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo px_emlrtRSI = { 56, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo sx_emlrtRSI = { 118, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo tx_emlrtRSI = { 117, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ux_emlrtRSI = { 116, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo v_emlrtMCI = { 53, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo w_emlrtMCI = { 52, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo x_emlrtMCI = { 196, 1, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo gb_emlrtMCI = { 57, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo hb_emlrtMCI = { 56, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo ib_emlrtMCI = { 125, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 57, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo y_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo ic_emlrtRTEI = { 83, 1, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRTEInfo jc_emlrtRTEI = { 38, 43, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 178, 45, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 44, 22, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo mc_emlrtRTEI = { 167, 13, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 17, 1, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 36, 5, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 37, 5, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 38, 5, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 43, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo sc_emlrtRTEI = { 45, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo tc_emlrtRTEI = { 46, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo uc_emlrtRTEI = { 49, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 50, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 69, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo xc_emlrtRTEI = { 70, 9, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtRTEInfo cd_emlrtRTEI = { 118, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 19, 25, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 36, 15, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 36, 32, ":", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 37, 15, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 37, 32, ":", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 38, 28, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 38, 43, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 38, 63, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo fb_emlrtECI = { 1, 43, 29, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 44, 22, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 45, 21, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo gb_emlrtECI = { 1, 49, 26, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo hb_emlrtECI = { 2, 50, 17, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo ib_emlrtECI = { 2, 53, 23, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo jb_emlrtECI = { -1, 60, 15, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo kb_emlrtECI = { -1, 61, 16, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 21, 16, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 21, 33, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 21, 37, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 21, 54, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo lb_emlrtECI = { -1, 62, 15, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 76, 37, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo mb_emlrtECI = { 2, 76, 24, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo nb_emlrtECI = { -1, 77, 30, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 80, 49, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 81, 49, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 86, 36, "single_ref_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 88, 46, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 88, 65, "superpixel", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 106, 56, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo ob_emlrtECI = { 2, 145, 25, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 158, 30, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtECInfo pb_emlrtECI = { 1, 158, 52, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo qb_emlrtECI = { 2, 158, 29, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtECInfo rb_emlrtECI = { 1, 161, 50, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m" };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 177, 25, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 178, 30, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 178, 45, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 178, 65, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 182, 14, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 182, 31, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo ab_emlrtDCI = { 182, 14, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 182, 14, "Corr", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 182, 35, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 182, 52, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo bb_emlrtDCI = { 182, 35, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 182, 35, "Corr", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 182, 28, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 182, 49, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 182, 77, "single_ref_set",
  "extension", "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 182, 99, "single_ref_set",
  "extension", "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 62, 15, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo cb_emlrtDCI = { 62, 15, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 158, 13, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 164, 46, "sp_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 167, 13, "bspline_set", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 140, 43, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 141, 43, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 142, 24, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo db_emlrtDCI = { 142, 24, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 142, 30, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 142, 36, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo eb_emlrtDCI = { 142, 36, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 142, 42, "omega", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 21, 16, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo fb_emlrtDCI = { 21, 16, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 21, 30, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 21, 37, "Sp_new", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtDCInfo gb_emlrtDCI = { 21, 37, "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 1 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 21, 51, "j", "extension",
  "F:/Git/correspondence/matlab_code_2/extension.m", 0 };

static emlrtRSInfo vx_emlrtRSI = { 125, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo wx_emlrtRSI = { 196, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo jy_emlrtRSI = { 57, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ky_emlrtRSI = { 53, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

/* Function Declarations */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);

/* Function Definitions */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv114[2] = { 1, 31 };

  const mxArray *m19;
  char_T cv45[31];
  int32_T i;
  static const char_T cv46[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &nx_emlrtRSI;
  b_st.site = &px_emlrtRSI;
  overflow = TRUE;
  if (1 > x->size[1]) {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m19 = mxCreateCharArray(2, iv114);
    for (i = 0; i < 31; i++) {
      cv45[i] = cv46[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m19, cv45);
    emlrtAssign(&y, m19);
    b_st.site = &px_emlrtRSI;
    d_st.site = &jy_emlrtRSI;
    error(&b_st, b_message(&d_st, y, &gb_emlrtMCI), &hb_emlrtMCI);
  }

  st.site = &ox_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &ux_emlrtRSI;
  b_st.site = &tx_emlrtRSI;
  if (1 > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 1; k <= i; k++) {
    b_st.site = &sx_emlrtRSI;
    emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &cd_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m19 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m19);
    b_st.site = &vx_emlrtRSI;
    error(&b_st, b_y, &ib_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_struct_T(&st, &b_x, 2, &y_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity_struct_T(&st, b_x, k, &y_emlrtRTEI);
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &y_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_struct_T(&st, x, k, &y_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->size[0]
      * k], &y_emlrtRTEI);
  }

  emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv113[2] = { 1, 31 };

  const mxArray *m18;
  char_T cv43[31];
  static const char_T cv44[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &mi_emlrtRSI;
  b_st.site = &oi_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  i = idx->size[0];
  while ((i >= 1) && (!idx->data[i - 1])) {
    i--;
  }

  c_st.site = &pi_emlrtRSI;
  if (i <= x->size[0]) {
  } else {
    y = NULL;
    m18 = mxCreateCharArray(2, iv113);
    for (i = 0; i < 31; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m18, cv43);
    emlrtAssign(&y, m18);
    b_st.site = &oi_emlrtRSI;
    e_st.site = &ky_emlrtRSI;
    error(&b_st, b_message(&e_st, y, &v_emlrtMCI), &w_emlrtMCI);
  }

  st.site = &ni_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b = 0;
  c_st.site = &wi_emlrtRSI;
  if (1 > idx->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (idx->size[0] > 2147483646);
  }

  if (overflow) {
    d_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= idx->size[0]; k++) {
    c_st.site = &xi_emlrtRSI;
    b += idx->data[k - 1];
  }

  b_st.site = &si_emlrtRSI;
  nrows = x->size[0] - b;
  i = 0;
  b = x->size[0];
  b_st.site = &ti_emlrtRSI;
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

  for (k = 1; k <= b; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      b_st.site = &ui_emlrtRSI;
      c_st.site = &tc_emlrtRSI;
      for (j = 0; j < 2; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      b_st.site = &vi_emlrtRSI;
      i++;
    }
  }

  if (nrows <= x->size[0]) {
  } else {
    b_y = NULL;
    m18 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m18);
    b_st.site = &wx_emlrtRSI;
    error(&b_st, b_y, &x_emlrtMCI);
  }

  if (1 > nrows) {
    i = 0;
  } else {
    i = nrows;
  }

  emxInit_real_T(&st, &b_x, 2, &y_emlrtRTEI, TRUE);
  b = b_x->size[0] * b_x->size[1];
  b_x->size[0] = i;
  b_x->size[1] = 2;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, b, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  for (b = 0; b < 2; b++) {
    for (k = 0; k < i; k++) {
      b_x->data[k + b_x->size[0] * b] = x->data[k + x->size[0] * b];
    }
  }

  b = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = 2;
  emxEnsureCapacity(&st, (emxArray__common *)x, b, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
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
               emxArray_real_T *errors, emxArray_struct_T *ref_set,
               emxArray_real_T *Corr)
{
  emxArray_real_T *Sp_new;
  int32_T surface_amount;
  int32_T iy;
  int32_T i32;
  int32_T ix;
  int32_T i;
  int32_T i33;
  int32_T j;
  real_T e;
  int32_T ixstart;
  real_T patch[147];
  real_T dv0[49];
  static const int8_T iv101[49] = { -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2,
    -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3 };

  emxArray_real_T *temp_sx;
  emxArray_real_T *temp_sy;
  emxArray_real_T *temp_ref_set;
  emxArray_real_T *superpixel;
  emxArray_real_T *bound;
  emxArray_real_T *single_ref_set;
  emxArray_real_T *changed;
  emxArray_real_T *omega;
  emxArray_real_T *temp_rx;
  emxArray_real_T *temp_ry;
  emxArray_real_T *control_p;
  emxArray_boolean_T *r31;
  emxArray_boolean_T *r32;
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
  emxArray_boolean_T *r33;
  emxArray_real_T *b_omega;
  emxArray_real_T *c_omega;
  emxArray_real_T *b_changed;
  struct_T b_sp_set;
  emxArray_real_T *b_temp_ref_set;
  boolean_T modified;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv102[2] = { 1, 36 };

  const mxArray *m17;
  char_T cv39[36];
  int32_T b_i;
  static const char_T cv40[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv103[2] = { 1, 39 };

  char_T cv41[39];
  static const char_T cv42[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T outsz[2];
  int32_T ixstop;
  boolean_T b_ix;
  int32_T c_ix;
  boolean_T exitg4;
  boolean_T b_ixstart;
  const mxArray *c_y;
  static const int32_T iv104[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv105[2] = { 1, 39 };

  boolean_T d_ix;
  boolean_T exitg3;
  boolean_T c_ixstart;
  int32_T c_changed[2];
  int32_T d_omega[2];
  real_T d7;
  real_T dv1[2];
  int32_T ib_size[1];
  int32_T ib_data[1];
  real_T omega_data[2];
  int32_T omega_size[2];
  const mxArray *e_y;
  static const int32_T iv106[2] = { 1, 36 };

  const mxArray *f_y;
  static const int32_T iv107[2] = { 1, 39 };

  boolean_T exitg2;
  real_T temp2[2];
  real_T jacobian[4];
  boolean_T b_outsz[2];
  real_T b_error;
  int8_T refp_size[2];
  real_T scale[4];
  real_T d8;
  real_T d9;
  real_T rotate[4];
  real_T b_rotate[4];
  real_T jacobian_d[4];
  real_T b_omega_data[3];
  real_T tmp_data[147];
  real_T b_patch[147];
  real_T Ps[147];
  int8_T iv108[2];
  real_T b_jacobian_d[9];
  static const int8_T iv109[3] = { 0, 0, 1 };

  real_T Pt[147];
  int8_T iv110[2];
  int8_T refp_data[2];
  real_T c_error;
  struct_T r34;
  struct_T r35;
  b_struct_T f_expl_temp;
  const mxArray *g_y;
  static const int32_T iv111[2] = { 1, 36 };

  const mxArray *h_y;
  static const int32_T iv112[2] = { 1, 39 };

  boolean_T e_ix;
  boolean_T exitg1;
  boolean_T d_ixstart;
  real_T b_single_ref_set[2];
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
  ix = Sp2->size[0] * Sp2->size[1];
  for (i32 = 0; i32 < ix; i32++) {
    Sp_new->data[i32] = 0.0;
  }

  i = 0;
  while (i <= sp_set->size[1] - 1) {
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &ac_emlrtBCI, sp);
    j = 1;
    while (j - 1 <= sp_set->data[i].val->size[0] - 1) {
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &kc_emlrtBCI, sp);
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &mc_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i32, &lc_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i32, &nc_emlrtBCI, sp);
      i32 = Sp_new->size[0];
      i33 = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i33,
        &wd_emlrtBCI, sp) - 1];
      i33 = (int32_T)emlrtIntegerCheckFastR2012b(e, &fb_emlrtDCI, sp);
      ixstart = Sp_new->size[1];
      iy = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j, 1, iy,
        &yd_emlrtBCI, sp) + sp_set->data[i].val->size[0]) - 1];
      iy = (int32_T)emlrtIntegerCheckFastR2012b(e, &gb_emlrtDCI, sp);
      Sp_new->data[(emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &vd_emlrtBCI,
        sp) + Sp_new->size[0] * (emlrtDynamicBoundsCheckFastR2012b(iy, 1,
        ixstart, &xd_emlrtBCI, sp) - 1)) - 1] = 1.0 + (real_T)i;
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /* % adjacent patch */
  memset(&patch[0], 0, 147U * sizeof(real_T));
  st.site = &emlrtRSI;
  repmat(dv0);
  for (i32 = 0; i32 < 49; i32++) {
    patch[3 * i32] = dv0[i32];
    patch[1 + 3 * i32] = iv101[i32];
    patch[2 + 3 * i32] = 1.0;
  }

  /* % extension */
  i32 = errors->size[0];
  errors->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)errors, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = 0;
  b_emxInit_real_T(sp, &temp_sx, 1, &oc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_sy, 1, &pc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &temp_ref_set, 2, &qc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &superpixel, 2, &rc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &bound, 2, &sc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &single_ref_set, 2, &tc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &changed, 2, &uc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &omega, 2, &vc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_rx, 1, &wc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &temp_ry, 1, &xc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &control_p, 3, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r31, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r32, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &varargin_2, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &varargin_1, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &ia, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &ib, 1, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, &jc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &b_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &c_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &d_expl_temp, &lc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &e_expl_temp, &mc_emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &b_Sp_new, 1, &emlrtRTEI, TRUE);
  emxInit_boolean_T(sp, &r33, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_omega, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_omega, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_changed, 2, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &b_sp_set, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_temp_ref_set, 2, &emlrtRTEI, TRUE);
  while (i <= surface_amount - 1) {
    modified = TRUE;
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &bc_emlrtBCI, sp);
    i32 = sp_set->data[i].val->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i32, &cc_emlrtBCI, sp);
    ix = sp_set->data[i].val->size[0];
    i32 = temp_sx->size[0];
    temp_sx->size[0] = ix;
    emxEnsureCapacity(sp, (emxArray__common *)temp_sx, i32, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i32 = 0; i32 < ix; i32++) {
      temp_sx->data[i32] = sp_set->data[i].val->data[i32];
    }

    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &dc_emlrtBCI, sp);
    i32 = sp_set->data[i].val->size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i32, &ec_emlrtBCI, sp);
    ix = sp_set->data[i].val->size[0];
    i32 = temp_sy->size[0];
    temp_sy->size[0] = ix;
    emxEnsureCapacity(sp, (emxArray__common *)temp_sy, i32, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i32 = 0; i32 < ix; i32++) {
      temp_sy->data[i32] = sp_set->data[i].val->data[i32 + sp_set->data[i]
        .val->size[0]];
    }

    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &fc_emlrtBCI, sp);
    i32 = bspline_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &gc_emlrtBCI, sp);
    st.site = &b_emlrtRSI;
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &hc_emlrtBCI, &st);
    b_st.site = &vc_emlrtRSI;
    c_st.site = &wc_emlrtRSI;
    if (((sp_set->data[i].val->size[0] == 1) && (sp_set->data[i].val->size[1] ==
          1)) || (sp_set->data[i].val->size[0] != 1)) {
      overflow = TRUE;
    } else {
      overflow = FALSE;
    }

    if (overflow) {
    } else {
      y = NULL;
      m17 = mxCreateCharArray(2, iv102);
      for (b_i = 0; b_i < 36; b_i++) {
        cv39[b_i] = cv40[b_i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m17, cv39);
      emlrtAssign(&y, m17);
      d_st.site = &yx_emlrtRSI;
      e_st.site = &my_emlrtRSI;
      error(&d_st, b_message(&e_st, y, &c_emlrtMCI), &d_emlrtMCI);
    }

    if (sp_set->data[i].val->size[0] > 0) {
    } else {
      b_y = NULL;
      m17 = mxCreateCharArray(2, iv103);
      for (b_i = 0; b_i < 39; b_i++) {
        cv41[b_i] = cv42[b_i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m17, cv41);
      emlrtAssign(&b_y, m17);
      d_st.site = &xx_emlrtRSI;
      e_st.site = &ly_emlrtRSI;
      error(&d_st, b_message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
    }

    for (i32 = 0; i32 < 2; i32++) {
      outsz[i32] = sp_set->data[i].val->size[i32];
    }

    i32 = bound->size[0] * bound->size[1];
    bound->size[0] = 1;
    bound->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)bound, i32, (int32_T)sizeof
                      (real_T), &ic_emlrtRTEI);
    d_st.site = &xc_emlrtRSI;
    d_st.site = &xc_emlrtRSI;
    d_st.site = &yc_emlrtRSI;
    f_st.site = &fd_emlrtRSI;
    ix = 0;
    iy = -1;
    d_st.site = &ad_emlrtRSI;
    f_st.site = &tc_emlrtRSI;
    if (1 > sp_set->data[i].val->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (sp_set->data[i].val->size[1] > 2147483646);
    }

    if (overflow) {
      f_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (b_i = 1; b_i <= sp_set->data[i].val->size[1]; b_i++) {
      d_st.site = &bd_emlrtRSI;
      d_st.site = &cd_emlrtRSI;
      ixstart = ix;
      f_st.site = &pd_emlrtRSI;
      f_st.site = &pd_emlrtRSI;
      f_st.site = &od_emlrtRSI;
      ixstop = ix + sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[ix];
      if (sp_set->data[i].val->size[0] > 1) {
        f_st.site = &nd_emlrtRSI;
        if (muDoubleScalarIsNaN(sp_set->data[i].val->data[ix])) {
          f_st.site = &md_emlrtRSI;
          f_st.site = &md_emlrtRSI;
          if (ix + 2 > ixstop) {
            b_ix = FALSE;
          } else {
            b_ix = (ixstop > 2147483646);
          }

          if (b_ix) {
            g_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          c_ix = ix + 1;
          exitg4 = FALSE;
          while ((exitg4 == FALSE) && (c_ix + 1 <= ixstop)) {
            f_st.site = &ld_emlrtRSI;
            ixstart = c_ix;
            f_st.site = &kd_emlrtRSI;
            if (!muDoubleScalarIsNaN(sp_set->data[i].val->data[c_ix])) {
              e = sp_set->data[i].val->data[c_ix];
              exitg4 = TRUE;
            } else {
              c_ix++;
            }
          }
        }

        if (ixstart + 1 < ixstop) {
          f_st.site = &jd_emlrtRSI;
          f_st.site = &jd_emlrtRSI;
          if (ixstart + 2 > ixstop) {
            b_ixstart = FALSE;
          } else {
            b_ixstart = (ixstop > 2147483646);
          }

          if (b_ixstart) {
            g_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
            f_st.site = &id_emlrtRSI;
            f_st.site = &hd_emlrtRSI;
            if (sp_set->data[i].val->data[c_ix] < e) {
              e = sp_set->data[i].val->data[c_ix];
            }
          }
        }
      }

      d_st.site = &dd_emlrtRSI;
      iy++;
      bound->data[iy] = e;
      d_st.site = &ed_emlrtRSI;
      ix += sp_set->data[i].val->size[0];
    }

    b_emxCopyStruct_struct_T(sp, &expl_temp, &bspline_set->data[i],
      &jc_emlrtRTEI);
    st.site = &b_emlrtRSI;
    bspline(&st, sp_set->data[i].val, expl_temp.x, expl_temp.y, bound,
            temp_ref_set);
    while (modified) {
      modified = FALSE;

      /* superpixel = sp_set(i).val; */
      iy = temp_sx->size[0];
      ixstop = temp_sy->size[0];
      emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &fb_emlrtECI, sp);
      iy = temp_sx->size[0];
      ixstop = temp_sy->size[0];
      i32 = superpixel->size[0] * superpixel->size[1];
      superpixel->size[0] = iy;
      superpixel->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)superpixel, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < iy; i32++) {
        superpixel->data[i32] = temp_sx->data[i32];
      }

      for (i32 = 0; i32 < ixstop; i32++) {
        superpixel->data[i32 + superpixel->size[0]] = temp_sy->data[i32];
      }

      i32 = bspline_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &ic_emlrtBCI, sp);
      st.site = &c_emlrtRSI;
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &jc_emlrtBCI, &st);
      b_st.site = &vc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;
      if (((sp_set->data[i].val->size[0] == 1) && (sp_set->data[i].val->size[1] ==
            1)) || (sp_set->data[i].val->size[0] != 1)) {
        overflow = TRUE;
      } else {
        overflow = FALSE;
      }

      if (overflow) {
      } else {
        c_y = NULL;
        m17 = mxCreateCharArray(2, iv104);
        for (b_i = 0; b_i < 36; b_i++) {
          cv39[b_i] = cv40[b_i];
        }

        emlrtInitCharArrayR2013a(&c_st, 36, m17, cv39);
        emlrtAssign(&c_y, m17);
        d_st.site = &yx_emlrtRSI;
        e_st.site = &my_emlrtRSI;
        error(&d_st, b_message(&e_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      if (sp_set->data[i].val->size[0] > 0) {
      } else {
        d_y = NULL;
        m17 = mxCreateCharArray(2, iv105);
        for (b_i = 0; b_i < 39; b_i++) {
          cv41[b_i] = cv42[b_i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m17, cv41);
        emlrtAssign(&d_y, m17);
        d_st.site = &xx_emlrtRSI;
        e_st.site = &ly_emlrtRSI;
        error(&d_st, b_message(&e_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
      }

      for (i32 = 0; i32 < 2; i32++) {
        outsz[i32] = sp_set->data[i].val->size[i32];
      }

      i32 = bound->size[0] * bound->size[1];
      bound->size[0] = 1;
      bound->size[1] = (int32_T)outsz[1];
      emxEnsureCapacity(&c_st, (emxArray__common *)bound, i32, (int32_T)sizeof
                        (real_T), &ic_emlrtRTEI);
      d_st.site = &xc_emlrtRSI;
      d_st.site = &xc_emlrtRSI;
      d_st.site = &yc_emlrtRSI;
      f_st.site = &fd_emlrtRSI;
      ix = 0;
      iy = -1;
      d_st.site = &ad_emlrtRSI;
      f_st.site = &tc_emlrtRSI;
      if (1 > sp_set->data[i].val->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (sp_set->data[i].val->size[1] > 2147483646);
      }

      if (overflow) {
        f_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (b_i = 1; b_i <= sp_set->data[i].val->size[1]; b_i++) {
        d_st.site = &bd_emlrtRSI;
        d_st.site = &cd_emlrtRSI;
        ixstart = ix;
        f_st.site = &pd_emlrtRSI;
        f_st.site = &pd_emlrtRSI;
        f_st.site = &od_emlrtRSI;
        ixstop = ix + sp_set->data[i].val->size[0];
        e = sp_set->data[i].val->data[ix];
        if (sp_set->data[i].val->size[0] > 1) {
          f_st.site = &nd_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[i].val->data[ix])) {
            f_st.site = &md_emlrtRSI;
            f_st.site = &md_emlrtRSI;
            if (ix + 2 > ixstop) {
              d_ix = FALSE;
            } else {
              d_ix = (ixstop > 2147483646);
            }

            if (d_ix) {
              g_st.site = &uc_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            c_ix = ix + 1;
            exitg3 = FALSE;
            while ((exitg3 == FALSE) && (c_ix + 1 <= ixstop)) {
              f_st.site = &ld_emlrtRSI;
              ixstart = c_ix;
              f_st.site = &kd_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[i].val->data[c_ix])) {
                e = sp_set->data[i].val->data[c_ix];
                exitg3 = TRUE;
              } else {
                c_ix++;
              }
            }
          }

          if (ixstart + 1 < ixstop) {
            f_st.site = &jd_emlrtRSI;
            f_st.site = &jd_emlrtRSI;
            if (ixstart + 2 > ixstop) {
              c_ixstart = FALSE;
            } else {
              c_ixstart = (ixstop > 2147483646);
            }

            if (c_ixstart) {
              g_st.site = &uc_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
              f_st.site = &id_emlrtRSI;
              f_st.site = &hd_emlrtRSI;
              if (sp_set->data[i].val->data[c_ix] < e) {
                e = sp_set->data[i].val->data[c_ix];
              }
            }
          }
        }

        d_st.site = &dd_emlrtRSI;
        iy++;
        bound->data[iy] = e;
        d_st.site = &ed_emlrtRSI;
        ix += sp_set->data[i].val->size[0];
      }

      b_emxCopyStruct_struct_T(sp, &b_expl_temp, &bspline_set->data[i],
        &lc_emlrtRTEI);
      st.site = &d_emlrtRSI;
      b_bspline(&st, superpixel, b_expl_temp.x, b_expl_temp.y, bound,
                single_ref_set);

      /*         %% find adjacency area within 5 pixels */
      iy = temp_sx->size[0];
      ixstop = temp_sy->size[0];
      emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &gb_emlrtECI, sp);
      iy = temp_sx->size[0];
      ixstop = temp_sy->size[0];
      i32 = changed->size[0] * changed->size[1];
      changed->size[0] = iy;
      changed->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)changed, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < iy; i32++) {
        changed->data[i32] = temp_sx->data[i32];
      }

      for (i32 = 0; i32 < ixstop; i32++) {
        changed->data[i32 + changed->size[0]] = temp_sy->data[i32];
      }

      st.site = &e_emlrtRSI;
      b_repmat(&st, changed->size[0], omega);
      for (i32 = 0; i32 < 2; i32++) {
        c_changed[i32] = changed->size[i32];
      }

      for (i32 = 0; i32 < 2; i32++) {
        d_omega[i32] = omega->size[i32];
      }

      emlrtSizeEqCheck2DFastR2012b(c_changed, d_omega, &hb_emlrtECI, sp);
      i32 = omega->size[0] * omega->size[1];
      omega->size[0] = changed->size[0];
      omega->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ix = changed->size[0] * changed->size[1];
      for (i32 = 0; i32 < ix; i32++) {
        omega->data[i32] += changed->data[i32];
      }

      for (j = 0; j < 11; j++) {
        st.site = &f_emlrtRSI;
        e = b_abs(-5.0 + (real_T)j) - 5.0;
        st.site = &f_emlrtRSI;
        d7 = 5.0 - b_abs(-5.0 + (real_T)j);
        i32 = (int32_T)(d7 + (1.0 - e));
        iy = 0;
        while (iy <= i32 - 1) {
          dv1[0] = -5.0 + (real_T)j;
          dv1[1] = e + (real_T)iy;
          st.site = &g_emlrtRSI;
          c_repmat(&st, dv1, changed->size[0], varargin_2);
          for (i33 = 0; i33 < 2; i33++) {
            c_changed[i33] = changed->size[i33];
          }

          for (i33 = 0; i33 < 2; i33++) {
            d_omega[i33] = varargin_2->size[i33];
          }

          emlrtSizeEqCheck2DFastR2012b(c_changed, d_omega, &ib_emlrtECI, sp);
          st.site = &h_emlrtRSI;
          sortrows(&st, omega);
          i33 = varargin_2->size[0] * varargin_2->size[1];
          varargin_2->size[0] = changed->size[0];
          varargin_2->size[1] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)varargin_2, i33, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          ix = changed->size[0] * changed->size[1];
          for (i33 = 0; i33 < ix; i33++) {
            varargin_2->data[i33] += changed->data[i33];
          }

          st.site = &i_emlrtRSI;
          b_sortrows(&st, varargin_2);
          st.site = &i_emlrtRSI;
          b_st.site = &gg_emlrtRSI;
          i33 = c_omega->size[0] * c_omega->size[1];
          c_omega->size[0] = omega->size[0];
          c_omega->size[1] = 2;
          emxEnsureCapacity(&b_st, (emxArray__common *)c_omega, i33, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          ix = omega->size[0] * omega->size[1];
          for (i33 = 0; i33 < ix; i33++) {
            c_omega->data[i33] = omega->data[i33];
          }

          c_st.site = &hg_emlrtRSI;
          do_rows(&c_st, c_omega, varargin_2, omega, ia, ib);
          iy++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      st.site = &j_emlrtRSI;
      sortrows(&st, omega);
      st.site = &k_emlrtRSI;
      b_sortrows(&st, changed);
      st.site = &k_emlrtRSI;
      b_st.site = &li_emlrtRSI;
      i32 = b_omega->size[0] * b_omega->size[1];
      b_omega->size[0] = omega->size[0];
      b_omega->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_omega, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ix = omega->size[0] * omega->size[1];
      for (i32 = 0; i32 < ix; i32++) {
        b_omega->data[i32] = omega->data[i32];
      }

      c_st.site = &hg_emlrtRSI;
      b_do_rows(&c_st, b_omega, changed, omega, ia, ib_data, ib_size);
      ix = omega->size[0];
      i32 = r31->size[0];
      r31->size[0] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)r31, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        r31->data[i32] = (omega->data[i32] < 1.0);
      }

      ix = omega->size[0];
      i32 = r32->size[0];
      r32->size[0] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)r32, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        r32->data[i32] = (omega->data[i32 + omega->size[0]] < 1.0);
      }

      i32 = r31->size[0];
      i33 = r32->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &jb_emlrtECI, sp);
      i32 = r31->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r31, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = r31->size[0];
      for (i32 = 0; i32 < ix; i32++) {
        r31->data[i32] = (r31->data[i32] || r32->data[i32]);
      }

      ix = omega->size[0];
      iy = Sp2->size[0];
      i32 = r32->size[0];
      r32->size[0] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)r32, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        r32->data[i32] = (omega->data[i32] > iy);
      }

      i32 = r31->size[0];
      i33 = r32->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &jb_emlrtECI, sp);
      i32 = r31->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r31, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = r31->size[0];
      for (i32 = 0; i32 < ix; i32++) {
        r31->data[i32] = (r31->data[i32] || r32->data[i32]);
      }

      ix = omega->size[0];
      iy = Sp2->size[1];
      i32 = r32->size[0];
      r32->size[0] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)r32, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        r32->data[i32] = (omega->data[i32 + omega->size[0]] > iy);
      }

      i32 = r31->size[0];
      i33 = r32->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &jb_emlrtECI, sp);
      i32 = r33->size[0];
      r33->size[0] = r31->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r33, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = r31->size[0];
      for (i32 = 0; i32 < ix; i32++) {
        r33->data[i32] = (r31->data[i32] || r32->data[i32]);
      }

      st.site = &l_emlrtRSI;
      eml_null_assignment(&st, omega, r33);
      st.site = &m_emlrtRSI;
      ix = omega->size[0];
      iy = Sp2->size[0];
      i32 = temp_sx->size[0];
      temp_sx->size[0] = ix;
      emxEnsureCapacity(&st, (emxArray__common *)temp_sx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        temp_sx->data[i32] = (omega->data[i32 + omega->size[0]] - 1.0) * (real_T)
          iy;
      }

      i32 = omega->size[0];
      i33 = temp_sx->size[0];
      emlrtSizeEqCheck1DFastR2012b(i32, i33, &kb_emlrtECI, sp);
      ix = omega->size[0];
      i32 = temp_sy->size[0];
      temp_sy->size[0] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)temp_sy, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i32 = 0; i32 < ix; i32++) {
        temp_sy->data[i32] = omega->data[i32] + temp_sx->data[i32];
      }

      emlrtMatrixMatrixIndexCheckR2012b(*(int32_T (*)[2])Sp_new->size, 2,
        *(int32_T (*)[1])temp_sy->size, 1, &lb_emlrtECI, sp);
      i32 = b_Sp_new->size[0];
      b_Sp_new->size[0] = temp_sy->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_Sp_new, i32, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = temp_sy->size[0];
      for (i32 = 0; i32 < ix; i32++) {
        i33 = Sp_new->size[0] * Sp_new->size[1];
        e = temp_sy->data[i32];
        ixstart = (int32_T)emlrtIntegerCheckFastR2012b(e, &cb_emlrtDCI, sp);
        b_Sp_new->data[i32] = (Sp_new->data[emlrtDynamicBoundsCheckFastR2012b
          (ixstart, 1, i33, &ld_emlrtBCI, sp) - 1] != 0.0);
      }

      st.site = &n_emlrtRSI;
      eml_null_assignment(&st, omega, b_Sp_new);

      /*         %% for all adjacent pixels ...  */
      i32 = temp_sx->size[0];
      temp_sx->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_sx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp_sy->size[0];
      temp_sy->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_sy, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp_rx->size[0];
      temp_rx->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_rx, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i32 = temp_ry->size[0];
      temp_ry->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)temp_ry, i32, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      j = 1;
      while (j - 1 <= omega->size[0] - 1) {
        /*             %% find nearest pixel q from surface i */
        i32 = omega->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(j, 1, i32, &oc_emlrtBCI, sp);
        omega_size[0] = 1;
        omega_size[1] = 2;
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = omega->data[(iy + omega->size[0] * i32) - 1];
        }

        st.site = &o_emlrtRSI;
        d_repmat(&st, omega_data, omega_size, superpixel->size[0], changed);
        for (i32 = 0; i32 < 2; i32++) {
          c_changed[i32] = changed->size[i32];
        }

        for (i32 = 0; i32 < 2; i32++) {
          d_omega[i32] = superpixel->size[i32];
        }

        emlrtSizeEqCheck2DFastR2012b(c_changed, d_omega, &mb_emlrtECI, sp);
        i32 = b_changed->size[0] * b_changed->size[1];
        b_changed->size[0] = changed->size[0];
        b_changed->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_changed, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        ix = changed->size[0] * changed->size[1];
        for (i32 = 0; i32 < ix; i32++) {
          b_changed->data[i32] = changed->data[i32] - superpixel->data[i32];
        }

        st.site = &o_emlrtRSI;
        c_abs(&st, b_changed, changed);
        i32 = changed->size[0];
        i33 = changed->size[0];
        emlrtSizeEqCheck1DFastR2012b(i32, i33, &nb_emlrtECI, sp);
        st.site = &p_emlrtRSI;
        ix = changed->size[0];
        i32 = varargin_1->size[0];
        varargin_1->size[0] = ix;
        emxEnsureCapacity(&st, (emxArray__common *)varargin_1, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < ix; i32++) {
          varargin_1->data[i32] = changed->data[i32] + changed->data[i32 +
            changed->size[0]];
        }

        b_st.site = &aj_emlrtRSI;
        c_st.site = &bj_emlrtRSI;
        if ((varargin_1->size[0] == 1) || (varargin_1->size[0] != 1)) {
          overflow = TRUE;
        } else {
          overflow = FALSE;
        }

        if (overflow) {
        } else {
          e_y = NULL;
          m17 = mxCreateCharArray(2, iv106);
          for (b_i = 0; b_i < 36; b_i++) {
            cv39[b_i] = cv40[b_i];
          }

          emlrtInitCharArrayR2013a(&c_st, 36, m17, cv39);
          emlrtAssign(&e_y, m17);
          d_st.site = &yx_emlrtRSI;
          e_st.site = &my_emlrtRSI;
          error(&d_st, b_message(&e_st, e_y, &c_emlrtMCI), &d_emlrtMCI);
        }

        if (varargin_1->size[0] > 0) {
        } else {
          f_y = NULL;
          m17 = mxCreateCharArray(2, iv107);
          for (b_i = 0; b_i < 39; b_i++) {
            cv41[b_i] = cv42[b_i];
          }

          emlrtInitCharArrayR2013a(&c_st, 39, m17, cv41);
          emlrtAssign(&f_y, m17);
          d_st.site = &xx_emlrtRSI;
          e_st.site = &ly_emlrtRSI;
          error(&d_st, b_message(&e_st, f_y, &e_emlrtMCI), &f_emlrtMCI);
        }

        d_st.site = &cj_emlrtRSI;
        ixstart = 1;
        e = varargin_1->data[0];
        ixstop = 1;
        if (varargin_1->size[0] > 1) {
          f_st.site = &nd_emlrtRSI;
          if (muDoubleScalarIsNaN(varargin_1->data[0])) {
            f_st.site = &md_emlrtRSI;
            if (2 > varargin_1->size[0]) {
              overflow = FALSE;
            } else {
              overflow = (varargin_1->size[0] > 2147483646);
            }

            if (overflow) {
              g_st.site = &uc_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            ix = 2;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (ix <= varargin_1->size[0])) {
              ixstart = ix;
              f_st.site = &kd_emlrtRSI;
              if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
                e = varargin_1->data[ix - 1];
                ixstop = ix;
                exitg2 = TRUE;
              } else {
                ix++;
              }
            }
          }

          if (ixstart < varargin_1->size[0]) {
            f_st.site = &jd_emlrtRSI;
            f_st.site = &jd_emlrtRSI;
            if (ixstart + 1 > varargin_1->size[0]) {
              overflow = FALSE;
            } else {
              overflow = (varargin_1->size[0] > 2147483646);
            }

            if (overflow) {
              g_st.site = &uc_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            while (ixstart + 1 <= varargin_1->size[0]) {
              f_st.site = &hd_emlrtRSI;
              if (varargin_1->data[ixstart] < e) {
                e = varargin_1->data[ixstart];
                ixstop = ixstart + 1;
              }

              ixstart++;
            }
          }
        }

        /*             %% compute patch transformation jacobian matirx */
        b_emxCopyStruct_struct_T(sp, &c_expl_temp, &bspline_set->data[i],
          &lc_emlrtRTEI);
        i32 = superpixel->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &pc_emlrtBCI, sp);
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = superpixel->data[(iy + superpixel->size[0] * i32) -
            1];
        }

        st.site = &q_emlrtRSI;
        bspline_single(&st, omega_data, c_expl_temp.x, c_expl_temp.y, bound,
                       outsz);
        b_emxCopyStruct_struct_T(sp, &d_expl_temp, &bspline_set->data[i],
          &lc_emlrtRTEI);
        i32 = superpixel->size[0];
        iy = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &qc_emlrtBCI, sp);
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = superpixel->data[(iy + superpixel->size[0] * i32) -
            1];
        }

        st.site = &r_emlrtRSI;
        b_bspline_single(&st, omega_data, d_expl_temp.x, d_expl_temp.y, bound,
                         temp2);
        jacobian[0] = outsz[0];
        jacobian[2] = temp2[0];
        jacobian[1] = outsz[1];
        jacobian[3] = temp2[1];

        /* jacobian = jacobian.*[x x; y y]; */
        /*             %% compute temp correspondence */
        i32 = single_ref_set->size[0];
        emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &rc_emlrtBCI, sp);

        /* ref_p = ref_q + (bspline_single(superpixel(ind, :), sp_bspline, bound, 1,0,0,1)).*(omega(j, :) - superpixel(ind,:)); */
        i32 = omega->size[0];
        i33 = (j - 1) + 1;
        emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &sc_emlrtBCI, sp);
        st.site = &s_emlrtRSI;
        i32 = superpixel->size[0];
        emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i32, &tc_emlrtBCI, &st);
        b_st.site = &je_emlrtRSI;
        c_st.site = &ke_emlrtRSI;
        d_st.site = &me_emlrtRSI;
        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = omega->data[(j + omega->size[0] * i32) - 1];
        }

        for (i32 = 0; i32 < 2; i32++) {
          temp2[i32] = omega_data[i32] - superpixel->data[(ixstop +
            superpixel->size[0] * i32) - 1];
        }

        for (i32 = 0; i32 < 2; i32++) {
          omega_data[i32] = 0.0;
          for (i33 = 0; i33 < 2; i33++) {
            omega_data[i32] += jacobian[i32 + (i33 << 1)] * temp2[i33];
          }
        }

        for (i32 = 0; i32 < 2; i32++) {
          outsz[i32] = single_ref_set->data[(ixstop + single_ref_set->size[0] *
            i32) - 1] + omega_data[i32];
        }

        for (i32 = 0; i32 < 2; i32++) {
          b_outsz[i32] = (outsz[i32] < 0.0);
        }

        st.site = &t_emlrtRSI;
        if ((sum(b_outsz) != 0.0) || (outsz[0] > Sp2->size[0]) || (outsz[1] >
             Sp2->size[1])) {
        } else {
          /* - omega(j, :); */
          /*             %% minimize error             */
          b_error = 1.0E+7;
          refp_size[0] = 0;
          refp_size[1] = 0;
          for (ixstop = 0; ixstop < 3; ixstop++) {
            scale[0] = 0.9 + 0.099999999999999978 * (real_T)ixstop;
            scale[2] = 0.0;
            scale[1] = 0.0;
            scale[3] = 0.9 + 0.099999999999999978 * (real_T)ixstop;
            for (c_ix = 0; c_ix < 3; c_ix++) {
              e = -0.087266462599716474 + 0.087266462599716474 * (real_T)c_ix;
              st.site = &u_emlrtRSI;
              b_cos(&e);
              d7 = -0.087266462599716474 + 0.087266462599716474 * (real_T)c_ix;
              st.site = &u_emlrtRSI;
              b_sin(&d7);
              d8 = -0.087266462599716474 + 0.087266462599716474 * (real_T)c_ix;
              st.site = &u_emlrtRSI;
              b_sin(&d8);
              d9 = -0.087266462599716474 + 0.087266462599716474 * (real_T)c_ix;
              st.site = &u_emlrtRSI;
              b_cos(&d9);
              rotate[0] = e;
              rotate[2] = -d7;
              rotate[1] = d8;
              rotate[3] = d9;
              st.site = &v_emlrtRSI;
              b_st.site = &je_emlrtRSI;
              c_st.site = &ke_emlrtRSI;
              d_st.site = &me_emlrtRSI;
              st.site = &v_emlrtRSI;
              b_st.site = &je_emlrtRSI;
              c_st.site = &ke_emlrtRSI;
              d_st.site = &me_emlrtRSI;
              for (i32 = 0; i32 < 2; i32++) {
                for (i33 = 0; i33 < 2; i33++) {
                  b_rotate[i32 + (i33 << 1)] = 0.0;
                  for (ixstart = 0; ixstart < 2; ixstart++) {
                    b_rotate[i32 + (i33 << 1)] += rotate[i32 + (ixstart << 1)] *
                      scale[ixstart + (i33 << 1)];
                  }
                }

                for (i33 = 0; i33 < 2; i33++) {
                  jacobian_d[i32 + (i33 << 1)] = 0.0;
                  for (ixstart = 0; ixstart < 2; ixstart++) {
                    jacobian_d[i32 + (i33 << 1)] += b_rotate[i32 + (ixstart << 1)]
                      * jacobian[ixstart + (i33 << 1)];
                  }
                }
              }

              for (b_i = 0; b_i < 3; b_i++) {
                for (ix = 0; ix < 3; ix++) {
                  i32 = omega->size[0];
                  iy = emlrtDynamicBoundsCheckFastR2012b(j, 1, i32, &uc_emlrtBCI,
                    sp);
                  for (i32 = 0; i32 < 2; i32++) {
                    b_omega_data[i32] = omega->data[(iy + omega->size[0] * i32)
                      - 1];
                  }

                  b_omega_data[2] = 0.0;
                  st.site = &w_emlrtRSI;
                  e_repmat(b_omega_data, tmp_data, d_omega);

                  /* Np_ref = M*Np; */
                  st.site = &x_emlrtRSI;
                  b_st.site = &je_emlrtRSI;
                  c_st.site = &ke_emlrtRSI;
                  d_st.site = &me_emlrtRSI;
                  for (i32 = 0; i32 < 3; i32++) {
                    for (i33 = 0; i33 < 49; i33++) {
                      b_patch[i33 + 49 * i32] = patch[i32 + 3 * i33] +
                        tmp_data[i32 + 3 * i33];
                    }
                  }

                  st.site = &y_emlrtRSI;
                  getPixelsValue(&st, Src_lab, b_patch, Ps);
                  iv108[0] = (int8_T)(-1 + b_i);
                  iv108[1] = (int8_T)(-1 + ix);
                  for (i32 = 0; i32 < 2; i32++) {
                    for (i33 = 0; i33 < 2; i33++) {
                      b_jacobian_d[i33 + 3 * i32] = jacobian_d[i33 + (i32 << 1)];
                    }
                  }

                  for (i32 = 0; i32 < 2; i32++) {
                    b_jacobian_d[6 + i32] = outsz[i32] + (real_T)iv108[i32];
                  }

                  for (i32 = 0; i32 < 3; i32++) {
                    b_jacobian_d[2 + 3 * i32] = iv109[i32];
                  }

                  for (i32 = 0; i32 < 49; i32++) {
                    for (i33 = 0; i33 < 3; i33++) {
                      tmp_data[i32 + 49 * i33] = 0.0;
                      for (ixstart = 0; ixstart < 3; ixstart++) {
                        tmp_data[i32 + 49 * i33] += b_jacobian_d[i33 + 3 *
                          ixstart] * patch[ixstart + 3 * i32];
                      }
                    }
                  }

                  st.site = &ab_emlrtRSI;
                  getPixelsValue(&st, Ref_lab, tmp_data, Pt);
                  st.site = &bb_emlrtRSI;
                  mean(Ps, b_omega_data);
                  st.site = &bb_emlrtRSI;
                  f_repmat(b_omega_data, b_patch);
                  for (i32 = 0; i32 < 147; i32++) {
                    b_patch[i32] = Ps[i32] - b_patch[i32];
                  }

                  st.site = &bb_emlrtRSI;
                  b_std(&st, Ps, b_omega_data);
                  st.site = &bb_emlrtRSI;
                  f_repmat(b_omega_data, tmp_data);
                  st.site = &bb_emlrtRSI;
                  c_rdivide(b_patch, tmp_data, Ps);
                  st.site = &cb_emlrtRSI;
                  mean(Pt, b_omega_data);
                  st.site = &cb_emlrtRSI;
                  f_repmat(b_omega_data, b_patch);
                  for (i32 = 0; i32 < 147; i32++) {
                    b_patch[i32] = Pt[i32] - b_patch[i32];
                  }

                  st.site = &cb_emlrtRSI;
                  b_std(&st, Pt, b_omega_data);
                  st.site = &cb_emlrtRSI;
                  f_repmat(b_omega_data, tmp_data);
                  st.site = &cb_emlrtRSI;
                  c_rdivide(b_patch, tmp_data, Pt);

                  /* { */
                  /*                             Ps = Ps./(repmat(std(Ps), 49, 1)); */
                  /*                             Pt = Pt./(repmat(std(Pt), 49, 1)); */
                  /*                             t1 = sqrt(sum(Ps.^2)); */
                  /*                             t2 = sqrt(sum(Pt.^2)); */
                  /*                             Ps(:, 1) = Ps(:, 1)./t1(1); */
                  /*                             Ps(:, 2) = Ps(:, 2)./t1(2); */
                  /*                             Ps(:, 3) = Ps(:, 3)./t1(3); */
                  /*                             Pt(:, 1) = Pt(:, 1)./t2(1); */
                  /*                             Pt(:, 2) = Pt(:, 2)./t2(2); */
                  /*                             Pt(:, 3) = Pt(:, 3)./t2(3); */
                  /* }                           */
                  for (i32 = 0; i32 < 147; i32++) {
                    tmp_data[i32] = Ps[i32] - Pt[i32];
                  }

                  st.site = &db_emlrtRSI;
                  d_power(tmp_data, b_patch);
                  st.site = &db_emlrtRSI;
                  b_sum(b_patch, b_omega_data);
                  st.site = &db_emlrtRSI;
                  e = c_sum(b_omega_data);
                  if (e < b_error) {
                    b_error = e;
                    iv110[0] = (int8_T)(-1 + b_i);
                    iv110[1] = (int8_T)(-1 + ix);
                    refp_size[0] = 1;
                    refp_size[1] = 2;
                    for (i32 = 0; i32 < 2; i32++) {
                      refp_data[i32] = iv110[i32];
                    }

                    /* refp = Np_ref(1:2, 25)'; */
                  }

                  emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
                }

                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }

              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }

            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }

          if (b_error < 200.0) {
            modified = TRUE;
            iy = temp_sx->size[0];
            i32 = temp_sx->size[0];
            temp_sx->size[0] = iy + 1;
            emxEnsureCapacity(sp, (emxArray__common *)temp_sx, i32, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            i32 = omega->size[0];
            temp_sx->data[iy] = omega->data[emlrtDynamicBoundsCheckFastR2012b(j,
              1, i32, &pd_emlrtBCI, sp) - 1];
            iy = temp_sy->size[0];
            i32 = temp_sy->size[0];
            temp_sy->size[0] = iy + 1;
            emxEnsureCapacity(sp, (emxArray__common *)temp_sy, i32, (int32_T)
                              sizeof(real_T), &emlrtRTEI);
            i32 = omega->size[0];
            temp_sy->data[iy] = omega->data[(emlrtDynamicBoundsCheckFastR2012b(j,
              1, i32, &qd_emlrtBCI, sp) + omega->size[0]) - 1];
            i32 = Sp_new->size[0];
            i33 = omega->size[0];
            e = omega->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i33,
              &sd_emlrtBCI, sp) - 1];
            i33 = (int32_T)emlrtIntegerCheckFastR2012b(e, &db_emlrtDCI, sp);
            ixstart = Sp_new->size[1];
            iy = omega->size[0];
            e = omega->data[(emlrtDynamicBoundsCheckFastR2012b(j, 1, iy,
              &ud_emlrtBCI, sp) + omega->size[0]) - 1];
            iy = (int32_T)emlrtIntegerCheckFastR2012b(e, &eb_emlrtDCI, sp);
            Sp_new->data[(emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32,
              &rd_emlrtBCI, sp) + Sp_new->size[0] *
                          (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ixstart,
              &td_emlrtBCI, sp) - 1)) - 1] = 1.0 + (real_T)i;

            /* refp = refp + offset_p + omega(j, :); */
            /* refp = (refp+offset_p)./[x y]; */
            for (i32 = 0; i32 < 2; i32++) {
              d_omega[i32] = refp_size[i32];
              c_changed[i32] = 1 + i32;
            }

            emlrtSizeEqCheck2DFastR2012b(d_omega, c_changed, &ob_emlrtECI, sp);
            for (i32 = 0; i32 < 2; i32++) {
              outsz[i32] += (real_T)refp_data[i32];
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
        }

        j++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      if (modified) {
        iy = temp_sx->size[0];
        ixstop = temp_sy->size[0];
        emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &pb_emlrtECI, sp);
        i32 = sp_set->size[1];
        i33 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &vc_emlrtBCI, sp);
        i32 = sp_set->data[i].val->size[1];
        emlrtDimSizeEqCheckFastR2012b(2, i32, &qb_emlrtECI, sp);
        b_i = sp_set->size[1];
        emxCopyStruct_struct_T(sp, &b_sp_set, &sp_set->data[i], &emlrtRTEI);
        iy = temp_sx->size[0];
        ixstop = temp_sy->size[0];
        emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i, &md_emlrtBCI, sp);
        i32 = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
        sp_set->data[i].val->size[0] = b_sp_set.val->size[0] + iy;
        emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i, &md_emlrtBCI, sp);
        sp_set->data[i].val->size[1] = b_sp_set.val->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i].val, i32,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        ix = b_sp_set.val->size[1];
        for (i32 = 0; i32 < ix; i32++) {
          c_ix = b_sp_set.val->size[0];
          for (i33 = 0; i33 < c_ix; i33++) {
            sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i,
              &md_emlrtBCI, sp) - 1].val->data[i33 + sp_set->
              data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i, &md_emlrtBCI,
              sp) - 1].val->size[0] * i32] = b_sp_set.val->data[i33 +
              b_sp_set.val->size[0] * i32];
          }
        }

        for (i32 = 0; i32 < iy; i32++) {
          emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i, &md_emlrtBCI, sp);
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i,
            &md_emlrtBCI, sp) - 1].val->data[i32 + b_sp_set.val->size[0]] =
            temp_sx->data[i32];
        }

        for (i32 = 0; i32 < ixstop; i32++) {
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i,
            &md_emlrtBCI, sp) - 1].val->data[(i32 + b_sp_set.val->size[0]) +
            sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, b_i,
            &md_emlrtBCI, sp) - 1].val->size[0]] = temp_sy->data[i32];
        }

        /* single_ref_set = [single_ref_set; double([temp_rx, temp_ry])]; */
        iy = temp_rx->size[0];
        ixstop = temp_ry->size[0];
        emlrtDimSizeEqCheckFastR2012b(iy, ixstop, &rb_emlrtECI, sp);
        iy = temp_rx->size[0];
        ixstop = temp_ry->size[0];
        i32 = b_temp_ref_set->size[0] * b_temp_ref_set->size[1];
        b_temp_ref_set->size[0] = temp_ref_set->size[0] + iy;
        b_temp_ref_set->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_temp_ref_set, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < 2; i32++) {
          ix = temp_ref_set->size[0];
          for (i33 = 0; i33 < ix; i33++) {
            b_temp_ref_set->data[i33 + b_temp_ref_set->size[0] * i32] =
              temp_ref_set->data[i33 + temp_ref_set->size[0] * i32];
          }
        }

        for (i32 = 0; i32 < iy; i32++) {
          b_temp_ref_set->data[i32 + temp_ref_set->size[0]] = temp_rx->data[i32];
        }

        for (i32 = 0; i32 < ixstop; i32++) {
          b_temp_ref_set->data[(i32 + temp_ref_set->size[0]) +
            b_temp_ref_set->size[0]] = temp_ry->data[i32];
        }

        i32 = temp_ref_set->size[0] * temp_ref_set->size[1];
        temp_ref_set->size[0] = b_temp_ref_set->size[0];
        temp_ref_set->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)temp_ref_set, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        for (i32 = 0; i32 < 2; i32++) {
          ix = b_temp_ref_set->size[0];
          for (i33 = 0; i33 < ix; i33++) {
            temp_ref_set->data[i33 + temp_ref_set->size[0] * i32] =
              b_temp_ref_set->data[i33 + b_temp_ref_set->size[0] * i32];
          }
        }

        /* sp_set(i).val = superpixel; */
        i32 = sp_set->size[1];
        st.site = &eb_emlrtRSI;
        bspline_inv(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1,
          i32, &nd_emlrtBCI, sp) - 1].val, temp_ref_set, control_p, &c_error);
        iy = errors->size[0];
        i32 = errors->size[0];
        errors->size[0] = iy + 1;
        emxEnsureCapacity(sp, (emxArray__common *)errors, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        errors->data[iy] = c_error;
        ix = control_p->size[0];
        c_ix = control_p->size[1];
        i32 = t0_x->size[0] * t0_x->size[1];
        t0_x->size[0] = ix;
        t0_x->size[1] = c_ix;
        emxEnsureCapacity(sp, (emxArray__common *)t0_x, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < c_ix; i32++) {
          for (i33 = 0; i33 < ix; i33++) {
            t0_x->data[i33 + t0_x->size[0] * i32] = control_p->data[i33 +
              control_p->size[0] * i32];
          }
        }

        ix = control_p->size[0];
        c_ix = control_p->size[1];
        i32 = t0_y->size[0] * t0_y->size[1];
        t0_y->size[0] = ix;
        t0_y->size[1] = c_ix;
        emxEnsureCapacity(sp, (emxArray__common *)t0_y, i32, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i32 = 0; i32 < c_ix; i32++) {
          for (i33 = 0; i33 < ix; i33++) {
            t0_y->data[i33 + t0_y->size[0] * i32] = control_p->data[(i33 +
              control_p->size[0] * i32) + control_p->size[0] * control_p->size[1]];
          }
        }

        i32 = e_expl_temp.x->size[0] * e_expl_temp.x->size[1];
        e_expl_temp.x->size[0] = t0_x->size[0];
        e_expl_temp.x->size[1] = t0_x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_expl_temp.x, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        ix = t0_x->size[0] * t0_x->size[1];
        for (i32 = 0; i32 < ix; i32++) {
          e_expl_temp.x->data[i32] = t0_x->data[i32];
        }

        i32 = e_expl_temp.y->size[0] * e_expl_temp.y->size[1];
        e_expl_temp.y->size[0] = t0_y->size[0];
        e_expl_temp.y->size[1] = t0_y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_expl_temp.y, i32, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        ix = t0_y->size[0] * t0_y->size[1];
        for (i32 = 0; i32 < ix; i32++) {
          e_expl_temp.y->data[i32] = t0_y->data[i32];
        }

        i32 = bspline_set->size[1];
        b_emxCopyStruct_struct_T(sp, &bspline_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i32, &od_emlrtBCI, sp)
          - 1], &e_expl_temp, &mc_emlrtRTEI);
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_temp_ref_set);
  emxFreeStruct_struct_T(&b_sp_set);
  emxFree_real_T(&b_changed);
  emxFree_real_T(&c_omega);
  emxFree_real_T(&b_omega);
  emxFree_boolean_T(&r33);
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
  emxFree_boolean_T(&r32);
  emxFree_boolean_T(&r31);
  emxFree_real_T(&control_p);
  emxFree_real_T(&temp_ry);
  emxFree_real_T(&temp_rx);
  emxFree_real_T(&omega);
  emxFree_real_T(&changed);
  emxFree_real_T(&superpixel);
  emxFree_real_T(&temp_ref_set);
  emxFree_real_T(&temp_sy);
  emxFree_real_T(&temp_sx);
  emxFree_real_T(&Sp_new);
  iy = Sp2->size[0];
  i32 = Corr->size[0] * Corr->size[1] * Corr->size[2];
  Corr->size[0] = iy;
  emxEnsureCapacity(sp, (emxArray__common *)Corr, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = Sp2->size[1];
  i32 = Corr->size[0] * Corr->size[1] * Corr->size[2];
  Corr->size[1] = iy;
  Corr->size[2] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)Corr, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = Sp2->size[0] * Sp2->size[1] << 1;
  for (i32 = 0; i32 < ix; i32++) {
    Corr->data[i32] = 0.0;
  }

  emxInitStruct_struct_T(sp, &r34, &emlrtRTEI, TRUE);
  i32 = r34.val->size[0] * r34.val->size[1];
  r34.val->size[0] = 0;
  r34.val->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r34.val, i32, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i32 = ref_set->size[0] * ref_set->size[1];
  ref_set->size[0] = 1;
  ref_set->size[1] = 1;
  emxEnsureCapacity_struct_T(sp, ref_set, i32, &emlrtRTEI);
  emxCopyStruct_struct_T(sp, &ref_set->data[0], &r34, &emlrtRTEI);
  i = 0;
  emxFreeStruct_struct_T(&r34);
  emxInitStruct_struct_T(sp, &r35, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &f_expl_temp, &kc_emlrtRTEI, TRUE);
  while (i <= sp_set->size[1] - 1) {
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &wc_emlrtBCI, sp);
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &xc_emlrtBCI, sp);
    i32 = bspline_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &yc_emlrtBCI, sp);
    st.site = &fb_emlrtRSI;
    i32 = sp_set->size[1];
    i33 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &ad_emlrtBCI, &st);
    b_st.site = &vc_emlrtRSI;
    c_st.site = &wc_emlrtRSI;
    if (((sp_set->data[i].val->size[0] == 1) && (sp_set->data[i].val->size[1] ==
          1)) || (sp_set->data[i].val->size[0] != 1)) {
      overflow = TRUE;
    } else {
      overflow = FALSE;
    }

    if (overflow) {
    } else {
      g_y = NULL;
      m17 = mxCreateCharArray(2, iv111);
      for (b_i = 0; b_i < 36; b_i++) {
        cv39[b_i] = cv40[b_i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m17, cv39);
      emlrtAssign(&g_y, m17);
      d_st.site = &yx_emlrtRSI;
      e_st.site = &my_emlrtRSI;
      error(&d_st, b_message(&e_st, g_y, &c_emlrtMCI), &d_emlrtMCI);
    }

    if (sp_set->data[i].val->size[0] > 0) {
    } else {
      h_y = NULL;
      m17 = mxCreateCharArray(2, iv112);
      for (b_i = 0; b_i < 39; b_i++) {
        cv41[b_i] = cv42[b_i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m17, cv41);
      emlrtAssign(&h_y, m17);
      d_st.site = &xx_emlrtRSI;
      e_st.site = &ly_emlrtRSI;
      error(&d_st, b_message(&e_st, h_y, &e_emlrtMCI), &f_emlrtMCI);
    }

    for (i32 = 0; i32 < 2; i32++) {
      outsz[i32] = sp_set->data[i].val->size[i32];
    }

    i32 = bound->size[0] * bound->size[1];
    bound->size[0] = 1;
    bound->size[1] = (int32_T)outsz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)bound, i32, (int32_T)sizeof
                      (real_T), &ic_emlrtRTEI);
    d_st.site = &xc_emlrtRSI;
    d_st.site = &xc_emlrtRSI;
    d_st.site = &yc_emlrtRSI;
    f_st.site = &fd_emlrtRSI;
    ix = 0;
    iy = -1;
    d_st.site = &ad_emlrtRSI;
    f_st.site = &tc_emlrtRSI;
    if (1 > sp_set->data[i].val->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (sp_set->data[i].val->size[1] > 2147483646);
    }

    if (overflow) {
      f_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (b_i = 1; b_i <= sp_set->data[i].val->size[1]; b_i++) {
      d_st.site = &bd_emlrtRSI;
      d_st.site = &cd_emlrtRSI;
      ixstart = ix;
      f_st.site = &pd_emlrtRSI;
      f_st.site = &pd_emlrtRSI;
      f_st.site = &od_emlrtRSI;
      ixstop = ix + sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[ix];
      if (sp_set->data[i].val->size[0] > 1) {
        f_st.site = &nd_emlrtRSI;
        if (muDoubleScalarIsNaN(sp_set->data[i].val->data[ix])) {
          f_st.site = &md_emlrtRSI;
          f_st.site = &md_emlrtRSI;
          if (ix + 2 > ixstop) {
            e_ix = FALSE;
          } else {
            e_ix = (ixstop > 2147483646);
          }

          if (e_ix) {
            g_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          c_ix = ix + 1;
          exitg1 = FALSE;
          while ((exitg1 == FALSE) && (c_ix + 1 <= ixstop)) {
            f_st.site = &ld_emlrtRSI;
            ixstart = c_ix;
            f_st.site = &kd_emlrtRSI;
            if (!muDoubleScalarIsNaN(sp_set->data[i].val->data[c_ix])) {
              e = sp_set->data[i].val->data[c_ix];
              exitg1 = TRUE;
            } else {
              c_ix++;
            }
          }
        }

        if (ixstart + 1 < ixstop) {
          f_st.site = &jd_emlrtRSI;
          f_st.site = &jd_emlrtRSI;
          if (ixstart + 2 > ixstop) {
            d_ixstart = FALSE;
          } else {
            d_ixstart = (ixstop > 2147483646);
          }

          if (d_ixstart) {
            g_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
            f_st.site = &id_emlrtRSI;
            f_st.site = &hd_emlrtRSI;
            if (sp_set->data[i].val->data[c_ix] < e) {
              e = sp_set->data[i].val->data[c_ix];
            }
          }
        }
      }

      d_st.site = &dd_emlrtRSI;
      iy++;
      bound->data[iy] = e;
      d_st.site = &ed_emlrtRSI;
      ix += sp_set->data[i].val->size[0];
    }

    b_emxCopyStruct_struct_T(sp, &f_expl_temp, &bspline_set->data[i],
      &kc_emlrtRTEI);
    st.site = &fb_emlrtRSI;
    bspline(&st, sp_set->data[i].val, f_expl_temp.x, f_expl_temp.y, bound,
            single_ref_set);
    i32 = r35.val->size[0] * r35.val->size[1];
    r35.val->size[0] = single_ref_set->size[0];
    r35.val->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)r35.val, i32, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    ix = single_ref_set->size[0] * single_ref_set->size[1];
    for (i32 = 0; i32 < ix; i32++) {
      r35.val->data[i32] = single_ref_set->data[i32];
    }

    iy = ref_set->size[1];
    i32 = ref_set->size[0] * ref_set->size[1];
    ref_set->size[1] = iy + 1;
    emxEnsureCapacity_struct_T(sp, ref_set, i32, &emlrtRTEI);
    emxCopyStruct_struct_T(sp, &ref_set->data[iy], &r35, &emlrtRTEI);
    j = 1;
    while (j - 1 <= sp_set->data[i].val->size[0] - 1) {
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &bd_emlrtBCI, sp);
      i32 = sp_set->size[1];
      i33 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &ed_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i32, &cd_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[1];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i32, &fd_emlrtBCI, sp);
      ixstop = Corr->size[0];
      iy = Corr->size[1];
      i32 = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[(emlrtDynamicBoundsCheckFastR2012b(j, 1, i32,
        &id_emlrtBCI, sp) + sp_set->data[i].val->size[0]) - 1];
      i32 = (int32_T)emlrtIntegerCheckFastR2012b(e, &bb_emlrtDCI, sp);
      b_i = emlrtDynamicBoundsCheckFastR2012b(i32, 1, iy, &gd_emlrtBCI, sp);
      i32 = sp_set->data[i].val->size[0];
      e = sp_set->data[i].val->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i32,
        &hd_emlrtBCI, sp) - 1];
      i32 = (int32_T)emlrtIntegerCheckFastR2012b(e, &ab_emlrtDCI, sp);
      iy = emlrtDynamicBoundsCheckFastR2012b(i32, 1, ixstop, &dd_emlrtBCI, sp);
      i32 = single_ref_set->size[0];
      b_single_ref_set[0] = single_ref_set->data
        [(emlrtDynamicBoundsCheckFastR2012b(j, 1, i32, &jd_emlrtBCI, sp) +
          single_ref_set->size[0]) - 1];
      i32 = single_ref_set->size[0];
      b_single_ref_set[1] = single_ref_set->
        data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i32, &kd_emlrtBCI, sp) - 1];
      for (i32 = 0; i32 < 2; i32++) {
        Corr->data[((iy + Corr->size[0] * (b_i - 1)) + Corr->size[0] *
                    Corr->size[1] * i32) - 1] = b_single_ref_set[i32];
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  b_emxFreeStruct_struct_T(&f_expl_temp);
  emxFreeStruct_struct_T(&r35);
  emxFree_real_T(&single_ref_set);
  emxFree_real_T(&bound);
  st.site = &gb_emlrtRSI;
  b_eml_null_assignment(&st, ref_set);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extension.c) */
