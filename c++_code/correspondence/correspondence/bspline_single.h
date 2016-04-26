/*
 * bspline_single.h
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __BSPLINE_SINGLE_H__
#define __BSPLINE_SINGLE_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_bspline_single(const double src[2], const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const double bound[2], double ref[2]);
extern void bspline_single(const double src[2], const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const double bound[2], double ref[2]);
extern void c_bspline_single(const double src[2], const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const double bound[2], double ref[2]);
#endif
/* End of code generation (bspline_single.h) */
