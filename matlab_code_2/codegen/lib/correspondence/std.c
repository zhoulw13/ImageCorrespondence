/*
 * std.c
 *
 * Code generation for function 'std'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "std.h"

/* Function Definitions */
void b_std(const double varargin_1[147], double y[3])
{
  int ix;
  int iy;
  int i;
  int b_ix;
  double xbar;
  int k;
  double r;
  double b_y;
  ix = -48;
  iy = -1;
  for (i = 0; i < 3; i++) {
    ix += 49;
    iy++;
    b_ix = ix;
    xbar = varargin_1[ix - 1];
    for (k = 0; k < 48; k++) {
      b_ix++;
      xbar += varargin_1[b_ix - 1];
    }

    xbar /= 49.0;
    b_ix = ix;
    r = varargin_1[ix - 1] - xbar;
    b_y = r * r;
    for (k = 0; k < 48; k++) {
      b_ix++;
      r = varargin_1[b_ix - 1] - xbar;
      b_y += r * r;
    }

    b_y /= 48.0;
    y[iy] = b_y;
  }

  for (k = 0; k < 3; k++) {
    y[k] = sqrt(y[k]);
  }
}

/* End of code generation (std.c) */
