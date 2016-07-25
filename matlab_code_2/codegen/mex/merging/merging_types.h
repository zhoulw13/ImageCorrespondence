/*
 * merging_types.h
 *
 * Code generation for function 'merging'
 *
 * C source code generated on: Fri Jul 22 15:48:57 2016
 *
 */

#ifndef __MERGING_TYPES_H__
#define __MERGING_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    emxArray_real_T *x;
    emxArray_real_T *y;
} struct_T;
#endif /*typedef_struct_T*/
#ifndef struct_emxArray_b_struct_T
#define struct_emxArray_b_struct_T
struct emxArray_b_struct_T
{
    struct_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_b_struct_T*/
#ifndef typedef_emxArray_b_struct_T
#define typedef_emxArray_b_struct_T
typedef struct emxArray_b_struct_T emxArray_b_struct_T;
#endif /*typedef_emxArray_b_struct_T*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct
{
    emxArray_real_T *val;
} b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef struct_emxArray_struct_T
#define struct_emxArray_struct_T
struct emxArray_struct_T
{
    b_struct_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct_T*/
#ifndef typedef_emxArray_struct_T
#define typedef_emxArray_struct_T
typedef struct emxArray_struct_T emxArray_struct_T;
#endif /*typedef_emxArray_struct_T*/

#endif
/* End of code generation (merging_types.h) */
