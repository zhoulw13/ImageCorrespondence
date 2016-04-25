/*
 * merging_mexutil.c
 *
 * Code generation for function 'merging_mexutil'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "merging_mexutil.h"

/* Function Definitions */
void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", TRUE, location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m9;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 1, &pArray, "message", TRUE, location);
}

/* End of code generation (merging_mexutil.c) */
