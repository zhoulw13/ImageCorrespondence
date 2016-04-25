/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Mon Apr 25 17:13:10 2016
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
  int32_T i34;
  int32_T k;
  i34 = x->size[0];
  for (k = 0; k < i34; k++) {
    x->data[k] = muDoubleScalarFloor(x->data[k]);
  }
}

/* End of code generation (floor.c) */
