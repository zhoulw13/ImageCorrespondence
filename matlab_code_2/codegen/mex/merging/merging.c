/*
 * merging.c
 *
 * Code generation for function 'merging'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "ceil.h"
#include "sum.h"
#include "mod.h"
#include "merging_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "power.h"
#include "getPixelsValue.h"
#include "bspline.h"
#include "bspline_inv.h"
#include "triu.h"
#include "gradient.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo b_emlrtRSI = { 29, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo c_emlrtRSI = { 30, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo d_emlrtRSI = { 35, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo e_emlrtRSI = { 48, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo f_emlrtRSI = { 53, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo g_emlrtRSI = { 59, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo h_emlrtRSI = { 67, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo i_emlrtRSI = { 71, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo j_emlrtRSI = { 72, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo k_emlrtRSI = { 74, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo l_emlrtRSI = { 75, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo m_emlrtRSI = { 78, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo n_emlrtRSI = { 80, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo o_emlrtRSI = { 81, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo p_emlrtRSI = { 82, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo q_emlrtRSI = { 87, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo r_emlrtRSI = { 88, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo s_emlrtRSI = { 90, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo t_emlrtRSI = { 91, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo u_emlrtRSI = { 93, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo v_emlrtRSI = { 94, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo w_emlrtRSI = { 96, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo x_emlrtRSI = { 97, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo y_emlrtRSI = { 99, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo ab_emlrtRSI = { 100, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo bb_emlrtRSI = { 101, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo cb_emlrtRSI = { 111, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo db_emlrtRSI = { 112, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo eb_emlrtRSI = { 114, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo fb_emlrtRSI = { 117, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo gb_emlrtRSI = { 120, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo hb_emlrtRSI = { 122, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRSInfo kb_emlrtRSI = { 93, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo lb_emlrtRSI = { 94, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo mb_emlrtRSI = { 97, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo nb_emlrtRSI = { 99, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ob_emlrtRSI = { 100, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo pb_emlrtRSI = { 101, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo qb_emlrtRSI = { 105, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo rb_emlrtRSI = { 16, "eml_matrix_npages",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"
};

static emlrtRSInfo wb_emlrtRSI = { 223, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ac_emlrtRSI = { 197, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo dc_emlrtRSI = { 177, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ec_emlrtRSI = { 178, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo fd_emlrtRSI = { 41, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo gd_emlrtRSI = { 230, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo hd_emlrtRSI = { 232, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo qs_emlrtRSI = { 15, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo rs_emlrtRSI = { 16, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ss_emlrtRSI = { 52, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo vs_emlrtRSI = { 172, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ws_emlrtRSI = { 173, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo xs_emlrtRSI = { 174, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ys_emlrtRSI = { 175, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo at_emlrtRSI = { 18, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo bt_emlrtRSI = { 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ct_emlrtRSI = { 207, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo dt_emlrtRSI = { 208, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo et_emlrtRSI = { 209, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ft_emlrtRSI = { 210, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo gt_emlrtRSI = { 10, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ht_emlrtRSI = { 11, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo it_emlrtRSI = { 56, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo jt_emlrtRSI = { 116, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo kt_emlrtRSI = { 117, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo lt_emlrtRSI = { 118, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo h_emlrtMCI = { 123, 9, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo i_emlrtMCI = { 122, 19, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo j_emlrtMCI = { 239, 9, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo ab_emlrtMCI = { 53, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo bb_emlrtMCI = { 52, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo cb_emlrtMCI = { 196, 1, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo db_emlrtMCI = { 231, 1, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo eb_emlrtMCI = { 57, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo fb_emlrtMCI = { 56, 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo gb_emlrtMCI = { 125, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 60, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 83, 1, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 127, 5, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 88, 37, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 94, 37, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 116, 9, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 30, 1, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 76, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo jc_emlrtRTEI = { 77, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 87, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 88, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo mc_emlrtRTEI = { 90, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 91, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 96, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 97, 5, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 33, 6, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 118, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 33, 9, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 36, 13, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 42, 13, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 51, 9, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 52, 11, "diffy", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 54, 13, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 58, 11, "diffy", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 60, 13, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 74, 13, "pairs", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 75, 14, "pairs", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 81, 18, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 82, 18, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo db_emlrtECI = { 2, 99, 22, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtECInfo eb_emlrtECI = { 2, 100, 22, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 108, 51, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 108, 54, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 108, 77, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 108, 82, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo fb_emlrtECI = { 2, 108, 35, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 108, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 108, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo gb_emlrtECI = { -1, 108, 9, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 109, 51, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 109, 56, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 109, 77, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 109, 82, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo hb_emlrtECI = { -1, 109, 35, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 109, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 109, 30, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo ib_emlrtECI = { -1, 109, 9, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 110, 53, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 110, 56, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 110, 81, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 110, 84, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo jb_emlrtECI = { 2, 110, 37, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 110, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 110, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtECInfo kb_emlrtECI = { -1, 110, 9, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m" };

static emlrtDCInfo ab_emlrtDCI = { 8, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtDCInfo bb_emlrtDCI = { 8, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 4 };

static emlrtDCInfo cb_emlrtDCI = { 8, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtDCInfo db_emlrtDCI = { 8, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 4 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 66, 35, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo eb_emlrtDCI = { 66, 35, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 66, 43, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo fb_emlrtDCI = { 66, 43, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 87, 23, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 88, 37, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 88, 22, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 93, 23, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 94, 37, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 94, 22, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 106, 21, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 106, 24, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 113, 9, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 116, 9, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 118, 3, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 51, 13, "diffy", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 53, 28, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 53, 40, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 53, 44, "diffy", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 55, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo gb_emlrtDCI = { 55, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 55, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo hb_emlrtDCI = { 55, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 56, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 56, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 59, 28, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 59, 40, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 59, 44, "diffy", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 61, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo ib_emlrtDCI = { 61, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo bg_emlrtBCI = { -1, -1, 61, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo jb_emlrtDCI = { 61, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo cg_emlrtBCI = { -1, -1, 62, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo dg_emlrtBCI = { -1, -1, 62, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo eg_emlrtBCI = { -1, -1, 33, 13, "diffx", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo fg_emlrtBCI = { -1, -1, 34, 11, "diffx", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo gg_emlrtBCI = { -1, -1, 35, 21, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo hg_emlrtBCI = { -1, -1, 35, 33, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ig_emlrtBCI = { -1, -1, 35, 37, "diffx", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo jg_emlrtBCI = { -1, -1, 37, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo kb_emlrtDCI = { 37, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo kg_emlrtBCI = { -1, -1, 37, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo lb_emlrtDCI = { 37, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo lg_emlrtBCI = { -1, -1, 38, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo mg_emlrtBCI = { -1, -1, 38, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ng_emlrtBCI = { -1, -1, 40, 11, "diffx", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo og_emlrtBCI = { -1, -1, 41, 19, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo pg_emlrtBCI = { -1, -1, 41, 31, "Sp2", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo qg_emlrtBCI = { -1, -1, 41, 35, "diffx", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo rg_emlrtBCI = { -1, -1, 43, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo mb_emlrtDCI = { 43, 25, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo sg_emlrtBCI = { -1, -1, 43, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo nb_emlrtDCI = { 43, 28, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo tg_emlrtBCI = { -1, -1, 44, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo ug_emlrtBCI = { -1, -1, 44, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo vg_emlrtBCI = { -1, -1, 76, 17, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo ob_emlrtDCI = { 76, 17, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo wg_emlrtBCI = { -1, -1, 76, 32, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtDCInfo pb_emlrtDCI = { 76, 32, "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 1 };

static emlrtBCInfo xg_emlrtBCI = { -1, -1, 77, 18, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtBCInfo yg_emlrtBCI = { -1, -1, 77, 34, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code_2/merging.m", 0 };

static emlrtRSInfo mt_emlrtRSI = { 125, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo nt_emlrtRSI = { 231, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ot_emlrtRSI = { 196, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo pt_emlrtRSI = { 239, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo qt_emlrtRSI = { 122, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo au_emlrtRSI = { 57, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo bu_emlrtRSI = { 53, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo cu_emlrtRSI = { 123, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

/* Function Declarations */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx);
static void c_eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x,
  real_T idx);
static void d_eml_null_assignment(const emlrtStack *sp, emxArray_b_struct_T *x,
  real_T idx);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, real_T
  idx);
static boolean_T is_valid_idx(const emxArray_real_T *x, real_T idx, real_T dim);

