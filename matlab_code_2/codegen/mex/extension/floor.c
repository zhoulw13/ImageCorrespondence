/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Thu Jul 14 16:54:47 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "floor.h"

/* Function Definitions */
void b_floor(real_T *x)
{
  *x = muDoubleScalarFloor(*x);
}

void c_floor(emxArray_real_T *x)
{
  int32_T i30;
  int32_T k;
  i30 = x->size[0];
  for (k = 0; k < i30; k++) {
    x->data[k] = muDoubleScalarFloor(x->data[k]);
  }
}

/* End of code generation (floor.c) */