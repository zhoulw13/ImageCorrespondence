/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "sqrt.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRSInfo ho_emlrtRSI = { 14, "sqrt",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &ho_emlrtRSI;
    c_eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */
