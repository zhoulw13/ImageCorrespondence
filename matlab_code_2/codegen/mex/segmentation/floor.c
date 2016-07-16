/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
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
  int32_T i13;
  int32_T k;
  i13 = x->size[0];
  for (k = 0; k < i13; k++) {
    x->data[k] = muDoubleScalarFloor(x->data[k]);
  }
}

/* End of code generation (floor.c) */