/* Function Definitions */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx)
{
  const mxArray *y;
  static const int32_T iv88[2] = { 1, 31 };

  const mxArray *m14;
  char_T cv34[31];
  int32_T i;
  static const char_T cv35[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  emxArray_real_T *b_x;
  int32_T j;
  int32_T loop_ub;
  int32_T i24;
  boolean_T overflow;
  const mxArray *b_y;
  emxArray_real_T *c_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &at_emlrtRSI;
  b_st.site = &ss_emlrtRSI;
  if (is_valid_idx(x, idx, 2.0)) {
  } else {
    y = NULL;
    m14 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 31; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m14, cv34);
    emlrtAssign(&y, m14);
    b_st.site = &ss_emlrtRSI;
    c_st.site = &bu_emlrtRSI;
    error(&b_st, message(&c_st, y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  emxInit_real_T(&st, &b_x, 2, &ac_emlrtRTEI, TRUE);
  st.site = &bt_emlrtRSI;
  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = x->size[0];
  b_x->size[1] = x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, j, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  loop_ub = x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = x->size[0];
    for (i24 = 0; i24 < i; i24++) {
      b_x->data[i24 + b_x->size[0] * j] = x->data[i24 + x->size[0] * j];
    }
  }

  b_st.site = &ct_emlrtRSI;
  b_st.site = &dt_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    d_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (j = (int32_T)idx; j < x->size[1]; j++) {
    loop_ub = b_x->size[0];
    b_st.site = &et_emlrtRSI;
    for (i = 0; i + 1 <= loop_ub; i++) {
      b_st.site = &ft_emlrtRSI;
      b_x->data[i + b_x->size[0] * (j - 1)] = b_x->data[i + b_x->size[0] * j];
    }
  }

  if (x->size[1] - 1 <= b_x->size[1]) {
  } else {
    b_y = NULL;
    m14 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m14);
    b_st.site = &nt_emlrtRSI;
    error(&b_st, b_y, &db_emlrtMCI);
  }

  if (1 > x->size[1] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = x->size[1] - 1;
  }

  emxInit_real_T(&st, &c_x, 2, &ac_emlrtRTEI, TRUE);
  i = b_x->size[0];
  j = c_x->size[0] * c_x->size[1];
  c_x->size[0] = i;
  c_x->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)c_x, j, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  for (j = 0; j < loop_ub; j++) {
    for (i24 = 0; i24 < i; i24++) {
      c_x->data[i24 + c_x->size[0] * j] = b_x->data[i24 + b_x->size[0] * j];
    }
  }

  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = c_x->size[0];
  b_x->size[1] = c_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, j, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  loop_ub = c_x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = c_x->size[0];
    for (i24 = 0; i24 < i; i24++) {
      b_x->data[i24 + b_x->size[0] * j] = c_x->data[i24 + c_x->size[0] * j];
    }
  }

  emxFree_real_T(&c_x);
  j = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)x, j, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  loop_ub = b_x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = b_x->size[0];
    for (i24 = 0; i24 < i; i24++) {
      x->data[i24 + x->size[0] * j] = b_x->data[i24 + b_x->size[0] * j];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void c_eml_null_assignment(const emlrtStack *sp, emxArray_struct_T *x,
  real_T idx)
{
  boolean_T overflow;
  boolean_T guard1 = FALSE;
  const mxArray *y;
  static const int32_T iv89[2] = { 1, 31 };

  const mxArray *m15;
  char_T cv36[31];
  int32_T i;
  static const char_T cv37[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &gt_emlrtRSI;
  b_st.site = &it_emlrtRSI;
  overflow = TRUE;
  guard1 = FALSE;
  if (idx < 1.0) {
    guard1 = TRUE;
  } else if ((int32_T)idx > x->size[1]) {
    guard1 = TRUE;
  } else {
    if (idx != muDoubleScalarFloor(idx)) {
      guard1 = TRUE;
    }
  }

  if (guard1 == TRUE) {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m15 = mxCreateCharArray(2, iv89);
    for (i = 0; i < 31; i++) {
      cv36[i] = cv37[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m15, cv36);
    emlrtAssign(&y, m15);
    b_st.site = &it_emlrtRSI;
    d_st.site = &au_emlrtRSI;
    error(&b_st, message(&d_st, y, &eb_emlrtMCI), &fb_emlrtMCI);
  }

  st.site = &ht_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &jt_emlrtRSI;
  b_st.site = &kt_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = (int32_T)idx; k <= i; k++) {
    b_st.site = &lt_emlrtRSI;
    emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &rc_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m15 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m15);
    b_st.site = &mt_emlrtRSI;
    error(&b_st, b_y, &gb_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_struct_T(&st, &b_x, 2, &ac_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity_struct_T(&st, b_x, k, &ac_emlrtRTEI);
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &ac_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_struct_T(&st, x, k, &ac_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->size[0]
      * k], &ac_emlrtRTEI);
  }

  emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void d_eml_null_assignment(const emlrtStack *sp, emxArray_b_struct_T *x,
  real_T idx)
{
  boolean_T overflow;
  boolean_T guard1 = FALSE;
  const mxArray *y;
  static const int32_T iv90[2] = { 1, 31 };

  const mxArray *m16;
  char_T cv38[31];
  int32_T i;
  static const char_T cv39[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &gt_emlrtRSI;
  b_st.site = &it_emlrtRSI;
  overflow = TRUE;
  guard1 = FALSE;
  if (idx < 1.0) {
    guard1 = TRUE;
  } else if ((int32_T)idx > x->size[1]) {
    guard1 = TRUE;
  } else {
    if (idx != muDoubleScalarFloor(idx)) {
      guard1 = TRUE;
    }
  }

  if (guard1 == TRUE) {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m16 = mxCreateCharArray(2, iv90);
    for (i = 0; i < 31; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m16, cv38);
    emlrtAssign(&y, m16);
    b_st.site = &it_emlrtRSI;
    d_st.site = &au_emlrtRSI;
    error(&b_st, message(&d_st, y, &eb_emlrtMCI), &fb_emlrtMCI);
  }

  st.site = &ht_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &jt_emlrtRSI;
  b_st.site = &kt_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = (int32_T)idx; k <= i; k++) {
    b_st.site = &lt_emlrtRSI;
    b_emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &rc_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m16 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m16);
    b_st.site = &mt_emlrtRSI;
    error(&b_st, b_y, &gb_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  b_emxInit_struct_T(&st, &b_x, 2, &ac_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  b_emxEnsureCapacity_struct_T(&st, b_x, k, &ac_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &ac_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  b_emxEnsureCapacity_struct_T(&st, x, k, &ac_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->
      size[0] * k], &ac_emlrtRTEI);
  }

  b_emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, real_T
  idx)
{
  const mxArray *y;
  static const int32_T iv87[2] = { 1, 31 };

  const mxArray *m13;
  char_T cv32[31];
  int32_T i;
  static const char_T cv33[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T a;
  int32_T b;
  boolean_T overflow;
  int32_T j;
  boolean_T b_idx;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &qs_emlrtRSI;
  b_st.site = &ss_emlrtRSI;
  if (is_valid_idx(x, idx, 1.0)) {
  } else {
    y = NULL;
    m13 = mxCreateCharArray(2, iv87);
    for (i = 0; i < 31; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m13, cv32);
    emlrtAssign(&y, m13);
    b_st.site = &ss_emlrtRSI;
    c_st.site = &bu_emlrtRSI;
    error(&b_st, message(&c_st, y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  st.site = &rs_emlrtRSI;
  b_st.site = &vs_emlrtRSI;
  a = x->size[0] - 1;
  b = x->size[1];
  b_st.site = &ws_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (j = 0; j + 1 <= b; j++) {
    b_st.site = &xs_emlrtRSI;
    if ((int32_T)idx > a) {
      b_idx = FALSE;
    } else {
      b_idx = (a > 2147483646);
    }

    if (b_idx) {
      d_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = (int32_T)idx; i <= a; i++) {
      b_st.site = &ys_emlrtRSI;
      x->data[(i + x->size[0] * j) - 1] = x->data[i + x->size[0] * j];
    }
  }

  if (a <= x->size[0]) {
  } else {
    b_y = NULL;
    m13 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m13);
    b_st.site = &ot_emlrtRSI;
    error(&b_st, b_y, &cb_emlrtMCI);
  }

  if (1 > a) {
    a = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &ac_emlrtRTEI, TRUE);
  i = x->size[1];
  b = b_x->size[0] * b_x->size[1];
  b_x->size[0] = a;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, b, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  for (b = 0; b < i; b++) {
    for (j = 0; j < a; j++) {
      b_x->data[j + b_x->size[0] * b] = x->data[j + x->size[0] * b];
    }
  }

  b = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, b, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  a = b_x->size[1];
  for (b = 0; b < a; b++) {
    i = b_x->size[0];
    for (j = 0; j < i; j++) {
      x->data[j + x->size[0] * b] = b_x->data[j + b_x->size[0] * b];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static boolean_T is_valid_idx(const emxArray_real_T *x, real_T idx, real_T dim)
{
  boolean_T p;
  boolean_T guard1 = FALSE;
  p = TRUE;
  guard1 = FALSE;
  if (idx < 1.0) {
    guard1 = TRUE;
  } else if ((int32_T)idx > x->size[(int32_T)dim - 1]) {
    guard1 = TRUE;
  } else {
    if (idx != muDoubleScalarFloor(idx)) {
      guard1 = TRUE;
    }
  }

  if (guard1 == TRUE) {
    p = FALSE;
  }

  return p;
}

void merging(const emlrtStack *sp, emxArray_struct_T *sp_set, const
             emxArray_real_T *sp_val, emxArray_b_struct_T *bspline_set,
             emxArray_struct_T *ref_set, const emxArray_real_T *Sp2, const
             emxArray_real_T *Ref, emxArray_real_T *adjacency_graph)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv74[2] = { 1, 36 };

  const mxArray *m12;
  char_T cv27[36];
  int32_T i;
  static const char_T cv28[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv75[2] = { 1, 39 };

  char_T cv29[39];
  static const char_T cv30[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T outsz[2];
  int32_T i20;
  emxArray_real_T *varargin_1;
  int32_T ix;
  int32_T iy;
  int32_T ixstart;
  int32_T ixstop;
  real_T D_sp1;
  boolean_T b_ix;
  int32_T c_ix;
  boolean_T exitg9;
  boolean_T b_ixstart;
  const mxArray *c_y;
  static const int32_T iv76[2] = { 1, 36 };

  const mxArray *d_y;
  static const int32_T iv77[2] = { 1, 39 };

  boolean_T exitg8;
  real_T D_sp2;
  emxArray_real_T *Fx;
  emxArray_real_T *Fy;
  emxArray_boolean_T *x;
  const mxArray *e_y;
  static const int32_T iv78[2] = { 1, 36 };

  static const char_T cv31[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'f', 'i', 'n', 'd', '_', 'i', 'n', 'c', 'o', 'm',
    'p', 'a', 't', 'i', 'b', 'l', 'e', 'S', 'h', 'a', 'p', 'e' };

  emxArray_int32_T *ii;
  boolean_T b5;
  boolean_T exitg7;
  boolean_T guard4 = FALSE;
  const mxArray *f_y;
  emxArray_int32_T *b_ii;
  emxArray_real_T *diffx;
  int32_T i21;
  int32_T i22;
  const mxArray *g_y;
  static const int32_T iv79[2] = { 1, 36 };

  boolean_T b6;
  boolean_T exitg6;
  boolean_T guard3 = FALSE;
  const mxArray *h_y;
  emxArray_int32_T *c_ii;
  emxArray_real_T *b_adjacency_graph;
  const mxArray *i_y;
  static const int32_T iv80[2] = { 1, 36 };

  boolean_T b7;
  boolean_T exitg5;
  boolean_T guard2 = FALSE;
  const mxArray *j_y;
  emxArray_int32_T *d_ii;
  emxArray_real_T *union_ij;
  emxArray_real_T *ref_union;
  emxArray_real_T *ref_it;
  emxArray_real_T *ref_i;
  emxArray_real_T *val_it;
  emxArray_real_T *val_i;
  emxArray_real_T *val_jt;
  emxArray_real_T *val_j;
  emxArray_real_T *control_p;
  emxArray_real_T *t0_x;
  emxArray_real_T *t0_y;
  emxArray_real_T *t1_x;
  emxArray_real_T *t1_y;
  emxArray_real_T *r10;
  struct_T expl_temp;
  struct_T b_expl_temp;
  struct_T c_expl_temp;
  emxArray_real_T *b_val_jt;
  emxArray_real_T *b_val_it;
  emxArray_real_T *c_adjacency_graph;
  emxArray_real_T *d_adjacency_graph;
  emxArray_real_T *e_adjacency_graph;
  emxArray_real_T *f_adjacency_graph;
  emxArray_real_T *g_adjacency_graph;
  emxArray_real_T *h_adjacency_graph;
  emxArray_real_T *i_adjacency_graph;
  emxArray_real_T *j_adjacency_graph;
  emxArray_real_T *k_adjacency_graph;
  b_struct_T b_sp_set;
  b_struct_T c_sp_set;
  b_struct_T b_ref_set;
  b_struct_T c_ref_set;
  emxArray_int32_T *e_ii;
  real_T b_i;
  real_T j;
  real_T b_error;
  const mxArray *k_y;
  static const int32_T iv81[2] = { 1, 39 };

  boolean_T d_ix;
  boolean_T exitg4;
  boolean_T c_ixstart;
  const mxArray *l_y;
  static const int32_T iv82[2] = { 1, 39 };

  real_T bound2[2];
  boolean_T e_ix;
  boolean_T exitg3;
  boolean_T d_ixstart;
  const mxArray *m_y;
  static const int32_T iv83[2] = { 1, 39 };

  real_T bound3[2];
  boolean_T f_ix;
  boolean_T exitg2;
  boolean_T e_ixstart;
  int32_T c_val_it[2];
  int32_T b_val_i[2];
  real_T dv0[3];
  int32_T iv84[2];
  int32_T f_ii[1];
  int32_T l_adjacency_graph[1];
  int32_T iv85[2];
  const mxArray *n_y;
  static const int32_T iv86[2] = { 1, 36 };

  boolean_T b8;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  const mxArray *o_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  int32_T exitg11;
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

  /* % initialize adjacency graph */
  st.site = &emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  if (((Sp2->size[0] == 1) && (Sp2->size[1] == 1)) || (Sp2->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m12 = mxCreateCharArray(2, iv74);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m12, cv27);
    emlrtAssign(&y, m12);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, y, &emlrtMCI), &b_emlrtMCI);
  }

  if (Sp2->size[0] > 0) {
  } else {
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv75);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
    emlrtAssign(&b_y, m12);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  for (i20 = 0; i20 < 2; i20++) {
    outsz[i20] = Sp2->size[i20];
  }

  emxInit_real_T(&c_st, &varargin_1, 2, &emlrtRTEI, TRUE);
  i20 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)varargin_1, i20, (int32_T)sizeof
                    (real_T), &cc_emlrtRTEI);
  d_st.site = &kb_emlrtRSI;
  d_st.site = &kb_emlrtRSI;
  d_st.site = &lb_emlrtRSI;
  f_st.site = &rb_emlrtRSI;
  ix = 0;
  iy = -1;
  d_st.site = &mb_emlrtRSI;
  f_st.site = &tb_emlrtRSI;
  if (1 > Sp2->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (Sp2->size[1] > 2147483646);
  }

  if (overflow) {
    f_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (i = 1; i <= Sp2->size[1]; i++) {
    d_st.site = &nb_emlrtRSI;
    d_st.site = &ob_emlrtRSI;
    ixstart = ix;
    f_st.site = &ec_emlrtRSI;
    f_st.site = &ec_emlrtRSI;
    f_st.site = &dc_emlrtRSI;
    ixstop = ix + Sp2->size[0];
    D_sp1 = Sp2->data[ix];
    if (Sp2->size[0] > 1) {
      f_st.site = &cc_emlrtRSI;
      if (muDoubleScalarIsNaN(Sp2->data[ix])) {
        f_st.site = &bc_emlrtRSI;
        f_st.site = &bc_emlrtRSI;
        if (ix + 2 > ixstop) {
          b_ix = FALSE;
        } else {
          b_ix = (ixstop > 2147483646);
        }

        if (b_ix) {
          g_st.site = &ub_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        c_ix = ix + 1;
        exitg9 = FALSE;
        while ((exitg9 == FALSE) && (c_ix + 1 <= ixstop)) {
          f_st.site = &ac_emlrtRSI;
          ixstart = c_ix;
          f_st.site = &yb_emlrtRSI;
          if (!muDoubleScalarIsNaN(Sp2->data[c_ix])) {
            D_sp1 = Sp2->data[c_ix];
            exitg9 = TRUE;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        f_st.site = &xb_emlrtRSI;
        f_st.site = &xb_emlrtRSI;
        if (ixstart + 2 > ixstop) {
          b_ixstart = FALSE;
        } else {
          b_ixstart = (ixstop > 2147483646);
        }

        if (b_ixstart) {
          g_st.site = &ub_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
          f_st.site = &wb_emlrtRSI;
          f_st.site = &vb_emlrtRSI;
          if (Sp2->data[c_ix] > D_sp1) {
            D_sp1 = Sp2->data[c_ix];
          }
        }
      }
    }

    d_st.site = &pb_emlrtRSI;
    iy++;
    varargin_1->data[iy] = D_sp1;
    d_st.site = &qb_emlrtRSI;
    ix += Sp2->size[0];
  }

  st.site = &emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  if ((varargin_1->size[1] == 1) || (varargin_1->size[1] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m12 = mxCreateCharArray(2, iv76);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m12, cv27);
    emlrtAssign(&c_y, m12);
    d_st.site = &st_emlrtRSI;
    e_st.site = &eu_emlrtRSI;
    error(&d_st, message(&e_st, c_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (varargin_1->size[1] > 0) {
  } else {
    d_y = NULL;
    m12 = mxCreateCharArray(2, iv77);
    for (i = 0; i < 39; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
    emlrtAssign(&d_y, m12);
    d_st.site = &rt_emlrtRSI;
    e_st.site = &du_emlrtRSI;
    error(&d_st, message(&e_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  d_st.site = &fc_emlrtRSI;
  ixstart = 1;
  D_sp1 = varargin_1->data[0];
  if (varargin_1->size[1] > 1) {
    f_st.site = &cc_emlrtRSI;
    if (muDoubleScalarIsNaN(varargin_1->data[0])) {
      f_st.site = &bc_emlrtRSI;
      if (2 > varargin_1->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (varargin_1->size[1] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      ix = 2;
      exitg8 = FALSE;
      while ((exitg8 == FALSE) && (ix <= varargin_1->size[1])) {
        ixstart = ix;
        f_st.site = &yb_emlrtRSI;
        if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
          D_sp1 = varargin_1->data[ix - 1];
          exitg8 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < varargin_1->size[1]) {
      f_st.site = &xb_emlrtRSI;
      f_st.site = &xb_emlrtRSI;
      if (ixstart + 1 > varargin_1->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (varargin_1->size[1] > 2147483646);
      }

      if (overflow) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ixstart + 1 <= varargin_1->size[1]) {
        f_st.site = &vb_emlrtRSI;
        if (varargin_1->data[ixstart] > D_sp1) {
          D_sp1 = varargin_1->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  i20 = adjacency_graph->size[0] * adjacency_graph->size[1];
  D_sp2 = emlrtNonNegativeCheckFastR2012b(D_sp1, &bb_emlrtDCI, sp);
  adjacency_graph->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2,
    &ab_emlrtDCI, sp);
  D_sp2 = emlrtNonNegativeCheckFastR2012b(D_sp1, &db_emlrtDCI, sp);
  adjacency_graph->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2,
    &cb_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i20, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  D_sp2 = emlrtNonNegativeCheckFastR2012b(D_sp1, &bb_emlrtDCI, sp);
  D_sp1 = emlrtNonNegativeCheckFastR2012b(D_sp1, &db_emlrtDCI, sp);
  i = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &ab_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(D_sp1, &cb_emlrtDCI, sp);
  for (i20 = 0; i20 < i; i20++) {
    adjacency_graph->data[i20] = 0.0;
  }

  emxInit_real_T(sp, &Fx, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Fy, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, TRUE);

  /* { */
  /* for i=1:surface_amount */
  /*     %area_i = find(Sp2==sp_val(i)); */
  /*     area_i = sp_set(i).val(:,1)+(x-1)*sp_set(i).val(:,2); */
  /*     size_i = size(area_i, 1); */
  /*     for j=(i+1):surface_amount */
  /*         %area_j = find(Sp2==sp_val(j)); */
  /*         area_j = sp_set(j).val(:,1)+(x-1)*sp_set(j).val(:,2); */
  /*         size_j = size(area_j, 1); */
  /*         dif = abs(repmat(area_i, 1, size_j) - repmat(area_j, 1, size_i)'); */
  /*         if sum(find(dif == 1 | dif == x)) ~= 0 */
  /*             adjacency_graph(i, j) = 1; */
  /*         end */
  /*     end */
  /* end */
  /* } */
  st.site = &b_emlrtRSI;
  gradient(&st, Sp2, Fx, Fy);
  st.site = &c_emlrtRSI;
  i20 = x->size[0] * x->size[1];
  x->size[0] = Fx->size[0];
  x->size[1] = Fx->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  i = Fx->size[0] * Fx->size[1];
  for (i20 = 0; i20 < i; i20++) {
    x->data[i20] = (Fx->data[i20] != 0.0);
  }

  emxFree_real_T(&Fx);
  b_st.site = &fd_emlrtRSI;
  iy = x->size[0] * x->size[1];
  ixstart = 0;
  if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
      (x->size[1] <= 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    e_y = NULL;
    m12 = mxCreateCharArray(2, iv78);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
    emlrtAssign(&e_y, m12);
    c_st.site = &qt_emlrtRSI;
    h_st.site = &cu_emlrtRSI;
    error(&c_st, message(&h_st, e_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  emxInit_int32_T(&b_st, &ii, 1, &qc_emlrtRTEI, TRUE);
  i20 = ii->size[0];
  ii->size[0] = iy;
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof(int32_T),
                    &dc_emlrtRTEI);
  c_st.site = &gd_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  if (1 > iy) {
    b5 = FALSE;
  } else {
    b5 = (iy > 2147483646);
  }

  if (b5) {
    d_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ix = 1;
  exitg7 = FALSE;
  while ((exitg7 == FALSE) && (ix <= iy)) {
    guard4 = FALSE;
    if (x->data[ix - 1]) {
      c_st.site = &hd_emlrtRSI;
      ixstart++;
      ii->data[ixstart - 1] = ix;
      if (ixstart >= iy) {
        exitg7 = TRUE;
      } else {
        guard4 = TRUE;
      }
    } else {
      guard4 = TRUE;
    }

    if (guard4 == TRUE) {
      ix++;
    }
  }

  if (ixstart <= iy) {
  } else {
    f_y = NULL;
    m12 = mxCreateString("Assertion failed.");
    emlrtAssign(&f_y, m12);
    c_st.site = &pt_emlrtRSI;
    error(&c_st, f_y, &j_emlrtMCI);
  }

  if (iy == 1) {
    if (ixstart == 0) {
      i20 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > ixstart) {
      i = 0;
    } else {
      i = ixstart;
    }

    emxInit_int32_T(&b_st, &b_ii, 1, &emlrtRTEI, TRUE);
    i20 = b_ii->size[0];
    b_ii->size[0] = i;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i20 = 0; i20 < i; i20++) {
      b_ii->data[i20] = ii->data[i20];
    }

    i20 = ii->size[0];
    ii->size[0] = b_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    i = b_ii->size[0];
    for (i20 = 0; i20 < i; i20++) {
      ii->data[i20] = b_ii->data[i20];
    }

    emxFree_int32_T(&b_ii);
  }

  b_emxInit_real_T(&b_st, &diffx, 1, &hc_emlrtRTEI, TRUE);
  i20 = diffx->size[0];
  diffx->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)diffx, i20, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = ii->size[0];
  for (i20 = 0; i20 < i; i20++) {
    diffx->data[i20] = ii->data[i20];
  }

  i = 0;
  while (i <= diffx->size[0] - 1) {
    i20 = Sp2->size[0] * Sp2->size[1];
    i21 = diffx->size[0];
    i21 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i21,
      &eg_emlrtBCI, sp) - 1];
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &vd_emlrtBCI, sp);
    i20 = diffx->size[0];
    D_sp1 = diffx->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i20,
      &fg_emlrtBCI, sp) - 1] + (real_T)Sp2->size[0];
    st.site = &d_emlrtRSI;
    if (D_sp1 < (real_T)Sp2->size[0] * (real_T)Sp2->size[1]) {
      i20 = Sp2->size[0] * Sp2->size[1];
      i21 = (int32_T)D_sp1;
      c_ix = Sp2->size[0] * Sp2->size[1];
      i22 = diffx->size[0];
      i22 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i22,
        &ig_emlrtBCI, sp) - 1];
      if (Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &gg_emlrtBCI,
           sp) - 1] != Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix,
           &hg_emlrtBCI, sp) - 1]) {
        i20 = Sp2->size[0] * Sp2->size[1];
        i21 = (int32_T)D_sp1;
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &wd_emlrtBCI, sp);
        i20 = adjacency_graph->size[0];
        D_sp2 = Sp2->data[(int32_T)D_sp1 - 1];
        i21 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &kb_emlrtDCI, sp);
        c_ix = adjacency_graph->size[1];
        D_sp2 = Sp2->data[(int32_T)diffx->data[i] - 1];
        i22 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &lb_emlrtDCI, sp);
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &jg_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &kg_emlrtBCI, sp) - 1))
          - 1] = 1.0;
        i20 = adjacency_graph->size[0];
        i21 = (int32_T)Sp2->data[(int32_T)diffx->data[i] - 1];
        c_ix = adjacency_graph->size[1];
        i22 = (int32_T)Sp2->data[(int32_T)D_sp1 - 1];
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &lg_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &mg_emlrtBCI, sp) - 1))
          - 1] = 1.0;
      }
    }

    i20 = diffx->size[0];
    D_sp1 = diffx->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i20,
      &ng_emlrtBCI, sp) - 1] - (real_T)Sp2->size[0];
    if (D_sp1 > 0.0) {
      i20 = Sp2->size[0] * Sp2->size[1];
      i21 = (int32_T)D_sp1;
      c_ix = Sp2->size[0] * Sp2->size[1];
      i22 = diffx->size[0];
      i22 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i22,
        &qg_emlrtBCI, sp) - 1];
      if (Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &og_emlrtBCI,
           sp) - 1] != Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix,
           &pg_emlrtBCI, sp) - 1]) {
        i20 = Sp2->size[0] * Sp2->size[1];
        i21 = (int32_T)D_sp1;
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &xd_emlrtBCI, sp);
        i20 = adjacency_graph->size[0];
        D_sp2 = Sp2->data[(int32_T)D_sp1 - 1];
        i21 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &mb_emlrtDCI, sp);
        c_ix = adjacency_graph->size[1];
        D_sp2 = Sp2->data[(int32_T)diffx->data[i] - 1];
        i22 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &nb_emlrtDCI, sp);
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &rg_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &sg_emlrtBCI, sp) - 1))
          - 1] = 1.0;
        i20 = adjacency_graph->size[0];
        i21 = (int32_T)Sp2->data[(int32_T)diffx->data[i] - 1];
        c_ix = adjacency_graph->size[1];
        i22 = (int32_T)Sp2->data[(int32_T)D_sp1 - 1];
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &tg_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &ug_emlrtBCI, sp) - 1))
          - 1] = 1.0;
      }
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  st.site = &e_emlrtRSI;
  i20 = x->size[0] * x->size[1];
  x->size[0] = Fy->size[0];
  x->size[1] = Fy->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  i = Fy->size[0] * Fy->size[1];
  for (i20 = 0; i20 < i; i20++) {
    x->data[i20] = (Fy->data[i20] != 0.0);
  }

  emxFree_real_T(&Fy);
  b_st.site = &fd_emlrtRSI;
  iy = x->size[0] * x->size[1];
  ixstart = 0;
  if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
      (x->size[1] <= 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    g_y = NULL;
    m12 = mxCreateCharArray(2, iv79);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
    emlrtAssign(&g_y, m12);
    c_st.site = &qt_emlrtRSI;
    h_st.site = &cu_emlrtRSI;
    error(&c_st, message(&h_st, g_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  i20 = ii->size[0];
  ii->size[0] = iy;
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof(int32_T),
                    &dc_emlrtRTEI);
  c_st.site = &gd_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  if (1 > iy) {
    b6 = FALSE;
  } else {
    b6 = (iy > 2147483646);
  }

  if (b6) {
    d_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ix = 1;
  exitg6 = FALSE;
  while ((exitg6 == FALSE) && (ix <= iy)) {
    guard3 = FALSE;
    if (x->data[ix - 1]) {
      c_st.site = &hd_emlrtRSI;
      ixstart++;
      ii->data[ixstart - 1] = ix;
      if (ixstart >= iy) {
        exitg6 = TRUE;
      } else {
        guard3 = TRUE;
      }
    } else {
      guard3 = TRUE;
    }

    if (guard3 == TRUE) {
      ix++;
    }
  }

  if (ixstart <= iy) {
  } else {
    h_y = NULL;
    m12 = mxCreateString("Assertion failed.");
    emlrtAssign(&h_y, m12);
    c_st.site = &pt_emlrtRSI;
    error(&c_st, h_y, &j_emlrtMCI);
  }

  if (iy == 1) {
    if (ixstart == 0) {
      i20 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > ixstart) {
      i = 0;
    } else {
      i = ixstart;
    }

    emxInit_int32_T(&b_st, &c_ii, 1, &emlrtRTEI, TRUE);
    i20 = c_ii->size[0];
    c_ii->size[0] = i;
    emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i20 = 0; i20 < i; i20++) {
      c_ii->data[i20] = ii->data[i20];
    }

    i20 = ii->size[0];
    ii->size[0] = c_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    i = c_ii->size[0];
    for (i20 = 0; i20 < i; i20++) {
      ii->data[i20] = c_ii->data[i20];
    }

    emxFree_int32_T(&c_ii);
  }

  i20 = diffx->size[0];
  diffx->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)diffx, i20, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = ii->size[0];
  for (i20 = 0; i20 < i; i20++) {
    diffx->data[i20] = ii->data[i20];
  }

  i = 0;
  while (i <= diffx->size[0] - 1) {
    i20 = Sp2->size[0] * Sp2->size[1];
    i21 = diffx->size[0];
    c_ix = 1 + i;
    i21 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21,
      &of_emlrtBCI, sp) - 1];
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &yd_emlrtBCI, sp);
    i20 = diffx->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ae_emlrtBCI, sp);
    st.site = &f_emlrtRSI;
    if (b_mod(diffx->data[i] + 1.0, Sp2->size[0]) != 1.0) {
      i20 = Sp2->size[0] * Sp2->size[1];
      i21 = (int32_T)(diffx->data[i] + 1.0);
      c_ix = Sp2->size[0] * Sp2->size[1];
      i22 = diffx->size[0];
      ixstop = 1 + i;
      i22 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1,
        i22, &rf_emlrtBCI, sp) - 1];
      if (Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &pf_emlrtBCI,
           sp) - 1] != Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix,
           &qf_emlrtBCI, sp) - 1]) {
        i20 = Sp2->size[0] * Sp2->size[1];
        i21 = (int32_T)(diffx->data[i] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &be_emlrtBCI, sp);
        i20 = adjacency_graph->size[0];
        D_sp2 = Sp2->data[(int32_T)(diffx->data[i] + 1.0) - 1];
        i21 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &gb_emlrtDCI, sp);
        c_ix = adjacency_graph->size[1];
        D_sp2 = Sp2->data[(int32_T)diffx->data[i] - 1];
        i22 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &hb_emlrtDCI, sp);
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &sf_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &tf_emlrtBCI, sp) - 1))
          - 1] = 1.0;
        i20 = adjacency_graph->size[0];
        i21 = (int32_T)Sp2->data[(int32_T)diffx->data[i] - 1];
        c_ix = adjacency_graph->size[1];
        i22 = (int32_T)Sp2->data[(int32_T)(diffx->data[i] + 1.0) - 1];
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &uf_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &vf_emlrtBCI, sp) - 1))
          - 1] = 1.0;
      }
    }

    i20 = diffx->size[0];
    i21 = i + 1;
    emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ce_emlrtBCI, sp);
    st.site = &g_emlrtRSI;
    if (b_mod(diffx->data[i] - 1.0, Sp2->size[0]) != 0.0) {
      i20 = Sp2->size[0] * Sp2->size[1];
      i21 = (int32_T)(diffx->data[i] - 1.0);
      c_ix = Sp2->size[0] * Sp2->size[1];
      i22 = diffx->size[0];
      ixstop = 1 + i;
      i22 = (int32_T)diffx->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1,
        i22, &yf_emlrtBCI, sp) - 1];
      if (Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &wf_emlrtBCI,
           sp) - 1] != Sp2->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix,
           &xf_emlrtBCI, sp) - 1]) {
        i20 = Sp2->size[0] * Sp2->size[1];
        i21 = (int32_T)(diffx->data[i] - 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &de_emlrtBCI, sp);
        i20 = adjacency_graph->size[0];
        D_sp2 = Sp2->data[(int32_T)(diffx->data[i] - 1.0) - 1];
        i21 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &ib_emlrtDCI, sp);
        c_ix = adjacency_graph->size[1];
        D_sp2 = Sp2->data[(int32_T)diffx->data[i] - 1];
        i22 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &jb_emlrtDCI, sp);
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &ag_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &bg_emlrtBCI, sp) - 1))
          - 1] = 1.0;
        i20 = adjacency_graph->size[0];
        i21 = (int32_T)Sp2->data[(int32_T)diffx->data[i] - 1];
        c_ix = adjacency_graph->size[1];
        i22 = (int32_T)Sp2->data[(int32_T)(diffx->data[i] - 1.0) - 1];
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
          &cg_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &dg_emlrtBCI, sp) - 1))
          - 1] = 1.0;
      }
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &b_adjacency_graph, 2, &emlrtRTEI, TRUE);
  ix = adjacency_graph->size[0];
  iy = adjacency_graph->size[1];
  i20 = b_adjacency_graph->size[0] * b_adjacency_graph->size[1];
  b_adjacency_graph->size[0] = sp_val->size[0];
  b_adjacency_graph->size[1] = sp_val->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_adjacency_graph, i20, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = sp_val->size[0];
  for (i20 = 0; i20 < i; i20++) {
    ixstart = sp_val->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      D_sp2 = sp_val->data[i21];
      c_ix = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &eb_emlrtDCI, sp);
      D_sp2 = sp_val->data[i20];
      i22 = (int32_T)emlrtIntegerCheckFastR2012b(D_sp2, &fb_emlrtDCI, sp);
      b_adjacency_graph->data[i21 + b_adjacency_graph->size[0] * i20] =
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, ix,
        &bf_emlrtBCI, sp) + adjacency_graph->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i22, 1, iy, &cf_emlrtBCI, sp) - 1)) -
        1];
    }
  }

  i20 = adjacency_graph->size[0] * adjacency_graph->size[1];
  adjacency_graph->size[0] = b_adjacency_graph->size[0];
  adjacency_graph->size[1] = b_adjacency_graph->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i20, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = b_adjacency_graph->size[1];
  for (i20 = 0; i20 < i; i20++) {
    ixstart = b_adjacency_graph->size[0];
    for (i21 = 0; i21 < ixstart; i21++) {
      adjacency_graph->data[i21 + adjacency_graph->size[0] * i20] =
        b_adjacency_graph->data[i21 + b_adjacency_graph->size[0] * i20];
    }
  }

  emxFree_real_T(&b_adjacency_graph);
  st.site = &h_emlrtRSI;
  triu(&st, adjacency_graph);

  /* % merge superpixels with similiar bspline */
  st.site = &i_emlrtRSI;
  i20 = x->size[0] * x->size[1];
  x->size[0] = adjacency_graph->size[0];
  x->size[1] = adjacency_graph->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  i = adjacency_graph->size[0] * adjacency_graph->size[1];
  for (i20 = 0; i20 < i; i20++) {
    x->data[i20] = (adjacency_graph->data[i20] != 0.0);
  }

  b_st.site = &fd_emlrtRSI;
  iy = x->size[0] * x->size[1];
  ixstart = 0;
  if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
      (x->size[1] <= 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    i_y = NULL;
    m12 = mxCreateCharArray(2, iv80);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
    emlrtAssign(&i_y, m12);
    c_st.site = &qt_emlrtRSI;
    h_st.site = &cu_emlrtRSI;
    error(&c_st, message(&h_st, i_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  i20 = ii->size[0];
  ii->size[0] = iy;
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof(int32_T),
                    &dc_emlrtRTEI);
  c_st.site = &gd_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  if (1 > iy) {
    b7 = FALSE;
  } else {
    b7 = (iy > 2147483646);
  }

  if (b7) {
    d_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ix = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ix <= iy)) {
    guard2 = FALSE;
    if (x->data[ix - 1]) {
      c_st.site = &hd_emlrtRSI;
      ixstart++;
      ii->data[ixstart - 1] = ix;
      if (ixstart >= iy) {
        exitg5 = TRUE;
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

  if (ixstart <= iy) {
  } else {
    j_y = NULL;
    m12 = mxCreateString("Assertion failed.");
    emlrtAssign(&j_y, m12);
    c_st.site = &pt_emlrtRSI;
    error(&c_st, j_y, &j_emlrtMCI);
  }

  if (iy == 1) {
    if (ixstart == 0) {
      i20 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > ixstart) {
      i = 0;
    } else {
      i = ixstart;
    }

    emxInit_int32_T(&b_st, &d_ii, 1, &emlrtRTEI, TRUE);
    i20 = d_ii->size[0];
    d_ii->size[0] = i;
    emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i20 = 0; i20 < i; i20++) {
      d_ii->data[i20] = ii->data[i20];
    }

    i20 = ii->size[0];
    ii->size[0] = d_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    i = d_ii->size[0];
    for (i20 = 0; i20 < i; i20++) {
      ii->data[i20] = d_ii->data[i20];
    }

    emxFree_int32_T(&d_ii);
  }

  i20 = diffx->size[0];
  diffx->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)diffx, i20, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = ii->size[0];
  for (i20 = 0; i20 < i; i20++) {
    diffx->data[i20] = ii->data[i20];
  }

  emxInit_real_T(sp, &union_ij, 2, &ic_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_union, 2, &jc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_it, 2, &kc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_i, 2, &lc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_it, 2, &mc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_i, 2, &nc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_jt, 2, &oc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_j, 2, &pc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &control_p, 3, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t1_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t1_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r10, 2, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, &fc_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &b_expl_temp, &ec_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &c_expl_temp, &gc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_val_jt, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_val_it, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &d_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &e_adjacency_graph, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &f_adjacency_graph, 1, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &g_adjacency_graph, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &h_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &i_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &j_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &k_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &b_sp_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &c_sp_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &b_ref_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &c_ref_set, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &e_ii, 1, &emlrtRTEI, TRUE);
  do {
    exitg11 = 0;
    st.site = &j_emlrtRSI;
    if (sum(&st, diffx) > 0.0) {
      i20 = diffx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &ee_emlrtBCI, sp);
      st.site = &k_emlrtRSI;
      b_i = b_mod(diffx->data[0], sp_set->size[1]);
      i20 = diffx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &fe_emlrtBCI, sp);
      st.site = &l_emlrtRSI;
      b_st.site = &vc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;
      j = diffx->data[0] / (real_T)sp_set->size[1];
      st.site = &l_emlrtRSI;
      b_ceil(&j);
      i20 = union_ij->size[0] * union_ij->size[1];
      i21 = sp_set->size[1];
      c_ix = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &ob_emlrtDCI, sp);
      i22 = sp_set->size[1];
      ixstop = (int32_T)emlrtIntegerCheckFastR2012b(j, &pb_emlrtDCI, sp);
      union_ij->size[0] = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1,
        i21, &vg_emlrtBCI, sp) - 1].val->size[0] + sp_set->
        data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &wg_emlrtBCI, sp)
        - 1].val->size[0];
      union_ij->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)union_ij, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i20 = 0; i20 < 2; i20++) {
        i21 = sp_set->size[1];
        c_ix = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &ob_emlrtDCI, sp);
        i = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21,
          &vg_emlrtBCI, sp) - 1].val->size[0];
        for (i21 = 0; i21 < i; i21++) {
          c_ix = sp_set->size[1];
          i22 = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &ob_emlrtDCI, sp);
          ixstop = sp_set->size[1];
          ix = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &ob_emlrtDCI, sp);
          union_ij->data[i21 + union_ij->size[0] * i20] = sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &vg_emlrtBCI,
            sp) - 1].val->data[i21 + sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &vg_emlrtBCI,
            sp) - 1].val->size[0] * i20];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        i21 = sp_set->size[1];
        c_ix = (int32_T)emlrtIntegerCheckFastR2012b(j, &pb_emlrtDCI, sp);
        i = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21,
          &wg_emlrtBCI, sp) - 1].val->size[0];
        for (i21 = 0; i21 < i; i21++) {
          c_ix = sp_set->size[1];
          i22 = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &ob_emlrtDCI, sp);
          ixstop = sp_set->size[1];
          ix = (int32_T)emlrtIntegerCheckFastR2012b(j, &pb_emlrtDCI, sp);
          iy = sp_set->size[1];
          ixstart = (int32_T)emlrtIntegerCheckFastR2012b(j, &pb_emlrtDCI, sp);
          union_ij->data[(i21 + sp_set->data[emlrtDynamicBoundsCheckFastR2012b
                          (i22, 1, c_ix, &vg_emlrtBCI, sp) - 1].val->size[0]) +
            union_ij->size[0] * i20] = sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &wg_emlrtBCI,
            sp) - 1].val->data[i21 + sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, iy, &wg_emlrtBCI,
            sp) - 1].val->size[0] * i20];
        }
      }

      i20 = ref_union->size[0] * ref_union->size[1];
      i21 = ref_set->size[1];
      c_ix = (int32_T)b_i;
      i22 = ref_set->size[1];
      ixstop = (int32_T)j;
      ref_union->size[0] = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix,
        1, i21, &xg_emlrtBCI, sp) - 1].val->size[0] + ref_set->
        data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &yg_emlrtBCI, sp)
        - 1].val->size[0];
      ref_union->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)ref_union, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i20 = 0; i20 < 2; i20++) {
        i21 = ref_set->size[1];
        c_ix = (int32_T)b_i;
        i = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21,
          &xg_emlrtBCI, sp) - 1].val->size[0];
        for (i21 = 0; i21 < i; i21++) {
          c_ix = ref_set->size[1];
          i22 = (int32_T)b_i;
          ixstop = ref_set->size[1];
          ix = (int32_T)b_i;
          ref_union->data[i21 + ref_union->size[0] * i20] = ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &xg_emlrtBCI,
            sp) - 1].val->data[i21 + ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &xg_emlrtBCI,
            sp) - 1].val->size[0] * i20];
        }
      }

      for (i20 = 0; i20 < 2; i20++) {
        i21 = ref_set->size[1];
        c_ix = (int32_T)j;
        i = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21,
          &yg_emlrtBCI, sp) - 1].val->size[0];
        for (i21 = 0; i21 < i; i21++) {
          c_ix = ref_set->size[1];
          i22 = (int32_T)b_i;
          ixstop = ref_set->size[1];
          ix = (int32_T)j;
          iy = ref_set->size[1];
          ixstart = (int32_T)j;
          ref_union->data[(i21 + ref_set->data[emlrtDynamicBoundsCheckFastR2012b
                           (i22, 1, c_ix, &xg_emlrtBCI, sp) - 1].val->size[0]) +
            ref_union->size[0] * i20] = ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &yg_emlrtBCI,
            sp) - 1].val->data[i21 + ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, iy, &yg_emlrtBCI,
            sp) - 1].val->size[0] * i20];
        }
      }

      st.site = &m_emlrtRSI;
      bspline_inv(&st, union_ij, ref_union, control_p, &b_error);
      st.site = &n_emlrtRSI;
      b_st.site = &we_emlrtRSI;
      c_st.site = &jb_emlrtRSI;
      if (union_ij->size[0] > 0) {
      } else {
        k_y = NULL;
        m12 = mxCreateCharArray(2, iv81);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&k_y, m12);
        d_st.site = &rt_emlrtRSI;
        e_st.site = &du_emlrtRSI;
        error(&d_st, message(&e_st, k_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      d_st.site = &kb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      ix = 0;
      iy = -1;
      for (i = 0; i < 2; i++) {
        d_st.site = &nb_emlrtRSI;
        d_st.site = &ob_emlrtRSI;
        ixstart = ix;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &dc_emlrtRSI;
        ixstop = ix + union_ij->size[0];
        D_sp1 = union_ij->data[ix];
        if (union_ij->size[0] > 1) {
          f_st.site = &cc_emlrtRSI;
          if (muDoubleScalarIsNaN(union_ij->data[ix])) {
            f_st.site = &bc_emlrtRSI;
            f_st.site = &bc_emlrtRSI;
            if (ix + 2 > ixstop) {
              d_ix = FALSE;
            } else {
              d_ix = (ixstop > 2147483646);
            }

            if (d_ix) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            c_ix = ix + 1;
            exitg4 = FALSE;
            while ((exitg4 == FALSE) && (c_ix + 1 <= ixstop)) {
              f_st.site = &ac_emlrtRSI;
              ixstart = c_ix;
              f_st.site = &yb_emlrtRSI;
              if (!muDoubleScalarIsNaN(union_ij->data[c_ix])) {
                D_sp1 = union_ij->data[c_ix];
                exitg4 = TRUE;
              } else {
                c_ix++;
              }
            }
          }

          if (ixstart + 1 < ixstop) {
            f_st.site = &xb_emlrtRSI;
            f_st.site = &xb_emlrtRSI;
            if (ixstart + 2 > ixstop) {
              c_ixstart = FALSE;
            } else {
              c_ixstart = (ixstop > 2147483646);
            }

            if (c_ixstart) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
              f_st.site = &wb_emlrtRSI;
              f_st.site = &vb_emlrtRSI;
              if (union_ij->data[c_ix] < D_sp1) {
                D_sp1 = union_ij->data[c_ix];
              }
            }
          }
        }

        d_st.site = &pb_emlrtRSI;
        iy++;
        outsz[iy] = D_sp1;
        d_st.site = &qb_emlrtRSI;
        ix += union_ij->size[0];
      }

      st.site = &o_emlrtRSI;
      i20 = sp_set->size[1];
      i21 = (int32_T)b_i;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ge_emlrtBCI, &st);
      b_st.site = &we_emlrtRSI;
      c_st.site = &jb_emlrtRSI;
      if (sp_set->data[(int32_T)b_i - 1].val->size[0] > 0) {
      } else {
        l_y = NULL;
        m12 = mxCreateCharArray(2, iv82);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&l_y, m12);
        d_st.site = &rt_emlrtRSI;
        e_st.site = &du_emlrtRSI;
        error(&d_st, message(&e_st, l_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      d_st.site = &kb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      ix = 0;
      iy = -1;
      for (i = 0; i < 2; i++) {
        d_st.site = &nb_emlrtRSI;
        d_st.site = &ob_emlrtRSI;
        ixstart = ix;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &dc_emlrtRSI;
        ixstop = ix + sp_set->data[(int32_T)b_i - 1].val->size[0];
        D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[ix];
        if (sp_set->data[(int32_T)b_i - 1].val->size[0] > 1) {
          f_st.site = &cc_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[(int32_T)b_i - 1].val->data[ix]))
          {
            f_st.site = &bc_emlrtRSI;
            f_st.site = &bc_emlrtRSI;
            if (ix + 2 > ixstop) {
              e_ix = FALSE;
            } else {
              e_ix = (ixstop > 2147483646);
            }

            if (e_ix) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            c_ix = ix + 1;
            exitg3 = FALSE;
            while ((exitg3 == FALSE) && (c_ix + 1 <= ixstop)) {
              f_st.site = &ac_emlrtRSI;
              ixstart = c_ix;
              f_st.site = &yb_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[(int32_T)b_i - 1].val->
                   data[c_ix])) {
                D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[c_ix];
                exitg3 = TRUE;
              } else {
                c_ix++;
              }
            }
          }

          if (ixstart + 1 < ixstop) {
            f_st.site = &xb_emlrtRSI;
            f_st.site = &xb_emlrtRSI;
            if (ixstart + 2 > ixstop) {
              d_ixstart = FALSE;
            } else {
              d_ixstart = (ixstop > 2147483646);
            }

            if (d_ixstart) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
              f_st.site = &wb_emlrtRSI;
              f_st.site = &vb_emlrtRSI;
              if (sp_set->data[(int32_T)b_i - 1].val->data[c_ix] < D_sp1) {
                D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[c_ix];
              }
            }
          }
        }

        d_st.site = &pb_emlrtRSI;
        iy++;
        bound2[iy] = D_sp1;
        d_st.site = &qb_emlrtRSI;
        ix += sp_set->data[(int32_T)b_i - 1].val->size[0];
      }

      st.site = &p_emlrtRSI;
      i20 = sp_set->size[1];
      i21 = (int32_T)j;
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &he_emlrtBCI, &st);
      b_st.site = &we_emlrtRSI;
      c_st.site = &jb_emlrtRSI;
      if (sp_set->data[(int32_T)j - 1].val->size[0] > 0) {
      } else {
        m_y = NULL;
        m12 = mxCreateCharArray(2, iv83);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&m_y, m12);
        d_st.site = &rt_emlrtRSI;
        e_st.site = &du_emlrtRSI;
        error(&d_st, message(&e_st, m_y, &c_emlrtMCI), &d_emlrtMCI);
      }

      d_st.site = &kb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      ix = 0;
      iy = -1;
      for (i = 0; i < 2; i++) {
        d_st.site = &nb_emlrtRSI;
        d_st.site = &ob_emlrtRSI;
        ixstart = ix;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &ec_emlrtRSI;
        f_st.site = &dc_emlrtRSI;
        ixstop = ix + sp_set->data[(int32_T)j - 1].val->size[0];
        D_sp1 = sp_set->data[(int32_T)j - 1].val->data[ix];
        if (sp_set->data[(int32_T)j - 1].val->size[0] > 1) {
          f_st.site = &cc_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[(int32_T)j - 1].val->data[ix])) {
            f_st.site = &bc_emlrtRSI;
            f_st.site = &bc_emlrtRSI;
            if (ix + 2 > ixstop) {
              f_ix = FALSE;
            } else {
              f_ix = (ixstop > 2147483646);
            }

            if (f_ix) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            c_ix = ix + 1;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (c_ix + 1 <= ixstop)) {
              f_st.site = &ac_emlrtRSI;
              ixstart = c_ix;
              f_st.site = &yb_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[(int32_T)j - 1].val->
                   data[c_ix])) {
                D_sp1 = sp_set->data[(int32_T)j - 1].val->data[c_ix];
                exitg2 = TRUE;
              } else {
                c_ix++;
              }
            }
          }

          if (ixstart + 1 < ixstop) {
            f_st.site = &xb_emlrtRSI;
            f_st.site = &xb_emlrtRSI;
            if (ixstart + 2 > ixstop) {
              e_ixstart = FALSE;
            } else {
              e_ixstart = (ixstop > 2147483646);
            }

            if (e_ixstart) {
              g_st.site = &ub_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
              f_st.site = &wb_emlrtRSI;
              f_st.site = &vb_emlrtRSI;
              if (sp_set->data[(int32_T)j - 1].val->data[c_ix] < D_sp1) {
                D_sp1 = sp_set->data[(int32_T)j - 1].val->data[c_ix];
              }
            }
          }
        }

        d_st.site = &pb_emlrtRSI;
        iy++;
        bound3[iy] = D_sp1;
        d_st.site = &qb_emlrtRSI;
        ix += sp_set->data[(int32_T)j - 1].val->size[0];
      }

      i = control_p->size[0];
      ixstart = control_p->size[1];
      i20 = t1_x->size[0] * t1_x->size[1];
      t1_x->size[0] = i;
      t1_x->size[1] = ixstart;
      emxEnsureCapacity(sp, (emxArray__common *)t1_x, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i20 = 0; i20 < ixstart; i20++) {
        for (i21 = 0; i21 < i; i21++) {
          t1_x->data[i21 + t1_x->size[0] * i20] = control_p->data[i21 +
            control_p->size[0] * i20];
        }
      }

      i = control_p->size[0];
      ixstart = control_p->size[1];
      i20 = t1_y->size[0] * t1_y->size[1];
      t1_y->size[0] = i;
      t1_y->size[1] = ixstart;
      emxEnsureCapacity(sp, (emxArray__common *)t1_y, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i20 = 0; i20 < ixstart; i20++) {
        for (i21 = 0; i21 < i; i21++) {
          t1_y->data[i21 + t1_y->size[0] * i20] = control_p->data[(i21 +
            control_p->size[0] * i20) + control_p->size[0] * control_p->size[1]];
        }
      }

      i20 = sp_set->size[1];
      i21 = (int32_T)b_i;
      st.site = &q_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
               &df_emlrtBCI, sp) - 1].val, t1_x, t1_y, outsz, ref_it);
      i20 = bspline_set->size[1];
      i21 = (int32_T)b_i;
      b_emxCopyStruct_struct_T(sp, &b_expl_temp, &bspline_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ef_emlrtBCI, sp) -
        1], &ec_emlrtRTEI);
      i20 = sp_set->size[1];
      i21 = (int32_T)b_i;
      st.site = &r_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
               &ff_emlrtBCI, sp) - 1].val, b_expl_temp.x, b_expl_temp.y, bound2,
              ref_i);
      st.site = &s_emlrtRSI;
      getPixelsValue(&st, Ref, ref_it, val_it);
      st.site = &t_emlrtRSI;
      getPixelsValue(&st, Ref, ref_i, val_i);
      i20 = sp_set->size[1];
      i21 = (int32_T)j;
      st.site = &u_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
               &gf_emlrtBCI, sp) - 1].val, t1_x, t1_y, outsz, ref_it);
      i20 = bspline_set->size[1];
      i21 = (int32_T)j;
      b_emxCopyStruct_struct_T(sp, &expl_temp, &bspline_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &hf_emlrtBCI, sp) -
        1], &fc_emlrtRTEI);
      i20 = sp_set->size[1];
      i21 = (int32_T)j;
      st.site = &v_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
               &if_emlrtBCI, sp) - 1].val, expl_temp.x, expl_temp.y, bound3,
              ref_i);
      st.site = &w_emlrtRSI;
      getPixelsValue(&st, Ref, ref_it, val_jt);
      st.site = &x_emlrtRSI;
      getPixelsValue(&st, Ref, ref_i, val_j);
      for (i20 = 0; i20 < 2; i20++) {
        c_val_it[i20] = val_it->size[i20];
      }

      for (i20 = 0; i20 < 2; i20++) {
        b_val_i[i20] = val_i->size[i20];
      }

      emlrtSizeEqCheck2DFastR2012b(c_val_it, b_val_i, &db_emlrtECI, sp);
      i20 = b_val_it->size[0] * b_val_it->size[1];
      b_val_it->size[0] = val_it->size[0];
      b_val_it->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_val_it, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i = val_it->size[0] * val_it->size[1];
      for (i20 = 0; i20 < i; i20++) {
        b_val_it->data[i20] = val_it->data[i20] - val_i->data[i20];
      }

      st.site = &y_emlrtRSI;
      c_power(&st, b_val_it, val_it);
      st.site = &y_emlrtRSI;
      b_sum(&st, val_it, dv0);
      st.site = &y_emlrtRSI;
      D_sp1 = c_sum(dv0);
      for (i20 = 0; i20 < 2; i20++) {
        c_val_it[i20] = val_jt->size[i20];
      }

      for (i20 = 0; i20 < 2; i20++) {
        b_val_i[i20] = val_j->size[i20];
      }

      emlrtSizeEqCheck2DFastR2012b(c_val_it, b_val_i, &eb_emlrtECI, sp);
      i20 = b_val_jt->size[0] * b_val_jt->size[1];
      b_val_jt->size[0] = val_jt->size[0];
      b_val_jt->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_val_jt, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i = val_jt->size[0] * val_jt->size[1];
      for (i20 = 0; i20 < i; i20++) {
        b_val_jt->data[i20] = val_jt->data[i20] - val_j->data[i20];
      }

      st.site = &ab_emlrtRSI;
      c_power(&st, b_val_jt, val_it);
      st.site = &ab_emlrtRSI;
      b_sum(&st, val_it, dv0);
      st.site = &ab_emlrtRSI;
      D_sp2 = c_sum(dv0);
      st.site = &bb_emlrtRSI;
      b_st.site = &vc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;

      /* D_sp = error; */
      i20 = adjacency_graph->size[0];
      i21 = (int32_T)b_i;
      c_ix = adjacency_graph->size[1];
      i22 = (int32_T)j;
      adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20,
        &jf_emlrtBCI, sp) + adjacency_graph->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &kf_emlrtBCI, sp) - 1))
        - 1] = 0.0;
      if ((D_sp1 + D_sp2) / (real_T)union_ij->size[0] < 10.0) {
        if (b_i > j) {
          i20 = 0;
          i21 = 0;
        } else {
          i20 = adjacency_graph->size[1];
          i21 = (int32_T)b_i;
          i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &je_emlrtBCI, sp)
            - 1;
          i21 = adjacency_graph->size[1];
          c_ix = (int32_T)j;
          i21 = emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21, &je_emlrtBCI, sp);
        }

        if (b_i > j) {
          c_ix = 0;
          i22 = 0;
        } else {
          c_ix = adjacency_graph->size[0];
          i22 = (int32_T)b_i;
          c_ix = emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &ke_emlrtBCI,
            sp) - 1;
          i22 = adjacency_graph->size[0];
          ixstop = (int32_T)j;
          i22 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &ke_emlrtBCI,
            sp);
        }

        ixstop = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &ie_emlrtBCI, sp);
        ixstop = adjacency_graph->size[1];
        ix = (int32_T)j;
        ix = emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &le_emlrtBCI, sp);
        ixstop = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = i22 - c_ix;
        emxEnsureCapacity(sp, (emxArray__common *)varargin_1, ixstop, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        i = i22 - c_ix;
        for (i22 = 0; i22 < i; i22++) {
          varargin_1->data[varargin_1->size[0] * i22] = adjacency_graph->data
            [(c_ix + i22) + adjacency_graph->size[0] * (ix - 1)];
        }

        c_ix = c_adjacency_graph->size[0] * c_adjacency_graph->size[1];
        c_adjacency_graph->size[0] = 1;
        c_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)c_adjacency_graph, c_ix,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (c_ix = 0; c_ix < i; c_ix++) {
          c_adjacency_graph->data[c_adjacency_graph->size[0] * c_ix] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + c_ix)) - 1];
        }

        for (c_ix = 0; c_ix < 2; c_ix++) {
          b_val_i[c_ix] = c_adjacency_graph->size[c_ix];
        }

        for (c_ix = 0; c_ix < 2; c_ix++) {
          c_val_it[c_ix] = varargin_1->size[c_ix];
        }

        emlrtSizeEqCheck2DFastR2012b(b_val_i, c_val_it, &fb_emlrtECI, sp);
        if (b_i > j) {
          c_ix = 0;
          i22 = 0;
        } else {
          c_ix = adjacency_graph->size[1];
          i22 = (int32_T)b_i;
          c_ix = emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &ne_emlrtBCI,
            sp) - 1;
          i22 = adjacency_graph->size[1];
          ixstop = (int32_T)j;
          i22 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &ne_emlrtBCI,
            sp);
        }

        ixstop = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &me_emlrtBCI, sp);
        ixstop = ii->size[0];
        ii->size[0] = i22 - c_ix;
        emxEnsureCapacity(sp, (emxArray__common *)ii, ixstop, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        i = i22 - c_ix;
        for (i22 = 0; i22 < i; i22++) {
          ii->data[i22] = c_ix + i22;
        }

        iv84[0] = 1;
        iv84[1] = ii->size[0];
        c_ix = d_adjacency_graph->size[0] * d_adjacency_graph->size[1];
        d_adjacency_graph->size[0] = 1;
        d_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)d_adjacency_graph, c_ix,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (c_ix = 0; c_ix < i; c_ix++) {
          d_adjacency_graph->data[d_adjacency_graph->size[0] * c_ix] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + c_ix)) - 1];
        }

        for (c_ix = 0; c_ix < 2; c_ix++) {
          b_val_i[c_ix] = d_adjacency_graph->size[c_ix];
        }

        emlrtSubAssignSizeCheckR2012b(iv84, 2, b_val_i, 2, &gb_emlrtECI, sp);
        c_ix = e_adjacency_graph->size[0] * e_adjacency_graph->size[1];
        e_adjacency_graph->size[0] = 1;
        e_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)e_adjacency_graph, c_ix,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (i21 = 0; i21 < i; i21++) {
          e_adjacency_graph->data[e_adjacency_graph->size[0] * i21] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + i21)) - 1] + varargin_1->data[varargin_1->size[0] * i21];
        }

        i = e_adjacency_graph->size[1];
        for (i20 = 0; i20 < i; i20++) {
          adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            ii->data[i20]) - 1] = e_adjacency_graph->data
            [e_adjacency_graph->size[0] * i20];
        }

        if (1.0 > b_i) {
          i = 0;
        } else {
          i20 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &oe_emlrtBCI, sp);
          i20 = adjacency_graph->size[0];
          i21 = (int32_T)b_i;
          i = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &oe_emlrtBCI, sp);
        }

        if (1.0 > b_i) {
          i20 = 0;
        } else {
          i20 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &qe_emlrtBCI, sp);
          i20 = adjacency_graph->size[0];
          i21 = (int32_T)b_i;
          i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &qe_emlrtBCI, sp);
        }

        i21 = adjacency_graph->size[1];
        c_ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21, &pe_emlrtBCI, sp);
        i21 = adjacency_graph->size[1];
        c_ix = (int32_T)j;
        emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21, &re_emlrtBCI, sp);
        emlrtSizeEqCheck1DFastR2012b(i, i20, &hb_emlrtECI, sp);
        if (1.0 > b_i) {
          ixstart = 0;
        } else {
          i20 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i20, &se_emlrtBCI, sp);
          i20 = adjacency_graph->size[0];
          i21 = (int32_T)b_i;
          ixstart = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &se_emlrtBCI,
            sp);
        }

        i20 = ii->size[0];
        ii->size[0] = ixstart;
        emxEnsureCapacity(sp, (emxArray__common *)ii, i20, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i20 = 0; i20 < ixstart; i20++) {
          ii->data[i20] = i20;
        }

        i20 = adjacency_graph->size[1];
        i21 = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &te_emlrtBCI, sp);
        f_ii[0] = ii->size[0];
        i20 = f_adjacency_graph->size[0];
        f_adjacency_graph->size[0] = i;
        emxEnsureCapacity(sp, (emxArray__common *)f_adjacency_graph, i20,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        for (i20 = 0; i20 < i; i20++) {
          f_adjacency_graph->data[i20] = adjacency_graph->data[i20 +
            adjacency_graph->size[0] * ((int32_T)b_i - 1)];
        }

        l_adjacency_graph[0] = f_adjacency_graph->size[0];
        emlrtSubAssignSizeCheckR2012b(f_ii, 1, l_adjacency_graph, 1,
          &ib_emlrtECI, sp);
        i20 = g_adjacency_graph->size[0];
        g_adjacency_graph->size[0] = i;
        emxEnsureCapacity(sp, (emxArray__common *)g_adjacency_graph, i20,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        for (i20 = 0; i20 < i; i20++) {
          g_adjacency_graph->data[i20] = adjacency_graph->data[i20 +
            adjacency_graph->size[0] * ((int32_T)b_i - 1)] +
            adjacency_graph->data[i20 + adjacency_graph->size[0] * ((int32_T)j -
            1)];
        }

        i = g_adjacency_graph->size[0];
        for (i20 = 0; i20 < i; i20++) {
          adjacency_graph->data[ii->data[i20] + adjacency_graph->size[0] *
            ((int32_T)b_i - 1)] = g_adjacency_graph->data[i20];
        }

        if ((int32_T)j > adjacency_graph->size[1]) {
          i20 = 0;
          i21 = 0;
        } else {
          i20 = adjacency_graph->size[1];
          i21 = (int32_T)j;
          i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &ve_emlrtBCI, sp)
            - 1;
          i21 = adjacency_graph->size[1];
          c_ix = adjacency_graph->size[1];
          i21 = emlrtDynamicBoundsCheckFastR2012b(c_ix, 1, i21, &ve_emlrtBCI, sp);
        }

        if ((int32_T)j > adjacency_graph->size[1]) {
          c_ix = 0;
          i22 = 0;
        } else {
          c_ix = adjacency_graph->size[1];
          i22 = (int32_T)j;
          c_ix = emlrtDynamicBoundsCheckFastR2012b(i22, 1, c_ix, &xe_emlrtBCI,
            sp) - 1;
          i22 = adjacency_graph->size[1];
          ixstop = adjacency_graph->size[1];
          i22 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &xe_emlrtBCI,
            sp);
        }

        ixstop = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &ue_emlrtBCI, sp);
        ixstop = adjacency_graph->size[0];
        ix = (int32_T)j;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &we_emlrtBCI, sp);
        ixstop = h_adjacency_graph->size[0] * h_adjacency_graph->size[1];
        h_adjacency_graph->size[0] = 1;
        h_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)h_adjacency_graph, ixstop,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (ixstop = 0; ixstop < i; ixstop++) {
          h_adjacency_graph->data[h_adjacency_graph->size[0] * ixstop] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + ixstop)) - 1];
        }

        for (ixstop = 0; ixstop < 2; ixstop++) {
          b_val_i[ixstop] = h_adjacency_graph->size[ixstop];
        }

        ixstop = i_adjacency_graph->size[0] * i_adjacency_graph->size[1];
        i_adjacency_graph->size[0] = 1;
        i_adjacency_graph->size[1] = i22 - c_ix;
        emxEnsureCapacity(sp, (emxArray__common *)i_adjacency_graph, ixstop,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i22 - c_ix;
        for (i22 = 0; i22 < i; i22++) {
          i_adjacency_graph->data[i_adjacency_graph->size[0] * i22] =
            adjacency_graph->data[((int32_T)j + adjacency_graph->size[0] * (c_ix
            + i22)) - 1];
        }

        for (i22 = 0; i22 < 2; i22++) {
          c_val_it[i22] = i_adjacency_graph->size[i22];
        }

        emlrtSizeEqCheck2DFastR2012b(b_val_i, c_val_it, &jb_emlrtECI, sp);
        if ((int32_T)j > adjacency_graph->size[1]) {
          i22 = 0;
          ixstop = 0;
        } else {
          i22 = adjacency_graph->size[1];
          ixstop = (int32_T)j;
          i22 = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i22, &af_emlrtBCI,
            sp) - 1;
          ixstop = adjacency_graph->size[1];
          ix = adjacency_graph->size[1];
          ixstop = emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstop, &af_emlrtBCI,
            sp);
        }

        ix = adjacency_graph->size[0];
        iy = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(iy, 1, ix, &ye_emlrtBCI, sp);
        ix = ii->size[0];
        ii->size[0] = ixstop - i22;
        emxEnsureCapacity(sp, (emxArray__common *)ii, ix, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        i = ixstop - i22;
        for (ixstop = 0; ixstop < i; ixstop++) {
          ii->data[ixstop] = i22 + ixstop;
        }

        iv85[0] = 1;
        iv85[1] = ii->size[0];
        i22 = j_adjacency_graph->size[0] * j_adjacency_graph->size[1];
        j_adjacency_graph->size[0] = 1;
        j_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)j_adjacency_graph, i22,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (i22 = 0; i22 < i; i22++) {
          j_adjacency_graph->data[j_adjacency_graph->size[0] * i22] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + i22)) - 1];
        }

        for (i22 = 0; i22 < 2; i22++) {
          b_val_i[i22] = j_adjacency_graph->size[i22];
        }

        emlrtSubAssignSizeCheckR2012b(iv85, 2, b_val_i, 2, &kb_emlrtECI, sp);
        i22 = k_adjacency_graph->size[0] * k_adjacency_graph->size[1];
        k_adjacency_graph->size[0] = 1;
        k_adjacency_graph->size[1] = i21 - i20;
        emxEnsureCapacity(sp, (emxArray__common *)k_adjacency_graph, i22,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i = i21 - i20;
        for (i21 = 0; i21 < i; i21++) {
          k_adjacency_graph->data[k_adjacency_graph->size[0] * i21] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i20 + i21)) - 1] + adjacency_graph->data[((int32_T)j +
            adjacency_graph->size[0] * (c_ix + i21)) - 1];
        }

        i = k_adjacency_graph->size[1];
        for (i20 = 0; i20 < i; i20++) {
          adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            ii->data[i20]) - 1] = k_adjacency_graph->data
            [k_adjacency_graph->size[0] * i20];
        }

        st.site = &cb_emlrtRSI;
        eml_null_assignment(&st, adjacency_graph, j);
        i20 = r10->size[0] * r10->size[1];
        r10->size[0] = adjacency_graph->size[0];
        r10->size[1] = adjacency_graph->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r10, i20, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        i = adjacency_graph->size[0] * adjacency_graph->size[1];
        for (i20 = 0; i20 < i; i20++) {
          r10->data[i20] = adjacency_graph->data[i20];
        }

        st.site = &db_emlrtRSI;
        b_eml_null_assignment(&st, r10, j);
        i20 = adjacency_graph->size[0] * adjacency_graph->size[1];
        adjacency_graph->size[0] = r10->size[0];
        adjacency_graph->size[1] = r10->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i20, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        i = r10->size[0] * r10->size[1];
        for (i20 = 0; i20 < i; i20++) {
          adjacency_graph->data[i20] = r10->data[i20];
        }

        i20 = sp_set->size[1];
        i21 = (int32_T)b_i;
        i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &lf_emlrtBCI, sp) -
          1;
        i21 = sp_set->data[i20].val->size[0] * sp_set->data[i20].val->size[1];
        sp_set->data[i20].val->size[0] = union_ij->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i20].val, i21,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i20 = sp_set->size[1];
        i21 = (int32_T)b_i;
        i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &lf_emlrtBCI, sp) -
          1;
        i21 = sp_set->data[i20].val->size[0] * sp_set->data[i20].val->size[1];
        sp_set->data[i20].val->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i20].val, i21,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        iy = sp_set->size[1];
        ix = sp_set->size[1];
        i20 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &b_sp_set, &sp_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, ix, &lf_emlrtBCI, sp) -
          1], &emlrtRTEI);
        ix = sp_set->size[1];
        i20 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &c_sp_set, &sp_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, ix, &lf_emlrtBCI, sp) -
          1], &emlrtRTEI);
        i = union_ij->size[0] * union_ij->size[1];
        for (i20 = 0; i20 < i; i20++) {
          i21 = (int32_T)b_i;
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, iy,
            &lf_emlrtBCI, sp) - 1].val->data[i20] = union_ij->data[i20];
        }

        st.site = &eb_emlrtRSI;
        c_eml_null_assignment(&st, sp_set, j);
        i = control_p->size[0];
        ixstart = control_p->size[1];
        i20 = t0_x->size[0] * t0_x->size[1];
        t0_x->size[0] = i;
        t0_x->size[1] = ixstart;
        emxEnsureCapacity(sp, (emxArray__common *)t0_x, i20, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i20 = 0; i20 < ixstart; i20++) {
          for (i21 = 0; i21 < i; i21++) {
            t0_x->data[i21 + t0_x->size[0] * i20] = control_p->data[i21 +
              control_p->size[0] * i20];
          }
        }

        i = control_p->size[0];
        ixstart = control_p->size[1];
        i20 = t0_y->size[0] * t0_y->size[1];
        t0_y->size[0] = i;
        t0_y->size[1] = ixstart;
        emxEnsureCapacity(sp, (emxArray__common *)t0_y, i20, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i20 = 0; i20 < ixstart; i20++) {
          for (i21 = 0; i21 < i; i21++) {
            t0_y->data[i21 + t0_y->size[0] * i20] = control_p->data[(i21 +
              control_p->size[0] * i20) + control_p->size[0] * control_p->size[1]];
          }
        }

        i20 = c_expl_temp.x->size[0] * c_expl_temp.x->size[1];
        c_expl_temp.x->size[0] = t0_x->size[0];
        c_expl_temp.x->size[1] = t0_x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_expl_temp.x, i20, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        i = t0_x->size[0] * t0_x->size[1];
        for (i20 = 0; i20 < i; i20++) {
          c_expl_temp.x->data[i20] = t0_x->data[i20];
        }

        i20 = c_expl_temp.y->size[0] * c_expl_temp.y->size[1];
        c_expl_temp.y->size[0] = t0_y->size[0];
        c_expl_temp.y->size[1] = t0_y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_expl_temp.y, i20, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        i = t0_y->size[0] * t0_y->size[1];
        for (i20 = 0; i20 < i; i20++) {
          c_expl_temp.y->data[i20] = t0_y->data[i20];
        }

        i20 = bspline_set->size[1];
        i21 = (int32_T)b_i;
        b_emxCopyStruct_struct_T(sp, &bspline_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &mf_emlrtBCI, sp)
          - 1], &c_expl_temp, &gc_emlrtRTEI);
        st.site = &fb_emlrtRSI;
        d_eml_null_assignment(&st, bspline_set, j);
        i20 = ref_set->size[1];
        i21 = (int32_T)b_i;
        i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &nf_emlrtBCI, sp) -
          1;
        i21 = ref_set->data[i20].val->size[0] * ref_set->data[i20].val->size[1];
        ref_set->data[i20].val->size[0] = ref_union->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)ref_set->data[i20].val, i21,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i20 = ref_set->size[1];
        i21 = (int32_T)b_i;
        i20 = emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &nf_emlrtBCI, sp) -
          1;
        i21 = ref_set->data[i20].val->size[0] * ref_set->data[i20].val->size[1];
        ref_set->data[i20].val->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)ref_set->data[i20].val, i21,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        iy = ref_set->size[1];
        ix = ref_set->size[1];
        i20 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &b_ref_set, &ref_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, ix, &nf_emlrtBCI, sp) -
          1], &emlrtRTEI);
        ix = ref_set->size[1];
        i20 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &c_ref_set, &ref_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, ix, &nf_emlrtBCI, sp) -
          1], &emlrtRTEI);
        i = ref_union->size[0] * ref_union->size[1];
        for (i20 = 0; i20 < i; i20++) {
          i21 = (int32_T)b_i;
          ref_set->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, iy,
            &nf_emlrtBCI, sp) - 1].val->data[i20] = ref_union->data[i20];
        }

        /* ref_set(i).val = bspline(sp_set(i).val, item, bound1); */
        st.site = &gb_emlrtRSI;
        c_eml_null_assignment(&st, ref_set, j);
      }

      st.site = &hb_emlrtRSI;
      i20 = x->size[0] * x->size[1];
      x->size[0] = adjacency_graph->size[0];
      x->size[1] = adjacency_graph->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i20, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      i = adjacency_graph->size[0] * adjacency_graph->size[1];
      for (i20 = 0; i20 < i; i20++) {
        x->data[i20] = (adjacency_graph->data[i20] != 0.0);
      }

      b_st.site = &fd_emlrtRSI;
      iy = x->size[0] * x->size[1];
      ixstart = 0;
      if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
          (x->size[1] <= 1)) {
        overflow = TRUE;
      } else {
        overflow = FALSE;
      }

      if (overflow) {
      } else {
        n_y = NULL;
        m12 = mxCreateCharArray(2, iv86);
        for (i = 0; i < 36; i++) {
          cv27[i] = cv31[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
        emlrtAssign(&n_y, m12);
        c_st.site = &qt_emlrtRSI;
        h_st.site = &cu_emlrtRSI;
        error(&c_st, message(&h_st, n_y, &h_emlrtMCI), &i_emlrtMCI);
      }

      i20 = ii->size[0];
      ii->size[0] = iy;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                        (int32_T), &dc_emlrtRTEI);
      c_st.site = &gd_emlrtRSI;
      d_st.site = &tb_emlrtRSI;
      if (1 > iy) {
        b8 = FALSE;
      } else {
        b8 = (iy > 2147483646);
      }

      if (b8) {
        d_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      ix = 1;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= iy)) {
        guard1 = FALSE;
        if (x->data[ix - 1]) {
          c_st.site = &hd_emlrtRSI;
          ixstart++;
          ii->data[ixstart - 1] = ix;
          if (ixstart >= iy) {
            exitg1 = TRUE;
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

      if (ixstart <= iy) {
      } else {
        o_y = NULL;
        m12 = mxCreateString("Assertion failed.");
        emlrtAssign(&o_y, m12);
        c_st.site = &pt_emlrtRSI;
        error(&c_st, o_y, &j_emlrtMCI);
      }

      if (iy == 1) {
        if (ixstart == 0) {
          i20 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > ixstart) {
          i = 0;
        } else {
          i = ixstart;
        }

        i20 = e_ii->size[0];
        e_ii->size[0] = i;
        emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i20, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i20 = 0; i20 < i; i20++) {
          e_ii->data[i20] = ii->data[i20];
        }

        i20 = ii->size[0];
        ii->size[0] = e_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i20, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        i = e_ii->size[0];
        for (i20 = 0; i20 < i; i20++) {
          ii->data[i20] = e_ii->data[i20];
        }
      }

      i20 = diffx->size[0];
      diffx->size[0] = ii->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)diffx, i20, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i = ii->size[0];
      for (i20 = 0; i20 < i; i20++) {
        diffx->data[i20] = ii->data[i20];
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    } else {
      exitg11 = 1;
    }
  } while (exitg11 == 0);

  emxFree_int32_T(&e_ii);
  emxFreeStruct_struct_T(&c_ref_set);
  emxFreeStruct_struct_T(&b_ref_set);
  emxFreeStruct_struct_T(&c_sp_set);
  emxFreeStruct_struct_T(&b_sp_set);
  emxFree_real_T(&k_adjacency_graph);
  emxFree_real_T(&j_adjacency_graph);
  emxFree_real_T(&i_adjacency_graph);
  emxFree_real_T(&h_adjacency_graph);
  emxFree_real_T(&g_adjacency_graph);
  emxFree_real_T(&f_adjacency_graph);
  emxFree_real_T(&e_adjacency_graph);
  emxFree_real_T(&d_adjacency_graph);
  emxFree_real_T(&c_adjacency_graph);
  emxFree_real_T(&b_val_it);
  emxFree_real_T(&b_val_jt);
  b_emxFreeStruct_struct_T(&c_expl_temp);
  b_emxFreeStruct_struct_T(&b_expl_temp);
  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&r10);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&t1_y);
  emxFree_real_T(&t1_x);
  emxFree_real_T(&t0_y);
  emxFree_real_T(&t0_x);
  emxFree_real_T(&control_p);
  emxFree_real_T(&val_j);
  emxFree_real_T(&val_jt);
  emxFree_real_T(&val_i);
  emxFree_real_T(&val_it);
  emxFree_real_T(&ref_i);
  emxFree_real_T(&ref_it);
  emxFree_real_T(&ref_union);
  emxFree_real_T(&union_ij);
  emxFree_real_T(&diffx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (merging.c) */
