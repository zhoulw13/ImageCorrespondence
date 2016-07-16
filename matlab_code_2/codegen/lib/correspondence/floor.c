/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "floor.h"

/* Function Definitions */
void b_floor(emxArray_real_T *x)
{
  int i31;
  int k;
  i31 = x->size[0];
  for (k = 0; k < i31; k++) {
    x->data[k] = floor(x->data[k]);
  }
}

/* End of code generation (floor.c) */
