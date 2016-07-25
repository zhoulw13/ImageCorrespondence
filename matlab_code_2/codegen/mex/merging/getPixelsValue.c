/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "getPixelsValue.h"
#include "merging_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "merging_mexutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRSInfo or_emlrtRSI = { 8, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo pr_emlrtRSI = { 9, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo qr_emlrtRSI = { 10, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo rr_emlrtRSI = { 11, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo sr_emlrtRSI = { 13, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo tr_emlrtRSI = { 14, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo ur_emlrtRSI = { 15, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo vr_emlrtRSI = { 16, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo wr_emlrtRSI = { 17, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo xr_emlrtRSI = { 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo yr_emlrtRSI = { 19, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo as_emlrtRSI = { 20, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo bs_emlrtRSI = { 27, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo cs_emlrtRSI = { 29, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo ds_emlrtRSI = { 31, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo es_emlrtRSI = { 32, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo fs_emlrtRSI = { 11, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo gs_emlrtRSI = { 26, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo hs_emlrtRSI = { 29, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo is_emlrtRSI = { 39, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo js_emlrtRSI = { 41, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo y_emlrtMCI = { 14, 5, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo tb_emlrtRTEI = { 1, 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRTEInfo ub_emlrtRTEI = { 8, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRTEInfo vb_emlrtRTEI = { 9, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 10, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 11, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 20, 9, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtDCInfo g_emlrtDCI = { 25, 25, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 25, 25, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 25, 32, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 25, 32, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 27, 26, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 27, 26, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 27, 33, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 27, 33, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 27, 71, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 27, 71, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 27, 78, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 27, 78, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo m_emlrtDCI = { 29, 26, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 29, 26, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo n_emlrtDCI = { 29, 33, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 29, 33, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo o_emlrtDCI = { 29, 71, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 29, 71, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo p_emlrtDCI = { 29, 78, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 29, 78, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo q_emlrtDCI = { 31, 34, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 31, 34, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo r_emlrtDCI = { 31, 41, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 31, 41, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo s_emlrtDCI = { 31, 79, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 31, 79, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo t_emlrtDCI = { 31, 86, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 31, 86, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 25, 13, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 27, 13, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 29, 13, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 31, 13, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 32, 25, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo u_emlrtDCI = { 32, 46, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 32, 46, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo v_emlrtDCI = { 32, 53, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 32, 53, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo w_emlrtDCI = { 32, 88, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 32, 88, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo x_emlrtDCI = { 32, 95, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 32, 95, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 32, 13, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 13, 1, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 14, 1, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 15, 1, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 16, 1, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 17, 1, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 18, 1, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 19, 1, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 20, 1, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 24, 8, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 24, 17, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 24, 26, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 24, 35, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 26, 12, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 26, 21, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 28, 12, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 28, 21, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 31, 34, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 31, 41, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 31, 52, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 31, 66, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 31, 79, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 31, 86, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 31, 103, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 31, 111, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 31, 120, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 31, 132, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 32, 46, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 32, 53, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 32, 64, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 32, 76, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 32, 88, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 32, 95, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 32, 112, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 32, 120, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 32, 135, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 32, 143, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 29, 26, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 29, 33, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 29, 44, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 29, 58, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 29, 71, "rx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 29, 78, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 29, 95, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 29, 103, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 27, 26, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 27, 33, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 27, 44, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 27, 58, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 27, 71, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 27, 78, "ry", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 27, 95, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 27, 103, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 25, 25, "lx", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 25, 32, "ly", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo y_emlrtDCI = { 20, 34, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo tt_emlrtRSI = { 14, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

/* Function Declarations */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

/* Function Definitions */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m5;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &fs_emlrtRSI;
  k = 0;
  b_st.site = &is_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      b_st.site = &js_emlrtRSI;
      k++;
    }
  }

  if (k <= x->size[0]) {
  } else {
    b_y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &tt_emlrtRSI;
    error(&st, b_y, &y_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &y_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &yb_emlrtRTEI);
  j = 0;
  st.site = &gs_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    b_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      st.site = &hs_emlrtRSI;
      j++;
    }
  }
}

