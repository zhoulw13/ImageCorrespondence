/*
 * segmentation_data.h
 *
 * Code generation for function 'segmentation_data'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
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
extern emlrtRSInfo eb_emlrtRSI;
extern emlrtRSInfo fb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo kb_emlrtRSI;
extern emlrtRSInfo nb_emlrtRSI;
extern emlrtRSInfo ob_emlrtRSI;
extern emlrtRSInfo pb_emlrtRSI;
extern emlrtRSInfo qb_emlrtRSI;
extern emlrtRSInfo rb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;
extern emlrtRSInfo tb_emlrtRSI;
extern emlrtRSInfo ub_emlrtRSI;
extern emlrtRSInfo vb_emlrtRSI;
extern emlrtRSInfo fc_emlrtRSI;
extern emlrtRSInfo hc_emlrtRSI;
extern emlrtRSInfo ic_emlrtRSI;
extern emlrtRSInfo gd_emlrtRSI;
extern emlrtRSInfo hd_emlrtRSI;
extern emlrtRSInfo jd_emlrtRSI;
extern emlrtRSInfo kd_emlrtRSI;
extern emlrtRSInfo ld_emlrtRSI;
extern emlrtRSInfo md_emlrtRSI;
extern emlrtRSInfo nd_emlrtRSI;
extern emlrtRSInfo sd_emlrtRSI;
extern emlrtRSInfo td_emlrtRSI;
extern emlrtRSInfo ud_emlrtRSI;
extern emlrtRSInfo wd_emlrtRSI;
extern emlrtRSInfo yd_emlrtRSI;
extern emlrtRSInfo ae_emlrtRSI;
extern emlrtRSInfo be_emlrtRSI;
extern emlrtRSInfo ce_emlrtRSI;
extern emlrtRSInfo de_emlrtRSI;
extern emlrtRSInfo ee_emlrtRSI;
extern emlrtRSInfo fe_emlrtRSI;
extern emlrtRSInfo ge_emlrtRSI;
extern emlrtRSInfo he_emlrtRSI;
extern emlrtRSInfo oe_emlrtRSI;
extern emlrtRSInfo pe_emlrtRSI;
extern emlrtRSInfo ff_emlrtRSI;
extern emlrtRSInfo xi_emlrtRSI;
extern emlrtRSInfo yi_emlrtRSI;
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
extern emlrtRSInfo in_emlrtRSI;
extern emlrtRSInfo jn_emlrtRSI;
extern emlrtRSInfo kn_emlrtRSI;
extern emlrtRSInfo ln_emlrtRSI;
extern emlrtRSInfo mn_emlrtRSI;
extern emlrtRSInfo nn_emlrtRSI;
extern emlrtRSInfo on_emlrtRSI;
extern emlrtRSInfo pn_emlrtRSI;
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
extern emlrtRSInfo wo_emlrtRSI;
extern emlrtRSInfo xo_emlrtRSI;
extern emlrtRSInfo yo_emlrtRSI;
extern emlrtRSInfo ap_emlrtRSI;
extern emlrtRSInfo bp_emlrtRSI;
extern emlrtRSInfo cp_emlrtRSI;
extern emlrtRSInfo dp_emlrtRSI;
extern emlrtRSInfo lp_emlrtRSI;
extern emlrtRSInfo mp_emlrtRSI;
extern emlrtRSInfo np_emlrtRSI;
extern emlrtRSInfo op_emlrtRSI;
extern emlrtRSInfo pp_emlrtRSI;
extern emlrtRSInfo qp_emlrtRSI;
extern emlrtRSInfo rp_emlrtRSI;
extern emlrtRSInfo cq_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern emlrtMCInfo r_emlrtMCI;
extern emlrtMCInfo s_emlrtMCI;
extern emlrtMCInfo t_emlrtMCI;
extern emlrtMCInfo u_emlrtMCI;
extern emlrtMCInfo v_emlrtMCI;
extern emlrtRTEInfo c_emlrtRTEI;
extern emlrtRTEInfo o_emlrtRTEI;
extern emlrtRTEInfo q_emlrtRTEI;
extern emlrtRTEInfo gb_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo sb_emlrtRTEI;
extern emlrtRTEInfo tb_emlrtRTEI;
extern emlrtRTEInfo ub_emlrtRTEI;
extern emlrtRTEInfo vb_emlrtRTEI;
extern emlrtBCInfo u_emlrtBCI;
extern emlrtBCInfo lb_emlrtBCI;
extern emlrtBCInfo mb_emlrtBCI;
extern emlrtBCInfo nb_emlrtBCI;
extern emlrtBCInfo ob_emlrtBCI;
extern emlrtRSInfo cr_emlrtRSI;
extern emlrtRSInfo dr_emlrtRSI;
extern emlrtRSInfo er_emlrtRSI;
extern emlrtRSInfo or_emlrtRSI;
extern emlrtRSInfo pr_emlrtRSI;
extern emlrtRSInfo sr_emlrtRSI;
#endif
/* End of code generation (segmentation_data.h) */
