#include "mex.h" /* Always include this */

void mexFunction(int nlhs, mxArray *plhs[], /* Output variables */
				 int nrhs, const mxArray *prhs[]) /* Input variables */
{
	mexPrintf("%d\n", nrhs);
	mexPrintf("Hello, world!\n"); /* Do something interesting */
	return;
}