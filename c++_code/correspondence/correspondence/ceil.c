/*
 * ceil.c
 *
 * Code generation for function 'ceil'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "ceil.h"

/* Function Definitions */
void b_ceil(emxArray_real_T *x)
{
  int i40;
  int k;
  i40 = x->size[0];
  for (k = 0; k < i40; k++) {
    x->data[k] = ceil(x->data[k]);
  }
}

/* End of code generation (ceil.c) */
