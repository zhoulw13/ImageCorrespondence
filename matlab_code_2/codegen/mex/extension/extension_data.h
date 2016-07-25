/*
 * extension_data.h
 *
 * Code generation for function 'extension_data'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
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
extern emlrtRSInfo hb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo kb_emlrtRSI;
extern emlrtRSInfo lb_emlrtRSI;
extern emlrtRSInfo mb_emlrtRSI;
extern emlrtRSInfo pb_emlrtRSI;
extern emlrtRSInfo qb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;
extern emlrtRSInfo tb_emlrtRSI;
extern emlrtRSInfo ub_emlrtRSI;
extern emlrtRSInfo vb_emlrtRSI;
extern emlrtRSInfo wb_emlrtRSI;
extern emlrtRSInfo xb_emlrtRSI;
extern emlrtRSInfo tc_emlrtRSI;
extern emlrtRSInfo uc_emlrtRSI;
extern emlrtRSInfo vc_emlrtRSI;
extern emlrtRSInfo wc_emlrtRSI;
extern emlrtRSInfo gd_emlrtRSI;
extern emlrtRSInfo hd_emlrtRSI;
extern emlrtRSInfo jd_emlrtRSI;
extern emlrtRSInfo kd_emlrtRSI;
extern emlrtRSInfo md_emlrtRSI;
extern emlrtRSInfo nd_emlrtRSI;
extern emlrtRSInfo fe_emlrtRSI;
extern emlrtRSInfo he_emlrtRSI;
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
extern emlrtRSInfo ff_emlrtRSI;
extern emlrtRSInfo gf_emlrtRSI;
extern emlrtRSInfo mf_emlrtRSI;
extern emlrtRSInfo uf_emlrtRSI;
extern emlrtRSInfo vf_emlrtRSI;
extern emlrtRSInfo wf_emlrtRSI;
extern emlrtRSInfo xf_emlrtRSI;
extern emlrtRSInfo yf_emlrtRSI;
extern emlrtRSInfo ag_emlrtRSI;
extern emlrtRSInfo bg_emlrtRSI;
extern emlrtRSInfo cg_emlrtRSI;
extern emlrtRSInfo ig_emlrtRSI;
extern emlrtRSInfo oh_emlrtRSI;
extern emlrtRSInfo qh_emlrtRSI;
extern emlrtRSInfo rh_emlrtRSI;
extern emlrtRSInfo sh_emlrtRSI;
extern emlrtRSInfo th_emlrtRSI;
extern emlrtRSInfo uh_emlrtRSI;
extern emlrtRSInfo vh_emlrtRSI;
extern emlrtRSInfo wh_emlrtRSI;
extern emlrtRSInfo xh_emlrtRSI;
extern emlrtRSInfo yh_emlrtRSI;
extern emlrtRSInfo ai_emlrtRSI;
extern emlrtRSInfo bi_emlrtRSI;
extern emlrtRSInfo ci_emlrtRSI;
extern emlrtRSInfo di_emlrtRSI;
extern emlrtRSInfo ei_emlrtRSI;
extern emlrtRSInfo fi_emlrtRSI;
extern emlrtRSInfo gi_emlrtRSI;
extern emlrtRSInfo hi_emlrtRSI;
extern emlrtRSInfo ii_emlrtRSI;
extern emlrtRSInfo ji_emlrtRSI;
extern emlrtRSInfo ki_emlrtRSI;
extern emlrtRSInfo qi_emlrtRSI;
extern emlrtRSInfo ri_emlrtRSI;
extern emlrtRSInfo cj_emlrtRSI;
extern emlrtRSInfo wj_emlrtRSI;
extern emlrtRSInfo xj_emlrtRSI;
extern emlrtRSInfo yj_emlrtRSI;
extern emlrtRSInfo ak_emlrtRSI;
extern emlrtRSInfo bk_emlrtRSI;
extern emlrtRSInfo ck_emlrtRSI;
extern emlrtRSInfo dk_emlrtRSI;
extern emlrtRSInfo ek_emlrtRSI;
extern emlrtRSInfo fk_emlrtRSI;
extern emlrtRSInfo mk_emlrtRSI;
extern emlrtRSInfo nk_emlrtRSI;
extern emlrtRSInfo ok_emlrtRSI;
extern emlrtRSInfo gl_emlrtRSI;
extern emlrtRSInfo jl_emlrtRSI;
extern emlrtRSInfo kl_emlrtRSI;
extern emlrtRSInfo ll_emlrtRSI;
extern emlrtRSInfo ml_emlrtRSI;
extern emlrtRSInfo nl_emlrtRSI;
extern emlrtRSInfo ol_emlrtRSI;
extern emlrtRSInfo pl_emlrtRSI;
extern emlrtRSInfo ql_emlrtRSI;
extern emlrtRSInfo rl_emlrtRSI;
extern emlrtRSInfo sl_emlrtRSI;
extern emlrtRSInfo tl_emlrtRSI;
extern emlrtRSInfo vl_emlrtRSI;
extern emlrtRSInfo wl_emlrtRSI;
extern emlrtRSInfo xl_emlrtRSI;
extern emlrtRSInfo yl_emlrtRSI;
extern emlrtRSInfo am_emlrtRSI;
extern emlrtRSInfo bm_emlrtRSI;
extern emlrtRSInfo cm_emlrtRSI;
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
extern emlrtRSInfo hn_emlrtRSI;
extern emlrtRSInfo or_emlrtRSI;
extern emlrtRSInfo pr_emlrtRSI;
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
extern emlrtRSInfo mw_emlrtRSI;
extern emlrtRSInfo nw_emlrtRSI;
extern emlrtRSInfo ow_emlrtRSI;
extern emlrtRSInfo pw_emlrtRSI;
extern emlrtRSInfo qw_emlrtRSI;
extern emlrtRSInfo ww_emlrtRSI;
extern emlrtRSInfo xw_emlrtRSI;
extern emlrtRSInfo yw_emlrtRSI;
extern emlrtRSInfo ax_emlrtRSI;
extern emlrtRSInfo bx_emlrtRSI;
extern emlrtRSInfo cx_emlrtRSI;
extern emlrtRSInfo dx_emlrtRSI;
extern emlrtRSInfo mx_emlrtRSI;
extern emlrtRSInfo qx_emlrtRSI;
extern emlrtRSInfo rx_emlrtRSI;
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
extern emlrtRTEInfo x_emlrtRTEI;
extern emlrtRTEInfo fb_emlrtRTEI;
extern emlrtRTEInfo dc_emlrtRTEI;
extern emlrtRTEInfo ec_emlrtRTEI;
extern emlrtRTEInfo fc_emlrtRTEI;
extern emlrtRTEInfo gc_emlrtRTEI;
extern emlrtRTEInfo yc_emlrtRTEI;
extern emlrtRSInfo xx_emlrtRSI;
extern emlrtRSInfo yx_emlrtRSI;
extern emlrtRSInfo by_emlrtRSI;
extern emlrtRSInfo cy_emlrtRSI;
extern emlrtRSInfo ly_emlrtRSI;
extern emlrtRSInfo my_emlrtRSI;
extern emlrtRSInfo py_emlrtRSI;
extern emlrtRSInfo qy_emlrtRSI;
#endif
/* End of code generation (extension_data.h) */
