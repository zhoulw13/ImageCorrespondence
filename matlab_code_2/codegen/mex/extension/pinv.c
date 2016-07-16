/*
 * pinv.c
 *
 * Code generation for function 'pinv'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "pinv.h"
#include "extension_emxutil.h"
#include "eml_error.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "sqrt.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo mo_emlrtRSI = { 18, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo no_emlrtRSI = { 20, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo oo_emlrtRSI = { 40, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo po_emlrtRSI = { 47, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo qo_emlrtRSI = { 51, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo ro_emlrtRSI = { 55, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo so_emlrtRSI = { 63, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo to_emlrtRSI = { 64, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo uo_emlrtRSI = { 65, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo vo_emlrtRSI = { 67, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo wo_emlrtRSI = { 12, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo xo_emlrtRSI = { 13, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo yo_emlrtRSI = { 14, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo ap_emlrtRSI = { 58, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo bp_emlrtRSI = { 19, "eml_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"
};

static emlrtRSInfo cp_emlrtRSI = { 9, "eml_lapack_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgesvd.m"
};

static emlrtRSInfo dp_emlrtRSI = { 25, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ep_emlrtRSI = { 26, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fp_emlrtRSI = { 45, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gp_emlrtRSI = { 50, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hp_emlrtRSI = { 57, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ip_emlrtRSI = { 58, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jp_emlrtRSI = { 59, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kp_emlrtRSI = { 60, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lp_emlrtRSI = { 61, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mp_emlrtRSI = { 62, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo np_emlrtRSI = { 63, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo op_emlrtRSI = { 64, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pp_emlrtRSI = { 65, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qp_emlrtRSI = { 66, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rp_emlrtRSI = { 71, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sp_emlrtRSI = { 73, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tp_emlrtRSI = { 75, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo up_emlrtRSI = { 82, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vp_emlrtRSI = { 83, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wp_emlrtRSI = { 87, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xp_emlrtRSI = { 88, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yp_emlrtRSI = { 90, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo aq_emlrtRSI = { 98, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bq_emlrtRSI = { 103, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cq_emlrtRSI = { 107, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dq_emlrtRSI = { 111, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo eq_emlrtRSI = { 113, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fq_emlrtRSI = { 123, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gq_emlrtRSI = { 126, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hq_emlrtRSI = { 128, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo iq_emlrtRSI = { 129, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jq_emlrtRSI = { 131, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kq_emlrtRSI = { 132, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lq_emlrtRSI = { 134, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mq_emlrtRSI = { 135, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nq_emlrtRSI = { 140, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo oq_emlrtRSI = { 147, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pq_emlrtRSI = { 161, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qq_emlrtRSI = { 162, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rq_emlrtRSI = { 169, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sq_emlrtRSI = { 170, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tq_emlrtRSI = { 171, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uq_emlrtRSI = { 172, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vq_emlrtRSI = { 174, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wq_emlrtRSI = { 175, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xq_emlrtRSI = { 177, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yq_emlrtRSI = { 178, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ar_emlrtRSI = { 180, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo br_emlrtRSI = { 183, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cr_emlrtRSI = { 187, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dr_emlrtRSI = { 191, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo er_emlrtRSI = { 202, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fr_emlrtRSI = { 203, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gr_emlrtRSI = { 204, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hr_emlrtRSI = { 205, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ir_emlrtRSI = { 206, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jr_emlrtRSI = { 208, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kr_emlrtRSI = { 209, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lr_emlrtRSI = { 211, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mr_emlrtRSI = { 214, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nr_emlrtRSI = { 221, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo or_emlrtRSI = { 223, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pr_emlrtRSI = { 224, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qr_emlrtRSI = { 227, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rr_emlrtRSI = { 232, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sr_emlrtRSI = { 233, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tr_emlrtRSI = { 238, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ur_emlrtRSI = { 239, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vr_emlrtRSI = { 241, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wr_emlrtRSI = { 243, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xr_emlrtRSI = { 244, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yr_emlrtRSI = { 253, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo as_emlrtRSI = { 255, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bs_emlrtRSI = { 256, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cs_emlrtRSI = { 261, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ds_emlrtRSI = { 273, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo es_emlrtRSI = { 274, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fs_emlrtRSI = { 279, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gs_emlrtRSI = { 280, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hs_emlrtRSI = { 281, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo is_emlrtRSI = { 282, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo js_emlrtRSI = { 287, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ks_emlrtRSI = { 298, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ls_emlrtRSI = { 300, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ms_emlrtRSI = { 301, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ns_emlrtRSI = { 303, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo os_emlrtRSI = { 304, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ps_emlrtRSI = { 318, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qs_emlrtRSI = { 357, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rs_emlrtRSI = { 358, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo us_emlrtRSI = { 361, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vs_emlrtRSI = { 362, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ws_emlrtRSI = { 363, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xs_emlrtRSI = { 364, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ys_emlrtRSI = { 365, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo at_emlrtRSI = { 366, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bt_emlrtRSI = { 367, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ct_emlrtRSI = { 368, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dt_emlrtRSI = { 371, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo et_emlrtRSI = { 375, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ft_emlrtRSI = { 377, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gt_emlrtRSI = { 378, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ht_emlrtRSI = { 380, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo it_emlrtRSI = { 381, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jt_emlrtRSI = { 382, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kt_emlrtRSI = { 383, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lt_emlrtRSI = { 387, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mt_emlrtRSI = { 388, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nt_emlrtRSI = { 389, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ot_emlrtRSI = { 390, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pt_emlrtRSI = { 392, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qt_emlrtRSI = { 393, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rt_emlrtRSI = { 394, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo st_emlrtRSI = { 396, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tt_emlrtRSI = { 398, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ut_emlrtRSI = { 399, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vt_emlrtRSI = { 400, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wt_emlrtRSI = { 401, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xt_emlrtRSI = { 403, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yt_emlrtRSI = { 404, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo au_emlrtRSI = { 405, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bu_emlrtRSI = { 408, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cu_emlrtRSI = { 340, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo du_emlrtRSI = { 343, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo eu_emlrtRSI = { 345, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fu_emlrtRSI = { 347, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gu_emlrtRSI = { 348, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hu_emlrtRSI = { 350, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo iu_emlrtRSI = { 351, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ju_emlrtRSI = { 352, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ku_emlrtRSI = { 322, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lu_emlrtRSI = { 323, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mu_emlrtRSI = { 324, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nu_emlrtRSI = { 326, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ou_emlrtRSI = { 329, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pu_emlrtRSI = { 330, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qu_emlrtRSI = { 331, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ru_emlrtRSI = { 334, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo su_emlrtRSI = { 335, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tu_emlrtRSI = { 336, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uu_emlrtRSI = { 416, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vu_emlrtRSI = { 417, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wu_emlrtRSI = { 421, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xu_emlrtRSI = { 428, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yu_emlrtRSI = { 429, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo av_emlrtRSI = { 430, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bv_emlrtRSI = { 434, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cv_emlrtRSI = { 435, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dv_emlrtRSI = { 436, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ev_emlrtRSI = { 439, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fv_emlrtRSI = { 442, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gv_emlrtRSI = { 448, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hv_emlrtRSI = { 453, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo iv_emlrtRSI = { 454, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vx_emlrtRSI = { 26, "eml_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m" };

static emlrtRSInfo wx_emlrtRSI = { 15, "eml_blas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xswap.m"
};

static emlrtRSInfo xx_emlrtRSI = { 19, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRSInfo yx_emlrtRSI = { 31, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRSInfo ay_emlrtRSI = { 36, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 1, 14, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo vb_emlrtRTEI = { 32, 14, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 40, 6, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 1, 20, "eml_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 447, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 452, 5, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 32, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 33, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 34, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 41, 5, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

/* Function Declarations */
static void b_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0);
static real_T b_eml_xnrm2(int32_T n, const emxArray_real_T *x, int32_T ix0);
static void b_eml_xscal(int32_T n, real_T a, emxArray_real_T *x, int32_T ix0);
static void c_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0);
static void d_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
  *A, int32_T lda, const emxArray_real_T *B, int32_T ldb, emxArray_real_T *C,
  int32_T ldc);
