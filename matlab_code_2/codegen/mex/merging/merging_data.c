/*
 * merging_data.c
 *
 * Code generation for function 'merging_data'
 *
 * C source code generated on: Thu Jun 30 18:28:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "merging_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo pb_emlrtRSI = { 9, "eml_int_forloop_overflow_check",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo qb_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo yb_emlrtRSI = { 98, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo ac_emlrtRSI = { 86, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo cc_emlrtRSI = { 227, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo dc_emlrtRSI = { 239, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo ec_emlrtRSI = { 117, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo hc_emlrtRSI = { 233, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo ic_emlrtRSI = { 20, "eml_index_prod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_index_prod.m" };

emlrtRSInfo jc_emlrtRSI = { 19, "abs",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRSInfo mc_emlrtRSI = { 8, "isequal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/isequal.m" };

emlrtRSInfo nc_emlrtRSI = { 30, "eml_isequal_core",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo oc_emlrtRSI = { 56, "eml_isequal_core",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo pc_emlrtRSI = { 73, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo qc_emlrtRSI = { 83, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo rc_emlrtRSI = { 84, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo sc_emlrtRSI = { 89, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo tc_emlrtRSI = { 90, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo uc_emlrtRSI = { 93, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo wc_emlrtRSI = { 15, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo xc_emlrtRSI = { 12, "eml_div",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo yc_emlrtRSI = { 12, "ceil",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/ceil.m" };

emlrtRSInfo td_emlrtRSI = { 16, "min",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/min.m" };

emlrtRSInfo ud_emlrtRSI = { 18, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo wd_emlrtRSI = { 225, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo xd_emlrtRSI = { 221, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo yd_emlrtRSI = { 200, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ae_emlrtRSI = { 194, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo be_emlrtRSI = { 190, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo he_emlrtRSI = { 74, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo ie_emlrtRSI = { 64, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo je_emlrtRSI = { 54, "eml_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRSInfo ke_emlrtRSI = { 15, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo le_emlrtRSI = { 20, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo me_emlrtRSI = { 32, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo ne_emlrtRSI = { 59, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo oe_emlrtRSI = { 62, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo pe_emlrtRSI = { 63, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo qe_emlrtRSI = { 83, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo re_emlrtRSI = { 85, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo se_emlrtRSI = { 89, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo te_emlrtRSI = { 90, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo ue_emlrtRSI = { 94, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo ve_emlrtRSI = { 96, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo we_emlrtRSI = { 110, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo xe_emlrtRSI = { 111, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo ye_emlrtRSI = { 112, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo af_emlrtRSI = { 113, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo bf_emlrtRSI = { 114, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo cf_emlrtRSI = { 115, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo df_emlrtRSI = { 21, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo ef_emlrtRSI = { 57, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo tf_emlrtRSI = { 12, "isfinite",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/isfinite.m" };

emlrtRSInfo lj_emlrtRSI = { 359, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo mj_emlrtRSI = { 360, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo dm_emlrtRSI = { 124, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo em_emlrtRSI = { 153, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo fm_emlrtRSI = { 23, "eml_relop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_relop.m" };

emlrtRSInfo gm_emlrtRSI = { 225, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo hm_emlrtRSI = { 19, "eml_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

emlrtRSInfo im_emlrtRSI = { 17, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo jm_emlrtRSI = { 18, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo km_emlrtRSI = { 24, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo lm_emlrtRSI = { 20, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo mm_emlrtRSI = { 34, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo nm_emlrtRSI = { 35, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo om_emlrtRSI = { 36, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo pm_emlrtRSI = { 65, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo qm_emlrtRSI = { 66, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo rm_emlrtRSI = { 28, "eml_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m" };

emlrtRSInfo sm_emlrtRSI = { 13, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo tm_emlrtRSI = { 14, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo um_emlrtRSI = { 20, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo vm_emlrtRSI = { 19, "eml_refblas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xscal.m"
};

emlrtRSInfo wm_emlrtRSI = { 17, "eml_refblas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xscal.m"
};

emlrtRSInfo xm_emlrtRSI = { 62, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo ym_emlrtRSI = { 63, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo an_emlrtRSI = { 31, "eml_xdotc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m" };

emlrtRSInfo bn_emlrtRSI = { 28, "eml_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

emlrtRSInfo cn_emlrtRSI = { 18, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo dn_emlrtRSI = { 21, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo en_emlrtRSI = { 28, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo fn_emlrtRSI = { 14, "eml_refblas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m"
};

emlrtRSInfo gn_emlrtRSI = { 41, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo hn_emlrtRSI = { 50, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo in_emlrtRSI = { 55, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo jn_emlrtRSI = { 64, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo kn_emlrtRSI = { 65, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo ln_emlrtRSI = { 66, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo mn_emlrtRSI = { 42, "eml_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m" };

emlrtRSInfo nn_emlrtRSI = { 16, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo on_emlrtRSI = { 19, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo pn_emlrtRSI = { 25, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo qn_emlrtRSI = { 27, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo rn_emlrtRSI = { 28, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo sn_emlrtRSI = { 31, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo tn_emlrtRSI = { 34, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo un_emlrtRSI = { 33, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo vn_emlrtRSI = { 39, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo wn_emlrtRSI = { 40, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo xn_emlrtRSI = { 68, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo yn_emlrtRSI = { 69, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo ao_emlrtRSI = { 70, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo bo_emlrtRSI = { 37, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo co_emlrtRSI = { 36, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo eo_emlrtRSI = { 19, "sqrt",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo fo_emlrtRSI = { 18, "eml_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m" };

emlrtRSInfo go_emlrtRSI = { 10, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo ho_emlrtRSI = { 11, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo io_emlrtRSI = { 13, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo jo_emlrtRSI = { 18, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo ko_emlrtRSI = { 19, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo lo_emlrtRSI = { 31, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo mo_emlrtRSI = { 32, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo no_emlrtRSI = { 33, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo oo_emlrtRSI = { 37, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo po_emlrtRSI = { 38, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo qo_emlrtRSI = { 42, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo ro_emlrtRSI = { 28, "eml_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m" };

emlrtRSInfo so_emlrtRSI = { 16, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo to_emlrtRSI = { 17, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo uo_emlrtRSI = { 24, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo vo_emlrtRSI = { 23, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo wo_emlrtRSI = { 25, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo xo_emlrtRSI = { 26, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo yo_emlrtRSI = { 32, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo ap_emlrtRSI = { 33, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo bp_emlrtRSI = { 68, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo cp_emlrtRSI = { 69, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo dp_emlrtRSI = { 70, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo jp_emlrtRSI = { 58, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo kp_emlrtRSI = { 125, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo lp_emlrtRSI = { 127, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo mp_emlrtRSI = { 128, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo np_emlrtRSI = { 136, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo op_emlrtRSI = { 137, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo pp_emlrtRSI = { 141, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo qp_emlrtRSI = { 50, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo rp_emlrtRSI = { 51, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo eq_emlrtRSI = { 55, "prodsize",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo qr_emlrtRSI = { 77, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

emlrtRSInfo rr_emlrtRSI = { 237, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtMCInfo emlrtMCI = { 65, 1, "find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtMCInfo q_emlrtMCI = { 74, 9, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo r_emlrtMCI = { 73, 19, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo s_emlrtMCI = { 94, 13, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtMCInfo t_emlrtMCI = { 93, 23, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtMCInfo u_emlrtMCI = { 99, 13, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtMCInfo v_emlrtMCI = { 98, 23, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRTEInfo q_emlrtRTEI = { 1, 14, "floor",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/floor.m" };

emlrtRTEInfo s_emlrtRTEI = { 1, 14, "eml_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRTEInfo eb_emlrtRTEI = { 1, 14, "eml_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m" };

emlrtRTEInfo fb_emlrtRTEI = { 1, 14, "eml_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m" };

emlrtRTEInfo gb_emlrtRTEI = { 1, 18, "eml_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m" };

emlrtRTEInfo hb_emlrtRTEI = { 1, 18, "eml_xswap",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m" };

emlrtRSInfo os_emlrtRSI = { 73, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo qs_emlrtRSI = { 93, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo rs_emlrtRSI = { 98, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo at_emlrtRSI = { 74, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo bt_emlrtRSI = { 94, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo ct_emlrtRSI = { 99, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

/* End of code generation (merging_data.c) */
