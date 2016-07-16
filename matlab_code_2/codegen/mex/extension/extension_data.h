/*
 * extension_data.h
 *
 * Code generation for function 'extension_data'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
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
extern emlrtRSInfo gb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo kb_emlrtRSI;
extern emlrtRSInfo lb_emlrtRSI;
extern emlrtRSInfo ob_emlrtRSI;
extern emlrtRSInfo pb_emlrtRSI;
extern emlrtRSInfo rb_emlrtRSI;
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
extern emlrtRSInfo li_emlrtRSI;
extern emlrtRSInfo mi_emlrtRSI;
extern emlrtRSInfo ni_emlrtRSI;
extern emlrtRSInfo ti_emlrtRSI;
extern emlrtRSInfo ui_emlrtRSI;
extern emlrtRSInfo gj_emlrtRSI;
extern emlrtRSInfo bk_emlrtRSI;
extern emlrtRSInfo pk_emlrtRSI;
extern emlrtRSInfo qk_emlrtRSI;
extern emlrtRSInfo rk_emlrtRSI;
extern emlrtRSInfo sk_emlrtRSI;
extern emlrtRSInfo tk_emlrtRSI;
extern emlrtRSInfo uk_emlrtRSI;
extern emlrtRSInfo bl_emlrtRSI;
extern emlrtRSInfo cl_emlrtRSI;
extern emlrtRSInfo dl_emlrtRSI;
extern emlrtRSInfo el_emlrtRSI;
extern emlrtRSInfo fl_emlrtRSI;
extern emlrtRSInfo gl_emlrtRSI;
extern emlrtRSInfo hl_emlrtRSI;
extern emlrtRSInfo il_emlrtRSI;
extern emlrtRSInfo jl_emlrtRSI;
extern emlrtRSInfo sl_emlrtRSI;
extern emlrtRSInfo tl_emlrtRSI;
extern emlrtRSInfo lm_emlrtRSI;
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
extern emlrtRSInfo lo_emlrtRSI;
extern emlrtRSInfo ss_emlrtRSI;
extern emlrtRSInfo ts_emlrtRSI;
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
extern emlrtRSInfo rw_emlrtRSI;
extern emlrtRSInfo sw_emlrtRSI;
extern emlrtRSInfo tw_emlrtRSI;
extern emlrtRSInfo uw_emlrtRSI;
extern emlrtRSInfo vw_emlrtRSI;
extern emlrtRSInfo ww_emlrtRSI;
extern emlrtRSInfo xw_emlrtRSI;
extern emlrtRSInfo yw_emlrtRSI;
extern emlrtRSInfo ax_emlrtRSI;
extern emlrtRSInfo bx_emlrtRSI;
extern emlrtRSInfo cx_emlrtRSI;
extern emlrtRSInfo dx_emlrtRSI;
extern emlrtRSInfo ex_emlrtRSI;
extern emlrtRSInfo fx_emlrtRSI;
extern emlrtRSInfo gx_emlrtRSI;
extern emlrtRSInfo hx_emlrtRSI;
extern emlrtRSInfo ix_emlrtRSI;
extern emlrtRSInfo jx_emlrtRSI;
extern emlrtRSInfo kx_emlrtRSI;
extern emlrtRSInfo lx_emlrtRSI;
extern emlrtRSInfo mx_emlrtRSI;
extern emlrtRSInfo nx_emlrtRSI;
extern emlrtRSInfo ox_emlrtRSI;
extern emlrtRSInfo px_emlrtRSI;
extern emlrtRSInfo qx_emlrtRSI;
extern emlrtRSInfo rx_emlrtRSI;
extern emlrtRSInfo sx_emlrtRSI;
extern emlrtRSInfo tx_emlrtRSI;
extern emlrtRSInfo ux_emlrtRSI;
extern emlrtRSInfo by_emlrtRSI;
extern emlrtRSInfo cy_emlrtRSI;
extern emlrtRSInfo dy_emlrtRSI;
extern emlrtRSInfo ey_emlrtRSI;
extern emlrtRSInfo fy_emlrtRSI;
extern emlrtRSInfo gy_emlrtRSI;
extern emlrtRSInfo hy_emlrtRSI;
extern emlrtRSInfo qy_emlrtRSI;
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
extern emlrtMCInfo v_emlrtMCI;
extern emlrtMCInfo w_emlrtMCI;
extern emlrtRTEInfo l_emlrtRTEI;
extern emlrtRTEInfo n_emlrtRTEI;
extern emlrtRTEInfo p_emlrtRTEI;
extern emlrtRTEInfo x_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo fc_emlrtRTEI;
extern emlrtRTEInfo gc_emlrtRTEI;
extern emlrtRTEInfo hc_emlrtRTEI;
extern emlrtRTEInfo ic_emlrtRTEI;
extern emlrtRTEInfo bd_emlrtRTEI;
extern emlrtRSInfo sy_emlrtRSI;
extern emlrtRSInfo ty_emlrtRSI;
extern emlrtRSInfo vy_emlrtRSI;
extern emlrtRSInfo wy_emlrtRSI;
extern emlrtRSInfo fab_emlrtRSI;
extern emlrtRSInfo gab_emlrtRSI;
extern emlrtRSInfo jab_emlrtRSI;
extern emlrtRSInfo kab_emlrtRSI;
#endif
/* End of code generation (extension_data.h) */