static real_T eml_div(real_T x, real_T y);
static void eml_pinv(const emlrtStack *sp, const emxArray_real_T *A,
                     emxArray_real_T *X);
static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, emxArray_real_T *y,
                      int32_T iy0);
static real_T eml_xdotc(int32_T n, const emxArray_real_T *x, int32_T ix0, const
  emxArray_real_T *y, int32_T iy0);
static void eml_xgesvd(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *U, emxArray_real_T *S, emxArray_real_T *V);
static real_T eml_xnrm2(int32_T n, const emxArray_real_T *x, int32_T ix0);
static void eml_xrot(int32_T n, emxArray_real_T *x, int32_T ix0, int32_T iy0,
                     real_T c, real_T s);
static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void eml_xscal(int32_T n, real_T a, emxArray_real_T *x, int32_T ix0);
static void eml_xswap(const emlrtStack *sp, int32_T n, emxArray_real_T *x,
                      int32_T ix0, int32_T iy0);

/* Function Definitions */
static void b_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  double * yiy0_t;
  double * xix0_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    yiy0_t = (double *)(&y->data[iy0 - 1]);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    daxpy(&n_t, a_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static real_T b_eml_xnrm2(int32_T n, const emxArray_real_T *x, int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (n < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void b_eml_xscal(int32_T n, real_T a, emxArray_real_T *x, int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  double * a_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

static void c_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  double * yiy0_t;
  double * xix0_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    yiy0_t = (double *)(&y->data[iy0 - 1]);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    daxpy(&n_t, a_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static void d_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
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
  if ((m < 1) || (n < 1)) {
  } else {
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'C';
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

static real_T eml_div(real_T x, real_T y)
{
  return x / y;
}

static void eml_pinv(const emlrtStack *sp, const emxArray_real_T *A,
                     emxArray_real_T *X)
{
  emxArray_real_T *V;
  int32_T vcol;
  int32_T unnamed_idx_1;
  int32_T r;
  boolean_T b7;
  emxArray_real_T *U;
  emxArray_real_T *s;
  emxArray_real_T *r30;
  emxArray_real_T *S;
  real_T tol;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &V, 2, &wb_emlrtRTEI, TRUE);
  vcol = A->size[1];
  unnamed_idx_1 = A->size[0];
  r = X->size[0] * X->size[1];
  X->size[0] = vcol;
  emxEnsureCapacity(sp, (emxArray__common *)X, r, (int32_T)sizeof(real_T),
                    &vb_emlrtRTEI);
  r = X->size[0] * X->size[1];
  X->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)X, r, (int32_T)sizeof(real_T),
                    &vb_emlrtRTEI);
  vcol *= unnamed_idx_1;
  for (r = 0; r < vcol; r++) {
    X->data[r] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    st.site = &oo_emlrtRSI;
    vcol = A->size[0] * A->size[1];
    b_st.site = &wo_emlrtRSI;
    if (1 > vcol) {
      b7 = FALSE;
    } else {
      b7 = (vcol > 2147483646);
    }

    if (b7) {
      c_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 + 1 <= vcol; unnamed_idx_1++) {
      b_st.site = &xo_emlrtRSI;
      if (!((!muDoubleScalarIsInf(A->data[unnamed_idx_1])) &&
            (!muDoubleScalarIsNaN(A->data[unnamed_idx_1])))) {
        b_st.site = &yo_emlrtRSI;
        d_eml_error(&b_st);
      }
    }

    emxInit_real_T(&st, &U, 2, &vb_emlrtRTEI, TRUE);
    b_emxInit_real_T(&st, &s, 1, &vb_emlrtRTEI, TRUE);
    emxInit_real_T(&st, &r30, 2, &vb_emlrtRTEI, TRUE);
    b_st.site = &ap_emlrtRSI;
    eml_xgesvd(&b_st, A, U, s, r30);
    r = V->size[0] * V->size[1];
    V->size[0] = r30->size[0];
    V->size[1] = r30->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, r, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    vcol = r30->size[0] * r30->size[1];
    for (r = 0; r < vcol; r++) {
      V->data[r] = r30->data[r];
    }

    emxFree_real_T(&r30);
    emxInit_real_T(&st, &S, 2, &vb_emlrtRTEI, TRUE);
    vcol = s->size[0];
    r = S->size[0] * S->size[1];
    S->size[0] = vcol;
    emxEnsureCapacity(&st, (emxArray__common *)S, r, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    vcol = s->size[0];
    r = S->size[0] * S->size[1];
    S->size[1] = vcol;
    emxEnsureCapacity(&st, (emxArray__common *)S, r, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    vcol = s->size[0] * s->size[0];
    for (r = 0; r < vcol; r++) {
      S->data[r] = 0.0;
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < s->size[0]; unnamed_idx_1++) {
      S->data[unnamed_idx_1 + S->size[0] * unnamed_idx_1] = s->
        data[unnamed_idx_1];
    }

    emxFree_real_T(&s);
    st.site = &po_emlrtRSI;
    st.site = &po_emlrtRSI;
    tol = (real_T)A->size[0] * S->data[0] * 2.2204460492503131E-16;
    r = 0;
    st.site = &qo_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    overflow = (A->size[1] > 2147483646);
    if (overflow) {
      b_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    unnamed_idx_1 = 0;
    while ((unnamed_idx_1 + 1 <= A->size[1]) && (S->data[unnamed_idx_1 + S->
            size[0] * unnamed_idx_1] > tol)) {
      st.site = &ro_emlrtRSI;
      r++;
      unnamed_idx_1++;
    }

    if (r > 0) {
      vcol = 1;
      st.site = &so_emlrtRSI;
      b_st.site = &tc_emlrtRSI;
      if (r > 2147483646) {
        b_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (unnamed_idx_1 = 0; unnamed_idx_1 + 1 <= r; unnamed_idx_1++) {
        st.site = &to_emlrtRSI;
        tol = 1.0 / S->data[unnamed_idx_1 + S->size[0] * unnamed_idx_1];
        st.site = &to_emlrtRSI;
        eml_xscal(A->size[1], tol, V, vcol);
        st.site = &uo_emlrtRSI;
        vcol += A->size[1];
      }

      st.site = &vo_emlrtRSI;
      d_eml_xgemm(A->size[1], A->size[0], r, V, A->size[1], U, A->size[0], X,
                  A->size[1]);
    }

    emxFree_real_T(&S);
    emxFree_real_T(&U);
  }

  emxFree_real_T(&V);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, emxArray_real_T *y,
                      int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  double * yiy0_t;
  double * yix0_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    yiy0_t = (double *)(&y->data[iy0 - 1]);
    yix0_t = (double *)(&y->data[ix0 - 1]);
    daxpy(&n_t, a_t, yix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static real_T eml_xdotc(int32_T n, const emxArray_real_T *x, int32_T ix0, const
  emxArray_real_T *y, int32_T iy0)
{
  real_T d;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  if (n < 1) {
    d = 0.0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    yiy0_t = (double *)(&y->data[iy0 - 1]);
    d = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }

  return d;
}

static void eml_xgesvd(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *U, emxArray_real_T *S, emxArray_real_T *V)
{
  emxArray_real_T *b_A;
  emxArray_real_T *e;
  emxArray_real_T *work;
  emxArray_real_T *Vf;
  int32_T nct;
  int32_T kase;
  emxArray_real_T *s;
  int32_T minnp;
  int32_T qs;
  boolean_T b8;
  boolean_T b9;
  int32_T nrt;
  int32_T q;
  int32_T pmq;
  int32_T iter;
  real_T test0;
  boolean_T overflow;
  int32_T mm;
  int32_T m;
  boolean_T b_nct;
  boolean_T b10;
  real_T ztest0;
  real_T tiny;
  real_T snorm;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  boolean_T exitg4;
  boolean_T b_guard1 = FALSE;
  boolean_T exitg3;
  real_T eqds;
  real_T sm;
  real_T b;
  real_T varargin_1[5];
  boolean_T exitg2;
  real_T sqds;
  boolean_T b11;
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
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &xb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &e, 1, &cc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &work, 1, &dc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Vf, 2, &ec_emlrtRTEI, TRUE);
  st.site = &bp_emlrtRSI;
  b_st.site = &cp_emlrtRSI;
  nct = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)b_A, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  kase = A->size[0] * A->size[1];
  for (nct = 0; nct < kase; nct++) {
    b_A->data[nct] = A->data[nct];
  }

  b_emxInit_real_T(&b_st, &s, 1, &bc_emlrtRTEI, TRUE);
  c_st.site = &dp_emlrtRSI;
  c_st.site = &dp_emlrtRSI;
  c_st.site = &ep_emlrtRSI;
  minnp = muIntScalarMin_sint32(A->size[0], A->size[1]);
  kase = muIntScalarMin_sint32(A->size[0] + 1, A->size[1]);
  nct = s->size[0];
  s->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)s, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    s->data[nct] = 0.0;
  }

  kase = A->size[1];
  nct = e->size[0];
  e->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)e, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    e->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = work->size[0];
  work->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)work, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    work->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = U->size[0] * U->size[1];
  U->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  nct = U->size[0] * U->size[1];
  U->size[1] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  kase *= minnp;
  for (nct = 0; nct < kase; nct++) {
    U->data[nct] = 0.0;
  }

  kase = A->size[1];
  qs = A->size[1];
  nct = Vf->size[0] * Vf->size[1];
  Vf->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)Vf, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  nct = Vf->size[0] * Vf->size[1];
  Vf->size[1] = qs;
  emxEnsureCapacity(&b_st, (emxArray__common *)Vf, nct, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  kase *= qs;
  for (nct = 0; nct < kase; nct++) {
    Vf->data[nct] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    c_st.site = &fp_emlrtRSI;
    qs = muIntScalarMin_sint32(A->size[0], minnp);
    c_st.site = &fp_emlrtRSI;
    if (1 > qs) {
      b8 = FALSE;
    } else {
      b8 = (qs > 2147483646);
    }

    if (b8) {
      d_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      U->data[kase + U->size[0] * kase] = 1.0;
    }

    c_st.site = &gp_emlrtRSI;
    qs = muIntScalarMin_sint32(A->size[1], A->size[1]);
    c_st.site = &gp_emlrtRSI;
    if (1 > qs) {
      b9 = FALSE;
    } else {
      b9 = (qs > 2147483646);
    }

    if (b9) {
      d_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      Vf->data[kase + Vf->size[0] * kase] = 1.0;
    }
  } else {
    c_st.site = &hp_emlrtRSI;
    if (A->size[1] < 2) {
      kase = 2;
    } else {
      kase = A->size[1];
    }

    c_st.site = &hp_emlrtRSI;
    c_st.site = &hp_emlrtRSI;
    nrt = muIntScalarMin_sint32(kase - 2, A->size[0]);
    c_st.site = &ip_emlrtRSI;
    kase = A->size[0];
    c_st.site = &ip_emlrtRSI;
    c_st.site = &ip_emlrtRSI;
    nct = muIntScalarMin_sint32(kase - 1, A->size[1]);
    c_st.site = &jp_emlrtRSI;
    c_st.site = &kp_emlrtRSI;
    c_st.site = &lp_emlrtRSI;
    qs = muIntScalarMax_sint32(nct, nrt);
    c_st.site = &lp_emlrtRSI;
    for (q = 0; q + 1 <= qs; q++) {
      c_st.site = &mp_emlrtRSI;
      c_st.site = &np_emlrtRSI;
      c_st.site = &op_emlrtRSI;
      c_st.site = &op_emlrtRSI;
      pmq = q + A->size[0] * q;
      c_st.site = &pp_emlrtRSI;
      iter = A->size[0] - q;
      c_st.site = &qp_emlrtRSI;
      if (q + 1 <= nct) {
        c_st.site = &rp_emlrtRSI;
        test0 = eml_xnrm2(iter, b_A, pmq + 1);
        if (test0 > 0.0) {
          c_st.site = &sp_emlrtRSI;
          if (b_A->data[pmq] < 0.0) {
            test0 = -test0;
          }

          s->data[q] = test0;
          c_st.site = &tp_emlrtRSI;
          test0 = eml_div(1.0, s->data[q]);
          c_st.site = &tp_emlrtRSI;
          eml_xscal(iter, test0, b_A, pmq + 1);
          b_A->data[pmq]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }

      c_st.site = &up_emlrtRSI;
      if (q + 2 > A->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (A->size[1] > 2147483646);
      }

      if (overflow) {
        d_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
        c_st.site = &vp_emlrtRSI;
        c_st.site = &vp_emlrtRSI;
        c_st.site = &vp_emlrtRSI;
        kase = q + A->size[0] * mm;
        if ((q + 1 <= nct) && (s->data[q] != 0.0)) {
          c_st.site = &wp_emlrtRSI;
          test0 = eml_xdotc(iter, b_A, pmq + 1, b_A, kase + 1);
          c_st.site = &xp_emlrtRSI;
          test0 = -eml_div(test0, b_A->data[q + b_A->size[0] * q]);
          c_st.site = &yp_emlrtRSI;
          eml_xaxpy(iter, test0, pmq + 1, b_A, kase + 1);
        }

        e->data[mm] = b_A->data[kase];
      }

      if (q + 1 <= nct) {
        c_st.site = &aq_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = b_A->data[kase + b_A->size[0] * q];
        }
      }

      if (q + 1 <= nrt) {
        c_st.site = &bq_emlrtRSI;
        pmq = (A->size[1] - q) - 1;
        c_st.site = &cq_emlrtRSI;
        test0 = b_eml_xnrm2(pmq, e, q + 2);
        if (test0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          c_st.site = &dq_emlrtRSI;
          if (e->data[q + 1] < 0.0) {
            test0 = -test0;
          }

          e->data[q] = test0;
          c_st.site = &eq_emlrtRSI;
          test0 = eml_div(1.0, e->data[q]);
          c_st.site = &eq_emlrtRSI;
          b_eml_xscal(pmq, test0, e, q + 2);
          e->data[q + 1]++;
        }

        e->data[q] = -e->data[q];
        if ((q + 2 <= A->size[0]) && (e->data[q] != 0.0)) {
          c_st.site = &fq_emlrtRSI;
          if (q + 2 > A->size[0]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[0] > 2147483646);
          }

          if (overflow) {
            d_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (kase = q + 1; kase + 1 <= A->size[0]; kase++) {
            work->data[kase] = 0.0;
          }

          c_st.site = &gq_emlrtRSI;
          if (q + 2 > A->size[1]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[1] > 2147483646);
          }

          if (overflow) {
            d_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            c_st.site = &hq_emlrtRSI;
            c_st.site = &hq_emlrtRSI;
            c_st.site = &hq_emlrtRSI;
            c_st.site = &iq_emlrtRSI;
            b_eml_xaxpy(iter - 1, e->data[mm], b_A, (q + A->size[0] * mm) + 2,
                        work, q + 2);
          }

          c_st.site = &jq_emlrtRSI;
          if (q + 2 > A->size[1]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[1] > 2147483646);
          }

          if (overflow) {
            d_st.site = &uc_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            c_st.site = &kq_emlrtRSI;
            test0 = eml_div(-e->data[mm], e->data[q + 1]);
            c_st.site = &lq_emlrtRSI;
            c_st.site = &lq_emlrtRSI;
            c_st.site = &lq_emlrtRSI;
            c_st.site = &mq_emlrtRSI;
            c_eml_xaxpy(iter - 1, test0, work, q + 2, b_A, (q + A->size[0] * mm)
                        + 2);
          }
        }

        c_st.site = &nq_emlrtRSI;
        if (q + 2 > A->size[1]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q + 1; kase + 1 <= A->size[1]; kase++) {
          Vf->data[kase + Vf->size[0] * q] = e->data[kase];
        }
      }
    }

    c_st.site = &oq_emlrtRSI;
    c_st.site = &oq_emlrtRSI;
    m = muIntScalarMin_sint32(A->size[1], A->size[0] + 1);
    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }

    if (A->size[0] < m) {
      s->data[m - 1] = 0.0;
    }

    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }

    e->data[m - 1] = 0.0;
    if (nct + 1 <= minnp) {
      c_st.site = &pq_emlrtRSI;
      if (nct + 1 > minnp) {
        b_nct = FALSE;
      } else {
        b_nct = (minnp > 2147483646);
      }

      if (b_nct) {
        d_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = nct; mm + 1 <= minnp; mm++) {
        c_st.site = &qq_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = 1; kase <= A->size[0]; kase++) {
          U->data[(kase + U->size[0] * mm) - 1] = 0.0;
        }

        U->data[mm + U->size[0] * mm] = 1.0;
      }
    }

    for (q = nct - 1; q + 1 > 0; q--) {
      c_st.site = &rq_emlrtRSI;
      c_st.site = &sq_emlrtRSI;
      iter = A->size[0] - q;
      c_st.site = &tq_emlrtRSI;
      c_st.site = &uq_emlrtRSI;
      c_st.site = &uq_emlrtRSI;
      c_st.site = &uq_emlrtRSI;
      pmq = q + A->size[0] * q;
      if (s->data[q] != 0.0) {
        c_st.site = &vq_emlrtRSI;
        for (mm = q + 1; mm + 1 <= minnp; mm++) {
          c_st.site = &wq_emlrtRSI;
          c_st.site = &wq_emlrtRSI;
          c_st.site = &wq_emlrtRSI;
          kase = (q + A->size[0] * mm) + 1;
          c_st.site = &xq_emlrtRSI;
          test0 = eml_xdotc(iter, U, pmq + 1, U, kase);
          c_st.site = &yq_emlrtRSI;
          test0 = -eml_div(test0, U->data[pmq]);
          c_st.site = &ar_emlrtRSI;
          eml_xaxpy(iter, test0, pmq + 1, U, kase);
        }

        c_st.site = &br_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = -U->data[kase + U->size[0] * q];
        }

        U->data[pmq]++;
        c_st.site = &cr_emlrtRSI;
        c_st.site = &cr_emlrtRSI;
        for (kase = 1; kase <= q; kase++) {
          U->data[(kase + U->size[0] * q) - 1] = 0.0;
        }
      } else {
        c_st.site = &dr_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = 1; kase <= A->size[0]; kase++) {
          U->data[(kase + U->size[0] * q) - 1] = 0.0;
        }

        U->data[pmq] = 1.0;
      }
    }

    for (q = A->size[1] - 1; q + 1 > 0; q--) {
      if ((q + 1 <= nrt) && (e->data[q] != 0.0)) {
        c_st.site = &er_emlrtRSI;
        c_st.site = &fr_emlrtRSI;
        pmq = (A->size[1] - q) - 1;
        c_st.site = &gr_emlrtRSI;
        c_st.site = &gr_emlrtRSI;
        c_st.site = &gr_emlrtRSI;
        kase = (q + A->size[1] * q) + 2;
        c_st.site = &hr_emlrtRSI;
        if (q + 2 > A->size[1]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &uc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (mm = q; mm + 2 <= A->size[1]; mm++) {
          c_st.site = &ir_emlrtRSI;
          c_st.site = &ir_emlrtRSI;
          c_st.site = &ir_emlrtRSI;
          qs = (q + A->size[1] * (mm + 1)) + 2;
          c_st.site = &jr_emlrtRSI;
          test0 = eml_xdotc(pmq, Vf, kase, Vf, qs);
          c_st.site = &kr_emlrtRSI;
          test0 = -eml_div(test0, Vf->data[kase - 1]);
          c_st.site = &lr_emlrtRSI;
          eml_xaxpy(pmq, test0, kase, Vf, qs);
        }
      }

      c_st.site = &mr_emlrtRSI;
      overflow = (A->size[1] > 2147483646);
      if (overflow) {
        d_st.site = &uc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (kase = 1; kase <= A->size[1]; kase++) {
        Vf->data[(kase + Vf->size[0] * q) - 1] = 0.0;
      }

      Vf->data[q + Vf->size[0] * q] = 1.0;
    }

    c_st.site = &nr_emlrtRSI;
    if (1 > m) {
      b10 = FALSE;
    } else {
      b10 = (m > 2147483646);
    }

    if (b10) {
      d_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (q = 0; q + 1 <= m; q++) {
      if (s->data[q] != 0.0) {
        c_st.site = &or_emlrtRSI;
        ztest0 = b_abs(s->data[q]);
        c_st.site = &pr_emlrtRSI;
        test0 = eml_div(s->data[q], ztest0);
        s->data[q] = ztest0;
        if (q + 1 < m) {
          c_st.site = &qr_emlrtRSI;
          e->data[q] = eml_div(e->data[q], test0);
        }

        if (q + 1 <= A->size[0]) {
          c_st.site = &rr_emlrtRSI;
          c_st.site = &rr_emlrtRSI;
          c_st.site = &rr_emlrtRSI;
          nct = A->size[0] * q + 1;
          c_st.site = &sr_emlrtRSI;
          eml_xscal(A->size[0], test0, U, nct);
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        c_st.site = &tr_emlrtRSI;
        ztest0 = b_abs(e->data[q]);
        c_st.site = &ur_emlrtRSI;
        test0 = eml_div(ztest0, e->data[q]);
        e->data[q] = ztest0;
        c_st.site = &vr_emlrtRSI;
        c_st.site = &vr_emlrtRSI;
        c_st.site = &vr_emlrtRSI;
        s->data[q + 1] *= test0;
        c_st.site = &wr_emlrtRSI;
        c_st.site = &wr_emlrtRSI;
        nct = A->size[1] * (q + 1) + 1;
        c_st.site = &xr_emlrtRSI;
        eml_xscal(A->size[1], test0, Vf, nct);
      }
    }

    mm = m;
    iter = 0;
    c_st.site = &yr_emlrtRSI;
    tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
    snorm = 0.0;
    c_st.site = &as_emlrtRSI;
    for (kase = 0; kase + 1 <= m; kase++) {
      c_st.site = &bs_emlrtRSI;
      test0 = b_abs(s->data[kase]);
      c_st.site = &bs_emlrtRSI;
      ztest0 = b_abs(e->data[kase]);
      c_st.site = &bs_emlrtRSI;
      c_st.site = &bs_emlrtRSI;
      snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(test0, ztest0));
    }

    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (m > 0)) {
      if (iter >= 75) {
        c_st.site = &cs_emlrtRSI;
        e_eml_error(&c_st);
        exitg1 = TRUE;
      } else {
        c_st.site = &ds_emlrtRSI;
        c_st.site = &es_emlrtRSI;
        q = m - 1;
        guard1 = FALSE;
        exitg4 = FALSE;
        while (!((exitg4 == TRUE) || (q == 0))) {
          c_st.site = &fs_emlrtRSI;
          c_st.site = &fs_emlrtRSI;
          test0 = b_abs(s->data[q - 1]) + b_abs(s->data[q]);
          c_st.site = &gs_emlrtRSI;
          ztest0 = b_abs(e->data[q - 1]);
          c_st.site = &hs_emlrtRSI;
          if ((ztest0 <= 2.2204460492503131E-16 * test0) || (ztest0 <= tiny)) {
            guard1 = TRUE;
            exitg4 = TRUE;
          } else {
            b_guard1 = FALSE;
            if (iter > 20) {
              c_st.site = &is_emlrtRSI;
              if (ztest0 <= 2.2204460492503131E-16 * snorm) {
                guard1 = TRUE;
                exitg4 = TRUE;
              } else {
                b_guard1 = TRUE;
              }
            } else {
              b_guard1 = TRUE;
            }

            if (b_guard1 == TRUE) {
              q--;
              guard1 = FALSE;
            }
          }
        }

        if (guard1 == TRUE) {
          e->data[q - 1] = 0.0;
        }

        c_st.site = &js_emlrtRSI;
        if (q == m - 1) {
          kase = 4;
        } else {
          qs = m;
          kase = m;
          exitg3 = FALSE;
          while ((exitg3 == FALSE) && (kase >= q)) {
            qs = kase;
            if (kase == q) {
              exitg3 = TRUE;
            } else {
              test0 = 0.0;
              if (kase < m) {
                c_st.site = &ks_emlrtRSI;
                test0 = b_abs(e->data[kase - 1]);
              }

              c_st.site = &ls_emlrtRSI;
              if (kase > q + 1) {
                c_st.site = &ms_emlrtRSI;
                c_st.site = &ms_emlrtRSI;
                test0 += b_abs(e->data[kase - 2]);
              }

              c_st.site = &ns_emlrtRSI;
              ztest0 = b_abs(s->data[kase - 1]);
              c_st.site = &os_emlrtRSI;
              if ((ztest0 <= 2.2204460492503131E-16 * test0) || (ztest0 <= tiny))
              {
                s->data[kase - 1] = 0.0;
                exitg3 = TRUE;
              } else {
                kase--;
              }
            }
          }

          if (qs == q) {
            kase = 3;
          } else if (qs == m) {
            kase = 1;
          } else {
            kase = 2;
            q = qs;
          }
        }

        c_st.site = &ps_emlrtRSI;
        switch (kase) {
         case 1:
          c_st.site = &ku_emlrtRSI;
          ztest0 = e->data[m - 2];
          c_st.site = &lu_emlrtRSI;
          e->data[m - 2] = 0.0;
          c_st.site = &mu_emlrtRSI;
          for (kase = m - 2; kase + 1 >= q + 1; kase--) {
            test0 = s->data[kase];
            c_st.site = &nu_emlrtRSI;
            eml_xrotg(&test0, &ztest0, &sm, &eqds);
            s->data[kase] = test0;
            if (kase + 1 > q + 1) {
              c_st.site = &ou_emlrtRSI;
              c_st.site = &pu_emlrtRSI;
              ztest0 = -eqds * e->data[kase - 1];
              c_st.site = &qu_emlrtRSI;
              e->data[kase - 1] *= sm;
            }

            c_st.site = &ru_emlrtRSI;
            c_st.site = &ru_emlrtRSI;
            c_st.site = &ru_emlrtRSI;
            c_st.site = &su_emlrtRSI;
            c_st.site = &su_emlrtRSI;
            c_st.site = &su_emlrtRSI;
            nct = A->size[1] * kase + 1;
            pmq = A->size[1] * (m - 1) + 1;
            c_st.site = &tu_emlrtRSI;
            eml_xrot(A->size[1], Vf, nct, pmq, sm, eqds);
          }
          break;

         case 2:
          c_st.site = &cu_emlrtRSI;
          ztest0 = e->data[q - 1];
          e->data[q - 1] = 0.0;
          c_st.site = &du_emlrtRSI;
          for (kase = q; kase + 1 <= m; kase++) {
            c_st.site = &eu_emlrtRSI;
            eml_xrotg(&s->data[kase], &ztest0, &sm, &eqds);
            c_st.site = &fu_emlrtRSI;
            ztest0 = -eqds * e->data[kase];
            c_st.site = &gu_emlrtRSI;
            e->data[kase] *= sm;
            c_st.site = &hu_emlrtRSI;
            c_st.site = &hu_emlrtRSI;
            c_st.site = &hu_emlrtRSI;
            c_st.site = &iu_emlrtRSI;
            c_st.site = &iu_emlrtRSI;
            c_st.site = &iu_emlrtRSI;
            nct = A->size[0] * kase + 1;
            pmq = A->size[0] * (q - 1) + 1;
            c_st.site = &ju_emlrtRSI;
            eml_xrot(A->size[0], U, nct, pmq, sm, eqds);
          }
          break;

         case 3:
          c_st.site = &qs_emlrtRSI;
          c_st.site = &rs_emlrtRSI;
          b = b_abs(s->data[m - 1]);
          test0 = b_abs(s->data[m - 2]);
          ztest0 = b_abs(e->data[m - 2]);
          sm = b_abs(s->data[q]);
          eqds = b_abs(e->data[q]);
          varargin_1[0] = b;
          varargin_1[1] = test0;
          varargin_1[2] = ztest0;
          varargin_1[3] = sm;
          varargin_1[4] = eqds;
          kase = 1;
          if (muDoubleScalarIsNaN(b)) {
            qs = 2;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (qs < 6)) {
              kase = qs;
              if (!muDoubleScalarIsNaN(varargin_1[qs - 1])) {
                b = varargin_1[qs - 1];
                exitg2 = TRUE;
              } else {
                qs++;
              }
            }
          }

          if (kase < 5) {
            while (kase + 1 < 6) {
              if (varargin_1[kase] > b) {
                b = varargin_1[kase];
              }

              kase++;
            }
          }

          c_st.site = &us_emlrtRSI;
          sm = eml_div(s->data[m - 1], b);
          c_st.site = &vs_emlrtRSI;
          test0 = eml_div(s->data[m - 2], b);
          c_st.site = &ws_emlrtRSI;
          ztest0 = eml_div(e->data[m - 2], b);
          c_st.site = &xs_emlrtRSI;
          sqds = eml_div(s->data[q], b);
          c_st.site = &ys_emlrtRSI;
          eqds = eml_div(e->data[q], b);
          c_st.site = &at_emlrtRSI;
          c_st.site = &at_emlrtRSI;
          c_st.site = &at_emlrtRSI;
          b = eml_div((test0 + sm) * (test0 - sm) + ztest0 * ztest0, 2.0);
          c_st.site = &bt_emlrtRSI;
          test0 = sm * ztest0;
          c_st.site = &ct_emlrtRSI;
          test0 *= test0;
          ztest0 = 0.0;
          if ((b != 0.0) || (test0 != 0.0)) {
            c_st.site = &dt_emlrtRSI;
            ztest0 = b * b + test0;
            c_st.site = &dt_emlrtRSI;
            b_sqrt(&c_st, &ztest0);
            if (b < 0.0) {
              ztest0 = -ztest0;
            }

            c_st.site = &et_emlrtRSI;
            ztest0 = eml_div(test0, b + ztest0);
          }

          c_st.site = &ft_emlrtRSI;
          ztest0 += (sqds + sm) * (sqds - sm);
          c_st.site = &gt_emlrtRSI;
          test0 = sqds * eqds;
          c_st.site = &ht_emlrtRSI;
          for (kase = q + 1; kase < m; kase++) {
            c_st.site = &it_emlrtRSI;
            c_st.site = &jt_emlrtRSI;
            c_st.site = &kt_emlrtRSI;
            eml_xrotg(&ztest0, &test0, &sm, &eqds);
            if (kase > q + 1) {
              e->data[kase - 2] = ztest0;
            }

            c_st.site = &lt_emlrtRSI;
            test0 = sm * s->data[kase - 1];
            c_st.site = &lt_emlrtRSI;
            ztest0 = eqds * e->data[kase - 1];
            c_st.site = &mt_emlrtRSI;
            c_st.site = &mt_emlrtRSI;
            e->data[kase - 1] = sm * e->data[kase - 1] - eqds * s->data[kase - 1];
            c_st.site = &nt_emlrtRSI;
            b = s->data[kase];
            c_st.site = &ot_emlrtRSI;
            s->data[kase] *= sm;
            c_st.site = &pt_emlrtRSI;
            c_st.site = &pt_emlrtRSI;
            c_st.site = &pt_emlrtRSI;
            c_st.site = &qt_emlrtRSI;
            c_st.site = &qt_emlrtRSI;
            nct = A->size[1] * (kase - 1) + 1;
            pmq = A->size[1] * kase + 1;
            c_st.site = &rt_emlrtRSI;
            eml_xrot(A->size[1], Vf, nct, pmq, sm, eqds);
            s->data[kase - 1] = test0 + ztest0;
            test0 = eqds * b;
            c_st.site = &st_emlrtRSI;
            eml_xrotg(&s->data[kase - 1], &test0, &sm, &eqds);
            c_st.site = &tt_emlrtRSI;
            c_st.site = &tt_emlrtRSI;
            ztest0 = sm * e->data[kase - 1] + eqds * s->data[kase];
            c_st.site = &ut_emlrtRSI;
            c_st.site = &ut_emlrtRSI;
            s->data[kase] = -eqds * e->data[kase - 1] + sm * s->data[kase];
            c_st.site = &vt_emlrtRSI;
            test0 = eqds * e->data[kase];
            c_st.site = &wt_emlrtRSI;
            e->data[kase] *= sm;
            if (kase < A->size[0]) {
              c_st.site = &xt_emlrtRSI;
              c_st.site = &xt_emlrtRSI;
              c_st.site = &xt_emlrtRSI;
              c_st.site = &yt_emlrtRSI;
              c_st.site = &yt_emlrtRSI;
              nct = A->size[0] * (kase - 1) + 1;
              pmq = A->size[0] * kase + 1;
              c_st.site = &au_emlrtRSI;
              eml_xrot(A->size[0], U, nct, pmq, sm, eqds);
            }
          }

          c_st.site = &bu_emlrtRSI;
          e->data[m - 2] = ztest0;
          iter++;
          break;

         default:
          if (s->data[q] < 0.0) {
            s->data[q] = -s->data[q];
            c_st.site = &uu_emlrtRSI;
            c_st.site = &uu_emlrtRSI;
            c_st.site = &uu_emlrtRSI;
            nct = A->size[1] * q + 1;
            c_st.site = &vu_emlrtRSI;
            eml_xscal(A->size[1], -1.0, Vf, nct);
          }

          c_st.site = &wu_emlrtRSI;
          qs = q + 1;
          while ((q + 1 < mm) && (s->data[q] < s->data[qs])) {
            ztest0 = s->data[q];
            s->data[q] = s->data[qs];
            s->data[qs] = ztest0;
            if (q + 1 < A->size[1]) {
              c_st.site = &xu_emlrtRSI;
              c_st.site = &xu_emlrtRSI;
              c_st.site = &xu_emlrtRSI;
              c_st.site = &yu_emlrtRSI;
              c_st.site = &yu_emlrtRSI;
              nct = A->size[1] * q + 1;
              pmq = A->size[1] * (q + 1) + 1;
              c_st.site = &av_emlrtRSI;
              eml_xswap(&c_st, A->size[1], Vf, nct, pmq);
            }

            if (q + 1 < A->size[0]) {
              c_st.site = &bv_emlrtRSI;
              c_st.site = &bv_emlrtRSI;
              c_st.site = &bv_emlrtRSI;
              c_st.site = &cv_emlrtRSI;
              c_st.site = &cv_emlrtRSI;
              nct = A->size[0] * q + 1;
              pmq = A->size[0] * (q + 1) + 1;
              c_st.site = &dv_emlrtRSI;
              eml_xswap(&c_st, A->size[0], U, nct, pmq);
            }

            q = qs;
            c_st.site = &ev_emlrtRSI;
            qs++;
          }

          iter = 0;
          c_st.site = &fv_emlrtRSI;
          m--;
          break;
        }
      }
    }
  }

  nct = S->size[0];
  S->size[0] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)S, nct, (int32_T)sizeof(real_T),
                    &yb_emlrtRTEI);
  c_st.site = &gv_emlrtRSI;
  if (1 > minnp) {
    b11 = FALSE;
  } else {
    b11 = (minnp > 2147483646);
  }

  if (b11) {
    d_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (kase = 0; kase + 1 <= minnp; kase++) {
    S->data[kase] = s->data[kase];
  }

  emxFree_real_T(&s);
  kase = A->size[1];
  nct = V->size[0] * V->size[1];
  V->size[0] = kase;
  V->size[1] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)V, nct, (int32_T)sizeof(real_T),
                    &ac_emlrtRTEI);
  c_st.site = &hv_emlrtRSI;
  for (kase = 0; kase + 1 <= minnp; kase++) {
    c_st.site = &iv_emlrtRSI;
    if (1 > A->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (A->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &uc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (qs = 0; qs + 1 <= A->size[1]; qs++) {
      V->data[qs + V->size[0] * kase] = Vf->data[qs + Vf->size[0] * kase];
    }
  }

  emxFree_real_T(&Vf);
  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T eml_xnrm2(int32_T n, const emxArray_real_T *x, int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (n < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void eml_xrot(int32_T n, emxArray_real_T *x, int32_T ix0, int32_T iy0,
                     real_T c, real_T s)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * c_t;
  double * s_t;
  double * xiy0_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    c_t = (double *)(&c);
    s_t = (double *)(&s);
    xiy0_t = (double *)(&x->data[iy0 - 1]);
    drot(&n_t, xix0_t, &incx_t, xiy0_t, &incy_t, c_t, s_t);
  }
}

static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T b_b;
  real_T b_a;
  double * a_t;
  double * b_t;
  double * c_t;
  double * s_t;
  b_b = *b;
  b_a = *a;
  *c = 0.0;
  *s = 0.0;
  a_t = (double *)(&b_a);
  b_t = (double *)(&b_b);
  c_t = (double *)(c);
  s_t = (double *)(s);
  drotg(a_t, b_t, c_t, s_t);
  *a = b_a;
  *b = b_b;
}

static void eml_xscal(int32_T n, real_T a, emxArray_real_T *x, int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  double * a_t;
  if (n < 1) {
  } else {
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[ix0 - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

static void eml_xswap(const emlrtStack *sp, int32_T n, emxArray_real_T *x,
                      int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  boolean_T b16;
  int32_T k;
  real_T temp;
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
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  st.site = &vx_emlrtRSI;
  b_st.site = &wx_emlrtRSI;
  ix = ix0 - 1;
  iy = iy0 - 1;
  c_st.site = &xx_emlrtRSI;
  if (1 > n) {
    b16 = FALSE;
  } else {
    b16 = (n > 2147483646);
  }

  if (b16) {
    d_st.site = &uc_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= n; k++) {
    temp = x->data[ix];
    x->data[ix] = x->data[iy];
    x->data[iy] = temp;
    c_st.site = &yx_emlrtRSI;
    ix++;
    c_st.site = &ay_emlrtRSI;
    iy++;
  }
}

void pinv(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T i20;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i21;
  emxArray_real_T *r29;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (A->size[0] < A->size[1]) {
    emxInit_real_T(sp, &b_A, 2, &ub_emlrtRTEI, TRUE);
    i20 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[1];
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i20, (int32_T)sizeof(real_T),
                      &ub_emlrtRTEI);
    loop_ub = A->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      b_loop_ub = A->size[1];
      for (i21 = 0; i21 < b_loop_ub; i21++) {
        b_A->data[i21 + b_A->size[0] * i20] = A->data[i20 + A->size[0] * i21];
      }
    }

    emxInit_real_T(sp, &r29, 2, &ub_emlrtRTEI, TRUE);
    st.site = &mo_emlrtRSI;
    eml_pinv(&st, b_A, r29);
    i20 = X->size[0] * X->size[1];
    X->size[0] = r29->size[1];
    X->size[1] = r29->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)X, i20, (int32_T)sizeof(real_T),
                      &ub_emlrtRTEI);
    loop_ub = r29->size[0];
    emxFree_real_T(&b_A);
    for (i20 = 0; i20 < loop_ub; i20++) {
      b_loop_ub = r29->size[1];
      for (i21 = 0; i21 < b_loop_ub; i21++) {
        X->data[i21 + X->size[0] * i20] = r29->data[i20 + r29->size[0] * i21];
      }
    }

    emxFree_real_T(&r29);
  } else {
    st.site = &no_emlrtRSI;
    eml_pinv(&st, A, X);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (pinv.c) */
