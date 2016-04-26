/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "mod.h"
#include "correspondence_emxutil.h"
#include "correspondence_rtwutil.h"

/* Function Definitions */
double b_mod(double x, double y)
{
  double r;
  if (y == 0.0) {
    r = x;
  } else if (y == floor(y)) {
    r = x - floor(x / y) * y;
  } else {
    r = x / y;
    if (fabs(r - rt_roundd_snf(r)) <= 2.2204460492503131E-16 * fabs(r)) {
      r = 0.0;
    } else {
      r = (r - floor(r)) * y;
    }
  }

  return r;
}

void c_mod(const emxArray_real_T *x, double y, emxArray_real_T *r)
{
  unsigned int unnamed_idx_0;
  int k;
  double b_r;
  unnamed_idx_0 = (unsigned int)x->size[0];
  k = r->size[0];
  r->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)r, k, (int)sizeof(double));
  for (k = 0; k < (int)unnamed_idx_0; k++) {
    if (y == 0.0) {
      b_r = x->data[k];
    } else if (y == floor(y)) {
      b_r = x->data[k] - floor(x->data[k] / y) * y;
    } else {
      b_r = x->data[k] / y;
      if (fabs(b_r - rt_roundd_snf(b_r)) <= 2.2204460492503131E-16 * fabs(b_r))
      {
        b_r = 0.0;
      } else {
        b_r = (b_r - floor(b_r)) * y;
      }
    }

    r->data[k] = b_r;
  }
}

/* End of code generation (mod.c) */
