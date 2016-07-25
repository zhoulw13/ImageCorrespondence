/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "getPixelsValue.h"
#include "extension_mexutil.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo pk_emlrtRSI = { 8, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo qk_emlrtRSI = { 9, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo rk_emlrtRSI = { 10, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo sk_emlrtRSI = { 11, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo tk_emlrtRSI = { 13, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo uk_emlrtRSI = { 14, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo vk_emlrtRSI = { 15, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo wk_emlrtRSI = { 16, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo xk_emlrtRSI = { 17, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo yk_emlrtRSI = { 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo al_emlrtRSI = { 19, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo bl_emlrtRSI = { 20, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo cl_emlrtRSI = { 27, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo dl_emlrtRSI = { 29, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo el_emlrtRSI = { 31, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo fl_emlrtRSI = { 32, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m" };

static emlrtRSInfo hl_emlrtRSI = { 11, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo il_emlrtRSI = { 29, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo y_emlrtMCI = { 14, 5, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtDCInfo emlrtDCI = { 25, 25, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 25, 25, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 25, 32, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 25, 32, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 27, 26, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 27, 26, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 27, 33, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 27, 33, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 27, 71, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 27, 71, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 27, 78, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 27, 78, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 29, 26, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 29, 26, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 29, 33, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 29, 33, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 29, 71, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 29, 71, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 29, 78, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 29, 78, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 31, 34, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 31, 34, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 31, 41, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 31, 41, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo m_emlrtDCI = { 31, 79, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 31, 79, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo n_emlrtDCI = { 31, 86, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 31, 86, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo o_emlrtDCI = { 32, 46, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 32, 46, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo p_emlrtDCI = { 32, 53, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 32, 53, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo q_emlrtDCI = { 32, 88, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 32, 88, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo r_emlrtDCI = { 32, 95, "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 1 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 32, 95, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code_2/getPixelsValue.m", 0 };

static emlrtDCInfo s_emlrtDCI = { 20, 34, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo dy_emlrtRSI = { 14, "eml_li_find",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

/* Function Declarations */
static void eml_li_find(const emlrtStack *sp, const boolean_T x[49], int32_T
  y_data[49], int32_T y_size[1]);

/* Function Definitions */
static void eml_li_find(const emlrtStack *sp, const boolean_T x[49], int32_T
  y_data[49], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m8;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hl_emlrtRSI;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      k++;
    }
  }

  if (k <= 49) {
  } else {
    y = NULL;
    m8 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m8);
    st.site = &dy_emlrtRSI;
    error(&st, y, &y_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &s_emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      st.site = &il_emlrtRSI;
      k++;
    }
  }
}

void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, const
                    real_T b_index[147], real_T val[147])
{
  real_T lx[49];
  int32_T k;
  real_T ly[49];
  real_T rx[49];
  real_T ry[49];
  boolean_T b_lx[49];
  int32_T i;
  int32_T tmp_size[1];
  int32_T tmp_data[49];
  int32_T i18;
  int32_T b_ly;
  real_T b;
  real_T b_b;
  real_T c_b;
  real_T x[3];
  real_T y[3];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* index(:,1) = index(:,1)*x; */
  /* index(:,2) = index(:,2)*y; */
  /* index = round(index); */
  st.site = &pk_emlrtRSI;
  memcpy(&lx[0], &b_index[0], 49U * sizeof(real_T));
  for (k = 0; k < 49; k++) {
    lx[k] = muDoubleScalarFloor(lx[k]);
  }

  st.site = &qk_emlrtRSI;
  memcpy(&ly[0], &b_index[49], 49U * sizeof(real_T));
  for (k = 0; k < 49; k++) {
    ly[k] = muDoubleScalarFloor(ly[k]);
  }

  st.site = &rk_emlrtRSI;
  memcpy(&rx[0], &b_index[0], 49U * sizeof(real_T));
  for (k = 0; k < 49; k++) {
    rx[k] = muDoubleScalarCeil(rx[k]);
  }

  st.site = &sk_emlrtRSI;
  memcpy(&ry[0], &b_index[49], 49U * sizeof(real_T));
  for (k = 0; k < 49; k++) {
    ry[k] = muDoubleScalarCeil(ry[k]);
  }

  for (i = 0; i < 49; i++) {
    b_lx[i] = (lx[i] < 1.0);
  }

  st.site = &tk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    lx[tmp_data[i18] - 1] = 1.0;
  }

  for (i = 0; i < 49; i++) {
    b_lx[i] = (ly[i] < 1.0);
  }

  st.site = &uk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    ly[tmp_data[i18] - 1] = 1.0;
  }

  for (i = 0; i < 49; i++) {
    b_lx[i] = (rx[i] < 1.0);
  }

  st.site = &vk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    rx[tmp_data[i18] - 1] = 1.0;
  }

  for (i = 0; i < 49; i++) {
    b_lx[i] = (ry[i] < 1.0);
  }

  st.site = &wk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    ry[tmp_data[i18] - 1] = 1.0;
  }

  k = img->size[0];
  for (i18 = 0; i18 < 49; i18++) {
    b_lx[i18] = (lx[i18] > k);
  }

  st.site = &xk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    lx[tmp_data[i18] - 1] = img->size[0];
  }

  k = img->size[1];
  for (i18 = 0; i18 < 49; i18++) {
    b_lx[i18] = (ly[i18] > k);
  }

  st.site = &yk_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    ly[tmp_data[i18] - 1] = img->size[1];
  }

  k = img->size[0];
  for (i18 = 0; i18 < 49; i18++) {
    b_lx[i18] = (rx[i18] > k);
  }

  st.site = &al_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    rx[tmp_data[i18] - 1] = img->size[0];
  }

  k = img->size[1];
  for (i18 = 0; i18 < 49; i18++) {
    b_lx[i18] = (ry[i18] > k);
  }

  st.site = &bl_emlrtRSI;
  eml_li_find(&st, b_lx, tmp_data, tmp_size);
  k = tmp_size[0];
  for (i18 = 0; i18 < k; i18++) {
    ry[tmp_data[i18] - 1] = img->size[1];
  }

  memset(&val[0], 0, 147U * sizeof(real_T));
  for (i = 0; i < 49; i++) {
    if ((lx[i] == rx[i]) && (ly[i] == ry[i])) {
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &b_emlrtDCI, sp);
      b_ly = emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &u_emlrtBCI, sp);
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &emlrtDCI, sp);
      k = emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &t_emlrtBCI, sp);
      for (i18 = 0; i18 < 3; i18++) {
        val[i + 49 * i18] = img->data[((k + img->size[0] * (b_ly - 1)) +
          img->size[0] * img->size[1] * i18) - 1];
      }
    } else if (lx[i] == rx[i]) {
      st.site = &cl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &c_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &v_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &d_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &w_emlrtBCI, &st);
      b = ry[i] - b_index[49 + i];
      st.site = &cl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &e_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &x_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ry[i], &f_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &y_emlrtBCI, &st);
      b_b = b_index[49 + i] - ly[i];
      for (i18 = 0; i18 < 3; i18++) {
        val[i + 49 * i18] = img->data[(((int32_T)lx[i] + img->size[0] *
          ((int32_T)ly[i] - 1)) + img->size[0] * img->size[1] * i18) - 1] * b +
          img->data[(((int32_T)lx[i] + img->size[0] * ((int32_T)ry[i] - 1)) +
                     img->size[0] * img->size[1] * i18) - 1] * b_b;
      }
    } else if (ly[i] == ry[i]) {
      st.site = &dl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &g_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &ab_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &h_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &bb_emlrtBCI, &st);
      b = rx[i] - b_index[i];
      st.site = &dl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(rx[i], &i_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &cb_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &j_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &db_emlrtBCI, &st);
      b_b = b_index[i] - lx[i];
      for (i18 = 0; i18 < 3; i18++) {
        val[i + 49 * i18] = img->data[(((int32_T)lx[i] + img->size[0] *
          ((int32_T)ly[i] - 1)) + img->size[0] * img->size[1] * i18) - 1] * b +
          img->data[(((int32_T)rx[i] + img->size[0] * ((int32_T)ly[i] - 1)) +
                     img->size[0] * img->size[1] * i18) - 1] * b_b;
      }
    } else {
      st.site = &el_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &k_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &eb_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &l_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &fb_emlrtBCI, &st);
      b = ry[i] - b_index[49 + i];
      st.site = &el_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(lx[i], &m_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &gb_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ry[i], &n_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &hb_emlrtBCI, &st);
      b_b = b_index[49 + i] - ly[i];
      st.site = &el_emlrtRSI;
      c_b = rx[i] - b_index[i];
      for (i18 = 0; i18 < 3; i18++) {
        x[i18] = (img->data[(((int32_T)lx[i] + img->size[0] * ((int32_T)ly[i] -
          1)) + img->size[0] * img->size[1] * i18) - 1] * b + img->data
                  [(((int32_T)lx[i] + img->size[0] * ((int32_T)ry[i] - 1)) +
                    img->size[0] * img->size[1] * i18) - 1] * b_b) * c_b;
      }

      st.site = &el_emlrtRSI;
      for (k = 0; k < 3; k++) {
        y[k] = x[k];
      }

      for (i18 = 0; i18 < 3; i18++) {
        val[i + 49 * i18] = y[i18];
      }

      st.site = &fl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(rx[i], &o_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &ib_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ly[i], &p_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &jb_emlrtBCI, &st);
      b = ry[i] - b_index[49 + i];
      st.site = &fl_emlrtRSI;
      i18 = img->size[0];
      k = (int32_T)emlrtIntegerCheckFastR2012b(rx[i], &q_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &kb_emlrtBCI, &st);
      i18 = img->size[1];
      k = (int32_T)emlrtIntegerCheckFastR2012b(ry[i], &r_emlrtDCI, &st);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i18, &lb_emlrtBCI, &st);
      b_b = b_index[49 + i] - ly[i];
      st.site = &fl_emlrtRSI;
      c_b = b_index[i] - lx[i];
      for (i18 = 0; i18 < 3; i18++) {
        x[i18] = (img->data[(((int32_T)rx[i] + img->size[0] * ((int32_T)ly[i] -
          1)) + img->size[0] * img->size[1] * i18) - 1] * b + img->data
                  [(((int32_T)rx[i] + img->size[0] * ((int32_T)ry[i] - 1)) +
                    img->size[0] * img->size[1] * i18) - 1] * b_b) * c_b;
      }

      st.site = &fl_emlrtRSI;
      for (k = 0; k < 3; k++) {
        y[k] = x[k];
      }

      for (i18 = 0; i18 < 3; i18++) {
        val[i + 49 * i18] += y[i18];
      }
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (getPixelsValue.c) */