void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, const
                    emxArray_real_T *b_index, emxArray_real_T *val)
{
  emxArray_real_T *lx;
  int32_T loop_ub;
  int32_T i12;
  int32_T k;
  emxArray_real_T *ly;
  emxArray_real_T *rx;
  emxArray_real_T *ry;
  emxArray_boolean_T *b_lx;
  emxArray_int32_T *r9;
  int32_T c_lx;
  emxArray_boolean_T *b_ly;
  int32_T c_ly;
  emxArray_boolean_T *b_rx;
  int32_T c_rx;
  emxArray_boolean_T *b_ry;
  int32_T c_ry;
  emxArray_boolean_T *d_lx;
  emxArray_boolean_T *d_ly;
  emxArray_boolean_T *d_rx;
  emxArray_boolean_T *d_ry;
  boolean_T guard1 = FALSE;
  real_T b;
  real_T b_b;
  real_T c_b;
  real_T x[3];
  real_T y[3];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &lx, 1, &ub_emlrtRTEI, TRUE);

  /* index(:,1) = index(:,1)*x; */
  /* index(:,2) = index(:,2)*y; */
  /* index = round(index); */
  st.site = &or_emlrtRSI;
  loop_ub = b_index->size[0];
  i12 = lx->size[0];
  lx->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)lx, i12, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    lx->data[i12] = b_index->data[i12];
  }

  i12 = b_index->size[0];
  for (k = 0; k < i12; k++) {
    lx->data[k] = muDoubleScalarFloor(lx->data[k]);
  }

  b_emxInit_real_T(&st, &ly, 1, &vb_emlrtRTEI, TRUE);
  st.site = &pr_emlrtRSI;
  loop_ub = b_index->size[0];
  i12 = ly->size[0];
  ly->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)ly, i12, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    ly->data[i12] = b_index->data[i12 + b_index->size[0]];
  }

  i12 = b_index->size[0];
  for (k = 0; k < i12; k++) {
    ly->data[k] = muDoubleScalarFloor(ly->data[k]);
  }

  b_emxInit_real_T(&st, &rx, 1, &wb_emlrtRTEI, TRUE);
  st.site = &qr_emlrtRSI;
  loop_ub = b_index->size[0];
  i12 = rx->size[0];
  rx->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)rx, i12, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    rx->data[i12] = b_index->data[i12];
  }

  i12 = b_index->size[0];
  for (k = 0; k < i12; k++) {
    rx->data[k] = muDoubleScalarCeil(rx->data[k]);
  }

  b_emxInit_real_T(&st, &ry, 1, &xb_emlrtRTEI, TRUE);
  st.site = &rr_emlrtRSI;
  loop_ub = b_index->size[0];
  i12 = ry->size[0];
  ry->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)ry, i12, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    ry->data[i12] = b_index->data[i12 + b_index->size[0]];
  }

  i12 = b_index->size[0];
  for (k = 0; k < i12; k++) {
    ry->data[k] = muDoubleScalarCeil(ry->data[k]);
  }

  emxInit_boolean_T(&st, &b_lx, 1, &tb_emlrtRTEI, TRUE);
  i12 = b_lx->size[0];
  b_lx->size[0] = lx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_lx, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = lx->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_lx->data[i12] = (lx->data[i12] < 1.0);
  }

  emxInit_int32_T(sp, &r9, 1, &tb_emlrtRTEI, TRUE);
  st.site = &sr_emlrtRSI;
  eml_li_find(&st, b_lx, r9);
  c_lx = lx->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&b_lx);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    lx->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_lx, &rb_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &b_ly, 1, &tb_emlrtRTEI, TRUE);
  i12 = b_ly->size[0];
  b_ly->size[0] = ly->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_ly, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = ly->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_ly->data[i12] = (ly->data[i12] < 1.0);
  }

  st.site = &tr_emlrtRSI;
  eml_li_find(&st, b_ly, r9);
  c_ly = ly->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&b_ly);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    ly->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_ly, &sb_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &b_rx, 1, &tb_emlrtRTEI, TRUE);
  i12 = b_rx->size[0];
  b_rx->size[0] = rx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_rx, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = rx->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_rx->data[i12] = (rx->data[i12] < 1.0);
  }

  st.site = &ur_emlrtRSI;
  eml_li_find(&st, b_rx, r9);
  c_rx = rx->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&b_rx);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    rx->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_rx, &tb_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &b_ry, 1, &tb_emlrtRTEI, TRUE);
  i12 = b_ry->size[0];
  b_ry->size[0] = ry->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_ry, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = ry->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_ry->data[i12] = (ry->data[i12] < 1.0);
  }

  st.site = &vr_emlrtRSI;
  eml_li_find(&st, b_ry, r9);
  c_ry = ry->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&b_ry);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    ry->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_ry, &ub_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &d_lx, 1, &tb_emlrtRTEI, TRUE);
  k = img->size[0];
  i12 = d_lx->size[0];
  d_lx->size[0] = lx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)d_lx, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = lx->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    d_lx->data[i12] = (lx->data[i12] > k);
  }

  st.site = &wr_emlrtRSI;
  eml_li_find(&st, d_lx, r9);
  c_lx = lx->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&d_lx);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    lx->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_lx, &vb_emlrtBCI, sp) - 1]
      = img->size[0];
  }

  emxInit_boolean_T(sp, &d_ly, 1, &tb_emlrtRTEI, TRUE);
  k = img->size[1];
  i12 = d_ly->size[0];
  d_ly->size[0] = ly->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)d_ly, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = ly->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    d_ly->data[i12] = (ly->data[i12] > k);
  }

  st.site = &xr_emlrtRSI;
  eml_li_find(&st, d_ly, r9);
  c_ly = ly->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&d_ly);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    ly->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_ly, &wb_emlrtBCI, sp) - 1]
      = img->size[1];
  }

  emxInit_boolean_T(sp, &d_rx, 1, &tb_emlrtRTEI, TRUE);
  k = img->size[0];
  i12 = d_rx->size[0];
  d_rx->size[0] = rx->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)d_rx, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = rx->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    d_rx->data[i12] = (rx->data[i12] > k);
  }

  st.site = &yr_emlrtRSI;
  eml_li_find(&st, d_rx, r9);
  c_rx = rx->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&d_rx);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    rx->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_rx, &xb_emlrtBCI, sp) - 1]
      = img->size[0];
  }

  emxInit_boolean_T(sp, &d_ry, 1, &tb_emlrtRTEI, TRUE);
  k = img->size[1];
  i12 = d_ry->size[0];
  d_ry->size[0] = ry->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)d_ry, i12, (int32_T)sizeof(boolean_T),
                    &tb_emlrtRTEI);
  loop_ub = ry->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    d_ry->data[i12] = (ry->data[i12] > k);
  }

  st.site = &as_emlrtRSI;
  eml_li_find(&st, d_ry, r9);
  c_ry = ry->size[0];
  loop_ub = r9->size[0];
  emxFree_boolean_T(&d_ry);
  for (i12 = 0; i12 < loop_ub; i12++) {
    k = r9->data[i12];
    ry->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, c_ry, &yb_emlrtBCI, sp) - 1]
      = img->size[1];
  }

  emxFree_int32_T(&r9);
  k = b_index->size[0];
  i12 = val->size[0] * val->size[1];
  val->size[0] = k;
  val->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)val, i12, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  loop_ub = b_index->size[0] * 3;
  for (i12 = 0; i12 < loop_ub; i12++) {
    val->data[i12] = 0.0;
  }

  loop_ub = 1;
  while (loop_ub - 1 <= b_index->size[0] - 1) {
    i12 = lx->size[0];
    k = rx->size[0];
    guard1 = FALSE;
    if (lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12, &ac_emlrtBCI,
         sp) - 1] == rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k,
         &bc_emlrtBCI, sp) - 1]) {
      i12 = ly->size[0];
      k = ry->size[0];
      if (ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
           &cc_emlrtBCI, sp) - 1] == ry->data[emlrtDynamicBoundsCheckFastR2012b
          (loop_ub, 1, k, &dc_emlrtBCI, sp) - 1]) {
        k = val->size[0];
        emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &hb_emlrtBCI, sp);
        i12 = ly->size[0];
        b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &ud_emlrtBCI, sp) - 1];
        i12 = img->size[1];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &h_emlrtDCI, sp);
        c_ly = emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &t_emlrtBCI, sp);
        i12 = lx->size[0];
        b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &td_emlrtBCI, sp) - 1];
        i12 = img->size[0];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &g_emlrtDCI, sp);
        c_lx = emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &s_emlrtBCI, sp);
        for (i12 = 0; i12 < 3; i12++) {
          val->data[(loop_ub + val->size[0] * i12) - 1] = img->data[((c_lx +
            img->size[0] * (c_ly - 1)) + img->size[0] * img->size[1] * i12) - 1];
        }
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      i12 = lx->size[0];
      k = rx->size[0];
      if (lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
           &ec_emlrtBCI, sp) - 1] == rx->data[emlrtDynamicBoundsCheckFastR2012b
          (loop_ub, 1, k, &fc_emlrtBCI, sp) - 1]) {
        st.site = &bs_emlrtRSI;
        i12 = lx->size[0];
        b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &ld_emlrtBCI, &st) - 1];
        i12 = img->size[0];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &i_emlrtDCI, &st);
        emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &u_emlrtBCI, &st);
        i12 = ly->size[0];
        b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &md_emlrtBCI, &st) - 1];
        i12 = img->size[1];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &j_emlrtDCI, &st);
        emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &v_emlrtBCI, &st);
        i12 = ry->size[0];
        k = b_index->size[0];
        b_b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &nd_emlrtBCI, &st) - 1] - b_index->data
          [(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &od_emlrtBCI, &st)
            + b_index->size[0]) - 1];
        st.site = &bs_emlrtRSI;
        i12 = lx->size[0];
        b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &pd_emlrtBCI, &st) - 1];
        i12 = img->size[0];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &k_emlrtDCI, &st);
        emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &w_emlrtBCI, &st);
        i12 = ry->size[0];
        b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &qd_emlrtBCI, &st) - 1];
        i12 = img->size[1];
        k = (int32_T)emlrtIntegerCheckFastR2012b(b, &l_emlrtDCI, &st);
        emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &x_emlrtBCI, &st);
        i12 = b_index->size[0];
        k = ly->size[0];
        b = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
          &rd_emlrtBCI, &st) + b_index->size[0]) - 1] - ly->
          data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &sd_emlrtBCI,
          &st) - 1];
        k = val->size[0];
        emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &ib_emlrtBCI, sp);
        c_ly = (int32_T)ly->data[loop_ub - 1];
        c_lx = (int32_T)lx->data[loop_ub - 1];
        c_ry = (int32_T)ry->data[loop_ub - 1];
        k = (int32_T)lx->data[loop_ub - 1];
        for (i12 = 0; i12 < 3; i12++) {
          val->data[(loop_ub + val->size[0] * i12) - 1] = img->data[((c_lx +
            img->size[0] * (c_ly - 1)) + img->size[0] * img->size[1] * i12) - 1]
            * b_b + img->data[((k + img->size[0] * (c_ry - 1)) + img->size[0] *
                               img->size[1] * i12) - 1] * b;
        }
      } else {
        i12 = ly->size[0];
        k = ry->size[0];
        if (ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
             &gc_emlrtBCI, sp) - 1] == ry->
            data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &hc_emlrtBCI,
             sp) - 1]) {
          st.site = &cs_emlrtRSI;
          i12 = lx->size[0];
          b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &dd_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &m_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &y_emlrtBCI, &st);
          i12 = ly->size[0];
          b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &ed_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &n_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &ab_emlrtBCI, &st);
          i12 = rx->size[0];
          k = b_index->size[0];
          b_b = rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &fd_emlrtBCI, &st) - 1] - b_index->
            data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &gd_emlrtBCI,
            &st) - 1];
          st.site = &cs_emlrtRSI;
          i12 = rx->size[0];
          b = rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &hd_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &o_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &bb_emlrtBCI, &st);
          i12 = ly->size[0];
          b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &id_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &p_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &cb_emlrtBCI, &st);
          i12 = b_index->size[0];
          k = lx->size[0];
          b = b_index->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &jd_emlrtBCI, &st) - 1] - lx->data[emlrtDynamicBoundsCheckFastR2012b
            (loop_ub, 1, k, &kd_emlrtBCI, &st) - 1];
          k = val->size[0];
          emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &jb_emlrtBCI, sp);
          c_ly = (int32_T)ly->data[loop_ub - 1];
          c_lx = (int32_T)lx->data[loop_ub - 1];
          k = (int32_T)ly->data[loop_ub - 1];
          c_rx = (int32_T)rx->data[loop_ub - 1];
          for (i12 = 0; i12 < 3; i12++) {
            val->data[(loop_ub + val->size[0] * i12) - 1] = img->data[((c_lx +
              img->size[0] * (c_ly - 1)) + img->size[0] * img->size[1] * i12) -
              1] * b_b + img->data[((c_rx + img->size[0] * (k - 1)) + img->size
              [0] * img->size[1] * i12) - 1] * b;
          }
        } else {
          st.site = &ds_emlrtRSI;
          i12 = lx->size[0];
          b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &ic_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &q_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &db_emlrtBCI, &st);
          i12 = ly->size[0];
          b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &jc_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &r_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &eb_emlrtBCI, &st);
          i12 = ry->size[0];
          k = b_index->size[0];
          b_b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &kc_emlrtBCI, &st) - 1] - b_index->data
            [(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &lc_emlrtBCI, &st)
              + b_index->size[0]) - 1];
          st.site = &ds_emlrtRSI;
          i12 = lx->size[0];
          b = lx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &mc_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &s_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &fb_emlrtBCI, &st);
          i12 = ry->size[0];
          b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &nc_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &t_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &gb_emlrtBCI, &st);
          i12 = b_index->size[0];
          k = ly->size[0];
          b = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &oc_emlrtBCI, &st) + b_index->size[0]) - 1] - ly->
            data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &pc_emlrtBCI,
            &st) - 1];
          st.site = &ds_emlrtRSI;
          i12 = rx->size[0];
          k = b_index->size[0];
          c_b = rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &qc_emlrtBCI, &st) - 1] - b_index->
            data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &rc_emlrtBCI,
            &st) - 1];
          c_ly = (int32_T)ly->data[loop_ub - 1];
          c_lx = (int32_T)lx->data[loop_ub - 1];
          c_ry = (int32_T)ry->data[loop_ub - 1];
          k = (int32_T)lx->data[loop_ub - 1];
          for (i12 = 0; i12 < 3; i12++) {
            x[i12] = (img->data[((c_lx + img->size[0] * (c_ly - 1)) + img->size
                                 [0] * img->size[1] * i12) - 1] * b_b +
                      img->data[((k + img->size[0] * (c_ry - 1)) + img->size[0] *
                                 img->size[1] * i12) - 1] * b) * c_b;
          }

          st.site = &ds_emlrtRSI;
          for (k = 0; k < 3; k++) {
            y[k] = x[k];
          }

          k = val->size[0];
          emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &kb_emlrtBCI, sp);
          for (i12 = 0; i12 < 3; i12++) {
            val->data[(loop_ub + val->size[0] * i12) - 1] = y[i12];
          }

          st.site = &es_emlrtRSI;
          i12 = rx->size[0];
          b = rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &sc_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &u_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &mb_emlrtBCI, &st);
          i12 = ly->size[0];
          b = ly->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &tc_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &v_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &nb_emlrtBCI, &st);
          i12 = ry->size[0];
          k = b_index->size[0];
          b_b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &uc_emlrtBCI, &st) - 1] - b_index->data
            [(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &vc_emlrtBCI, &st)
              + b_index->size[0]) - 1];
          st.site = &es_emlrtRSI;
          i12 = rx->size[0];
          b = rx->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &wc_emlrtBCI, &st) - 1];
          i12 = img->size[0];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &w_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &ob_emlrtBCI, &st);
          i12 = ry->size[0];
          b = ry->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &xc_emlrtBCI, &st) - 1];
          i12 = img->size[1];
          k = (int32_T)emlrtIntegerCheckFastR2012b(b, &x_emlrtDCI, &st);
          emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &pb_emlrtBCI, &st);
          i12 = b_index->size[0];
          k = ly->size[0];
          b = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &yc_emlrtBCI, &st) + b_index->size[0]) - 1] - ly->
            data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &ad_emlrtBCI,
            &st) - 1];
          st.site = &es_emlrtRSI;
          i12 = b_index->size[0];
          k = lx->size[0];
          c_b = b_index->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i12,
            &bd_emlrtBCI, &st) - 1] - lx->data[emlrtDynamicBoundsCheckFastR2012b
            (loop_ub, 1, k, &cd_emlrtBCI, &st) - 1];
          c_ly = (int32_T)ly->data[loop_ub - 1];
          c_rx = (int32_T)rx->data[loop_ub - 1];
          c_ry = (int32_T)ry->data[loop_ub - 1];
          k = (int32_T)rx->data[loop_ub - 1];
          for (i12 = 0; i12 < 3; i12++) {
            x[i12] = (img->data[((c_rx + img->size[0] * (c_ly - 1)) + img->size
                                 [0] * img->size[1] * i12) - 1] * b_b +
                      img->data[((k + img->size[0] * (c_ry - 1)) + img->size[0] *
                                 img->size[1] * i12) - 1] * b) * c_b;
          }

          st.site = &es_emlrtRSI;
          for (k = 0; k < 3; k++) {
            y[k] = x[k];
          }

          k = val->size[0];
          emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &qb_emlrtBCI, sp);
          k = val->size[0];
          emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, k, &lb_emlrtBCI, sp);
          for (i12 = 0; i12 < 3; i12++) {
            x[i12] = val->data[(loop_ub + val->size[0] * i12) - 1] + y[i12];
          }

          for (i12 = 0; i12 < 3; i12++) {
            val->data[(loop_ub + val->size[0] * i12) - 1] = x[i12];
          }
        }
      }
    }

    loop_ub++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&ry);
  emxFree_real_T(&rx);
  emxFree_real_T(&ly);
  emxFree_real_T(&lx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (getPixelsValue.c) */
