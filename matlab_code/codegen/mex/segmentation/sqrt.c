/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 * C source code generated on: Sun Apr 24 19:21:27 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "sqrt.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRSInfo qn_emlrtRSI = { 14, "sqrt",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &qn_emlrtRSI;
    c_eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */
