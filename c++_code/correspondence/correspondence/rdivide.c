/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "rdivide.h"
#include "correspondence_emxutil.h"

/* Function Definitions */
void b_rdivide(const double x[147], const double y[147], double z[147])
{
  int i8;
  for (i8 = 0; i8 < 147; i8++) {
    z[i8] = x[i8] / y[i8];
  }
}

void rdivide(const emxArray_real_T *x, double y, emxArray_real_T *z)
{
  int i2;
  int loop_ub;
  i2 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)z, i2, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    z->data[i2] = x->data[i2] / y;
  }
}

/* End of code generation (rdivide.c) */
