/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo cd_emlrtRTEI = { 20, 5, "eml_error",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  static char_T cv26[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &cd_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv26);
}

void c_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &cd_emlrtRTEI,
    "Coder:MATLAB:svd_matrixWithNaNInf", 0);
}

void d_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &cd_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

void e_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &cd_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &cd_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedRowsA", 0);
}

/* End of code generation (eml_error.c) */
