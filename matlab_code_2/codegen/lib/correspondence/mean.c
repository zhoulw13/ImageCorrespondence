/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "mean.h"

/* Function Definitions */
void mean(const double x[147], double y[3])
{
  int ix;
  int iy;
  int i;
  int ixstart;
  double s;
  ix = -1;
  iy = -1;
  for (i = 0; i < 3; i++) {
    ixstart = ix + 1;
    ix++;
    s = x[ixstart];
    for (ixstart = 0; ixstart < 48; ixstart++) {
      ix++;
      s += x[ix];
    }

    iy++;
    y[iy] = s;
  }

  for (ixstart = 0; ixstart < 3; ixstart++) {
    y[ixstart] /= 49.0;
  }
}

/* End of code generation (mean.c) */
