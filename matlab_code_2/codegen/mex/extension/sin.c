/*
 * sin.c
 *
 * Code generation for function 'sin'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "sin.h"

/* Function Definitions */
void b_sin(real_T *x)
{
  *x = muDoubleScalarSin(*x);
}

/* End of code generation (sin.c) */
