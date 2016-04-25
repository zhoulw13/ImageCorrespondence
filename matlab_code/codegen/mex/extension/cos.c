/*
 * cos.c
 *
 * Code generation for function 'cos'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "cos.h"

/* Function Definitions */
void b_cos(real_T *x)
{
  *x = muDoubleScalarCos(*x);
}

/* End of code generation (cos.c) */
