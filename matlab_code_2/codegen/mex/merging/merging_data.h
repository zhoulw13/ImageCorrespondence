/*
 * merging_data.h
 *
 * Code generation for function 'merging_data'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
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
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;
extern emlrtRSInfo tb_emlrtRSI;
extern emlrtRSInfo ub_emlrtRSI;
extern emlrtRSInfo vb_emlrtRSI;
extern emlrtRSInfo xb_emlrtRSI;
extern emlrtRSInfo yb_emlrtRSI;
extern emlrtRSInfo bc_emlrtRSI;
extern emlrtRSInfo cc_emlrtRSI;
extern emlrtRSInfo fc_emlrtRSI;
extern emlrtRSInfo vc_emlrtRSI;
extern emlrtRSInfo wc_emlrtRSI;
extern emlrtRSInfo xc_emlrtRSI;
extern emlrtRSInfo ad_emlrtRSI;
extern emlrtRSInfo dd_emlrtRSI;
extern emlrtRSInfo ed_emlrtRSI;
extern emlrtRSInfo id_emlrtRSI;
extern emlrtRSInfo jd_emlrtRSI;
extern emlrtRSInfo kd_emlrtRSI;
extern emlrtRSInfo ld_emlrtRSI;
extern emlrtRSInfo md_emlrtRSI;
extern emlrtRSInfo nd_emlrtRSI;
extern emlrtRSInfo vd_emlrtRSI;
extern emlrtRSInfo yd_emlrtRSI;
extern emlrtRSInfo ae_emlrtRSI;
extern emlrtRSInfo be_emlrtRSI;
extern emlrtRSInfo ce_emlrtRSI;
extern emlrtRSInfo we_emlrtRSI;
extern emlrtRSInfo bf_emlrtRSI;
extern emlrtRSInfo cf_emlrtRSI;
extern emlrtRSInfo df_emlrtRSI;
extern emlrtRSInfo ff_emlrtRSI;
extern emlrtRSInfo hf_emlrtRSI;
extern emlrtRSInfo if_emlrtRSI;
extern emlrtRSInfo jf_emlrtRSI;
extern emlrtRSInfo kf_emlrtRSI;
extern emlrtRSInfo lf_emlrtRSI;
extern emlrtRSInfo mf_emlrtRSI;
extern emlrtRSInfo nf_emlrtRSI;
extern emlrtRSInfo of_emlrtRSI;
extern emlrtRSInfo pf_emlrtRSI;
extern emlrtRSInfo wf_emlrtRSI;
extern emlrtRSInfo xf_emlrtRSI;
extern emlrtRSInfo ng_emlrtRSI;
extern emlrtRSInfo fk_emlrtRSI;
extern emlrtRSInfo gk_emlrtRSI;
extern emlrtRSInfo vm_emlrtRSI;
extern emlrtRSInfo wm_emlrtRSI;
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
extern emlrtRSInfo do_emlrtRSI;
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
extern emlrtRSInfo xo_emlrtRSI;
extern emlrtRSInfo yo_emlrtRSI;
extern emlrtRSInfo ap_emlrtRSI;
extern emlrtRSInfo bp_emlrtRSI;
extern emlrtRSInfo cp_emlrtRSI;
extern emlrtRSInfo dp_emlrtRSI;
extern emlrtRSInfo ep_emlrtRSI;
extern emlrtRSInfo fp_emlrtRSI;
extern emlrtRSInfo gp_emlrtRSI;
extern emlrtRSInfo hp_emlrtRSI;
extern emlrtRSInfo ip_emlrtRSI;
extern emlrtRSInfo jp_emlrtRSI;
extern emlrtRSInfo kp_emlrtRSI;
extern emlrtRSInfo lp_emlrtRSI;
extern emlrtRSInfo mp_emlrtRSI;
extern emlrtRSInfo np_emlrtRSI;
extern emlrtRSInfo op_emlrtRSI;
extern emlrtRSInfo pp_emlrtRSI;
extern emlrtRSInfo qp_emlrtRSI;
extern emlrtRSInfo rp_emlrtRSI;
extern emlrtRSInfo sp_emlrtRSI;
extern emlrtRSInfo tp_emlrtRSI;
extern emlrtRSInfo up_emlrtRSI;
extern emlrtRSInfo vp_emlrtRSI;
extern emlrtRSInfo wp_emlrtRSI;
extern emlrtRSInfo dq_emlrtRSI;
extern emlrtRSInfo eq_emlrtRSI;
extern emlrtRSInfo fq_emlrtRSI;
extern emlrtRSInfo gq_emlrtRSI;
extern emlrtRSInfo hq_emlrtRSI;
extern emlrtRSInfo iq_emlrtRSI;
extern emlrtRSInfo jq_emlrtRSI;
extern emlrtRSInfo rq_emlrtRSI;
extern emlrtRSInfo sq_emlrtRSI;
extern emlrtRSInfo tq_emlrtRSI;
extern emlrtRSInfo uq_emlrtRSI;
extern emlrtRSInfo vq_emlrtRSI;
extern emlrtRSInfo wq_emlrtRSI;
extern emlrtRSInfo xq_emlrtRSI;
extern emlrtRSInfo ks_emlrtRSI;
extern emlrtRSInfo ls_emlrtRSI;
extern emlrtRSInfo ts_emlrtRSI;
extern emlrtRSInfo us_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtMCInfo b_emlrtMCI;
extern emlrtMCInfo c_emlrtMCI;
extern emlrtMCInfo d_emlrtMCI;
extern emlrtMCInfo g_emlrtMCI;
extern emlrtMCInfo o_emlrtMCI;
extern emlrtMCInfo p_emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern emlrtMCInfo r_emlrtMCI;
extern emlrtRTEInfo e_emlrtRTEI;
extern emlrtRTEInfo s_emlrtRTEI;
extern emlrtRTEInfo u_emlrtRTEI;
extern emlrtRTEInfo gb_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo ib_emlrtRTEI;
extern emlrtRTEInfo jb_emlrtRTEI;
extern emlrtRSInfo rt_emlrtRSI;
extern emlrtRSInfo st_emlrtRSI;
extern emlrtRSInfo ut_emlrtRSI;
extern emlrtRSInfo vt_emlrtRSI;
extern emlrtRSInfo du_emlrtRSI;
extern emlrtRSInfo eu_emlrtRSI;
extern emlrtRSInfo fu_emlrtRSI;
extern emlrtRSInfo gu_emlrtRSI;
#endif
/* End of code generation (merging_data.h) */
