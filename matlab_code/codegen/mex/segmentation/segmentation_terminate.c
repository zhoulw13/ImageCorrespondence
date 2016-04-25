/*
 * segmentation_terminate.c
 *
 * Code generation for function 'segmentation_terminate'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "segmentation_terminate.h"

/* Function Definitions */
void segmentation_atexit(emlrtStack *sp)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(sp);
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void segmentation_terminate(emlrtStack *sp)
{
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (segmentation_terminate.c) */
