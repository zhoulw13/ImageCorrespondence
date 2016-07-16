/*
 * extension_mexutil.c
 *
 * Code generation for function 'extension_mexutil'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "extension_mexutil.h"

/* Function Definitions */
const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m15;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 1, &pArray, "message", TRUE,
    location);
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", TRUE, location);
}

/* End of code generation (extension_mexutil.c) */
