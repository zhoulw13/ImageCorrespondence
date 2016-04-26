/*
 * bspline_inv.h
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __BSPLINE_INV_H__
#define __BSPLINE_INV_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref, emxArray_real_T *control_p);
extern void bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref, emxArray_real_T *control_p, double *error);
extern void c_bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref, emxArray_real_T *control_p, double *error);
#endif
/* End of code generation (bspline_inv.h) */
