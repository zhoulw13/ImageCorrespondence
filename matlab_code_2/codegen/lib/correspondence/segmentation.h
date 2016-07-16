/*
 * segmentation.h
 *
 * Code generation for function 'segmentation'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __SEGMENTATION_H__
#define __SEGMENTATION_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void c_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void d_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void segmentation(const emxArray_real_T *Sp2, const emxArray_real_T *Confidence, const emxArray_real_T *DCF, const emxArray_real_T *Ref, emxArray_struct_T *sp_set, emxArray_real_T *sp_val, emxArray_b_struct_T *bspline_set, emxArray_struct_T *ref_set);
#endif
/* End of code generation (segmentation.h) */
