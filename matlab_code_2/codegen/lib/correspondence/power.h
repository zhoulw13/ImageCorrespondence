/*
 * power.h
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

#ifndef __POWER_H__
#define __POWER_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_power(const emxArray_real_T *a, emxArray_real_T *y);
extern void c_power(const double a[147], double y[147]);
extern void d_power(const emxArray_real_T *a, emxArray_real_T *y);
extern void power(const emxArray_real_T *a, emxArray_real_T *y);
#endif
/* End of code generation (power.h) */
