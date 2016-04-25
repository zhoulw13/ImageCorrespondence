/*
 * ceil.c
 *
 * Code generation for function 'ceil'
 *
 * C source code generated on: Sun Apr 24 19:21:26 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "ceil.h"

/* Function Definitions */
void b_ceil(emxArray_real_T *x)
{
  int32_T i23;
  int32_T k;
  i23 = x->size[0];
  for (k = 0; k < i23; k++) {
    x->data[k] = muDoubleScalarCeil(x->data[k]);
  }
}

/* End of code generation (ceil.c) */
