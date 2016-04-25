/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "floor.h"

/* Function Definitions */
void b_floor(real_T *x)
{
  *x = muDoubleScalarFloor(*x);
}

void c_floor(emxArray_real_T *x)
{
  int32_T i24;
  int32_T k;
  i24 = x->size[0];
  for (k = 0; k < i24; k++) {
    x->data[k] = muDoubleScalarFloor(x->data[k]);
  }
}

/* End of code generation (floor.c) */
