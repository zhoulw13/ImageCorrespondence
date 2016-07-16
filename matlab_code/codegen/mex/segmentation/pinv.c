/*
 * pinv.c
 *
 * Code generation for function 'pinv'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "pinv.h"
#include "segmentation_emxutil.h"
#include "eml_error.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "sqrt.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = { 18, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo je_emlrtRSI = { 20, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo ke_emlrtRSI = { 40, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo le_emlrtRSI = { 47, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo me_emlrtRSI = { 51, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo ne_emlrtRSI = { 55, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo oe_emlrtRSI = { 63, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo pe_emlrtRSI = { 64, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo qe_emlrtRSI = { 65, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo re_emlrtRSI = { 67, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRSInfo se_emlrtRSI = { 12, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo te_emlrtRSI = { 13, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo ue_emlrtRSI = { 14, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo ve_emlrtRSI = { 58, "svd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo xe_emlrtRSI = { 19, "eml_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"
};

static emlrtRSInfo ye_emlrtRSI = { 9, "eml_lapack_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgesvd.m"
};

static emlrtRSInfo af_emlrtRSI = { 25, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bf_emlrtRSI = { 26, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cf_emlrtRSI = { 45, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo df_emlrtRSI = { 50, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ef_emlrtRSI = { 57, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ff_emlrtRSI = { 58, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gf_emlrtRSI = { 59, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hf_emlrtRSI = { 60, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo if_emlrtRSI = { 61, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jf_emlrtRSI = { 62, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kf_emlrtRSI = { 63, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lf_emlrtRSI = { 64, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mf_emlrtRSI = { 65, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nf_emlrtRSI = { 66, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo of_emlrtRSI = { 71, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pf_emlrtRSI = { 73, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qf_emlrtRSI = { 75, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rf_emlrtRSI = { 82, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sf_emlrtRSI = { 83, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tf_emlrtRSI = { 87, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uf_emlrtRSI = { 88, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vf_emlrtRSI = { 90, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wf_emlrtRSI = { 98, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xf_emlrtRSI = { 103, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yf_emlrtRSI = { 107, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ag_emlrtRSI = { 111, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bg_emlrtRSI = { 113, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cg_emlrtRSI = { 123, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dg_emlrtRSI = { 126, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo eg_emlrtRSI = { 128, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fg_emlrtRSI = { 129, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gg_emlrtRSI = { 131, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hg_emlrtRSI = { 132, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ig_emlrtRSI = { 134, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jg_emlrtRSI = { 135, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kg_emlrtRSI = { 140, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lg_emlrtRSI = { 147, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mg_emlrtRSI = { 161, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ng_emlrtRSI = { 162, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo og_emlrtRSI = { 169, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pg_emlrtRSI = { 170, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qg_emlrtRSI = { 171, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rg_emlrtRSI = { 172, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sg_emlrtRSI = { 174, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tg_emlrtRSI = { 175, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ug_emlrtRSI = { 177, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vg_emlrtRSI = { 178, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wg_emlrtRSI = { 180, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xg_emlrtRSI = { 183, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yg_emlrtRSI = { 187, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ah_emlrtRSI = { 191, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bh_emlrtRSI = { 202, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ch_emlrtRSI = { 203, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dh_emlrtRSI = { 204, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo eh_emlrtRSI = { 205, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fh_emlrtRSI = { 206, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gh_emlrtRSI = { 208, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hh_emlrtRSI = { 209, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ih_emlrtRSI = { 211, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jh_emlrtRSI = { 214, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kh_emlrtRSI = { 221, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lh_emlrtRSI = { 223, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mh_emlrtRSI = { 224, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nh_emlrtRSI = { 227, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo oh_emlrtRSI = { 232, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ph_emlrtRSI = { 233, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qh_emlrtRSI = { 238, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rh_emlrtRSI = { 239, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sh_emlrtRSI = { 241, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo th_emlrtRSI = { 243, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uh_emlrtRSI = { 244, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vh_emlrtRSI = { 253, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wh_emlrtRSI = { 255, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xh_emlrtRSI = { 256, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yh_emlrtRSI = { 261, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ai_emlrtRSI = { 273, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bi_emlrtRSI = { 274, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ci_emlrtRSI = { 279, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo di_emlrtRSI = { 280, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ei_emlrtRSI = { 281, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fi_emlrtRSI = { 282, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gi_emlrtRSI = { 287, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hi_emlrtRSI = { 298, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ii_emlrtRSI = { 300, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ji_emlrtRSI = { 301, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ki_emlrtRSI = { 303, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo li_emlrtRSI = { 304, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mi_emlrtRSI = { 318, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ni_emlrtRSI = { 357, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo oi_emlrtRSI = { 358, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ri_emlrtRSI = { 361, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo si_emlrtRSI = { 362, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ti_emlrtRSI = { 363, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ui_emlrtRSI = { 364, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vi_emlrtRSI = { 365, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wi_emlrtRSI = { 366, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xi_emlrtRSI = { 367, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yi_emlrtRSI = { 368, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo aj_emlrtRSI = { 371, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bj_emlrtRSI = { 375, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cj_emlrtRSI = { 377, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dj_emlrtRSI = { 378, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ej_emlrtRSI = { 380, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fj_emlrtRSI = { 381, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gj_emlrtRSI = { 382, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hj_emlrtRSI = { 383, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ij_emlrtRSI = { 387, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jj_emlrtRSI = { 388, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kj_emlrtRSI = { 389, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lj_emlrtRSI = { 390, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mj_emlrtRSI = { 392, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nj_emlrtRSI = { 393, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo oj_emlrtRSI = { 394, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pj_emlrtRSI = { 396, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qj_emlrtRSI = { 398, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rj_emlrtRSI = { 399, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sj_emlrtRSI = { 400, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tj_emlrtRSI = { 401, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uj_emlrtRSI = { 403, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vj_emlrtRSI = { 404, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wj_emlrtRSI = { 405, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xj_emlrtRSI = { 408, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yj_emlrtRSI = { 340, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ak_emlrtRSI = { 343, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bk_emlrtRSI = { 345, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ck_emlrtRSI = { 347, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dk_emlrtRSI = { 348, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ek_emlrtRSI = { 350, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fk_emlrtRSI = { 351, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo gk_emlrtRSI = { 352, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo hk_emlrtRSI = { 322, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ik_emlrtRSI = { 323, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jk_emlrtRSI = { 324, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo kk_emlrtRSI = { 326, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo lk_emlrtRSI = { 329, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo mk_emlrtRSI = { 330, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo nk_emlrtRSI = { 331, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ok_emlrtRSI = { 334, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pk_emlrtRSI = { 335, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo qk_emlrtRSI = { 336, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo rk_emlrtRSI = { 416, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo sk_emlrtRSI = { 417, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo tk_emlrtRSI = { 421, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo uk_emlrtRSI = { 428, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo vk_emlrtRSI = { 429, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo wk_emlrtRSI = { 430, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo xk_emlrtRSI = { 434, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo yk_emlrtRSI = { 435, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo al_emlrtRSI = { 436, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo bl_emlrtRSI = { 439, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo cl_emlrtRSI = { 442, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo dl_emlrtRSI = { 448, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo el_emlrtRSI = { 453, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo fl_emlrtRSI = { 454, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo jo_emlrtRSI = { 26, "eml_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m" };

static emlrtRSInfo ko_emlrtRSI = { 15, "eml_blas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xswap.m"
};

static emlrtRSInfo lo_emlrtRSI = { 19, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRSInfo mo_emlrtRSI = { 31, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRSInfo no_emlrtRSI = { 36, "eml_refblas_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 1, 14, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 32, 14, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 40, 6, "pinv",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/matfun/pinv.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 1, 20, "eml_xgesvd",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 447, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 452, 5, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 32, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 33, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 34, 1, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 41, 5, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

/* Function Declarations */
static void b_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0);
static real_T b_eml_xnrm2(int32_T n, const emxArray_real_T *x, int32_T ix0);
static void b_eml_xscal(int32_T n, real_T a, emxArray_real_T *x, int32_T ix0);
static void c_eml_xaxpy(int32_T n, real_T a, const emxArray_real_T *x, int32_T
  ix0, emxArray_real_T *y, int32_T iy0);
