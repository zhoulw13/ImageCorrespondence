/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 * C source code generated on: Sat May 21 10:10:29 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo vb_emlrtRTEI = { 20, 5, "eml_error",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &vb_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  static char_T cv20[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &vb_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv20);
}

void d_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &vb_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &vb_emlrtRTEI,
    "Coder:MATLAB:svd_matrixWithNaNInf", 0);
}

/* End of code generation (eml_error.c) */
