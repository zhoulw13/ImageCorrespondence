/*
 * ceil.c
 *
 * Code generation for function 'ceil'
 *
 * C source code generated on: Sun Apr 24 19:39:54 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "ceil.h"

/* Function Definitions */
void b_ceil(real_T *x)
{
  *x = muDoubleScalarCeil(*x);
}

/* End of code generation (ceil.c) */
