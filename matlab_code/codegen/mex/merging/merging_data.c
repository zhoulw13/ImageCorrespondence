/*
 * merging_data.c
 *
 * Code generation for function 'merging_data'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "merging_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo tb_emlrtRSI = { 9, "eml_int_forloop_overflow_check",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo ub_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo dc_emlrtRSI = { 98, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo ec_emlrtRSI = { 86, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo gc_emlrtRSI = { 227, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo hc_emlrtRSI = { 239, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo ic_emlrtRSI = { 117, "eml_assert_valid_size_arg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo lc_emlrtRSI = { 233, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo mc_emlrtRSI = { 20, "eml_index_prod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_index_prod.m" };

emlrtRSInfo nc_emlrtRSI = { 19, "abs",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRSInfo qc_emlrtRSI = { 8, "isequal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/isequal.m" };

emlrtRSInfo rc_emlrtRSI = { 30, "eml_isequal_core",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo sc_emlrtRSI = { 56, "eml_isequal_core",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo tc_emlrtRSI = { 73, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo uc_emlrtRSI = { 83, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo vc_emlrtRSI = { 84, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo wc_emlrtRSI = { 89, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo xc_emlrtRSI = { 90, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo yc_emlrtRSI = { 93, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo bd_emlrtRSI = { 15, "rdivide",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo cd_emlrtRSI = { 12, "eml_div",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo dd_emlrtRSI = { 12, "ceil",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/ceil.m" };

emlrtRSInfo xd_emlrtRSI = { 16, "min",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/min.m" };

emlrtRSInfo yd_emlrtRSI = { 18, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo be_emlrtRSI = { 225, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ce_emlrtRSI = { 221, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo de_emlrtRSI = { 200, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ee_emlrtRSI = { 194, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo fe_emlrtRSI = { 190, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo le_emlrtRSI = { 74, "power",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo me_emlrtRSI = { 64, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo ne_emlrtRSI = { 54, "eml_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRSInfo oe_emlrtRSI = { 15, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo pe_emlrtRSI = { 20, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo qe_emlrtRSI = { 32, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo re_emlrtRSI = { 59, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo se_emlrtRSI = { 62, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo te_emlrtRSI = { 63, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo ue_emlrtRSI = { 83, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo ve_emlrtRSI = { 85, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo we_emlrtRSI = { 89, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo xe_emlrtRSI = { 90, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo ye_emlrtRSI = { 94, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo af_emlrtRSI = { 96, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo bf_emlrtRSI = { 110, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo cf_emlrtRSI = { 111, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo df_emlrtRSI = { 112, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo ef_emlrtRSI = { 113, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo ff_emlrtRSI = { 114, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo gf_emlrtRSI = { 115, "eml_blas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

emlrtRSInfo hf_emlrtRSI = { 21, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo if_emlrtRSI = { 57, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo xf_emlrtRSI = { 12, "isfinite",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elmat/isfinite.m" };

emlrtRSInfo pj_emlrtRSI = { 359, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo qj_emlrtRSI = { 360, "eml_matlab_zsvdc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

emlrtRSInfo hm_emlrtRSI = { 124, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo im_emlrtRSI = { 153, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo jm_emlrtRSI = { 23, "eml_relop",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_relop.m" };

emlrtRSInfo km_emlrtRSI = { 225, "indexIntRelop",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo lm_emlrtRSI = { 19, "eml_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

emlrtRSInfo mm_emlrtRSI = { 17, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo nm_emlrtRSI = { 18, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo om_emlrtRSI = { 24, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo pm_emlrtRSI = { 20, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo qm_emlrtRSI = { 34, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo rm_emlrtRSI = { 35, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo sm_emlrtRSI = { 36, "eml_refblas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xnrm2.m"
};

emlrtRSInfo tm_emlrtRSI = { 65, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo um_emlrtRSI = { 66, "eml_blas_xnrm2",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m"
};

emlrtRSInfo vm_emlrtRSI = { 28, "eml_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m" };

emlrtRSInfo wm_emlrtRSI = { 13, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo xm_emlrtRSI = { 14, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo ym_emlrtRSI = { 20, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo an_emlrtRSI = { 19, "eml_refblas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xscal.m"
};

emlrtRSInfo bn_emlrtRSI = { 17, "eml_refblas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xscal.m"
};

emlrtRSInfo cn_emlrtRSI = { 62, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo dn_emlrtRSI = { 63, "eml_blas_xscal",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xscal.m"
};

emlrtRSInfo en_emlrtRSI = { 31, "eml_xdotc",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m" };

emlrtRSInfo fn_emlrtRSI = { 28, "eml_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

emlrtRSInfo gn_emlrtRSI = { 18, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo hn_emlrtRSI = { 21, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo in_emlrtRSI = { 28, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo jn_emlrtRSI = { 14, "eml_refblas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m"
};

emlrtRSInfo kn_emlrtRSI = { 41, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo ln_emlrtRSI = { 50, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo mn_emlrtRSI = { 55, "eml_refblas_xdotx",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

emlrtRSInfo nn_emlrtRSI = { 64, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo on_emlrtRSI = { 65, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo pn_emlrtRSI = { 66, "eml_blas_xdot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

emlrtRSInfo qn_emlrtRSI = { 42, "eml_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m" };

emlrtRSInfo rn_emlrtRSI = { 16, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo sn_emlrtRSI = { 19, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo tn_emlrtRSI = { 25, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo un_emlrtRSI = { 27, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo vn_emlrtRSI = { 28, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo wn_emlrtRSI = { 31, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo xn_emlrtRSI = { 34, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo yn_emlrtRSI = { 33, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo ao_emlrtRSI = { 39, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo bo_emlrtRSI = { 40, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo co_emlrtRSI = { 68, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo do_emlrtRSI = { 69, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo eo_emlrtRSI = { 70, "eml_blas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xaxpy.m"
};

emlrtRSInfo fo_emlrtRSI = { 37, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo go_emlrtRSI = { 36, "eml_refblas_xaxpy",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xaxpy.m"
};

emlrtRSInfo io_emlrtRSI = { 19, "sqrt",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo jo_emlrtRSI = { 18, "eml_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m" };

emlrtRSInfo ko_emlrtRSI = { 10, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo lo_emlrtRSI = { 11, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo mo_emlrtRSI = { 13, "eml_blas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrotg.m"
};

emlrtRSInfo no_emlrtRSI = { 18, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo oo_emlrtRSI = { 19, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo po_emlrtRSI = { 31, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo qo_emlrtRSI = { 32, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo ro_emlrtRSI = { 33, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo so_emlrtRSI = { 37, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo to_emlrtRSI = { 38, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo uo_emlrtRSI = { 42, "eml_refblas_xrotg",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrotg.m"
};

emlrtRSInfo vo_emlrtRSI = { 28, "eml_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m" };

emlrtRSInfo wo_emlrtRSI = { 16, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo xo_emlrtRSI = { 17, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo yo_emlrtRSI = { 24, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo ap_emlrtRSI = { 23, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo bp_emlrtRSI = { 25, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo cp_emlrtRSI = { 26, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo dp_emlrtRSI = { 32, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo ep_emlrtRSI = { 33, "eml_refblas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xrot.m"
};

emlrtRSInfo fp_emlrtRSI = { 68, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo gp_emlrtRSI = { 69, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo hp_emlrtRSI = { 70, "eml_blas_xrot",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xrot.m"
};

emlrtRSInfo np_emlrtRSI = { 58, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo op_emlrtRSI = { 125, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo pp_emlrtRSI = { 127, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo qp_emlrtRSI = { 128, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo rp_emlrtRSI = { 136, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo sp_emlrtRSI = { 137, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo tp_emlrtRSI = { 141, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo up_emlrtRSI = { 50, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo vp_emlrtRSI = { 51, "eml_refblas_xgemm",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m"
};

emlrtRSInfo iq_emlrtRSI = { 55, "prodsize",
  "D:/Program Files/MATLAB/R2013b/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo or_emlrtRSI = { 77, "eml_null_assignment",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_null_assignment.m"
};

emlrtRSInfo pr_emlrtRSI = { 237, "indexIntRelop",
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

emlrtRSInfo ms_emlrtRSI = { 73, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo os_emlrtRSI = { 93, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo ps_emlrtRSI = { 98, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo xs_emlrtRSI = { 74, "eml_min_or_max",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ys_emlrtRSI = { 94, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

emlrtRSInfo at_emlrtRSI = { 99, "mtimes",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/ops/mtimes.m" };

/* End of code generation (merging_data.c) */
