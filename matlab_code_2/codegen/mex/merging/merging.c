/*
 * merging.c
 *
 * Code generation for function 'merging'
 *
 * C source code generated on: Thu Jun 30 18:28:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "mod.h"
#include "ceil.h"
#include "sum.h"
#include "merging_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "repmat.h"
#include "power.h"
#include "getPixelsValue.h"
#include "bspline.h"
#include "bspline_inv.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 12, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo b_emlrtRSI = { 15, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo c_emlrtRSI = { 17, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo d_emlrtRSI = { 18, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo e_emlrtRSI = { 27, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo f_emlrtRSI = { 28, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo g_emlrtRSI = { 30, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo h_emlrtRSI = { 31, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo i_emlrtRSI = { 34, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo j_emlrtRSI = { 36, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo k_emlrtRSI = { 37, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo l_emlrtRSI = { 38, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo m_emlrtRSI = { 42, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo n_emlrtRSI = { 43, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo o_emlrtRSI = { 45, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo p_emlrtRSI = { 46, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo q_emlrtRSI = { 47, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo r_emlrtRSI = { 48, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo s_emlrtRSI = { 50, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo t_emlrtRSI = { 51, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo u_emlrtRSI = { 54, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo v_emlrtRSI = { 55, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo w_emlrtRSI = { 57, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo x_emlrtRSI = { 58, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo y_emlrtRSI = { 59, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo ab_emlrtRSI = { 60, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo bb_emlrtRSI = { 62, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo cb_emlrtRSI = { 63, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo db_emlrtRSI = { 65, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo eb_emlrtRSI = { 66, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo fb_emlrtRSI = { 67, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo gb_emlrtRSI = { 74, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo hb_emlrtRSI = { 75, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo ib_emlrtRSI = { 77, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo jb_emlrtRSI = { 79, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo kb_emlrtRSI = { 82, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo lb_emlrtRSI = { 84, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRSInfo mb_emlrtRSI = { 41, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo nb_emlrtRSI = { 230, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ob_emlrtRSI = { 232, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo vc_emlrtRSI = { 1, "mrdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mrdivide.p" };

static emlrtRSInfo yp_emlrtRSI = { 93, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo aq_emlrtRSI = { 99, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo bq_emlrtRSI = { 100, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo cq_emlrtRSI = { 101, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo dq_emlrtRSI = { 105, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo fq_emlrtRSI = { 223, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo gq_emlrtRSI = { 197, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo hq_emlrtRSI = { 177, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo iq_emlrtRSI = { 178, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo nr_emlrtRSI = { 15, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo or_emlrtRSI = { 16, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo pr_emlrtRSI = { 52, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo sr_emlrtRSI = { 172, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo tr_emlrtRSI = { 173, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ur_emlrtRSI = { 174, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo vr_emlrtRSI = { 175, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo wr_emlrtRSI = { 18, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo xr_emlrtRSI = { 19, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo yr_emlrtRSI = { 207, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo as_emlrtRSI = { 208, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo bs_emlrtRSI = { 209, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo cs_emlrtRSI = { 210, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ds_emlrtRSI = { 10, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo es_emlrtRSI = { 11, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo fs_emlrtRSI = { 56, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo gs_emlrtRSI = { 116, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo hs_emlrtRSI = { 117, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo is_emlrtRSI = { 118, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtMCInfo b_emlrtMCI = { 123, 9, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo c_emlrtMCI = { 122, 19, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo d_emlrtMCI = { 239, 9, "find",
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

static emlrtRTEInfo emlrtRTEI = { 1, 43, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo tb_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 127, 5, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 43, 37, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 55, 37, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 81, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 7, 1, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo bc_emlrtRTEI = { 15, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo cc_emlrtRTEI = { 17, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 27, 1, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 32, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 33, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 34, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 42, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 43, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo jc_emlrtRTEI = { 50, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 51, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 62, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo mc_emlrtRTEI = { 63, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 33, 6, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 118, 9, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRTEInfo uc_emlrtRTEI = { 14, 5, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtECInfo fb_emlrtECI = { 2, 17, 19, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtECInfo gb_emlrtECI = { 2, 18, 21, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 30, 13, "pairs", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 31, 14, "pairs", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 37, 18, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 38, 18, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 40, 19, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 53, 19, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo hb_emlrtECI = { 2, 65, 22, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtECInfo ib_emlrtECI = { 2, 66, 22, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 71, 51, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 71, 54, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 71, 77, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 71, 82, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo jb_emlrtECI = { 2, 71, 35, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 71, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 71, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo kb_emlrtECI = { -1, 71, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 72, 51, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 72, 56, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 72, 77, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 72, 82, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo lb_emlrtECI = { -1, 72, 35, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 72, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 72, 30, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo mb_emlrtECI = { -1, 72, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 73, 53, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 73, 56, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 73, 81, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 73, 84, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo nb_emlrtECI = { 2, 73, 37, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 73, 25, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 73, 28, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtECInfo ob_emlrtECI = { -1, 73, 9, "merging",
  "F:/Git/correspondence/matlab_code/merging.m" };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 42, 23, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 43, 37, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 43, 22, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 45, 5, "ref_it", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 46, 5, "ref_it", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 47, 5, "ref_i", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 48, 5, "ref_i", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 54, 23, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 55, 37, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 55, 22, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 57, 5, "ref_jt", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 58, 5, "ref_jt", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 59, 5, "ref_j", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 60, 5, "ref_j", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 69, 21, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 69, 24, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 76, 9, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 78, 9, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 81, 9, "bspline_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 12, 24, "sp_val", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 15, 28, "sp_val", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 19, 29, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 19, 32, "adjacency_graph", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 32, 17, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 32, 17, "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 1 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 32, 32, "sp_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 32, 32, "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 1 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 33, 18, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 33, 34, "ref_set", "merging",
  "F:/Git/correspondence/matlab_code/merging.m", 0 };

static emlrtRSInfo js_emlrtRSI = { 125, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ks_emlrtRSI = { 231, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ls_emlrtRSI = { 196, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ms_emlrtRSI = { 239, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ns_emlrtRSI = { 122, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ws_emlrtRSI = { 57, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo xs_emlrtRSI = { 53, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

static emlrtRSInfo ys_emlrtRSI = { 123, "find",
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
  static const int32_T iv89[2] = { 1, 31 };

  const mxArray *m14;
  char_T cv33[31];
  int32_T i;
  static const char_T cv34[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  emxArray_real_T *b_x;
  int32_T j;
  int32_T loop_ub;
  int32_T i26;
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
  st.site = &wr_emlrtRSI;
  b_st.site = &pr_emlrtRSI;
  if (is_valid_idx(x, idx, 2.0)) {
  } else {
    y = NULL;
    m14 = mxCreateCharArray(2, iv89);
    for (i = 0; i < 31; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m14, cv33);
    emlrtAssign(&y, m14);
    b_st.site = &pr_emlrtRSI;
    c_st.site = &xs_emlrtRSI;
    error(&b_st, message(&c_st, y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  emxInit_real_T(&st, &b_x, 2, &tb_emlrtRTEI, TRUE);
  st.site = &xr_emlrtRSI;
  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = x->size[0];
  b_x->size[1] = x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, j, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  loop_ub = x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = x->size[0];
    for (i26 = 0; i26 < i; i26++) {
      b_x->data[i26 + b_x->size[0] * j] = x->data[i26 + x->size[0] * j];
    }
  }

  b_st.site = &yr_emlrtRSI;
  b_st.site = &as_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    d_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (j = (int32_T)idx; j < x->size[1]; j++) {
    loop_ub = b_x->size[0];
    b_st.site = &bs_emlrtRSI;
    for (i = 0; i + 1 <= loop_ub; i++) {
      b_st.site = &cs_emlrtRSI;
      b_x->data[i + b_x->size[0] * (j - 1)] = b_x->data[i + b_x->size[0] * j];
    }
  }

  if (x->size[1] - 1 <= b_x->size[1]) {
  } else {
    b_y = NULL;
    m14 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m14);
    b_st.site = &ks_emlrtRSI;
    error(&b_st, b_y, &db_emlrtMCI);
  }

  if (1 > x->size[1] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = x->size[1] - 1;
  }

  emxInit_real_T(&st, &c_x, 2, &tb_emlrtRTEI, TRUE);
  i = b_x->size[0];
  j = c_x->size[0] * c_x->size[1];
  c_x->size[0] = i;
  c_x->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)c_x, j, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (j = 0; j < loop_ub; j++) {
    for (i26 = 0; i26 < i; i26++) {
      c_x->data[i26 + c_x->size[0] * j] = b_x->data[i26 + b_x->size[0] * j];
    }
  }

  j = b_x->size[0] * b_x->size[1];
  b_x->size[0] = c_x->size[0];
  b_x->size[1] = c_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, j, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  loop_ub = c_x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = c_x->size[0];
    for (i26 = 0; i26 < i; i26++) {
      b_x->data[i26 + b_x->size[0] * j] = c_x->data[i26 + c_x->size[0] * j];
    }
  }

  emxFree_real_T(&c_x);
  j = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)x, j, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  loop_ub = b_x->size[1];
  for (j = 0; j < loop_ub; j++) {
    i = b_x->size[0];
    for (i26 = 0; i26 < i; i26++) {
      x->data[i26 + x->size[0] * j] = b_x->data[i26 + b_x->size[0] * j];
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
  static const int32_T iv90[2] = { 1, 31 };

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
  st.site = &ds_emlrtRSI;
  b_st.site = &fs_emlrtRSI;
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
    m15 = mxCreateCharArray(2, iv90);
    for (i = 0; i < 31; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m15, cv35);
    emlrtAssign(&y, m15);
    b_st.site = &fs_emlrtRSI;
    d_st.site = &ws_emlrtRSI;
    error(&b_st, message(&d_st, y, &eb_emlrtMCI), &fb_emlrtMCI);
  }

  st.site = &es_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &gs_emlrtRSI;
  b_st.site = &hs_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = (int32_T)idx; k <= i; k++) {
    b_st.site = &is_emlrtRSI;
    emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &oc_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m15 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m15);
    b_st.site = &js_emlrtRSI;
    error(&b_st, b_y, &gb_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_struct_T(&st, &b_x, 2, &tb_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity_struct_T(&st, b_x, k, &tb_emlrtRTEI);
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &tb_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_struct_T(&st, x, k, &tb_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->size[0]
      * k], &tb_emlrtRTEI);
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
  static const int32_T iv91[2] = { 1, 31 };

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
  st.site = &ds_emlrtRSI;
  b_st.site = &fs_emlrtRSI;
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
    m16 = mxCreateCharArray(2, iv91);
    for (i = 0; i < 31; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m16, cv37);
    emlrtAssign(&y, m16);
    b_st.site = &fs_emlrtRSI;
    d_st.site = &ws_emlrtRSI;
    error(&b_st, message(&d_st, y, &eb_emlrtMCI), &fb_emlrtMCI);
  }

  st.site = &es_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &gs_emlrtRSI;
  b_st.site = &hs_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = (int32_T)idx; k <= i; k++) {
    b_st.site = &is_emlrtRSI;
    b_emxCopyStruct_struct_T(&st, &x->data[k - 1], &x->data[k], &oc_emlrtRTEI);
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m16 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m16);
    b_st.site = &js_emlrtRSI;
    error(&b_st, b_y, &gb_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  b_emxInit_struct_T(&st, &b_x, 2, &tb_emlrtRTEI, TRUE);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  b_emxEnsureCapacity_struct_T(&st, b_x, k, &tb_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &b_x->data[b_x->size[0] * k], &x->data[k],
      &tb_emlrtRTEI);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  b_emxEnsureCapacity_struct_T(&st, x, k, &tb_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    b_emxCopyStruct_struct_T(&st, &x->data[x->size[0] * k], &b_x->data[b_x->
      size[0] * k], &tb_emlrtRTEI);
  }

  b_emxFree_struct_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, real_T
  idx)
{
  const mxArray *y;
  static const int32_T iv88[2] = { 1, 31 };

  const mxArray *m13;
  char_T cv31[31];
  int32_T i;
  static const char_T cv32[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &nr_emlrtRSI;
  b_st.site = &pr_emlrtRSI;
  if (is_valid_idx(x, idx, 1.0)) {
  } else {
    y = NULL;
    m13 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 31; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m13, cv31);
    emlrtAssign(&y, m13);
    b_st.site = &pr_emlrtRSI;
    c_st.site = &xs_emlrtRSI;
    error(&b_st, message(&c_st, y, &ab_emlrtMCI), &bb_emlrtMCI);
  }

  st.site = &or_emlrtRSI;
  b_st.site = &sr_emlrtRSI;
  a = x->size[0] - 1;
  b = x->size[1];
  b_st.site = &tr_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (j = 0; j + 1 <= b; j++) {
    b_st.site = &ur_emlrtRSI;
    if ((int32_T)idx > a) {
      b_idx = FALSE;
    } else {
      b_idx = (a > 2147483646);
    }

    if (b_idx) {
      d_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = (int32_T)idx; i <= a; i++) {
      b_st.site = &vr_emlrtRSI;
      x->data[(i + x->size[0] * j) - 1] = x->data[i + x->size[0] * j];
    }
  }

  if (a <= x->size[0]) {
  } else {
    b_y = NULL;
    m13 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m13);
    b_st.site = &ls_emlrtRSI;
    error(&b_st, b_y, &cb_emlrtMCI);
  }

  if (1 > a) {
    a = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &tb_emlrtRTEI, TRUE);
  i = x->size[1];
  b = b_x->size[0] * b_x->size[1];
  b_x->size[0] = a;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, b, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (b = 0; b < i; b++) {
    for (j = 0; j < a; j++) {
      b_x->data[j + b_x->size[0] * b] = x->data[j + x->size[0] * b];
    }
  }

  b = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, b, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
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
             emxArray_real_T *Ref)
{
  emxArray_real_T *adjacency_graph;
  int32_T ix;
  int32_T i22;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *area_j;
  emxArray_real_T *dif;
  emxArray_real_T *pairs;
  emxArray_real_T *r24;
  emxArray_boolean_T *r25;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *r26;
  emxArray_real_T *b_ii;
  emxArray_real_T *b_dif;
  emxArray_int32_T *c_ii;
  emxArray_int32_T *d_ii;
  emxArray_int32_T *e_ii;
  real_T D_sp1;
  int32_T nx;
  int32_T idx;
  boolean_T b7;
  const mxArray *y;
  static const int32_T iv77[2] = { 1, 36 };

  const mxArray *m12;
  char_T cv27[36];
  static const char_T cv28[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'f', 'i', 'n', 'd', '_', 'i', 'n', 'c', 'o', 'm',
    'p', 'a', 't', 'i', 'b', 'l', 'e', 'S', 'h', 'a', 'p', 'e' };

  boolean_T b8;
  boolean_T exitg8;
  boolean_T guard5 = FALSE;
  const mxArray *b_y;
  int32_T ixstop;
  real_T j;
  int32_T i23;
  int32_T i24;
  const mxArray *c_y;
  static const int32_T iv78[2] = { 1, 36 };

  boolean_T b9;
  boolean_T exitg7;
  boolean_T guard4 = FALSE;
  const mxArray *d_y;
  int32_T val_it[2];
  int32_T iv79[2];
  const mxArray *e_y;
  static const int32_T iv80[2] = { 1, 36 };

  boolean_T b10;
  boolean_T exitg6;
  boolean_T guard3 = FALSE;
  const mxArray *f_y;
  const mxArray *g_y;
  static const int32_T iv81[2] = { 1, 36 };

  boolean_T b11;
  boolean_T exitg5;
  boolean_T guard2 = FALSE;
  const mxArray *h_y;
  emxArray_int32_T *f_ii;
  emxArray_real_T *union_ij;
  emxArray_real_T *ref_union;
  emxArray_real_T *control_p;
  emxArray_real_T *ref_it;
  emxArray_real_T *ref_i;
  emxArray_real_T *b_val_it;
  emxArray_real_T *val_i;
  emxArray_real_T *val_jt;
  emxArray_real_T *val_j;
  emxArray_real_T *r27;
  emxArray_real_T *t0_x;
  emxArray_real_T *t0_y;
  emxArray_real_T *t1_x;
  emxArray_real_T *t1_y;
  emxArray_real_T *r28;
  struct_T expl_temp;
  struct_T b_expl_temp;
  struct_T c_expl_temp;
  emxArray_real_T *b_val_jt;
  emxArray_real_T *c_val_it;
  emxArray_boolean_T *b_ref_i;
  emxArray_boolean_T *c_ref_i;
  emxArray_boolean_T *b_ref_it;
  emxArray_boolean_T *c_ref_it;
  emxArray_boolean_T *d_ref_i;
  emxArray_boolean_T *e_ref_i;
  emxArray_boolean_T *d_ref_it;
  emxArray_boolean_T *e_ref_it;
  emxArray_real_T *b_adjacency_graph;
  emxArray_real_T *c_adjacency_graph;
  emxArray_real_T *d_adjacency_graph;
  emxArray_real_T *e_adjacency_graph;
  emxArray_real_T *f_adjacency_graph;
  emxArray_real_T *g_adjacency_graph;
  emxArray_real_T *h_adjacency_graph;
  emxArray_real_T *i_adjacency_graph;
  emxArray_real_T *j_adjacency_graph;
  b_struct_T b_sp_set;
  b_struct_T c_sp_set;
  b_struct_T b_ref_set;
  b_struct_T c_ref_set;
  emxArray_int32_T *g_ii;
  real_T b_i;
  int32_T b_ix;
  const mxArray *i_y;
  static const int32_T iv82[2] = { 1, 39 };

  char_T cv29[39];
  static const char_T cv30[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T bound1[2];
  boolean_T c_ix;
  boolean_T exitg4;
  boolean_T b_idx;
  const mxArray *j_y;
  static const int32_T iv83[2] = { 1, 39 };

  real_T bound2[2];
  boolean_T d_ix;
  boolean_T exitg3;
  boolean_T c_idx;
  const mxArray *k_y;
  static const int32_T iv84[2] = { 1, 39 };

  real_T bound3[2];
  boolean_T e_ix;
  boolean_T exitg2;
  boolean_T d_idx;
  int32_T b_val_i[2];
  real_T dv0[3];
  real_T D_sp2;
  int32_T iv85[2];
  int32_T h_ii[1];
  int32_T k_adjacency_graph[1];
  int32_T iv86[2];
  const mxArray *l_y;
  static const int32_T iv87[2] = { 1, 36 };

  boolean_T b12;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  const mxArray *m_y;
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
  g_st.prev = &e_st;
  g_st.tls = e_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &adjacency_graph, 2, &ac_emlrtRTEI, TRUE);

  /* % initialize adjacency graph */
  ix = sp_set->size[1];
  i22 = adjacency_graph->size[0] * adjacency_graph->size[1];
  adjacency_graph->size[0] = ix;
  emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i22, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  ix = sp_set->size[1];
  i22 = adjacency_graph->size[0] * adjacency_graph->size[1];
  adjacency_graph->size[1] = ix;
  emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i22, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  loop_ub = sp_set->size[1] * sp_set->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    adjacency_graph->data[i22] = 0.0;
  }

  i = 0;
  b_emxInit_real_T(sp, &area_j, 1, &bc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &dif, 2, &cc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &pairs, 1, &dc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r24, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &r25, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &ii, 1, &nc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r26, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &b_ii, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_dif, 2, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &c_ii, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &d_ii, 1, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &e_ii, 1, &emlrtRTEI, TRUE);
  while (i <= sp_set->size[1] - 1) {
    st.site = &emlrtRSI;
    i22 = x->size[0] * x->size[1];
    x->size[0] = Sp2->size[0];
    x->size[1] = Sp2->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, i22, (int32_T)sizeof(boolean_T),
                      &emlrtRTEI);
    i22 = sp_val->size[0];
    D_sp1 = sp_val->data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i22,
      &tc_emlrtBCI, &st) - 1];
    loop_ub = Sp2->size[0] * Sp2->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      x->data[i22] = (Sp2->data[i22] == D_sp1);
    }

    b_st.site = &mb_emlrtRSI;
    nx = x->size[0] * x->size[1];
    idx = 0;
    if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
        (x->size[1] <= 1)) {
      b7 = TRUE;
    } else {
      b7 = FALSE;
    }

    if (b7) {
    } else {
      y = NULL;
      m12 = mxCreateCharArray(2, iv77);
      for (ix = 0; ix < 36; ix++) {
        cv27[ix] = cv28[ix];
      }

      emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
      emlrtAssign(&y, m12);
      c_st.site = &ns_emlrtRSI;
      d_st.site = &ys_emlrtRSI;
      error(&c_st, message(&d_st, y, &b_emlrtMCI), &c_emlrtMCI);
    }

    i22 = ii->size[0];
    ii->size[0] = nx;
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                      (int32_T), &vb_emlrtRTEI);
    c_st.site = &nb_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    if (1 > nx) {
      b8 = FALSE;
    } else {
      b8 = (nx > 2147483646);
    }

    if (b8) {
      e_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    ix = 1;
    exitg8 = FALSE;
    while ((exitg8 == FALSE) && (ix <= nx)) {
      guard5 = FALSE;
      if (x->data[ix - 1]) {
        c_st.site = &ob_emlrtRSI;
        idx++;
        ii->data[idx - 1] = ix;
        if (idx >= nx) {
          exitg8 = TRUE;
        } else {
          guard5 = TRUE;
        }
      } else {
        guard5 = TRUE;
      }

      if (guard5 == TRUE) {
        ix++;
      }
    }

    if (idx <= nx) {
    } else {
      b_y = NULL;
      m12 = mxCreateString("Assertion failed.");
      emlrtAssign(&b_y, m12);
      c_st.site = &ms_emlrtRSI;
      error(&c_st, b_y, &d_emlrtMCI);
    }

    if (nx == 1) {
      if (idx == 0) {
        i22 = ii->size[0];
        ii->size[0] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
      }
    } else {
      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      i22 = c_ii->size[0];
      c_ii->size[0] = loop_ub;
      emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i22, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
      for (i22 = 0; i22 < loop_ub; i22++) {
        c_ii->data[i22] = ii->data[i22];
      }

      i22 = ii->size[0];
      ii->size[0] = c_ii->size[0];
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
      loop_ub = c_ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        ii->data[i22] = c_ii->data[i22];
      }
    }

    i22 = pairs->size[0];
    pairs->size[0] = ii->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)pairs, i22, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = ii->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      pairs->data[i22] = ii->data[i22];
    }

    i22 = (int32_T)((real_T)sp_set->size[1] + (1.0 - ((1.0 + (real_T)i) + 1.0)));
    emlrtForLoopVectorCheckR2012b((1.0 + (real_T)i) + 1.0, 1.0, sp_set->size[1],
      mxDOUBLE_CLASS, i22, &uc_emlrtRTEI, sp);
    ixstop = 0;
    while (ixstop <= i22 - 1) {
      j = ((1.0 + (real_T)i) + 1.0) + (real_T)ixstop;
      st.site = &b_emlrtRSI;
      i23 = x->size[0] * x->size[1];
      x->size[0] = Sp2->size[0];
      x->size[1] = Sp2->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i23, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      i23 = sp_val->size[0];
      i24 = (int32_T)j;
      D_sp1 = sp_val->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23,
        &uc_emlrtBCI, &st) - 1];
      loop_ub = Sp2->size[0] * Sp2->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        x->data[i23] = (Sp2->data[i23] == D_sp1);
      }

      b_st.site = &mb_emlrtRSI;
      nx = x->size[0] * x->size[1];
      idx = 0;
      if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
          (x->size[1] <= 1)) {
        b7 = TRUE;
      } else {
        b7 = FALSE;
      }

      if (b7) {
      } else {
        c_y = NULL;
        m12 = mxCreateCharArray(2, iv78);
        for (ix = 0; ix < 36; ix++) {
          cv27[ix] = cv28[ix];
        }

        emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
        emlrtAssign(&c_y, m12);
        c_st.site = &ns_emlrtRSI;
        d_st.site = &ys_emlrtRSI;
        error(&c_st, message(&d_st, c_y, &b_emlrtMCI), &c_emlrtMCI);
      }

      i23 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                        (int32_T), &vb_emlrtRTEI);
      c_st.site = &nb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      if (1 > nx) {
        b9 = FALSE;
      } else {
        b9 = (nx > 2147483646);
      }

      if (b9) {
        e_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      ix = 1;
      exitg7 = FALSE;
      while ((exitg7 == FALSE) && (ix <= nx)) {
        guard4 = FALSE;
        if (x->data[ix - 1]) {
          c_st.site = &ob_emlrtRSI;
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= nx) {
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

      if (idx <= nx) {
      } else {
        d_y = NULL;
        m12 = mxCreateString("Assertion failed.");
        emlrtAssign(&d_y, m12);
        c_st.site = &ms_emlrtRSI;
        error(&c_st, d_y, &d_emlrtMCI);
      }

      if (nx == 1) {
        if (idx == 0) {
          i23 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        i23 = d_ii->size[0];
        d_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i23, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i23 = 0; i23 < loop_ub; i23++) {
          d_ii->data[i23] = ii->data[i23];
        }

        i23 = ii->size[0];
        ii->size[0] = d_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = d_ii->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          ii->data[i23] = d_ii->data[i23];
        }
      }

      i23 = area_j->size[0];
      area_j->size[0] = ii->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)area_j, i23, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = ii->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        area_j->data[i23] = ii->data[i23];
      }

      st.site = &c_emlrtRSI;
      repmat(&st, pairs, area_j->size[0], dif);
      st.site = &c_emlrtRSI;
      repmat(&st, area_j, pairs->size[0], r26);
      i23 = r24->size[0] * r24->size[1];
      r24->size[0] = r26->size[1];
      r24->size[1] = r26->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r24, i23, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = r26->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        ix = r26->size[1];
        for (i24 = 0; i24 < ix; i24++) {
          r24->data[i24 + r24->size[0] * i23] = r26->data[i23 + r26->size[0] *
            i24];
        }
      }

      for (i23 = 0; i23 < 2; i23++) {
        val_it[i23] = dif->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        iv79[i23] = r24->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(val_it, iv79, &fb_emlrtECI, sp);
      i23 = b_dif->size[0] * b_dif->size[1];
      b_dif->size[0] = dif->size[0];
      b_dif->size[1] = dif->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_dif, i23, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = dif->size[0] * dif->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_dif->data[i23] = dif->data[i23] - r24->data[i23];
      }

      st.site = &c_emlrtRSI;
      b_abs(&st, b_dif, dif);
      i23 = x->size[0] * x->size[1];
      x->size[0] = dif->size[0];
      x->size[1] = dif->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)x, i23, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = dif->size[0] * dif->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        x->data[i23] = (dif->data[i23] == 1.0);
      }

      i23 = r25->size[0] * r25->size[1];
      r25->size[0] = dif->size[0];
      r25->size[1] = dif->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r25, i23, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = Sp2->size[0];
      loop_ub = dif->size[0] * dif->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        r25->data[i23] = (dif->data[i23] == ix);
      }

      for (i23 = 0; i23 < 2; i23++) {
        val_it[i23] = x->size[i23];
      }

      for (i23 = 0; i23 < 2; i23++) {
        iv79[i23] = r25->size[i23];
      }

      emlrtSizeEqCheck2DFastR2012b(val_it, iv79, &gb_emlrtECI, sp);
      st.site = &d_emlrtRSI;
      i23 = x->size[0] * x->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i23, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      ix = x->size[0];
      nx = x->size[1];
      loop_ub = ix * nx;
      for (i23 = 0; i23 < loop_ub; i23++) {
        x->data[i23] = (x->data[i23] || r25->data[i23]);
      }

      b_st.site = &mb_emlrtRSI;
      nx = x->size[0] * x->size[1];
      idx = 0;
      if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
          (x->size[1] <= 1)) {
        b7 = TRUE;
      } else {
        b7 = FALSE;
      }

      if (b7) {
      } else {
        e_y = NULL;
        m12 = mxCreateCharArray(2, iv80);
        for (ix = 0; ix < 36; ix++) {
          cv27[ix] = cv28[ix];
        }

        emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
        emlrtAssign(&e_y, m12);
        c_st.site = &ns_emlrtRSI;
        d_st.site = &ys_emlrtRSI;
        error(&c_st, message(&d_st, e_y, &b_emlrtMCI), &c_emlrtMCI);
      }

      i23 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                        (int32_T), &vb_emlrtRTEI);
      c_st.site = &nb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      if (1 > nx) {
        b10 = FALSE;
      } else {
        b10 = (nx > 2147483646);
      }

      if (b10) {
        e_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      ix = 1;
      exitg6 = FALSE;
      while ((exitg6 == FALSE) && (ix <= nx)) {
        guard3 = FALSE;
        if (x->data[ix - 1]) {
          c_st.site = &ob_emlrtRSI;
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= nx) {
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

      if (idx <= nx) {
      } else {
        f_y = NULL;
        m12 = mxCreateString("Assertion failed.");
        emlrtAssign(&f_y, m12);
        c_st.site = &ms_emlrtRSI;
        error(&c_st, f_y, &d_emlrtMCI);
      }

      if (nx == 1) {
        if (idx == 0) {
          i23 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        i23 = e_ii->size[0];
        e_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i23, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i23 = 0; i23 < loop_ub; i23++) {
          e_ii->data[i23] = ii->data[i23];
        }

        i23 = ii->size[0];
        ii->size[0] = e_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i23, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = e_ii->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          ii->data[i23] = e_ii->data[i23];
        }
      }

      i23 = b_ii->size[0];
      b_ii->size[0] = ii->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_ii, i23, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = ii->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_ii->data[i23] = ii->data[i23];
      }

      st.site = &d_emlrtRSI;
      if (sum(&st, b_ii) != 0.0) {
        i23 = adjacency_graph->size[0];
        i24 = adjacency_graph->size[1];
        idx = (int32_T)j;
        adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i23,
          &vc_emlrtBCI, sp) + adjacency_graph->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &wc_emlrtBCI, sp) - 1))
          - 1] = 1.0;
      }

      ixstop++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_int32_T(&e_ii);
  emxFree_int32_T(&d_ii);
  emxFree_int32_T(&c_ii);
  emxFree_real_T(&b_dif);
  emxFree_real_T(&b_ii);
  emxFree_real_T(&r26);
  emxFree_boolean_T(&r25);
  emxFree_real_T(&r24);
  emxFree_real_T(&dif);
  emxFree_real_T(&area_j);

  /* % merge superpixels with similiar bspline */
  st.site = &e_emlrtRSI;
  i22 = x->size[0] * x->size[1];
  x->size[0] = adjacency_graph->size[0];
  x->size[1] = adjacency_graph->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, i22, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  loop_ub = adjacency_graph->size[0] * adjacency_graph->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    x->data[i22] = (adjacency_graph->data[i22] != 0.0);
  }

  b_st.site = &mb_emlrtRSI;
  nx = x->size[0] * x->size[1];
  idx = 0;
  if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
      (x->size[1] <= 1)) {
    b7 = TRUE;
  } else {
    b7 = FALSE;
  }

  if (b7) {
  } else {
    g_y = NULL;
    m12 = mxCreateCharArray(2, iv81);
    for (i = 0; i < 36; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
    emlrtAssign(&g_y, m12);
    c_st.site = &ns_emlrtRSI;
    d_st.site = &ys_emlrtRSI;
    error(&c_st, message(&d_st, g_y, &b_emlrtMCI), &c_emlrtMCI);
  }

  i22 = ii->size[0];
  ii->size[0] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof(int32_T),
                    &vb_emlrtRTEI);
  c_st.site = &nb_emlrtRSI;
  e_st.site = &pb_emlrtRSI;
  if (1 > nx) {
    b11 = FALSE;
  } else {
    b11 = (nx > 2147483646);
  }

  if (b11) {
    e_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  ix = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ix <= nx)) {
    guard2 = FALSE;
    if (x->data[ix - 1]) {
      c_st.site = &ob_emlrtRSI;
      idx++;
      ii->data[idx - 1] = ix;
      if (idx >= nx) {
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

  if (idx <= nx) {
  } else {
    h_y = NULL;
    m12 = mxCreateString("Assertion failed.");
    emlrtAssign(&h_y, m12);
    c_st.site = &ms_emlrtRSI;
    error(&c_st, h_y, &d_emlrtMCI);
  }

  if (nx == 1) {
    if (idx == 0) {
      i22 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }

    emxInit_int32_T(&b_st, &f_ii, 1, &emlrtRTEI, TRUE);
    i22 = f_ii->size[0];
    f_ii->size[0] = loop_ub;
    emxEnsureCapacity(&b_st, (emxArray__common *)f_ii, i22, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      f_ii->data[i22] = ii->data[i22];
    }

    i22 = ii->size[0];
    ii->size[0] = f_ii->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    loop_ub = f_ii->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      ii->data[i22] = f_ii->data[i22];
    }

    emxFree_int32_T(&f_ii);
  }

  i22 = pairs->size[0];
  pairs->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)pairs, i22, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = ii->size[0];
  for (i22 = 0; i22 < loop_ub; i22++) {
    pairs->data[i22] = ii->data[i22];
  }

  emxInit_real_T(sp, &union_ij, 2, &ec_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_union, 2, &fc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &control_p, 3, &gc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_it, 2, &hc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &ref_i, 2, &ic_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_val_it, 2, &jc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_i, 2, &kc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_jt, 2, &lc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &val_j, 2, &mc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r27, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t0_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t1_x, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &t1_y, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &r28, 2, &emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, &xb_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &b_expl_temp, &wb_emlrtRTEI, TRUE);
  b_emxInitStruct_struct_T(sp, &c_expl_temp, &yb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_val_jt, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_val_it, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &b_ref_i, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &c_ref_i, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &b_ref_it, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &c_ref_it, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &d_ref_i, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &e_ref_i, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &d_ref_it, 2, &emlrtRTEI, TRUE);
  b_emxInit_boolean_T(sp, &e_ref_it, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &b_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &c_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &d_adjacency_graph, 2, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &e_adjacency_graph, 1, &emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &f_adjacency_graph, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &g_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &h_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &i_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(sp, &j_adjacency_graph, 2, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &b_sp_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &c_sp_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &b_ref_set, &emlrtRTEI, TRUE);
  emxInitStruct_struct_T(sp, &c_ref_set, &emlrtRTEI, TRUE);
  emxInit_int32_T(sp, &g_ii, 1, &emlrtRTEI, TRUE);
  do {
    exitg11 = 0;
    st.site = &f_emlrtRSI;
    if (sum(&st, pairs) > 0.0) {
      i22 = pairs->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &bb_emlrtBCI, sp);
      st.site = &g_emlrtRSI;
      b_i = b_mod(pairs->data[0], sp_set->size[1]);
      i22 = pairs->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &cb_emlrtBCI, sp);
      st.site = &h_emlrtRSI;
      b_st.site = &vc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;
      j = pairs->data[0] / (real_T)sp_set->size[1];
      st.site = &h_emlrtRSI;
      b_ceil(&j);
      i22 = union_ij->size[0] * union_ij->size[1];
      i23 = sp_set->size[1];
      i24 = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &j_emlrtDCI, sp);
      idx = sp_set->size[1];
      nx = (int32_T)emlrtIntegerCheckFastR2012b(j, &k_emlrtDCI, sp);
      union_ij->size[0] = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1,
        i23, &xc_emlrtBCI, sp) - 1].val->size[0] + sp_set->
        data[emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &yc_emlrtBCI, sp) - 1]
        .val->size[0];
      union_ij->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)union_ij, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i22 = 0; i22 < 2; i22++) {
        i23 = sp_set->size[1];
        i24 = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &j_emlrtDCI, sp);
        loop_ub = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23,
          &xc_emlrtBCI, sp) - 1].val->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          i24 = sp_set->size[1];
          idx = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &j_emlrtDCI, sp);
          nx = sp_set->size[1];
          ix = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &j_emlrtDCI, sp);
          union_ij->data[i23 + union_ij->size[0] * i22] = sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &xc_emlrtBCI, sp)
            - 1].val->data[i23 + sp_set->data[emlrtDynamicBoundsCheckFastR2012b
            (ix, 1, nx, &xc_emlrtBCI, sp) - 1].val->size[0] * i22];
        }
      }

      for (i22 = 0; i22 < 2; i22++) {
        i23 = sp_set->size[1];
        i24 = (int32_T)emlrtIntegerCheckFastR2012b(j, &k_emlrtDCI, sp);
        loop_ub = sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23,
          &yc_emlrtBCI, sp) - 1].val->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          i24 = sp_set->size[1];
          idx = (int32_T)emlrtIntegerCheckFastR2012b(b_i, &j_emlrtDCI, sp);
          nx = sp_set->size[1];
          ix = (int32_T)emlrtIntegerCheckFastR2012b(j, &k_emlrtDCI, sp);
          ixstop = sp_set->size[1];
          b_ix = (int32_T)emlrtIntegerCheckFastR2012b(j, &k_emlrtDCI, sp);
          union_ij->data[(i23 + sp_set->data[emlrtDynamicBoundsCheckFastR2012b
                          (idx, 1, i24, &xc_emlrtBCI, sp) - 1].val->size[0]) +
            union_ij->size[0] * i22] = sp_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &yc_emlrtBCI, sp)
            - 1].val->data[i23 + sp_set->data[emlrtDynamicBoundsCheckFastR2012b
            (b_ix, 1, ixstop, &yc_emlrtBCI, sp) - 1].val->size[0] * i22];
        }
      }

      i22 = ref_union->size[0] * ref_union->size[1];
      i23 = ref_set->size[1];
      i24 = (int32_T)b_i;
      idx = ref_set->size[1];
      nx = (int32_T)j;
      ref_union->size[0] = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(i24,
        1, i23, &ad_emlrtBCI, sp) - 1].val->size[0] + ref_set->
        data[emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &bd_emlrtBCI, sp) - 1]
        .val->size[0];
      ref_union->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)ref_union, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i22 = 0; i22 < 2; i22++) {
        i23 = ref_set->size[1];
        i24 = (int32_T)b_i;
        loop_ub = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23,
          &ad_emlrtBCI, sp) - 1].val->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          i24 = ref_set->size[1];
          idx = (int32_T)b_i;
          nx = ref_set->size[1];
          ix = (int32_T)b_i;
          ref_union->data[i23 + ref_union->size[0] * i22] = ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &ad_emlrtBCI, sp)
            - 1].val->data[i23 + ref_set->data[emlrtDynamicBoundsCheckFastR2012b
            (ix, 1, nx, &ad_emlrtBCI, sp) - 1].val->size[0] * i22];
        }
      }

      for (i22 = 0; i22 < 2; i22++) {
        i23 = ref_set->size[1];
        i24 = (int32_T)j;
        loop_ub = ref_set->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23,
          &bd_emlrtBCI, sp) - 1].val->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          i24 = ref_set->size[1];
          idx = (int32_T)b_i;
          nx = ref_set->size[1];
          ix = (int32_T)j;
          ixstop = ref_set->size[1];
          b_ix = (int32_T)j;
          ref_union->data[(i23 + ref_set->data[emlrtDynamicBoundsCheckFastR2012b
                           (idx, 1, i24, &ad_emlrtBCI, sp) - 1].val->size[0]) +
            ref_union->size[0] * i22] = ref_set->
            data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &bd_emlrtBCI, sp)
            - 1].val->data[i23 + ref_set->data[emlrtDynamicBoundsCheckFastR2012b
            (b_ix, 1, ixstop, &bd_emlrtBCI, sp) - 1].val->size[0] * i22];
        }
      }

      st.site = &i_emlrtRSI;
      bspline_inv(&st, union_ij, ref_union, control_p);
      st.site = &j_emlrtRSI;
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if (union_ij->size[0] > 0) {
      } else {
        i_y = NULL;
        m12 = mxCreateCharArray(2, iv82);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&i_y, m12);
        e_st.site = &os_emlrtRSI;
        f_st.site = &at_emlrtRSI;
        error(&e_st, message(&f_st, i_y, &q_emlrtMCI), &r_emlrtMCI);
      }

      e_st.site = &yp_emlrtRSI;
      e_st.site = &yp_emlrtRSI;
      ix = 0;
      nx = -1;
      for (i = 0; i < 2; i++) {
        e_st.site = &aq_emlrtRSI;
        e_st.site = &bq_emlrtRSI;
        idx = ix;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &hq_emlrtRSI;
        ixstop = ix + union_ij->size[0];
        D_sp1 = union_ij->data[ix];
        if (union_ij->size[0] > 1) {
          g_st.site = &be_emlrtRSI;
          if (muDoubleScalarIsNaN(union_ij->data[ix])) {
            g_st.site = &ae_emlrtRSI;
            g_st.site = &ae_emlrtRSI;
            if (ix + 2 > ixstop) {
              c_ix = FALSE;
            } else {
              c_ix = (ixstop > 2147483646);
            }

            if (c_ix) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            b_ix = ix + 1;
            exitg4 = FALSE;
            while ((exitg4 == FALSE) && (b_ix + 1 <= ixstop)) {
              g_st.site = &gq_emlrtRSI;
              idx = b_ix;
              g_st.site = &yd_emlrtRSI;
              if (!muDoubleScalarIsNaN(union_ij->data[b_ix])) {
                D_sp1 = union_ij->data[b_ix];
                exitg4 = TRUE;
              } else {
                b_ix++;
              }
            }
          }

          if (idx + 1 < ixstop) {
            g_st.site = &xd_emlrtRSI;
            g_st.site = &xd_emlrtRSI;
            if (idx + 2 > ixstop) {
              b_idx = FALSE;
            } else {
              b_idx = (ixstop > 2147483646);
            }

            if (b_idx) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            for (b_ix = idx + 1; b_ix + 1 <= ixstop; b_ix++) {
              g_st.site = &fq_emlrtRSI;
              g_st.site = &wd_emlrtRSI;
              if (union_ij->data[b_ix] < D_sp1) {
                D_sp1 = union_ij->data[b_ix];
              }
            }
          }
        }

        e_st.site = &cq_emlrtRSI;
        nx++;
        bound1[nx] = D_sp1;
        e_st.site = &dq_emlrtRSI;
        ix += union_ij->size[0];
      }

      st.site = &k_emlrtRSI;
      i22 = sp_set->size[1];
      i23 = (int32_T)b_i;
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &db_emlrtBCI, &st);
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if (sp_set->data[(int32_T)b_i - 1].val->size[0] > 0) {
      } else {
        j_y = NULL;
        m12 = mxCreateCharArray(2, iv83);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&j_y, m12);
        e_st.site = &os_emlrtRSI;
        f_st.site = &at_emlrtRSI;
        error(&e_st, message(&f_st, j_y, &q_emlrtMCI), &r_emlrtMCI);
      }

      e_st.site = &yp_emlrtRSI;
      e_st.site = &yp_emlrtRSI;
      ix = 0;
      nx = -1;
      for (i = 0; i < 2; i++) {
        e_st.site = &aq_emlrtRSI;
        e_st.site = &bq_emlrtRSI;
        idx = ix;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &hq_emlrtRSI;
        ixstop = ix + sp_set->data[(int32_T)b_i - 1].val->size[0];
        D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[ix];
        if (sp_set->data[(int32_T)b_i - 1].val->size[0] > 1) {
          g_st.site = &be_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[(int32_T)b_i - 1].val->data[ix]))
          {
            g_st.site = &ae_emlrtRSI;
            g_st.site = &ae_emlrtRSI;
            if (ix + 2 > ixstop) {
              d_ix = FALSE;
            } else {
              d_ix = (ixstop > 2147483646);
            }

            if (d_ix) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            b_ix = ix + 1;
            exitg3 = FALSE;
            while ((exitg3 == FALSE) && (b_ix + 1 <= ixstop)) {
              g_st.site = &gq_emlrtRSI;
              idx = b_ix;
              g_st.site = &yd_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[(int32_T)b_i - 1].val->
                   data[b_ix])) {
                D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[b_ix];
                exitg3 = TRUE;
              } else {
                b_ix++;
              }
            }
          }

          if (idx + 1 < ixstop) {
            g_st.site = &xd_emlrtRSI;
            g_st.site = &xd_emlrtRSI;
            if (idx + 2 > ixstop) {
              c_idx = FALSE;
            } else {
              c_idx = (ixstop > 2147483646);
            }

            if (c_idx) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            for (b_ix = idx + 1; b_ix + 1 <= ixstop; b_ix++) {
              g_st.site = &fq_emlrtRSI;
              g_st.site = &wd_emlrtRSI;
              if (sp_set->data[(int32_T)b_i - 1].val->data[b_ix] < D_sp1) {
                D_sp1 = sp_set->data[(int32_T)b_i - 1].val->data[b_ix];
              }
            }
          }
        }

        e_st.site = &cq_emlrtRSI;
        nx++;
        bound2[nx] = D_sp1;
        e_st.site = &dq_emlrtRSI;
        ix += sp_set->data[(int32_T)b_i - 1].val->size[0];
      }

      st.site = &l_emlrtRSI;
      i22 = sp_set->size[1];
      i23 = (int32_T)j;
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &eb_emlrtBCI, &st);
      b_st.site = &td_emlrtRSI;
      c_st.site = &ud_emlrtRSI;
      if (sp_set->data[(int32_T)j - 1].val->size[0] > 0) {
      } else {
        k_y = NULL;
        m12 = mxCreateCharArray(2, iv84);
        for (i = 0; i < 39; i++) {
          cv29[i] = cv30[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 39, m12, cv29);
        emlrtAssign(&k_y, m12);
        e_st.site = &os_emlrtRSI;
        f_st.site = &at_emlrtRSI;
        error(&e_st, message(&f_st, k_y, &q_emlrtMCI), &r_emlrtMCI);
      }

      e_st.site = &yp_emlrtRSI;
      e_st.site = &yp_emlrtRSI;
      ix = 0;
      nx = -1;
      for (i = 0; i < 2; i++) {
        e_st.site = &aq_emlrtRSI;
        e_st.site = &bq_emlrtRSI;
        idx = ix;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &iq_emlrtRSI;
        g_st.site = &hq_emlrtRSI;
        ixstop = ix + sp_set->data[(int32_T)j - 1].val->size[0];
        D_sp1 = sp_set->data[(int32_T)j - 1].val->data[ix];
        if (sp_set->data[(int32_T)j - 1].val->size[0] > 1) {
          g_st.site = &be_emlrtRSI;
          if (muDoubleScalarIsNaN(sp_set->data[(int32_T)j - 1].val->data[ix])) {
            g_st.site = &ae_emlrtRSI;
            g_st.site = &ae_emlrtRSI;
            if (ix + 2 > ixstop) {
              e_ix = FALSE;
            } else {
              e_ix = (ixstop > 2147483646);
            }

            if (e_ix) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            b_ix = ix + 1;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (b_ix + 1 <= ixstop)) {
              g_st.site = &gq_emlrtRSI;
              idx = b_ix;
              g_st.site = &yd_emlrtRSI;
              if (!muDoubleScalarIsNaN(sp_set->data[(int32_T)j - 1].val->
                   data[b_ix])) {
                D_sp1 = sp_set->data[(int32_T)j - 1].val->data[b_ix];
                exitg2 = TRUE;
              } else {
                b_ix++;
              }
            }
          }

          if (idx + 1 < ixstop) {
            g_st.site = &xd_emlrtRSI;
            g_st.site = &xd_emlrtRSI;
            if (idx + 2 > ixstop) {
              d_idx = FALSE;
            } else {
              d_idx = (ixstop > 2147483646);
            }

            if (d_idx) {
              h_st.site = &qb_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }

            for (b_ix = idx + 1; b_ix + 1 <= ixstop; b_ix++) {
              g_st.site = &fq_emlrtRSI;
              g_st.site = &wd_emlrtRSI;
              if (sp_set->data[(int32_T)j - 1].val->data[b_ix] < D_sp1) {
                D_sp1 = sp_set->data[(int32_T)j - 1].val->data[b_ix];
              }
            }
          }
        }

        e_st.site = &cq_emlrtRSI;
        nx++;
        bound3[nx] = D_sp1;
        e_st.site = &dq_emlrtRSI;
        ix += sp_set->data[(int32_T)j - 1].val->size[0];
      }

      i22 = sp_set->size[1];
      i23 = (int32_T)b_i;
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &fb_emlrtBCI, sp);
      loop_ub = control_p->size[0];
      ix = control_p->size[1];
      i22 = t1_x->size[0] * t1_x->size[1];
      t1_x->size[0] = loop_ub;
      t1_x->size[1] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)t1_x, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i22 = 0; i22 < ix; i22++) {
        for (i23 = 0; i23 < loop_ub; i23++) {
          t1_x->data[i23 + t1_x->size[0] * i22] = control_p->data[i23 +
            control_p->size[0] * i22];
        }
      }

      loop_ub = control_p->size[0];
      ix = control_p->size[1];
      i22 = t1_y->size[0] * t1_y->size[1];
      t1_y->size[0] = loop_ub;
      t1_y->size[1] = ix;
      emxEnsureCapacity(sp, (emxArray__common *)t1_y, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (i22 = 0; i22 < ix; i22++) {
        for (i23 = 0; i23 < loop_ub; i23++) {
          t1_y->data[i23 + t1_y->size[0] * i22] = control_p->data[(i23 +
            control_p->size[0] * i22) + control_p->size[0] * control_p->size[1]];
        }
      }

      i22 = sp_set->size[1];
      i23 = (int32_T)b_i;
      st.site = &m_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
               &ac_emlrtBCI, sp) - 1].val, t1_x, t1_y, bound1, ref_it);
      i22 = bspline_set->size[1];
      i23 = (int32_T)b_i;
      b_emxCopyStruct_struct_T(sp, &b_expl_temp, &bspline_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &bc_emlrtBCI, sp) -
        1], &wb_emlrtRTEI);
      i22 = sp_set->size[1];
      i23 = (int32_T)b_i;
      st.site = &n_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
               &cc_emlrtBCI, sp) - 1].val, b_expl_temp.x, b_expl_temp.y, bound2,
              ref_i);
      i22 = e_ref_it->size[0] * e_ref_it->size[1];
      e_ref_it->size[0] = ref_it->size[0];
      e_ref_it->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)e_ref_it, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_it->size[0] * ref_it->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        e_ref_it->data[i22] = (ref_it->data[i22] < 0.0);
      }

      st.site = &o_emlrtRSI;
      eml_li_find(&st, e_ref_it, ii);
      ix = ref_it->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_it->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &dc_emlrtBCI,
          sp) - 1] = 0.0;
      }

      i22 = d_ref_it->size[0] * d_ref_it->size[1];
      d_ref_it->size[0] = ref_it->size[0];
      d_ref_it->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)d_ref_it, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_it->size[0] * ref_it->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        d_ref_it->data[i22] = (ref_it->data[i22] > 1.0);
      }

      st.site = &p_emlrtRSI;
      eml_li_find(&st, d_ref_it, ii);
      ix = ref_it->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_it->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &ec_emlrtBCI,
          sp) - 1] = 1.0;
      }

      i22 = e_ref_i->size[0] * e_ref_i->size[1];
      e_ref_i->size[0] = ref_i->size[0];
      e_ref_i->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)e_ref_i, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_i->size[0] * ref_i->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        e_ref_i->data[i22] = (ref_i->data[i22] < 0.0);
      }

      st.site = &q_emlrtRSI;
      eml_li_find(&st, e_ref_i, ii);
      ix = ref_i->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_i->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &fc_emlrtBCI,
          sp) - 1] = 0.0;
      }

      i22 = d_ref_i->size[0] * d_ref_i->size[1];
      d_ref_i->size[0] = ref_i->size[0];
      d_ref_i->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)d_ref_i, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_i->size[0] * ref_i->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        d_ref_i->data[i22] = (ref_i->data[i22] > 1.0);
      }

      st.site = &r_emlrtRSI;
      eml_li_find(&st, d_ref_i, ii);
      ix = ref_i->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_i->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &gc_emlrtBCI,
          sp) - 1] = 1.0;
      }

      st.site = &s_emlrtRSI;
      getPixelsValue(&st, Ref, ref_it, b_val_it);
      st.site = &t_emlrtRSI;
      getPixelsValue(&st, Ref, ref_i, val_i);
      i22 = sp_set->size[1];
      i23 = (int32_T)j;
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &gb_emlrtBCI, sp);
      i22 = sp_set->size[1];
      i23 = (int32_T)j;
      st.site = &u_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
               &hc_emlrtBCI, sp) - 1].val, t1_x, t1_y, bound1, ref_it);
      i22 = bspline_set->size[1];
      i23 = (int32_T)j;
      b_emxCopyStruct_struct_T(sp, &expl_temp, &bspline_set->
        data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &ic_emlrtBCI, sp) -
        1], &xb_emlrtRTEI);
      i22 = sp_set->size[1];
      i23 = (int32_T)j;
      st.site = &v_emlrtRSI;
      bspline(&st, sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
               &jc_emlrtBCI, sp) - 1].val, expl_temp.x, expl_temp.y, bound3,
              ref_i);
      i22 = c_ref_it->size[0] * c_ref_it->size[1];
      c_ref_it->size[0] = ref_it->size[0];
      c_ref_it->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)c_ref_it, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_it->size[0] * ref_it->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        c_ref_it->data[i22] = (ref_it->data[i22] < 0.0);
      }

      st.site = &w_emlrtRSI;
      eml_li_find(&st, c_ref_it, ii);
      ix = ref_it->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_it->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &kc_emlrtBCI,
          sp) - 1] = 0.0;
      }

      i22 = b_ref_it->size[0] * b_ref_it->size[1];
      b_ref_it->size[0] = ref_it->size[0];
      b_ref_it->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)b_ref_it, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_it->size[0] * ref_it->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_ref_it->data[i22] = (ref_it->data[i22] > 1.0);
      }

      st.site = &x_emlrtRSI;
      eml_li_find(&st, b_ref_it, ii);
      ix = ref_it->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_it->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &lc_emlrtBCI,
          sp) - 1] = 1.0;
      }

      i22 = c_ref_i->size[0] * c_ref_i->size[1];
      c_ref_i->size[0] = ref_i->size[0];
      c_ref_i->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)c_ref_i, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_i->size[0] * ref_i->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        c_ref_i->data[i22] = (ref_i->data[i22] < 0.0);
      }

      st.site = &y_emlrtRSI;
      eml_li_find(&st, c_ref_i, ii);
      ix = ref_i->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_i->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &mc_emlrtBCI,
          sp) - 1] = 0.0;
      }

      i22 = b_ref_i->size[0] * b_ref_i->size[1];
      b_ref_i->size[0] = ref_i->size[0];
      b_ref_i->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)b_ref_i, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = ref_i->size[0] * ref_i->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_ref_i->data[i22] = (ref_i->data[i22] > 1.0);
      }

      st.site = &ab_emlrtRSI;
      eml_li_find(&st, b_ref_i, ii);
      ix = ref_i->size[0];
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        i23 = ix << 1;
        i24 = ii->data[i22];
        ref_i->data[emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &nc_emlrtBCI,
          sp) - 1] = 1.0;
      }

      st.site = &bb_emlrtRSI;
      getPixelsValue(&st, Ref, ref_it, val_jt);
      st.site = &cb_emlrtRSI;
      getPixelsValue(&st, Ref, ref_i, val_j);
      for (i22 = 0; i22 < 2; i22++) {
        val_it[i22] = b_val_it->size[i22];
      }

      for (i22 = 0; i22 < 2; i22++) {
        b_val_i[i22] = val_i->size[i22];
      }

      emlrtSizeEqCheck2DFastR2012b(val_it, b_val_i, &hb_emlrtECI, sp);
      i22 = c_val_it->size[0] * c_val_it->size[1];
      c_val_it->size[0] = b_val_it->size[0];
      c_val_it->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)c_val_it, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = b_val_it->size[0] * b_val_it->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        c_val_it->data[i22] = b_val_it->data[i22] - val_i->data[i22];
      }

      st.site = &db_emlrtRSI;
      c_power(&st, c_val_it, b_val_it);
      st.site = &db_emlrtRSI;
      b_sum(&st, b_val_it, dv0);
      st.site = &db_emlrtRSI;
      D_sp1 = c_sum(dv0);
      for (i22 = 0; i22 < 2; i22++) {
        val_it[i22] = val_jt->size[i22];
      }

      for (i22 = 0; i22 < 2; i22++) {
        b_val_i[i22] = val_j->size[i22];
      }

      emlrtSizeEqCheck2DFastR2012b(val_it, b_val_i, &ib_emlrtECI, sp);
      i22 = b_val_jt->size[0] * b_val_jt->size[1];
      b_val_jt->size[0] = val_jt->size[0];
      b_val_jt->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)b_val_jt, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = val_jt->size[0] * val_jt->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_val_jt->data[i22] = val_jt->data[i22] - val_j->data[i22];
      }

      st.site = &eb_emlrtRSI;
      c_power(&st, b_val_jt, b_val_it);
      st.site = &eb_emlrtRSI;
      b_sum(&st, b_val_it, dv0);
      st.site = &eb_emlrtRSI;
      D_sp2 = c_sum(dv0);
      st.site = &fb_emlrtRSI;
      b_st.site = &vc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;
      i22 = adjacency_graph->size[0];
      i23 = (int32_T)b_i;
      i24 = adjacency_graph->size[1];
      idx = (int32_T)j;
      adjacency_graph->data[(emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
        &oc_emlrtBCI, sp) + adjacency_graph->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &pc_emlrtBCI, sp) - 1))
        - 1] = 0.0;
      if ((D_sp1 + D_sp2) / (real_T)union_ij->size[0] < 10.0) {
        if (b_i > j) {
          i22 = 0;
          i23 = 0;
        } else {
          i22 = adjacency_graph->size[1];
          i23 = (int32_T)b_i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &ib_emlrtBCI, sp)
            - 1;
          i23 = adjacency_graph->size[1];
          i24 = (int32_T)j;
          i23 = emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &ib_emlrtBCI, sp);
        }

        if (b_i > j) {
          i24 = 0;
          idx = 0;
        } else {
          i24 = adjacency_graph->size[0];
          idx = (int32_T)b_i;
          i24 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &jb_emlrtBCI, sp)
            - 1;
          idx = adjacency_graph->size[0];
          nx = (int32_T)j;
          idx = emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &jb_emlrtBCI, sp);
        }

        nx = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &hb_emlrtBCI, sp);
        nx = adjacency_graph->size[1];
        ix = (int32_T)j;
        ixstop = emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &kb_emlrtBCI, sp);
        nx = r27->size[0] * r27->size[1];
        r27->size[0] = 1;
        r27->size[1] = idx - i24;
        emxEnsureCapacity(sp, (emxArray__common *)r27, nx, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = idx - i24;
        for (idx = 0; idx < loop_ub; idx++) {
          r27->data[r27->size[0] * idx] = adjacency_graph->data[(i24 + idx) +
            adjacency_graph->size[0] * (ixstop - 1)];
        }

        i24 = b_adjacency_graph->size[0] * b_adjacency_graph->size[1];
        b_adjacency_graph->size[0] = 1;
        b_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)b_adjacency_graph, i24,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (i24 = 0; i24 < loop_ub; i24++) {
          b_adjacency_graph->data[b_adjacency_graph->size[0] * i24] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + i24)) - 1];
        }

        for (i24 = 0; i24 < 2; i24++) {
          b_val_i[i24] = b_adjacency_graph->size[i24];
        }

        for (i24 = 0; i24 < 2; i24++) {
          iv79[i24] = r27->size[i24];
        }

        emlrtSizeEqCheck2DFastR2012b(b_val_i, iv79, &jb_emlrtECI, sp);
        if (b_i > j) {
          i24 = 0;
          idx = 0;
        } else {
          i24 = adjacency_graph->size[1];
          idx = (int32_T)b_i;
          i24 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &mb_emlrtBCI, sp)
            - 1;
          idx = adjacency_graph->size[1];
          nx = (int32_T)j;
          idx = emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &mb_emlrtBCI, sp);
        }

        nx = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &lb_emlrtBCI, sp);
        nx = ii->size[0];
        ii->size[0] = idx - i24;
        emxEnsureCapacity(sp, (emxArray__common *)ii, nx, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = idx - i24;
        for (idx = 0; idx < loop_ub; idx++) {
          ii->data[idx] = i24 + idx;
        }

        iv85[0] = 1;
        iv85[1] = ii->size[0];
        i24 = c_adjacency_graph->size[0] * c_adjacency_graph->size[1];
        c_adjacency_graph->size[0] = 1;
        c_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)c_adjacency_graph, i24,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (i24 = 0; i24 < loop_ub; i24++) {
          c_adjacency_graph->data[c_adjacency_graph->size[0] * i24] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + i24)) - 1];
        }

        for (i24 = 0; i24 < 2; i24++) {
          b_val_i[i24] = c_adjacency_graph->size[i24];
        }

        emlrtSubAssignSizeCheckR2012b(iv85, 2, b_val_i, 2, &kb_emlrtECI, sp);
        i24 = d_adjacency_graph->size[0] * d_adjacency_graph->size[1];
        d_adjacency_graph->size[0] = 1;
        d_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)d_adjacency_graph, i24,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (i23 = 0; i23 < loop_ub; i23++) {
          d_adjacency_graph->data[d_adjacency_graph->size[0] * i23] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + i23)) - 1] + r27->data[r27->size[0] * i23];
        }

        loop_ub = d_adjacency_graph->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            ii->data[i22]) - 1] = d_adjacency_graph->data
            [d_adjacency_graph->size[0] * i22];
        }

        if (1.0 > b_i) {
          loop_ub = 0;
        } else {
          i22 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &nb_emlrtBCI, sp);
          i22 = adjacency_graph->size[0];
          i23 = (int32_T)b_i;
          loop_ub = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &nb_emlrtBCI,
            sp);
        }

        if (1.0 > b_i) {
          i22 = 0;
        } else {
          i22 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &pb_emlrtBCI, sp);
          i22 = adjacency_graph->size[0];
          i23 = (int32_T)b_i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &pb_emlrtBCI, sp);
        }

        i23 = adjacency_graph->size[1];
        i24 = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &ob_emlrtBCI, sp);
        i23 = adjacency_graph->size[1];
        i24 = (int32_T)j;
        emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &qb_emlrtBCI, sp);
        emlrtSizeEqCheck1DFastR2012b(loop_ub, i22, &lb_emlrtECI, sp);
        if (1.0 > b_i) {
          ix = 0;
        } else {
          i22 = adjacency_graph->size[0];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &rb_emlrtBCI, sp);
          i22 = adjacency_graph->size[0];
          i23 = (int32_T)b_i;
          ix = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &rb_emlrtBCI, sp);
        }

        i22 = ii->size[0];
        ii->size[0] = ix;
        emxEnsureCapacity(sp, (emxArray__common *)ii, i22, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i22 = 0; i22 < ix; i22++) {
          ii->data[i22] = i22;
        }

        i22 = adjacency_graph->size[1];
        i23 = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &sb_emlrtBCI, sp);
        h_ii[0] = ii->size[0];
        i22 = e_adjacency_graph->size[0];
        e_adjacency_graph->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)e_adjacency_graph, i22,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        for (i22 = 0; i22 < loop_ub; i22++) {
          e_adjacency_graph->data[i22] = adjacency_graph->data[i22 +
            adjacency_graph->size[0] * ((int32_T)b_i - 1)];
        }

        k_adjacency_graph[0] = e_adjacency_graph->size[0];
        emlrtSubAssignSizeCheckR2012b(h_ii, 1, k_adjacency_graph, 1,
          &mb_emlrtECI, sp);
        i22 = f_adjacency_graph->size[0];
        f_adjacency_graph->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)f_adjacency_graph, i22,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        for (i22 = 0; i22 < loop_ub; i22++) {
          f_adjacency_graph->data[i22] = adjacency_graph->data[i22 +
            adjacency_graph->size[0] * ((int32_T)b_i - 1)] +
            adjacency_graph->data[i22 + adjacency_graph->size[0] * ((int32_T)j -
            1)];
        }

        loop_ub = f_adjacency_graph->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          adjacency_graph->data[ii->data[i22] + adjacency_graph->size[0] *
            ((int32_T)b_i - 1)] = f_adjacency_graph->data[i22];
        }

        if ((int32_T)j > adjacency_graph->size[1]) {
          i22 = 0;
          i23 = 0;
        } else {
          i22 = adjacency_graph->size[1];
          i23 = (int32_T)j;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &ub_emlrtBCI, sp)
            - 1;
          i23 = adjacency_graph->size[1];
          i24 = adjacency_graph->size[1];
          i23 = emlrtDynamicBoundsCheckFastR2012b(i24, 1, i23, &ub_emlrtBCI, sp);
        }

        if ((int32_T)j > adjacency_graph->size[1]) {
          i24 = 0;
          idx = 0;
        } else {
          i24 = adjacency_graph->size[1];
          idx = (int32_T)j;
          i24 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i24, &wb_emlrtBCI, sp)
            - 1;
          idx = adjacency_graph->size[1];
          nx = adjacency_graph->size[1];
          idx = emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &wb_emlrtBCI, sp);
        }

        nx = adjacency_graph->size[0];
        ix = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &tb_emlrtBCI, sp);
        nx = adjacency_graph->size[0];
        ix = (int32_T)j;
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &vb_emlrtBCI, sp);
        nx = g_adjacency_graph->size[0] * g_adjacency_graph->size[1];
        g_adjacency_graph->size[0] = 1;
        g_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)g_adjacency_graph, nx,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (nx = 0; nx < loop_ub; nx++) {
          g_adjacency_graph->data[g_adjacency_graph->size[0] * nx] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + nx)) - 1];
        }

        for (nx = 0; nx < 2; nx++) {
          b_val_i[nx] = g_adjacency_graph->size[nx];
        }

        nx = h_adjacency_graph->size[0] * h_adjacency_graph->size[1];
        h_adjacency_graph->size[0] = 1;
        h_adjacency_graph->size[1] = idx - i24;
        emxEnsureCapacity(sp, (emxArray__common *)h_adjacency_graph, nx,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = idx - i24;
        for (idx = 0; idx < loop_ub; idx++) {
          h_adjacency_graph->data[h_adjacency_graph->size[0] * idx] =
            adjacency_graph->data[((int32_T)j + adjacency_graph->size[0] * (i24
            + idx)) - 1];
        }

        for (idx = 0; idx < 2; idx++) {
          val_it[idx] = h_adjacency_graph->size[idx];
        }

        emlrtSizeEqCheck2DFastR2012b(b_val_i, val_it, &nb_emlrtECI, sp);
        if ((int32_T)j > adjacency_graph->size[1]) {
          idx = 0;
          nx = 0;
        } else {
          idx = adjacency_graph->size[1];
          nx = (int32_T)j;
          idx = emlrtDynamicBoundsCheckFastR2012b(nx, 1, idx, &yb_emlrtBCI, sp)
            - 1;
          nx = adjacency_graph->size[1];
          ix = adjacency_graph->size[1];
          nx = emlrtDynamicBoundsCheckFastR2012b(ix, 1, nx, &yb_emlrtBCI, sp);
        }

        ix = adjacency_graph->size[0];
        ixstop = (int32_T)b_i;
        emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, ix, &xb_emlrtBCI, sp);
        ix = ii->size[0];
        ii->size[0] = nx - idx;
        emxEnsureCapacity(sp, (emxArray__common *)ii, ix, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = nx - idx;
        for (nx = 0; nx < loop_ub; nx++) {
          ii->data[nx] = idx + nx;
        }

        iv86[0] = 1;
        iv86[1] = ii->size[0];
        idx = i_adjacency_graph->size[0] * i_adjacency_graph->size[1];
        i_adjacency_graph->size[0] = 1;
        i_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)i_adjacency_graph, idx,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (idx = 0; idx < loop_ub; idx++) {
          i_adjacency_graph->data[i_adjacency_graph->size[0] * idx] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + idx)) - 1];
        }

        for (idx = 0; idx < 2; idx++) {
          b_val_i[idx] = i_adjacency_graph->size[idx];
        }

        emlrtSubAssignSizeCheckR2012b(iv86, 2, b_val_i, 2, &ob_emlrtECI, sp);
        idx = j_adjacency_graph->size[0] * j_adjacency_graph->size[1];
        j_adjacency_graph->size[0] = 1;
        j_adjacency_graph->size[1] = i23 - i22;
        emxEnsureCapacity(sp, (emxArray__common *)j_adjacency_graph, idx,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        loop_ub = i23 - i22;
        for (i23 = 0; i23 < loop_ub; i23++) {
          j_adjacency_graph->data[j_adjacency_graph->size[0] * i23] =
            adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            (i22 + i23)) - 1] + adjacency_graph->data[((int32_T)j +
            adjacency_graph->size[0] * (i24 + i23)) - 1];
        }

        loop_ub = j_adjacency_graph->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          adjacency_graph->data[((int32_T)b_i + adjacency_graph->size[0] *
            ii->data[i22]) - 1] = j_adjacency_graph->data
            [j_adjacency_graph->size[0] * i22];
        }

        st.site = &gb_emlrtRSI;
        eml_null_assignment(&st, adjacency_graph, j);
        i22 = r28->size[0] * r28->size[1];
        r28->size[0] = adjacency_graph->size[0];
        r28->size[1] = adjacency_graph->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r28, i22, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = adjacency_graph->size[0] * adjacency_graph->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          r28->data[i22] = adjacency_graph->data[i22];
        }

        st.site = &hb_emlrtRSI;
        b_eml_null_assignment(&st, r28, j);
        i22 = adjacency_graph->size[0] * adjacency_graph->size[1];
        adjacency_graph->size[0] = r28->size[0];
        adjacency_graph->size[1] = r28->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)adjacency_graph, i22, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        loop_ub = r28->size[0] * r28->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          adjacency_graph->data[i22] = r28->data[i22];
        }

        i22 = sp_set->size[1];
        i23 = (int32_T)b_i;
        i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &qc_emlrtBCI, sp) -
          1;
        i23 = sp_set->data[i22].val->size[0] * sp_set->data[i22].val->size[1];
        sp_set->data[i22].val->size[0] = union_ij->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i22].val, i23,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i22 = sp_set->size[1];
        i23 = (int32_T)b_i;
        i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &qc_emlrtBCI, sp) -
          1;
        i23 = sp_set->data[i22].val->size[0] * sp_set->data[i22].val->size[1];
        sp_set->data[i22].val->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)sp_set->data[i22].val, i23,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        nx = sp_set->size[1];
        ix = sp_set->size[1];
        i22 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &b_sp_set, &sp_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, ix, &qc_emlrtBCI, sp) -
          1], &emlrtRTEI);
        ix = sp_set->size[1];
        i22 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &c_sp_set, &sp_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, ix, &qc_emlrtBCI, sp) -
          1], &emlrtRTEI);
        loop_ub = union_ij->size[0] * union_ij->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          i23 = (int32_T)b_i;
          sp_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, nx,
            &qc_emlrtBCI, sp) - 1].val->data[i22] = union_ij->data[i22];
        }

        st.site = &ib_emlrtRSI;
        c_eml_null_assignment(&st, sp_set, j);
        i22 = ref_set->size[1];
        i23 = (int32_T)b_i;
        i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &rc_emlrtBCI, sp) -
          1;
        i23 = ref_set->data[i22].val->size[0] * ref_set->data[i22].val->size[1];
        ref_set->data[i22].val->size[0] = ref_union->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)ref_set->data[i22].val, i23,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        i22 = ref_set->size[1];
        i23 = (int32_T)b_i;
        i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &rc_emlrtBCI, sp) -
          1;
        i23 = ref_set->data[i22].val->size[0] * ref_set->data[i22].val->size[1];
        ref_set->data[i22].val->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)ref_set->data[i22].val, i23,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        nx = ref_set->size[1];
        ix = ref_set->size[1];
        i22 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &b_ref_set, &ref_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, ix, &rc_emlrtBCI, sp) -
          1], &emlrtRTEI);
        ix = ref_set->size[1];
        i22 = (int32_T)b_i;
        emxCopyStruct_struct_T(sp, &c_ref_set, &ref_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, ix, &rc_emlrtBCI, sp) -
          1], &emlrtRTEI);
        loop_ub = ref_union->size[0] * ref_union->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          i23 = (int32_T)b_i;
          ref_set->data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, nx,
            &rc_emlrtBCI, sp) - 1].val->data[i22] = ref_union->data[i22];
        }

        st.site = &jb_emlrtRSI;
        c_eml_null_assignment(&st, ref_set, j);
        loop_ub = control_p->size[0];
        ix = control_p->size[1];
        i22 = t0_x->size[0] * t0_x->size[1];
        t0_x->size[0] = loop_ub;
        t0_x->size[1] = ix;
        emxEnsureCapacity(sp, (emxArray__common *)t0_x, i22, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i22 = 0; i22 < ix; i22++) {
          for (i23 = 0; i23 < loop_ub; i23++) {
            t0_x->data[i23 + t0_x->size[0] * i22] = control_p->data[i23 +
              control_p->size[0] * i22];
          }
        }

        loop_ub = control_p->size[0];
        ix = control_p->size[1];
        i22 = t0_y->size[0] * t0_y->size[1];
        t0_y->size[0] = loop_ub;
        t0_y->size[1] = ix;
        emxEnsureCapacity(sp, (emxArray__common *)t0_y, i22, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (i22 = 0; i22 < ix; i22++) {
          for (i23 = 0; i23 < loop_ub; i23++) {
            t0_y->data[i23 + t0_y->size[0] * i22] = control_p->data[(i23 +
              control_p->size[0] * i22) + control_p->size[0] * control_p->size[1]];
          }
        }

        i22 = c_expl_temp.x->size[0] * c_expl_temp.x->size[1];
        c_expl_temp.x->size[0] = t0_x->size[0];
        c_expl_temp.x->size[1] = t0_x->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_expl_temp.x, i22, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        loop_ub = t0_x->size[0] * t0_x->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          c_expl_temp.x->data[i22] = t0_x->data[i22];
        }

        i22 = c_expl_temp.y->size[0] * c_expl_temp.y->size[1];
        c_expl_temp.y->size[0] = t0_y->size[0];
        c_expl_temp.y->size[1] = t0_y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_expl_temp.y, i22, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
        loop_ub = t0_y->size[0] * t0_y->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          c_expl_temp.y->data[i22] = t0_y->data[i22];
        }

        i22 = bspline_set->size[1];
        i23 = (int32_T)b_i;
        b_emxCopyStruct_struct_T(sp, &bspline_set->
          data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &sc_emlrtBCI, sp)
          - 1], &c_expl_temp, &yb_emlrtRTEI);
        st.site = &kb_emlrtRSI;
        d_eml_null_assignment(&st, bspline_set, j);
      }

      st.site = &lb_emlrtRSI;
      i22 = x->size[0] * x->size[1];
      x->size[0] = adjacency_graph->size[0];
      x->size[1] = adjacency_graph->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i22, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      loop_ub = adjacency_graph->size[0] * adjacency_graph->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        x->data[i22] = (adjacency_graph->data[i22] != 0.0);
      }

      b_st.site = &mb_emlrtRSI;
      nx = x->size[0] * x->size[1];
      idx = 0;
      if ((!((x->size[0] == 1) || (x->size[1] == 1))) || (x->size[0] != 1) ||
          (x->size[1] <= 1)) {
        b7 = TRUE;
      } else {
        b7 = FALSE;
      }

      if (b7) {
      } else {
        l_y = NULL;
        m12 = mxCreateCharArray(2, iv87);
        for (i = 0; i < 36; i++) {
          cv27[i] = cv28[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 36, m12, cv27);
        emlrtAssign(&l_y, m12);
        c_st.site = &ns_emlrtRSI;
        d_st.site = &ys_emlrtRSI;
        error(&c_st, message(&d_st, l_y, &b_emlrtMCI), &c_emlrtMCI);
      }

      i22 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                        (int32_T), &vb_emlrtRTEI);
      c_st.site = &nb_emlrtRSI;
      e_st.site = &pb_emlrtRSI;
      if (1 > nx) {
        b12 = FALSE;
      } else {
        b12 = (nx > 2147483646);
      }

      if (b12) {
        e_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      ix = 1;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= nx)) {
        guard1 = FALSE;
        if (x->data[ix - 1]) {
          c_st.site = &ob_emlrtRSI;
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= nx) {
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

      if (idx <= nx) {
      } else {
        m_y = NULL;
        m12 = mxCreateString("Assertion failed.");
        emlrtAssign(&m_y, m12);
        c_st.site = &ms_emlrtRSI;
        error(&c_st, m_y, &d_emlrtMCI);
      }

      if (nx == 1) {
        if (idx == 0) {
          i22 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        i22 = g_ii->size[0];
        g_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)g_ii, i22, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        for (i22 = 0; i22 < loop_ub; i22++) {
          g_ii->data[i22] = ii->data[i22];
        }

        i22 = ii->size[0];
        ii->size[0] = g_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i22, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        loop_ub = g_ii->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          ii->data[i22] = g_ii->data[i22];
        }
      }

      i22 = pairs->size[0];
      pairs->size[0] = ii->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)pairs, i22, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        pairs->data[i22] = ii->data[i22];
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    } else {
      exitg11 = 1;
    }
  } while (exitg11 == 0);

  emxFree_int32_T(&g_ii);
  emxFreeStruct_struct_T(&c_ref_set);
  emxFreeStruct_struct_T(&b_ref_set);
  emxFreeStruct_struct_T(&c_sp_set);
  emxFreeStruct_struct_T(&b_sp_set);
  emxFree_real_T(&j_adjacency_graph);
  emxFree_real_T(&i_adjacency_graph);
  emxFree_real_T(&h_adjacency_graph);
  emxFree_real_T(&g_adjacency_graph);
  emxFree_real_T(&f_adjacency_graph);
  emxFree_real_T(&e_adjacency_graph);
  emxFree_real_T(&d_adjacency_graph);
  emxFree_real_T(&c_adjacency_graph);
  emxFree_real_T(&b_adjacency_graph);
  emxFree_boolean_T(&e_ref_it);
  emxFree_boolean_T(&d_ref_it);
  emxFree_boolean_T(&e_ref_i);
  emxFree_boolean_T(&d_ref_i);
  emxFree_boolean_T(&c_ref_it);
  emxFree_boolean_T(&b_ref_it);
  emxFree_boolean_T(&c_ref_i);
  emxFree_boolean_T(&b_ref_i);
  emxFree_real_T(&c_val_it);
  emxFree_real_T(&b_val_jt);
  b_emxFreeStruct_struct_T(&c_expl_temp);
  b_emxFreeStruct_struct_T(&b_expl_temp);
  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&r28);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&t1_y);
  emxFree_real_T(&t1_x);
  emxFree_real_T(&t0_y);
  emxFree_real_T(&t0_x);
  emxFree_real_T(&r27);
  emxFree_real_T(&val_j);
  emxFree_real_T(&val_jt);
  emxFree_real_T(&val_i);
  emxFree_real_T(&b_val_it);
  emxFree_real_T(&ref_i);
  emxFree_real_T(&ref_it);
  emxFree_real_T(&control_p);
  emxFree_real_T(&ref_union);
  emxFree_real_T(&union_ij);
  emxFree_real_T(&pairs);
  emxFree_real_T(&adjacency_graph);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (merging.c) */
