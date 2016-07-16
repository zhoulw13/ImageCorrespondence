/*
 * ceil.c
 *
 * Code generation for function 'ceil'
 *
 * C source code generated on: Thu Jun 30 18:28:11 2016
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
