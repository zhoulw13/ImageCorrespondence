/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "abs.h"
#include "correspondence_emxutil.h"

/* Function Definitions */
void b_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int uv0[2];
  int i3;
  int k;
  for (i3 = 0; i3 < 2; i3++) {
    uv0[i3] = (unsigned int)x->size[i3];
  }

  i3 = y->size[0] * y->size[1];
  y->size[0] = (int)uv0[0];
  y->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)y, i3, (int)sizeof(double));
  i3 = x->size[0] << 1;
  for (k = 0; k < i3; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

void c_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int uv1[2];
  int i17;
  int k;
  for (i17 = 0; i17 < 2; i17++) {
    uv1[i17] = (unsigned int)x->size[i17];
  }

  i17 = y->size[0] * y->size[1];
  y->size[0] = (int)uv1[0];
  y->size[1] = (int)uv1[1];
  emxEnsureCapacity((emxArray__common *)y, i17, (int)sizeof(double));
  i17 = x->size[0] * x->size[1];
  for (k = 0; k < i17; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
