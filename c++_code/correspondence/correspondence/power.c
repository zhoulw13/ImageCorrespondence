/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "power.h"
#include "correspondence_emxutil.h"
#include "correspondence_rtwutil.h"

/* Function Definitions */
void b_power(const emxArray_real_T *a, emxArray_real_T *y)
{
  unsigned int unnamed_idx_0;
  int k;
  unnamed_idx_0 = (unsigned int)a->size[0];
  k = y->size[0];
  y->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  for (k = 0; k < (int)unnamed_idx_0; k++) {
    y->data[k] = rt_powd_snf(a->data[k], 3.0);
  }
}

void c_power(const double a[147], double y[147])
{
  int k;
  for (k = 0; k < 147; k++) {
    y[k] = a[k] * a[k];
  }
}

void d_power(const emxArray_real_T *a, emxArray_real_T *y)
{
  unsigned int uv2[2];
  int i21;
  int k;
  for (i21 = 0; i21 < 2; i21++) {
    uv2[i21] = (unsigned int)a->size[i21];
  }

  i21 = y->size[0] * y->size[1];
  y->size[0] = (int)uv2[0];
  y->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)y, i21, (int)sizeof(double));
  i21 = (int)uv2[0] * 3;
  for (k = 0; k < i21; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  unsigned int unnamed_idx_0;
  int k;
  unnamed_idx_0 = (unsigned int)a->size[0];
  k = y->size[0];
  y->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  for (k = 0; k < (int)unnamed_idx_0; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
