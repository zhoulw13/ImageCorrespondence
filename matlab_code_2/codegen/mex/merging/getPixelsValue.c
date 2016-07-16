/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
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
static emlrtRSInfo xq_emlrtRSI = { 11, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo yq_emlrtRSI = { 26, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ar_emlrtRSI = { 29, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo br_emlrtRSI = { 39, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo cr_emlrtRSI = { 41, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo dr_emlrtRSI = { 5, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtRSInfo er_emlrtRSI = { 6, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtRSInfo fr_emlrtRSI = { 7, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtRSInfo gr_emlrtRSI = { 8, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtRSInfo hr_emlrtRSI = { 9, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtRSInfo ir_emlrtRSI = { 10, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtMCInfo y_emlrtMCI = { 14, 5, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 20, 9, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 1, 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtDCInfo g_emlrtDCI = { 20, 34, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtECInfo db_emlrtECI = { -1, 5, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtECInfo eb_emlrtECI = { -1, 6, 1, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtDCInfo h_emlrtDCI = { 14, 19, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 14, 19, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 14, 32, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 14, 32, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 14, 9, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 8, 1, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 9, 7, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 10, 7, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 14, 25, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 14, 38, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtRSInfo ps_emlrtRSI = { 14, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

/* Function Declarations */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

/* Function Definitions */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m6;
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
  st.site = &xq_emlrtRSI;
  k = 0;
  b_st.site = &br_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      b_st.site = &cr_emlrtRSI;
      k++;
    }
  }

  if (k <= x->size[0]) {
  } else {
    b_y = NULL;
    m6 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m6);
    st.site = &ps_emlrtRSI;
    error(&st, b_y, &y_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &g_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &rb_emlrtRTEI);
  j = 0;
  st.site = &yq_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    b_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      st.site = &ar_emlrtRSI;
      j++;
    }
  }
}

void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                 emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b6;
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
  n = x->size[0] << 1;
  st.site = &xq_emlrtRSI;
  k = 0;
  b_st.site = &br_emlrtRSI;
  if (1 > n) {
    b6 = FALSE;
  } else {
    b6 = (n > 2147483646);
  }

  if (b6) {
    c_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      b_st.site = &cr_emlrtRSI;
      k++;
    }
  }

  if (k <= n) {
  } else {
    b_y = NULL;
    m5 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &ps_emlrtRSI;
    error(&st, b_y, &y_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &g_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &rb_emlrtRTEI);
  j = 0;
  st.site = &yq_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      st.site = &ar_emlrtRSI;
      j++;
    }
  }
}

void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img,
                    emxArray_real_T *b_index, emxArray_real_T *val)
{
  emxArray_int32_T *r22;
  int32_T m;
  int32_T loop_ub;
  int32_T i13;
  emxArray_real_T *r23;
  int32_T b_img;
  int32_T iv60[1];
  int32_T iv61[1];
  emxArray_boolean_T *c_index;
  int32_T d_index;
  int32_T i14;
  emxArray_boolean_T *e_index;
  emxArray_boolean_T *f_index;
  real_T d2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int32_T(sp, &r22, 1, &sb_emlrtRTEI, TRUE);
  m = b_index->size[0];
  loop_ub = b_index->size[0];
  i13 = r22->size[0];
  r22->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r22, i13, (int32_T)sizeof(int32_T),
                    &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    r22->data[i13] = i13;
  }

  b_emxInit_real_T(sp, &r23, 1, &sb_emlrtRTEI, TRUE);
  st.site = &dr_emlrtRSI;
  loop_ub = b_index->size[0];
  b_img = img->size[0];
  i13 = r23->size[0];
  r23->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)r23, i13, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    r23->data[i13] = b_index->data[i13] * (real_T)b_img;
  }

  iv60[0] = r22->size[0];
  emlrtSubAssignSizeCheckR2012b(iv60, 1, *(int32_T (*)[1])r23->size, 1,
    &db_emlrtECI, sp);
  loop_ub = r23->size[0];
  for (i13 = 0; i13 < loop_ub; i13++) {
    b_index->data[r22->data[i13]] = r23->data[i13];
  }

  loop_ub = b_index->size[0];
  i13 = r22->size[0];
  r22->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r22, i13, (int32_T)sizeof(int32_T),
                    &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    r22->data[i13] = i13;
  }

  st.site = &er_emlrtRSI;
  loop_ub = b_index->size[0];
  b_img = img->size[1];
  i13 = r23->size[0];
  r23->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)r23, i13, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    r23->data[i13] = b_index->data[i13 + b_index->size[0]] * (real_T)b_img;
  }

  iv61[0] = r22->size[0];
  emlrtSubAssignSizeCheckR2012b(iv61, 1, *(int32_T (*)[1])r23->size, 1,
    &eb_emlrtECI, sp);
  loop_ub = r23->size[0];
  for (i13 = 0; i13 < loop_ub; i13++) {
    b_index->data[r22->data[i13] + b_index->size[0]] = r23->data[i13];
  }

  emxFree_real_T(&r23);
  st.site = &fr_emlrtRSI;
  i13 = b_index->size[0] << 1;
  for (b_img = 0; b_img < i13; b_img++) {
    b_index->data[b_img] = muDoubleScalarCeil(b_index->data[b_img]);
  }

  b_emxInit_boolean_T(&st, &c_index, 2, &sb_emlrtRTEI, TRUE);
  i13 = c_index->size[0] * c_index->size[1];
  c_index->size[0] = b_index->size[0];
  c_index->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)c_index, i13, (int32_T)sizeof
                    (boolean_T), &sb_emlrtRTEI);
  loop_ub = b_index->size[0] * b_index->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    c_index->data[i13] = (b_index->data[i13] < 1.0);
  }

  st.site = &gr_emlrtRSI;
  eml_li_find(&st, c_index, r22);
  d_index = b_index->size[0];
  loop_ub = r22->size[0];
  emxFree_boolean_T(&c_index);
  for (i13 = 0; i13 < loop_ub; i13++) {
    i14 = d_index << 1;
    b_img = r22->data[i13];
    b_index->data[emlrtDynamicBoundsCheckFastR2012b(b_img, 1, i14, &v_emlrtBCI,
      sp) - 1] = 1.0;
  }

  emxInit_boolean_T(sp, &e_index, 1, &sb_emlrtRTEI, TRUE);
  loop_ub = b_index->size[0];
  b_img = img->size[0];
  i13 = e_index->size[0];
  e_index->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)e_index, i13, (int32_T)sizeof
                    (boolean_T), &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    e_index->data[i13] = (b_index->data[i13] > b_img);
  }

  st.site = &hr_emlrtRSI;
  b_eml_li_find(&st, e_index, r22);
  d_index = b_index->size[0];
  b_img = r22->size[0];
  emxFree_boolean_T(&e_index);
  for (i13 = 0; i13 < b_img; i13++) {
    i14 = r22->data[i13];
    b_index->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, d_index, &w_emlrtBCI,
      sp) - 1] = img->size[0];
  }

  emxInit_boolean_T(sp, &f_index, 1, &sb_emlrtRTEI, TRUE);
  loop_ub = b_index->size[0];
  b_img = img->size[1];
  i13 = f_index->size[0];
  f_index->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)f_index, i13, (int32_T)sizeof
                    (boolean_T), &sb_emlrtRTEI);
  for (i13 = 0; i13 < loop_ub; i13++) {
    f_index->data[i13] = (b_index->data[i13 + b_index->size[0]] > b_img);
  }

  st.site = &ir_emlrtRSI;
  b_eml_li_find(&st, f_index, r22);
  d_index = b_index->size[0];
  b_img = r22->size[0];
  emxFree_boolean_T(&f_index);
  for (i13 = 0; i13 < b_img; i13++) {
    i14 = r22->data[i13];
    b_index->data[(emlrtDynamicBoundsCheckFastR2012b(i14, 1, d_index,
      &x_emlrtBCI, sp) + b_index->size[0]) - 1] = img->size[1];
  }

  emxFree_int32_T(&r22);
  i13 = val->size[0] * val->size[1];
  val->size[0] = m;
  val->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)val, i13, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  loop_ub = m * 3;
  for (i13 = 0; i13 < loop_ub; i13++) {
    val->data[i13] = 0.0;
  }

  loop_ub = 1;
  while (loop_ub - 1 <= m - 1) {
    b_img = val->size[0];
    emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, b_img, &u_emlrtBCI, sp);
    i13 = b_index->size[0];
    d2 = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i13,
      &ab_emlrtBCI, sp) + b_index->size[0]) - 1];
    i13 = img->size[1];
    i14 = (int32_T)emlrtIntegerCheckFastR2012b(d2, &i_emlrtDCI, sp);
    d_index = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &t_emlrtBCI, sp);
    i13 = b_index->size[0];
    d2 = b_index->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i13,
      &y_emlrtBCI, sp) - 1];
    i13 = img->size[0];
    i14 = (int32_T)emlrtIntegerCheckFastR2012b(d2, &h_emlrtDCI, sp);
    b_img = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &s_emlrtBCI, sp);
    for (i13 = 0; i13 < 3; i13++) {
      val->data[(loop_ub + val->size[0] * i13) - 1] = img->data[((b_img +
        img->size[0] * (d_index - 1)) + img->size[0] * img->size[1] * i13) - 1];
    }

    loop_ub++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (getPixelsValue.c) */
