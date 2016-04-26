/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __SUM_H__
#define __SUM_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern double b_sum(const emxArray_real_T *x);
extern void c_sum(const emxArray_real_T *x, double y[3]);
extern double d_sum(const double x[3]);
extern void sum(const double x[147], double y[3]);
#endif
/* End of code generation (sum.h) */
