/*
 * getPixelsValue.h
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __GETPIXELSVALUE_H__
#define __GETPIXELSVALUE_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_getPixelsValue(const emxArray_real_T *img, const emxArray_int32_T *b_index, emxArray_real_T *val);
extern void c_getPixelsValue(const emxArray_real_T *img, const emxArray_real_T *b_index, emxArray_real_T *val);
extern void getPixelsValue(const emxArray_real_T *img, const int b_index[147], double val[147]);
#endif
/* End of code generation (getPixelsValue.h) */
