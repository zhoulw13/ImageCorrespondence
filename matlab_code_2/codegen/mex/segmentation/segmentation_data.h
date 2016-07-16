/*
 * segmentation_data.h
 *
 * Code generation for function 'segmentation_data'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

#ifndef __SEGMENTATION_DATA_H__
#define __SEGMENTATION_DATA_H__
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
#include "segmentation_types.h"

/* Variable Declarations */
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtRSInfo v_emlrtRSI;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo ab_emlrtRSI;
extern emlrtRSInfo bb_emlrtRSI;
extern emlrtRSInfo cb_emlrtRSI;
extern emlrtRSInfo fb_emlrtRSI;
extern emlrtRSInfo gb_emlrtRSI;
extern emlrtRSInfo hb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo kb_emlrtRSI;
extern emlrtRSInfo lb_emlrtRSI;
extern emlrtRSInfo mb_emlrtRSI;
extern emlrtRSInfo wb_emlrtRSI;
extern emlrtRSInfo yb_emlrtRSI;
extern emlrtRSInfo ac_emlrtRSI;
extern emlrtRSInfo kd_emlrtRSI;
extern emlrtRSInfo od_emlrtRSI;
extern emlrtRSInfo qd_emlrtRSI;
extern emlrtRSInfo rd_emlrtRSI;
extern emlrtRSInfo sd_emlrtRSI;
extern emlrtRSInfo td_emlrtRSI;
extern emlrtRSInfo ud_emlrtRSI;
extern emlrtRSInfo vd_emlrtRSI;
extern emlrtRSInfo wd_emlrtRSI;
extern emlrtRSInfo xd_emlrtRSI;
extern emlrtRSInfo yd_emlrtRSI;
extern emlrtRSInfo he_emlrtRSI;
extern emlrtRSInfo we_emlrtRSI;
extern emlrtRSInfo pi_emlrtRSI;
extern emlrtRSInfo qi_emlrtRSI;
extern emlrtRSInfo hl_emlrtRSI;
extern emlrtRSInfo il_emlrtRSI;
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
extern emlrtRSInfo ul_emlrtRSI;
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
extern emlrtRSInfo oo_emlrtRSI;
extern emlrtRSInfo po_emlrtRSI;
extern emlrtRSInfo qo_emlrtRSI;
extern emlrtRSInfo ro_emlrtRSI;
extern emlrtRSInfo so_emlrtRSI;
extern emlrtRSInfo to_emlrtRSI;
extern emlrtRSInfo uo_emlrtRSI;
extern emlrtRSInfo dp_emlrtRSI;
extern emlrtRSInfo ep_emlrtRSI;
extern emlrtRSInfo fp_emlrtRSI;
extern emlrtRSInfo gp_emlrtRSI;
extern emlrtRSInfo hp_emlrtRSI;
extern emlrtRSInfo ip_emlrtRSI;
extern emlrtRSInfo jp_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtRTEInfo k_emlrtRTEI;
extern emlrtRTEInfo bb_emlrtRTEI;
extern emlrtRTEInfo cb_emlrtRTEI;
extern emlrtRTEInfo nb_emlrtRTEI;
extern emlrtRTEInfo ob_emlrtRTEI;
extern emlrtRTEInfo pb_emlrtRTEI;
extern emlrtRTEInfo qb_emlrtRTEI;
#endif
/* End of code generation (segmentation_data.h) */
