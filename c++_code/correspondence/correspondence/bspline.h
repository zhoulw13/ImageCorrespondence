/*
 * bspline.h
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

#ifndef __BSPLINE_H__
#define __BSPLINE_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_bspline(const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const double bound_data[2], const int bound_size[2], emxArray_real_T *ref);
extern void bspline(const emxArray_real_T *src, const emxArray_real_T *control_p_x, const emxArray_real_T *control_p_y, const double bound[2], emxArray_real_T *ref);
#endif
/* End of code generation (bspline.h) */
