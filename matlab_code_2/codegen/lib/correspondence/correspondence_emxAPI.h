/*
 * correspondence_emxAPI.h
 *
 * Code generation for function 'correspondence_emxAPI'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __CORRESPONDENCE_EMXAPI_H__
#define __CORRESPONDENCE_EMXAPI_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern emxArray_b_struct_T *emxCreateND_b_struct_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_struct_T *emxCreateND_struct_T(int numDimensions, int *size);
extern emxArray_b_struct_T *emxCreateWrapperND_b_struct_T(b_struct_T *data, int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int numDimensions, int *size);
extern emxArray_struct_T *emxCreateWrapperND_struct_T(struct_T *data, int numDimensions, int *size);
extern emxArray_b_struct_T *emxCreateWrapper_b_struct_T(b_struct_T *data, int rows, int cols);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_struct_T *emxCreateWrapper_struct_T(struct_T *data, int rows, int cols);
extern emxArray_b_struct_T *emxCreate_b_struct_T(int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern emxArray_struct_T *emxCreate_struct_T(int rows, int cols);
extern void emxDestroyArray_b_struct_T(emxArray_b_struct_T *emxArray);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxDestroyArray_struct_T(emxArray_struct_T *emxArray);
#endif
/* End of code generation (correspondence_emxAPI.h) */
