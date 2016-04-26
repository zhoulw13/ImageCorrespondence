/*
 * correspondence_emxutil.h
 *
 * Code generation for function 'correspondence_emxutil'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __CORRESPONDENCE_EMXUTIL_H__
#define __CORRESPONDENCE_EMXUTIL_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_emxCopyStruct_struct_T(b_struct_T *dst, const b_struct_T *src);
extern void b_emxEnsureCapacity_struct_T(emxArray_b_struct_T *emxArray, int oldNumel);
extern void b_emxFreeStruct_struct_T(b_struct_T *pStruct);
extern void b_emxFree_struct_T(emxArray_b_struct_T **pEmxArray);
extern void b_emxInitStruct_struct_T(b_struct_T *pStruct);
extern void b_emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void b_emxInit_struct_T(emxArray_b_struct_T **pEmxArray, int numDimensions);
extern void c_emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxCopyStruct_struct_T(struct_T *dst, const struct_T *src);
extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int elementSize);
extern void emxEnsureCapacity_struct_T(emxArray_struct_T *emxArray, int oldNumel);
extern void emxFreeStruct_struct_T(struct_T *pStruct);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_struct_T(emxArray_struct_T **pEmxArray);
extern void emxInitStruct_struct_T(struct_T *pStruct);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_struct_T(emxArray_struct_T **pEmxArray, int numDimensions);
#endif
/* End of code generation (correspondence_emxutil.h) */
