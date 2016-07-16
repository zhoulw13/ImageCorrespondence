/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "sqrt.h"
#include "eml_error.h"
#include "extension_data.h"

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &ln_emlrtRSI;
    c_eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */
