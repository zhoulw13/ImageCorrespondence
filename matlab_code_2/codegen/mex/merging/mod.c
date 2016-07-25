/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "mod.h"

/* Function Definitions */
real_T b_mod(real_T x, real_T y)
{
  real_T r;
  if (y == 0.0) {
    r = x;
  } else if (y == muDoubleScalarFloor(y)) {
    r = x - muDoubleScalarFloor(x / y) * y;
  } else {
    r = x / y;
    if (muDoubleScalarAbs(r - muDoubleScalarRound(r)) <= 2.2204460492503131E-16 *
        muDoubleScalarAbs(r)) {
      r = 0.0;
    } else {
      r = (r - muDoubleScalarFloor(r)) * y;
    }
  }

  return r;
}

/* End of code generation (mod.c) */
