/*
 * extension_data.h
 *
 * Code generation for function 'extension_data'
 *
 * C source code generated on: Sat May 21 13:33:56 2016
 *
 */

#ifndef __EXTENSION_DATA_H__
#define __EXTENSION_DATA_H__
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
#include "extension_types.h"

/* Variable Declarations */
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtRSInfo rb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;
extern emlrtRSInfo tb_emlrtRSI;
extern emlrtRSInfo ub_emlrtRSI;
extern emlrtRSInfo vb_emlrtRSI;
extern emlrtRSInfo wb_emlrtRSI;
extern emlrtRSInfo ac_emlrtRSI;
extern emlrtRSInfo bc_emlrtRSI;
extern emlrtRSInfo dc_emlrtRSI;
extern emlrtRSInfo ec_emlrtRSI;
extern emlrtRSInfo fc_emlrtRSI;
extern emlrtRSInfo gc_emlrtRSI;
extern emlrtRSInfo hc_emlrtRSI;
extern emlrtRSInfo ic_emlrtRSI;
extern emlrtRSInfo ed_emlrtRSI;
extern emlrtRSInfo fd_emlrtRSI;
extern emlrtRSInfo gd_emlrtRSI;
extern emlrtRSInfo hd_emlrtRSI;
extern emlrtRSInfo qd_emlrtRSI;
extern emlrtRSInfo rd_emlrtRSI;
extern emlrtRSInfo td_emlrtRSI;
extern emlrtRSInfo ud_emlrtRSI;
extern emlrtRSInfo wd_emlrtRSI;
extern emlrtRSInfo xd_emlrtRSI;
extern emlrtRSInfo pe_emlrtRSI;
extern emlrtRSInfo re_emlrtRSI;
extern emlrtRSInfo te_emlrtRSI;
extern emlrtRSInfo ue_emlrtRSI;
extern emlrtRSInfo we_emlrtRSI;
extern emlrtRSInfo ye_emlrtRSI;
extern emlrtRSInfo af_emlrtRSI;
extern emlrtRSInfo bf_emlrtRSI;
extern emlrtRSInfo cf_emlrtRSI;
extern emlrtRSInfo df_emlrtRSI;
extern emlrtRSInfo ef_emlrtRSI;
extern emlrtRSInfo ff_emlrtRSI;
extern emlrtRSInfo gf_emlrtRSI;
extern emlrtRSInfo hf_emlrtRSI;
extern emlrtRSInfo of_emlrtRSI;
extern emlrtRSInfo uf_emlrtRSI;
extern emlrtRSInfo dg_emlrtRSI;
extern emlrtRSInfo eg_emlrtRSI;
extern emlrtRSInfo fg_emlrtRSI;
extern emlrtRSInfo gg_emlrtRSI;
extern emlrtRSInfo hg_emlrtRSI;
extern emlrtRSInfo ig_emlrtRSI;
extern emlrtRSInfo jg_emlrtRSI;
extern emlrtRSInfo kg_emlrtRSI;
extern emlrtRSInfo wh_emlrtRSI;
extern emlrtRSInfo li_emlrtRSI;
extern emlrtRSInfo mi_emlrtRSI;
extern emlrtRSInfo ni_emlrtRSI;
extern emlrtRSInfo oi_emlrtRSI;
extern emlrtRSInfo pi_emlrtRSI;
extern emlrtRSInfo ri_emlrtRSI;
extern emlrtRSInfo vi_emlrtRSI;
extern emlrtRSInfo wi_emlrtRSI;
extern emlrtRSInfo xi_emlrtRSI;
extern emlrtRSInfo yi_emlrtRSI;
extern emlrtRSInfo aj_emlrtRSI;
extern emlrtRSInfo gj_emlrtRSI;
extern emlrtRSInfo hj_emlrtRSI;
extern emlrtRSInfo rj_emlrtRSI;
extern emlrtRSInfo sk_emlrtRSI;
extern emlrtRSInfo tk_emlrtRSI;
extern emlrtRSInfo uk_emlrtRSI;
extern emlrtRSInfo vk_emlrtRSI;
extern emlrtRSInfo wk_emlrtRSI;
extern emlrtRSInfo xk_emlrtRSI;
extern emlrtRSInfo yk_emlrtRSI;
extern emlrtRSInfo al_emlrtRSI;
extern emlrtRSInfo bl_emlrtRSI;
extern emlrtRSInfo cl_emlrtRSI;
extern emlrtRSInfo dl_emlrtRSI;
extern emlrtRSInfo el_emlrtRSI;
extern emlrtRSInfo hl_emlrtRSI;
extern emlrtRSInfo il_emlrtRSI;
extern emlrtRSInfo jl_emlrtRSI;
extern emlrtRSInfo kl_emlrtRSI;
extern emlrtRSInfo ll_emlrtRSI;
extern emlrtRSInfo nl_emlrtRSI;
extern emlrtRSInfo ol_emlrtRSI;
extern emlrtRSInfo pl_emlrtRSI;
extern emlrtRSInfo ql_emlrtRSI;
extern emlrtRSInfo rl_emlrtRSI;
extern emlrtRSInfo sl_emlrtRSI;
extern emlrtRSInfo tl_emlrtRSI;
extern emlrtRSInfo ul_emlrtRSI;
extern emlrtRSInfo vl_emlrtRSI;
extern emlrtRSInfo wl_emlrtRSI;
extern emlrtRSInfo xl_emlrtRSI;
extern emlrtRSInfo am_emlrtRSI;
extern emlrtRSInfo bm_emlrtRSI;
extern emlrtRSInfo cm_emlrtRSI;
extern emlrtRSInfo dm_emlrtRSI;
extern emlrtRSInfo em_emlrtRSI;
extern emlrtRSInfo ym_emlrtRSI;
extern emlrtRSInfo gr_emlrtRSI;
extern emlrtRSInfo hr_emlrtRSI;
extern emlrtRSInfo wt_emlrtRSI;
extern emlrtRSInfo xt_emlrtRSI;
extern emlrtRSInfo yt_emlrtRSI;
extern emlrtRSInfo au_emlrtRSI;
extern emlrtRSInfo bu_emlrtRSI;
extern emlrtRSInfo cu_emlrtRSI;
extern emlrtRSInfo du_emlrtRSI;
extern emlrtRSInfo eu_emlrtRSI;
extern emlrtRSInfo fu_emlrtRSI;
extern emlrtRSInfo gu_emlrtRSI;
extern emlrtRSInfo hu_emlrtRSI;
extern emlrtRSInfo iu_emlrtRSI;
extern emlrtRSInfo ju_emlrtRSI;
extern emlrtRSInfo ku_emlrtRSI;
extern emlrtRSInfo lu_emlrtRSI;
extern emlrtRSInfo mu_emlrtRSI;
extern emlrtRSInfo nu_emlrtRSI;
extern emlrtRSInfo ou_emlrtRSI;
extern emlrtRSInfo pu_emlrtRSI;
extern emlrtRSInfo qu_emlrtRSI;
extern emlrtRSInfo ru_emlrtRSI;
extern emlrtRSInfo su_emlrtRSI;
extern emlrtRSInfo tu_emlrtRSI;
extern emlrtRSInfo uu_emlrtRSI;
extern emlrtRSInfo vu_emlrtRSI;
extern emlrtRSInfo wu_emlrtRSI;
extern emlrtRSInfo xu_emlrtRSI;
extern emlrtRSInfo yu_emlrtRSI;
extern emlrtRSInfo av_emlrtRSI;
extern emlrtRSInfo bv_emlrtRSI;
extern emlrtRSInfo cv_emlrtRSI;
extern emlrtRSInfo dv_emlrtRSI;
extern emlrtRSInfo ev_emlrtRSI;
extern emlrtRSInfo fv_emlrtRSI;
extern emlrtRSInfo gv_emlrtRSI;
extern emlrtRSInfo hv_emlrtRSI;
extern emlrtRSInfo iv_emlrtRSI;
extern emlrtRSInfo jv_emlrtRSI;
extern emlrtRSInfo kv_emlrtRSI;
extern emlrtRSInfo lv_emlrtRSI;
extern emlrtRSInfo mv_emlrtRSI;
extern emlrtRSInfo nv_emlrtRSI;
extern emlrtRSInfo ov_emlrtRSI;
extern emlrtRSInfo pv_emlrtRSI;
extern emlrtRSInfo qv_emlrtRSI;
extern emlrtRSInfo rv_emlrtRSI;
extern emlrtRSInfo sv_emlrtRSI;
extern emlrtRSInfo tv_emlrtRSI;
extern emlrtRSInfo uv_emlrtRSI;
extern emlrtRSInfo vv_emlrtRSI;
extern emlrtRSInfo wv_emlrtRSI;
extern emlrtRSInfo xv_emlrtRSI;
extern emlrtRSInfo yv_emlrtRSI;
extern emlrtRSInfo aw_emlrtRSI;
extern emlrtRSInfo bw_emlrtRSI;
extern emlrtRSInfo cw_emlrtRSI;
extern emlrtRSInfo dw_emlrtRSI;
extern emlrtRSInfo ew_emlrtRSI;
extern emlrtRSInfo fw_emlrtRSI;
extern emlrtRSInfo gw_emlrtRSI;
extern emlrtRSInfo hw_emlrtRSI;
extern emlrtRSInfo iw_emlrtRSI;
extern emlrtRSInfo jw_emlrtRSI;
extern emlrtRSInfo kw_emlrtRSI;
extern emlrtRSInfo lw_emlrtRSI;
extern emlrtRSInfo rw_emlrtRSI;
extern emlrtRSInfo sw_emlrtRSI;
extern emlrtRSInfo tw_emlrtRSI;
extern emlrtRSInfo uw_emlrtRSI;
extern emlrtRSInfo vw_emlrtRSI;
extern emlrtRSInfo ww_emlrtRSI;
extern emlrtRSInfo xw_emlrtRSI;
extern emlrtRSInfo ex_emlrtRSI;
extern emlrtRSInfo ix_emlrtRSI;
extern emlrtMCInfo c_emlrtMCI;
extern emlrtMCInfo d_emlrtMCI;
extern emlrtMCInfo e_emlrtMCI;
extern emlrtMCInfo f_emlrtMCI;
extern emlrtMCInfo g_emlrtMCI;
extern emlrtMCInfo h_emlrtMCI;
extern emlrtMCInfo i_emlrtMCI;
extern emlrtMCInfo j_emlrtMCI;
extern emlrtMCInfo r_emlrtMCI;
extern emlrtMCInfo s_emlrtMCI;
extern emlrtMCInfo t_emlrtMCI;
extern emlrtMCInfo u_emlrtMCI;
extern emlrtRTEInfo l_emlrtRTEI;
extern emlrtRTEInfo n_emlrtRTEI;
extern emlrtRTEInfo p_emlrtRTEI;
extern emlrtRTEInfo gb_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo fc_emlrtRTEI;
extern emlrtRTEInfo gc_emlrtRTEI;
extern emlrtRTEInfo hc_emlrtRTEI;
extern emlrtRTEInfo ic_emlrtRTEI;
extern emlrtRSInfo kx_emlrtRSI;
extern emlrtRSInfo lx_emlrtRSI;
extern emlrtRSInfo nx_emlrtRSI;
extern emlrtRSInfo ox_emlrtRSI;
extern emlrtRSInfo xx_emlrtRSI;
extern emlrtRSInfo yx_emlrtRSI;
extern emlrtRSInfo cy_emlrtRSI;
extern emlrtRSInfo dy_emlrtRSI;
#endif
/* End of code generation (extension_data.h) */
