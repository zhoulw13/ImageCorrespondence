/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo uc_emlrtRTEI = { 20, 5, "eml_error",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &uc_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  static char_T cv18[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &uc_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv18);
}

void d_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &uc_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &uc_emlrtRTEI,
    "Coder:MATLAB:svd_matrixWithNaNInf", 0);
}

/* End of code generation (eml_error.c) */