static void c_eml_xgemm(int32_T m, int32_T n, int32_T k, const emxArray_real_T
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
  boolean_T b4;
  emxArray_real_T *U;
  emxArray_real_T *s;
  emxArray_real_T *r15;
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
  emxInit_real_T(sp, &V, 2, &fb_emlrtRTEI, TRUE);
  vcol = A->size[1];
  unnamed_idx_1 = A->size[0];
  r = X->size[0] * X->size[1];
  X->size[0] = vcol;
  emxEnsureCapacity(sp, (emxArray__common *)X, r, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  r = X->size[0] * X->size[1];
  X->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)X, r, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  vcol *= unnamed_idx_1;
  for (r = 0; r < vcol; r++) {
    X->data[r] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    st.site = &ke_emlrtRSI;
    vcol = A->size[0] * A->size[1];
    b_st.site = &se_emlrtRSI;
    if (1 > vcol) {
      b4 = FALSE;
    } else {
      b4 = (vcol > 2147483646);
    }

    if (b4) {
      c_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 + 1 <= vcol; unnamed_idx_1++) {
      b_st.site = &te_emlrtRSI;
      if (!((!muDoubleScalarIsInf(A->data[unnamed_idx_1])) &&
            (!muDoubleScalarIsNaN(A->data[unnamed_idx_1])))) {
        b_st.site = &ue_emlrtRSI;
        eml_error(&b_st);
      }
    }

    emxInit_real_T(&st, &U, 2, &eb_emlrtRTEI, TRUE);
    b_emxInit_real_T(&st, &s, 1, &eb_emlrtRTEI, TRUE);
    emxInit_real_T(&st, &r15, 2, &eb_emlrtRTEI, TRUE);
    b_st.site = &ve_emlrtRSI;
    eml_xgesvd(&b_st, A, U, s, r15);
    r = V->size[0] * V->size[1];
    V->size[0] = r15->size[0];
    V->size[1] = r15->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, r, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    vcol = r15->size[0] * r15->size[1];
    for (r = 0; r < vcol; r++) {
      V->data[r] = r15->data[r];
    }

    emxFree_real_T(&r15);
    emxInit_real_T(&st, &S, 2, &eb_emlrtRTEI, TRUE);
    vcol = s->size[0];
    r = S->size[0] * S->size[1];
    S->size[0] = vcol;
    emxEnsureCapacity(&st, (emxArray__common *)S, r, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    vcol = s->size[0];
    r = S->size[0] * S->size[1];
    S->size[1] = vcol;
    emxEnsureCapacity(&st, (emxArray__common *)S, r, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    vcol = s->size[0] * s->size[0];
    for (r = 0; r < vcol; r++) {
      S->data[r] = 0.0;
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < s->size[0]; unnamed_idx_1++) {
      S->data[unnamed_idx_1 + S->size[0] * unnamed_idx_1] = s->
        data[unnamed_idx_1];
    }

    emxFree_real_T(&s);
    st.site = &le_emlrtRSI;
    st.site = &le_emlrtRSI;
    tol = (real_T)A->size[0] * S->data[0] * 2.2204460492503131E-16;
    r = 0;
    st.site = &me_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    overflow = (A->size[1] > 2147483646);
    if (overflow) {
      b_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    unnamed_idx_1 = 0;
    while ((unnamed_idx_1 + 1 <= A->size[1]) && (S->data[unnamed_idx_1 + S->
            size[0] * unnamed_idx_1] > tol)) {
      st.site = &ne_emlrtRSI;
      r++;
      unnamed_idx_1++;
    }

    if (r > 0) {
      vcol = 1;
      st.site = &oe_emlrtRSI;
      b_st.site = &v_emlrtRSI;
      if (r > 2147483646) {
        b_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (unnamed_idx_1 = 0; unnamed_idx_1 + 1 <= r; unnamed_idx_1++) {
        st.site = &pe_emlrtRSI;
        tol = 1.0 / S->data[unnamed_idx_1 + S->size[0] * unnamed_idx_1];
        st.site = &pe_emlrtRSI;
        eml_xscal(A->size[1], tol, V, vcol);
        st.site = &qe_emlrtRSI;
        vcol += A->size[1];
      }

      st.site = &re_emlrtRSI;
      c_eml_xgemm(A->size[1], A->size[0], r, V, A->size[1], U, A->size[0], X,
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
  boolean_T b5;
  boolean_T b6;
  int32_T nrt;
  int32_T q;
  int32_T pmq;
  int32_T iter;
  real_T test0;
  boolean_T overflow;
  int32_T mm;
  int32_T m;
  boolean_T b_nct;
  boolean_T b7;
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
  boolean_T b8;
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
  emxInit_real_T(sp, &b_A, 2, &gb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &e, 1, &kb_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &work, 1, &lb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Vf, 2, &mb_emlrtRTEI, TRUE);
  st.site = &xe_emlrtRSI;
  b_st.site = &ye_emlrtRSI;
  nct = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)b_A, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  kase = A->size[0] * A->size[1];
  for (nct = 0; nct < kase; nct++) {
    b_A->data[nct] = A->data[nct];
  }

  b_emxInit_real_T(&b_st, &s, 1, &jb_emlrtRTEI, TRUE);
  c_st.site = &af_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  c_st.site = &bf_emlrtRSI;
  minnp = muIntScalarMin_sint32(A->size[0], A->size[1]);
  kase = muIntScalarMin_sint32(A->size[0] + 1, A->size[1]);
  nct = s->size[0];
  s->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)s, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    s->data[nct] = 0.0;
  }

  kase = A->size[1];
  nct = e->size[0];
  e->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)e, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    e->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = work->size[0];
  work->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)work, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    work->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = U->size[0] * U->size[1];
  U->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  nct = U->size[0] * U->size[1];
  U->size[1] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  kase *= minnp;
  for (nct = 0; nct < kase; nct++) {
    U->data[nct] = 0.0;
  }

  kase = A->size[1];
  qs = A->size[1];
  nct = Vf->size[0] * Vf->size[1];
  Vf->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)Vf, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  nct = Vf->size[0] * Vf->size[1];
  Vf->size[1] = qs;
  emxEnsureCapacity(&b_st, (emxArray__common *)Vf, nct, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  kase *= qs;
  for (nct = 0; nct < kase; nct++) {
    Vf->data[nct] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    c_st.site = &cf_emlrtRSI;
    qs = muIntScalarMin_sint32(A->size[0], minnp);
    c_st.site = &cf_emlrtRSI;
    if (1 > qs) {
      b5 = FALSE;
    } else {
      b5 = (qs > 2147483646);
    }

    if (b5) {
      d_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      U->data[kase + U->size[0] * kase] = 1.0;
    }

    c_st.site = &df_emlrtRSI;
    qs = muIntScalarMin_sint32(A->size[1], A->size[1]);
    c_st.site = &df_emlrtRSI;
    if (1 > qs) {
      b6 = FALSE;
    } else {
      b6 = (qs > 2147483646);
    }

    if (b6) {
      d_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      Vf->data[kase + Vf->size[0] * kase] = 1.0;
    }
  } else {
    c_st.site = &ef_emlrtRSI;
    if (A->size[1] < 2) {
      kase = 2;
    } else {
      kase = A->size[1];
    }

    c_st.site = &ef_emlrtRSI;
    c_st.site = &ef_emlrtRSI;
    nrt = muIntScalarMin_sint32(kase - 2, A->size[0]);
    c_st.site = &ff_emlrtRSI;
    kase = A->size[0];
    c_st.site = &ff_emlrtRSI;
    c_st.site = &ff_emlrtRSI;
    nct = muIntScalarMin_sint32(kase - 1, A->size[1]);
    c_st.site = &gf_emlrtRSI;
    c_st.site = &hf_emlrtRSI;
    c_st.site = &if_emlrtRSI;
    qs = muIntScalarMax_sint32(nct, nrt);
    c_st.site = &if_emlrtRSI;
    for (q = 0; q + 1 <= qs; q++) {
      c_st.site = &jf_emlrtRSI;
      c_st.site = &kf_emlrtRSI;
      c_st.site = &lf_emlrtRSI;
      c_st.site = &lf_emlrtRSI;
      pmq = q + A->size[0] * q;
      c_st.site = &mf_emlrtRSI;
      iter = A->size[0] - q;
      c_st.site = &nf_emlrtRSI;
      if (q + 1 <= nct) {
        c_st.site = &of_emlrtRSI;
        test0 = eml_xnrm2(iter, b_A, pmq + 1);
        if (test0 > 0.0) {
          c_st.site = &pf_emlrtRSI;
          if (b_A->data[pmq] < 0.0) {
            test0 = -test0;
          }

          s->data[q] = test0;
          c_st.site = &qf_emlrtRSI;
          test0 = eml_div(1.0, s->data[q]);
          c_st.site = &qf_emlrtRSI;
          eml_xscal(iter, test0, b_A, pmq + 1);
          b_A->data[pmq]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }

      c_st.site = &rf_emlrtRSI;
      if (q + 2 > A->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (A->size[1] > 2147483646);
      }

      if (overflow) {
        d_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
        c_st.site = &sf_emlrtRSI;
        c_st.site = &sf_emlrtRSI;
        c_st.site = &sf_emlrtRSI;
        kase = q + A->size[0] * mm;
        if ((q + 1 <= nct) && (s->data[q] != 0.0)) {
          c_st.site = &tf_emlrtRSI;
          test0 = eml_xdotc(iter, b_A, pmq + 1, b_A, kase + 1);
          c_st.site = &uf_emlrtRSI;
          test0 = -eml_div(test0, b_A->data[q + b_A->size[0] * q]);
          c_st.site = &vf_emlrtRSI;
          eml_xaxpy(iter, test0, pmq + 1, b_A, kase + 1);
        }

        e->data[mm] = b_A->data[kase];
      }

      if (q + 1 <= nct) {
        c_st.site = &wf_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = b_A->data[kase + b_A->size[0] * q];
        }
      }

      if (q + 1 <= nrt) {
        c_st.site = &xf_emlrtRSI;
        pmq = (A->size[1] - q) - 1;
        c_st.site = &yf_emlrtRSI;
        test0 = b_eml_xnrm2(pmq, e, q + 2);
        if (test0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          c_st.site = &ag_emlrtRSI;
          if (e->data[q + 1] < 0.0) {
            test0 = -test0;
          }

          e->data[q] = test0;
          c_st.site = &bg_emlrtRSI;
          test0 = eml_div(1.0, e->data[q]);
          c_st.site = &bg_emlrtRSI;
          b_eml_xscal(pmq, test0, e, q + 2);
          e->data[q + 1]++;
        }

        e->data[q] = -e->data[q];
        if ((q + 2 <= A->size[0]) && (e->data[q] != 0.0)) {
          c_st.site = &cg_emlrtRSI;
          if (q + 2 > A->size[0]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[0] > 2147483646);
          }

          if (overflow) {
            d_st.site = &w_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (kase = q + 1; kase + 1 <= A->size[0]; kase++) {
            work->data[kase] = 0.0;
          }

          c_st.site = &dg_emlrtRSI;
          if (q + 2 > A->size[1]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[1] > 2147483646);
          }

          if (overflow) {
            d_st.site = &w_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            c_st.site = &eg_emlrtRSI;
            c_st.site = &eg_emlrtRSI;
            c_st.site = &eg_emlrtRSI;
            c_st.site = &fg_emlrtRSI;
            b_eml_xaxpy(iter - 1, e->data[mm], b_A, (q + A->size[0] * mm) + 2,
                        work, q + 2);
          }

          c_st.site = &gg_emlrtRSI;
          if (q + 2 > A->size[1]) {
            overflow = FALSE;
          } else {
            overflow = (A->size[1] > 2147483646);
          }

          if (overflow) {
            d_st.site = &w_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            c_st.site = &hg_emlrtRSI;
            test0 = eml_div(-e->data[mm], e->data[q + 1]);
            c_st.site = &ig_emlrtRSI;
            c_st.site = &ig_emlrtRSI;
            c_st.site = &ig_emlrtRSI;
            c_st.site = &jg_emlrtRSI;
            c_eml_xaxpy(iter - 1, test0, work, q + 2, b_A, (q + A->size[0] * mm)
                        + 2);
          }
        }

        c_st.site = &kg_emlrtRSI;
        if (q + 2 > A->size[1]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q + 1; kase + 1 <= A->size[1]; kase++) {
          Vf->data[kase + Vf->size[0] * q] = e->data[kase];
        }
      }
    }

    c_st.site = &lg_emlrtRSI;
    c_st.site = &lg_emlrtRSI;
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
      c_st.site = &mg_emlrtRSI;
      if (nct + 1 > minnp) {
        b_nct = FALSE;
      } else {
        b_nct = (minnp > 2147483646);
      }

      if (b_nct) {
        d_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = nct; mm + 1 <= minnp; mm++) {
        c_st.site = &ng_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = 1; kase <= A->size[0]; kase++) {
          U->data[(kase + U->size[0] * mm) - 1] = 0.0;
        }

        U->data[mm + U->size[0] * mm] = 1.0;
      }
    }

    for (q = nct - 1; q + 1 > 0; q--) {
      c_st.site = &og_emlrtRSI;
      c_st.site = &pg_emlrtRSI;
      iter = A->size[0] - q;
      c_st.site = &qg_emlrtRSI;
      c_st.site = &rg_emlrtRSI;
      c_st.site = &rg_emlrtRSI;
      c_st.site = &rg_emlrtRSI;
      pmq = q + A->size[0] * q;
      if (s->data[q] != 0.0) {
        c_st.site = &sg_emlrtRSI;
        for (mm = q + 1; mm + 1 <= minnp; mm++) {
          c_st.site = &tg_emlrtRSI;
          c_st.site = &tg_emlrtRSI;
          c_st.site = &tg_emlrtRSI;
          kase = (q + A->size[0] * mm) + 1;
          c_st.site = &ug_emlrtRSI;
          test0 = eml_xdotc(iter, U, pmq + 1, U, kase);
          c_st.site = &vg_emlrtRSI;
          test0 = -eml_div(test0, U->data[pmq]);
          c_st.site = &wg_emlrtRSI;
          eml_xaxpy(iter, test0, pmq + 1, U, kase);
        }

        c_st.site = &xg_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = -U->data[kase + U->size[0] * q];
        }

        U->data[pmq]++;
        c_st.site = &yg_emlrtRSI;
        c_st.site = &yg_emlrtRSI;
        for (kase = 1; kase <= q; kase++) {
          U->data[(kase + U->size[0] * q) - 1] = 0.0;
        }
      } else {
        c_st.site = &ah_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &w_emlrtRSI;
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
        c_st.site = &bh_emlrtRSI;
        c_st.site = &ch_emlrtRSI;
        pmq = (A->size[1] - q) - 1;
        c_st.site = &dh_emlrtRSI;
        c_st.site = &dh_emlrtRSI;
        c_st.site = &dh_emlrtRSI;
        kase = (q + A->size[1] * q) + 2;
        c_st.site = &eh_emlrtRSI;
        if (q + 2 > A->size[1]) {
          overflow = FALSE;
        } else {
          overflow = (A->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (mm = q; mm + 2 <= A->size[1]; mm++) {
          c_st.site = &fh_emlrtRSI;
          c_st.site = &fh_emlrtRSI;
          c_st.site = &fh_emlrtRSI;
          qs = (q + A->size[1] * (mm + 1)) + 2;
          c_st.site = &gh_emlrtRSI;
          test0 = eml_xdotc(pmq, Vf, kase, Vf, qs);
          c_st.site = &hh_emlrtRSI;
          test0 = -eml_div(test0, Vf->data[kase - 1]);
          c_st.site = &ih_emlrtRSI;
          eml_xaxpy(pmq, test0, kase, Vf, qs);
        }
      }

      c_st.site = &jh_emlrtRSI;
      overflow = (A->size[1] > 2147483646);
      if (overflow) {
        d_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (kase = 1; kase <= A->size[1]; kase++) {
        Vf->data[(kase + Vf->size[0] * q) - 1] = 0.0;
      }

      Vf->data[q + Vf->size[0] * q] = 1.0;
    }

    c_st.site = &kh_emlrtRSI;
    if (1 > m) {
      b7 = FALSE;
    } else {
      b7 = (m > 2147483646);
    }

    if (b7) {
      d_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (q = 0; q + 1 <= m; q++) {
      if (s->data[q] != 0.0) {
        c_st.site = &lh_emlrtRSI;
        ztest0 = b_abs(s->data[q]);
        c_st.site = &mh_emlrtRSI;
        test0 = eml_div(s->data[q], ztest0);
        s->data[q] = ztest0;
        if (q + 1 < m) {
          c_st.site = &nh_emlrtRSI;
          e->data[q] = eml_div(e->data[q], test0);
        }

        if (q + 1 <= A->size[0]) {
          c_st.site = &oh_emlrtRSI;
          c_st.site = &oh_emlrtRSI;
          c_st.site = &oh_emlrtRSI;
          nct = A->size[0] * q + 1;
          c_st.site = &ph_emlrtRSI;
          eml_xscal(A->size[0], test0, U, nct);
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        c_st.site = &qh_emlrtRSI;
        ztest0 = b_abs(e->data[q]);
        c_st.site = &rh_emlrtRSI;
        test0 = eml_div(ztest0, e->data[q]);
        e->data[q] = ztest0;
        c_st.site = &sh_emlrtRSI;
        c_st.site = &sh_emlrtRSI;
        c_st.site = &sh_emlrtRSI;
        s->data[q + 1] *= test0;
        c_st.site = &th_emlrtRSI;
        c_st.site = &th_emlrtRSI;
        nct = A->size[1] * (q + 1) + 1;
        c_st.site = &uh_emlrtRSI;
        eml_xscal(A->size[1], test0, Vf, nct);
      }
    }

    mm = m;
    iter = 0;
    c_st.site = &vh_emlrtRSI;
    tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
    snorm = 0.0;
    c_st.site = &wh_emlrtRSI;
    for (kase = 0; kase + 1 <= m; kase++) {
      c_st.site = &xh_emlrtRSI;
      test0 = b_abs(s->data[kase]);
      c_st.site = &xh_emlrtRSI;
      ztest0 = b_abs(e->data[kase]);
      c_st.site = &xh_emlrtRSI;
      c_st.site = &xh_emlrtRSI;
      snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(test0, ztest0));
    }

    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (m > 0)) {
      if (iter >= 75) {
        c_st.site = &yh_emlrtRSI;
        b_eml_error(&c_st);
        exitg1 = TRUE;
      } else {
        c_st.site = &ai_emlrtRSI;
        c_st.site = &bi_emlrtRSI;
        q = m - 1;
        guard1 = FALSE;
        exitg4 = FALSE;
        while (!((exitg4 == TRUE) || (q == 0))) {
          c_st.site = &ci_emlrtRSI;
          c_st.site = &ci_emlrtRSI;
          test0 = b_abs(s->data[q - 1]) + b_abs(s->data[q]);
          c_st.site = &di_emlrtRSI;
          ztest0 = b_abs(e->data[q - 1]);
          c_st.site = &ei_emlrtRSI;
          if ((ztest0 <= 2.2204460492503131E-16 * test0) || (ztest0 <= tiny)) {
            guard1 = TRUE;
            exitg4 = TRUE;
          } else {
            b_guard1 = FALSE;
            if (iter > 20) {
              c_st.site = &fi_emlrtRSI;
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

        c_st.site = &gi_emlrtRSI;
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
                c_st.site = &hi_emlrtRSI;
                test0 = b_abs(e->data[kase - 1]);
              }

              c_st.site = &ii_emlrtRSI;
              if (kase > q + 1) {
                c_st.site = &ji_emlrtRSI;
                c_st.site = &ji_emlrtRSI;
                test0 += b_abs(e->data[kase - 2]);
              }

              c_st.site = &ki_emlrtRSI;
              ztest0 = b_abs(s->data[kase - 1]);
              c_st.site = &li_emlrtRSI;
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

        c_st.site = &mi_emlrtRSI;
        switch (kase) {
         case 1:
          c_st.site = &hk_emlrtRSI;
          ztest0 = e->data[m - 2];
          c_st.site = &ik_emlrtRSI;
          e->data[m - 2] = 0.0;
          c_st.site = &jk_emlrtRSI;
          for (kase = m - 2; kase + 1 >= q + 1; kase--) {
            test0 = s->data[kase];
            c_st.site = &kk_emlrtRSI;
            eml_xrotg(&test0, &ztest0, &sm, &eqds);
            s->data[kase] = test0;
            if (kase + 1 > q + 1) {
              c_st.site = &lk_emlrtRSI;
              c_st.site = &mk_emlrtRSI;
              ztest0 = -eqds * e->data[kase - 1];
              c_st.site = &nk_emlrtRSI;
              e->data[kase - 1] *= sm;
            }

            c_st.site = &ok_emlrtRSI;
            c_st.site = &ok_emlrtRSI;
            c_st.site = &ok_emlrtRSI;
            c_st.site = &pk_emlrtRSI;
            c_st.site = &pk_emlrtRSI;
            c_st.site = &pk_emlrtRSI;
            nct = A->size[1] * kase + 1;
            pmq = A->size[1] * (m - 1) + 1;
            c_st.site = &qk_emlrtRSI;
            eml_xrot(A->size[1], Vf, nct, pmq, sm, eqds);
          }
          break;

         case 2:
          c_st.site = &yj_emlrtRSI;
          ztest0 = e->data[q - 1];
          e->data[q - 1] = 0.0;
          c_st.site = &ak_emlrtRSI;
          for (kase = q; kase + 1 <= m; kase++) {
            c_st.site = &bk_emlrtRSI;
            eml_xrotg(&s->data[kase], &ztest0, &sm, &eqds);
            c_st.site = &ck_emlrtRSI;
            ztest0 = -eqds * e->data[kase];
            c_st.site = &dk_emlrtRSI;
            e->data[kase] *= sm;
            c_st.site = &ek_emlrtRSI;
            c_st.site = &ek_emlrtRSI;
            c_st.site = &ek_emlrtRSI;
            c_st.site = &fk_emlrtRSI;
            c_st.site = &fk_emlrtRSI;
            c_st.site = &fk_emlrtRSI;
            nct = A->size[0] * kase + 1;
            pmq = A->size[0] * (q - 1) + 1;
            c_st.site = &gk_emlrtRSI;
            eml_xrot(A->size[0], U, nct, pmq, sm, eqds);
          }
          break;

         case 3:
          c_st.site = &ni_emlrtRSI;
          c_st.site = &oi_emlrtRSI;
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

          c_st.site = &ri_emlrtRSI;
          sm = eml_div(s->data[m - 1], b);
          c_st.site = &si_emlrtRSI;
          test0 = eml_div(s->data[m - 2], b);
          c_st.site = &ti_emlrtRSI;
          ztest0 = eml_div(e->data[m - 2], b);
          c_st.site = &ui_emlrtRSI;
          sqds = eml_div(s->data[q], b);
          c_st.site = &vi_emlrtRSI;
          eqds = eml_div(e->data[q], b);
          c_st.site = &wi_emlrtRSI;
          c_st.site = &wi_emlrtRSI;
          c_st.site = &wi_emlrtRSI;
          b = eml_div((test0 + sm) * (test0 - sm) + ztest0 * ztest0, 2.0);
          c_st.site = &xi_emlrtRSI;
          test0 = sm * ztest0;
          c_st.site = &yi_emlrtRSI;
          test0 *= test0;
          ztest0 = 0.0;
          if ((b != 0.0) || (test0 != 0.0)) {
            c_st.site = &aj_emlrtRSI;
            ztest0 = b * b + test0;
            c_st.site = &aj_emlrtRSI;
            b_sqrt(&c_st, &ztest0);
            if (b < 0.0) {
              ztest0 = -ztest0;
            }

            c_st.site = &bj_emlrtRSI;
            ztest0 = eml_div(test0, b + ztest0);
          }

          c_st.site = &cj_emlrtRSI;
          ztest0 += (sqds + sm) * (sqds - sm);
          c_st.site = &dj_emlrtRSI;
          test0 = sqds * eqds;
          c_st.site = &ej_emlrtRSI;
          for (kase = q + 1; kase < m; kase++) {
            c_st.site = &fj_emlrtRSI;
            c_st.site = &gj_emlrtRSI;
            c_st.site = &hj_emlrtRSI;
            eml_xrotg(&ztest0, &test0, &sm, &eqds);
            if (kase > q + 1) {
              e->data[kase - 2] = ztest0;
            }

            c_st.site = &ij_emlrtRSI;
            test0 = sm * s->data[kase - 1];
            c_st.site = &ij_emlrtRSI;
            ztest0 = eqds * e->data[kase - 1];
            c_st.site = &jj_emlrtRSI;
            c_st.site = &jj_emlrtRSI;
            e->data[kase - 1] = sm * e->data[kase - 1] - eqds * s->data[kase - 1];
            c_st.site = &kj_emlrtRSI;
            b = s->data[kase];
            c_st.site = &lj_emlrtRSI;
            s->data[kase] *= sm;
            c_st.site = &mj_emlrtRSI;
            c_st.site = &mj_emlrtRSI;
            c_st.site = &mj_emlrtRSI;
            c_st.site = &nj_emlrtRSI;
            c_st.site = &nj_emlrtRSI;
            nct = A->size[1] * (kase - 1) + 1;
            pmq = A->size[1] * kase + 1;
            c_st.site = &oj_emlrtRSI;
            eml_xrot(A->size[1], Vf, nct, pmq, sm, eqds);
            s->data[kase - 1] = test0 + ztest0;
            test0 = eqds * b;
            c_st.site = &pj_emlrtRSI;
            eml_xrotg(&s->data[kase - 1], &test0, &sm, &eqds);
            c_st.site = &qj_emlrtRSI;
            c_st.site = &qj_emlrtRSI;
            ztest0 = sm * e->data[kase - 1] + eqds * s->data[kase];
            c_st.site = &rj_emlrtRSI;
            c_st.site = &rj_emlrtRSI;
            s->data[kase] = -eqds * e->data[kase - 1] + sm * s->data[kase];
            c_st.site = &sj_emlrtRSI;
            test0 = eqds * e->data[kase];
            c_st.site = &tj_emlrtRSI;
            e->data[kase] *= sm;
            if (kase < A->size[0]) {
              c_st.site = &uj_emlrtRSI;
              c_st.site = &uj_emlrtRSI;
              c_st.site = &uj_emlrtRSI;
              c_st.site = &vj_emlrtRSI;
              c_st.site = &vj_emlrtRSI;
              nct = A->size[0] * (kase - 1) + 1;
              pmq = A->size[0] * kase + 1;
              c_st.site = &wj_emlrtRSI;
              eml_xrot(A->size[0], U, nct, pmq, sm, eqds);
            }
          }

          c_st.site = &xj_emlrtRSI;
          e->data[m - 2] = ztest0;
          iter++;
          break;

         default:
          if (s->data[q] < 0.0) {
            s->data[q] = -s->data[q];
            c_st.site = &rk_emlrtRSI;
            c_st.site = &rk_emlrtRSI;
            c_st.site = &rk_emlrtRSI;
            nct = A->size[1] * q + 1;
            c_st.site = &sk_emlrtRSI;
            eml_xscal(A->size[1], -1.0, Vf, nct);
          }

          c_st.site = &tk_emlrtRSI;
          qs = q + 1;
          while ((q + 1 < mm) && (s->data[q] < s->data[qs])) {
            ztest0 = s->data[q];
            s->data[q] = s->data[qs];
            s->data[qs] = ztest0;
            if (q + 1 < A->size[1]) {
              c_st.site = &uk_emlrtRSI;
              c_st.site = &uk_emlrtRSI;
              c_st.site = &uk_emlrtRSI;
              c_st.site = &vk_emlrtRSI;
              c_st.site = &vk_emlrtRSI;
              nct = A->size[1] * q + 1;
              pmq = A->size[1] * (q + 1) + 1;
              c_st.site = &wk_emlrtRSI;
              eml_xswap(&c_st, A->size[1], Vf, nct, pmq);
            }

            if (q + 1 < A->size[0]) {
              c_st.site = &xk_emlrtRSI;
              c_st.site = &xk_emlrtRSI;
              c_st.site = &xk_emlrtRSI;
              c_st.site = &yk_emlrtRSI;
              c_st.site = &yk_emlrtRSI;
              nct = A->size[0] * q + 1;
              pmq = A->size[0] * (q + 1) + 1;
              c_st.site = &al_emlrtRSI;
              eml_xswap(&c_st, A->size[0], U, nct, pmq);
            }

            q = qs;
            c_st.site = &bl_emlrtRSI;
            qs++;
          }

          iter = 0;
          c_st.site = &cl_emlrtRSI;
          m--;
          break;
        }
      }
    }
  }

  nct = S->size[0];
  S->size[0] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)S, nct, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  c_st.site = &dl_emlrtRSI;
  if (1 > minnp) {
    b8 = FALSE;
  } else {
    b8 = (minnp > 2147483646);
  }

  if (b8) {
    d_st.site = &w_emlrtRSI;
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
                    &ib_emlrtRTEI);
  c_st.site = &el_emlrtRSI;
  for (kase = 0; kase + 1 <= minnp; kase++) {
    c_st.site = &fl_emlrtRSI;
    if (1 > A->size[1]) {
      overflow = FALSE;
    } else {
      overflow = (A->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &w_emlrtRSI;
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
  boolean_T b9;
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
  st.site = &jo_emlrtRSI;
  b_st.site = &ko_emlrtRSI;
  ix = ix0 - 1;
  iy = iy0 - 1;
  c_st.site = &lo_emlrtRSI;
  if (1 > n) {
    b9 = FALSE;
  } else {
    b9 = (n > 2147483646);
  }

  if (b9) {
    d_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= n; k++) {
    temp = x->data[ix];
    x->data[ix] = x->data[iy];
    x->data[iy] = temp;
    c_st.site = &mo_emlrtRSI;
    ix++;
    c_st.site = &no_emlrtRSI;
    iy++;
  }
}

void pinv(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T i8;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i9;
  emxArray_real_T *r14;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (A->size[0] < A->size[1]) {
    emxInit_real_T(sp, &b_A, 2, &db_emlrtRTEI, TRUE);
    i8 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[1];
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i8, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = A->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      b_loop_ub = A->size[1];
      for (i9 = 0; i9 < b_loop_ub; i9++) {
        b_A->data[i9 + b_A->size[0] * i8] = A->data[i8 + A->size[0] * i9];
      }
    }

    emxInit_real_T(sp, &r14, 2, &db_emlrtRTEI, TRUE);
    st.site = &ie_emlrtRSI;
    eml_pinv(&st, b_A, r14);
    i8 = X->size[0] * X->size[1];
    X->size[0] = r14->size[1];
    X->size[1] = r14->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)X, i8, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = r14->size[0];
    emxFree_real_T(&b_A);
    for (i8 = 0; i8 < loop_ub; i8++) {
      b_loop_ub = r14->size[1];
      for (i9 = 0; i9 < b_loop_ub; i9++) {
        X->data[i9 + X->size[0] * i8] = r14->data[i8 + r14->size[0] * i9];
      }
    }

    emxFree_real_T(&r14);
  } else {
    st.site = &je_emlrtRSI;
    eml_pinv(&st, A, X);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (pinv.c) */
