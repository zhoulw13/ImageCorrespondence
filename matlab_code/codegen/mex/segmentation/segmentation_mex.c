/*
 * segmentation_mex.c
 *
 * Code generation for function 'segmentation'
 *
 * C source code generated on: Sun Apr 24 19:21:27 2016
 *
 */

/* Include files */
#include "mex.h"
#include "segmentation_api.h"
#include "segmentation_initialize.h"
#include "segmentation_terminate.h"

/* Function Declarations */
static void segmentation_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "segmentation", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void segmentation_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[4];
  mxArray *inputs[4];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  /* Module initialization. */
  segmentation_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 4, mxCHAR_CLASS, 12, "segmentation");
  } else if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 12, "segmentation");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  segmentation_api(&stack, (const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  segmentation_terminate(&stack);
}

void segmentation_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   segmentation_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(segmentation_atexit_wrapper);
  /* Dispatch the entry-point. */
  segmentation_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (segmentation_mex.c) */
