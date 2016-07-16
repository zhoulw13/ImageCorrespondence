/*
 * merging_data.h
 *
 * Code generation for function 'merging_data'
 *
 * C source code generated on: Thu Jun 30 18:28:10 2016
 *
 */

#ifndef __MERGING_DATA_H__
#define __MERGING_DATA_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "merging_types.h"

/* Variable Declarations */
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtRSInfo pb_emlrtRSI;
extern emlrtRSInfo qb_emlrtRSI;
extern emlrtRSInfo yb_emlrtRSI;
extern emlrtRSInfo ac_emlrtRSI;
extern emlrtRSInfo cc_emlrtRSI;
extern emlrtRSInfo dc_emlrtRSI;
extern emlrtRSInfo ec_emlrtRSI;
extern emlrtRSInfo hc_emlrtRSI;
extern emlrtRSInfo ic_emlrtRSI;
extern emlrtRSInfo jc_emlrtRSI;
extern emlrtRSInfo mc_emlrtRSI;
extern emlrtRSInfo nc_emlrtRSI;
extern emlrtRSInfo oc_emlrtRSI;
extern emlrtRSInfo pc_emlrtRSI;
extern emlrtRSInfo qc_emlrtRSI;
extern emlrtRSInfo rc_emlrtRSI;
extern emlrtRSInfo sc_emlrtRSI;
extern emlrtRSInfo tc_emlrtRSI;
extern emlrtRSInfo uc_emlrtRSI;
extern emlrtRSInfo wc_emlrtRSI;
extern emlrtRSInfo xc_emlrtRSI;
extern emlrtRSInfo yc_emlrtRSI;
extern emlrtRSInfo td_emlrtRSI;
extern emlrtRSInfo ud_emlrtRSI;
extern emlrtRSInfo wd_emlrtRSI;
extern emlrtRSInfo xd_emlrtRSI;
extern emlrtRSInfo yd_emlrtRSI;
extern emlrtRSInfo ae_emlrtRSI;
extern emlrtRSInfo be_emlrtRSI;
extern emlrtRSInfo he_emlrtRSI;
extern emlrtRSInfo ie_emlrtRSI;
extern emlrtRSInfo je_emlrtRSI;
extern emlrtRSInfo ke_emlrtRSI;
extern emlrtRSInfo le_emlrtRSI;
extern emlrtRSInfo me_emlrtRSI;
extern emlrtRSInfo ne_emlrtRSI;
extern emlrtRSInfo oe_emlrtRSI;
extern emlrtRSInfo pe_emlrtRSI;
extern emlrtRSInfo qe_emlrtRSI;
extern emlrtRSInfo re_emlrtRSI;
extern emlrtRSInfo se_emlrtRSI;
extern emlrtRSInfo te_emlrtRSI;
extern emlrtRSInfo ue_emlrtRSI;
extern emlrtRSInfo ve_emlrtRSI;
extern emlrtRSInfo we_emlrtRSI;
extern emlrtRSInfo xe_emlrtRSI;
extern emlrtRSInfo ye_emlrtRSI;
extern emlrtRSInfo af_emlrtRSI;
extern emlrtRSInfo bf_emlrtRSI;
extern emlrtRSInfo cf_emlrtRSI;
extern emlrtRSInfo df_emlrtRSI;
extern emlrtRSInfo ef_emlrtRSI;
extern emlrtRSInfo tf_emlrtRSI;
extern emlrtRSInfo lj_emlrtRSI;
extern emlrtRSInfo mj_emlrtRSI;
extern emlrtRSInfo dm_emlrtRSI;
extern emlrtRSInfo em_emlrtRSI;
extern emlrtRSInfo fm_emlrtRSI;
extern emlrtRSInfo gm_emlrtRSI;
extern emlrtRSInfo hm_emlrtRSI;
extern emlrtRSInfo im_emlrtRSI;
extern emlrtRSInfo jm_emlrtRSI;
extern emlrtRSInfo km_emlrtRSI;
extern emlrtRSInfo lm_emlrtRSI;
extern emlrtRSInfo mm_emlrtRSI;
extern emlrtRSInfo nm_emlrtRSI;
extern emlrtRSInfo om_emlrtRSI;
extern emlrtRSInfo pm_emlrtRSI;
extern emlrtRSInfo qm_emlrtRSI;
extern emlrtRSInfo rm_emlrtRSI;
extern emlrtRSInfo sm_emlrtRSI;
extern emlrtRSInfo tm_emlrtRSI;
extern emlrtRSInfo um_emlrtRSI;
extern emlrtRSInfo vm_emlrtRSI;
extern emlrtRSInfo wm_emlrtRSI;
extern emlrtRSInfo xm_emlrtRSI;
extern emlrtRSInfo ym_emlrtRSI;
extern emlrtRSInfo an_emlrtRSI;
extern emlrtRSInfo bn_emlrtRSI;
extern emlrtRSInfo cn_emlrtRSI;
extern emlrtRSInfo dn_emlrtRSI;
extern emlrtRSInfo en_emlrtRSI;
extern emlrtRSInfo fn_emlrtRSI;
extern emlrtRSInfo gn_emlrtRSI;
extern emlrtRSInfo hn_emlrtRSI;
extern emlrtRSInfo in_emlrtRSI;
extern emlrtRSInfo jn_emlrtRSI;
extern emlrtRSInfo kn_emlrtRSI;
extern emlrtRSInfo ln_emlrtRSI;
extern emlrtRSInfo mn_emlrtRSI;
extern emlrtRSInfo nn_emlrtRSI;
extern emlrtRSInfo on_emlrtRSI;
extern emlrtRSInfo pn_emlrtRSI;
extern emlrtRSInfo qn_emlrtRSI;
extern emlrtRSInfo rn_emlrtRSI;
extern emlrtRSInfo sn_emlrtRSI;
extern emlrtRSInfo tn_emlrtRSI;
extern emlrtRSInfo un_emlrtRSI;
extern emlrtRSInfo vn_emlrtRSI;
extern emlrtRSInfo wn_emlrtRSI;
extern emlrtRSInfo xn_emlrtRSI;
extern emlrtRSInfo yn_emlrtRSI;
extern emlrtRSInfo ao_emlrtRSI;
extern emlrtRSInfo bo_emlrtRSI;
extern emlrtRSInfo co_emlrtRSI;
extern emlrtRSInfo eo_emlrtRSI;
extern emlrtRSInfo fo_emlrtRSI;
extern emlrtRSInfo go_emlrtRSI;
extern emlrtRSInfo ho_emlrtRSI;
extern emlrtRSInfo io_emlrtRSI;
extern emlrtRSInfo jo_emlrtRSI;
extern emlrtRSInfo ko_emlrtRSI;
extern emlrtRSInfo lo_emlrtRSI;
extern emlrtRSInfo mo_emlrtRSI;
extern emlrtRSInfo no_emlrtRSI;
extern emlrtRSInfo oo_emlrtRSI;
extern emlrtRSInfo po_emlrtRSI;
extern emlrtRSInfo qo_emlrtRSI;
extern emlrtRSInfo ro_emlrtRSI;
extern emlrtRSInfo so_emlrtRSI;
extern emlrtRSInfo to_emlrtRSI;
extern emlrtRSInfo uo_emlrtRSI;
extern emlrtRSInfo vo_emlrtRSI;
extern emlrtRSInfo wo_emlrtRSI;
extern emlrtRSInfo xo_emlrtRSI;
extern emlrtRSInfo yo_emlrtRSI;
extern emlrtRSInfo ap_emlrtRSI;
extern emlrtRSInfo bp_emlrtRSI;
extern emlrtRSInfo cp_emlrtRSI;
extern emlrtRSInfo dp_emlrtRSI;
extern emlrtRSInfo jp_emlrtRSI;
extern emlrtRSInfo kp_emlrtRSI;
extern emlrtRSInfo lp_emlrtRSI;
extern emlrtRSInfo mp_emlrtRSI;
extern emlrtRSInfo np_emlrtRSI;
extern emlrtRSInfo op_emlrtRSI;
extern emlrtRSInfo pp_emlrtRSI;
extern emlrtRSInfo qp_emlrtRSI;
extern emlrtRSInfo rp_emlrtRSI;
extern emlrtRSInfo eq_emlrtRSI;
extern emlrtRSInfo qr_emlrtRSI;
extern emlrtRSInfo rr_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern emlrtMCInfo r_emlrtMCI;
extern emlrtMCInfo s_emlrtMCI;
extern emlrtMCInfo t_emlrtMCI;
extern emlrtMCInfo u_emlrtMCI;
extern emlrtMCInfo v_emlrtMCI;
extern emlrtRTEInfo q_emlrtRTEI;
extern emlrtRTEInfo s_emlrtRTEI;
extern emlrtRTEInfo eb_emlrtRTEI;
extern emlrtRTEInfo fb_emlrtRTEI;
extern emlrtRTEInfo gb_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRSInfo os_emlrtRSI;
extern emlrtRSInfo qs_emlrtRSI;
extern emlrtRSInfo rs_emlrtRSI;
extern emlrtRSInfo at_emlrtRSI;
extern emlrtRSInfo bt_emlrtRSI;
extern emlrtRSInfo ct_emlrtRSI;
#endif
/* End of code generation (merging_data.h) */
