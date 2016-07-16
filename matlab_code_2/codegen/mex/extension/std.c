/*
 * std.c
 *
 * Code generation for function 'std'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "std.h"
#include "eml_error.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtRSInfo ym_emlrtRSI = { 12, "std",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/datafun/std.m" };

/* Function Definitions */
void b_std(const emlrtStack *sp, const real_T varargin_1[147], real_T y[3])
{
  int32_T ix;
  int32_T iy;
  int32_T i;
  int32_T b_ix;
  real_T xbar;
  int32_T k;
  real_T r;
  real_T b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &ym_emlrtRSI;
  ix = -48;
  iy = -1;
  for (i = 0; i < 3; i++) {
    ix += 49;
    iy++;
    b_ix = ix;
    xbar = varargin_1[ix - 1];
    for (k = 0; k < 48; k++) {
      b_ix++;
      xbar += varargin_1[b_ix - 1];
    }

    xbar /= 49.0;
    b_ix = ix;
    r = varargin_1[ix - 1] - xbar;
    b_y = r * r;
    for (k = 0; k < 48; k++) {
      b_ix++;
      r = varargin_1[b_ix - 1] - xbar;
      b_y += r * r;
    }

    b_y /= 48.0;
    y[iy] = b_y;
  }

  st.site = &ym_emlrtRSI;
  for (k = 0; k < 3; k++) {
    if (y[k] < 0.0) {
      b_st.site = &ln_emlrtRSI;
      c_eml_error(&b_st);
    }
  }

  for (k = 0; k < 3; k++) {
    y[k] = muDoubleScalarSqrt(y[k]);
  }
}

/* End of code generation (std.c) */
