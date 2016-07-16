/*
 * correspondence_types.h
 *
 * Code generation for function 'extension'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

#ifndef __CORRESPONDENCE_TYPES_H__
#define __CORRESPONDENCE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_b_real_T_1x2
#define struct_emxArray_b_real_T_1x2
struct emxArray_b_real_T_1x2
{
    double data[2];
    int size[2];
};
#endif /*struct_emxArray_b_real_T_1x2*/
#ifndef typedef_emxArray_b_real_T_1x2
#define typedef_emxArray_b_real_T_1x2
typedef struct emxArray_b_real_T_1x2 emxArray_b_real_T_1x2;
#endif /*typedef_emxArray_b_real_T_1x2*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    double *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct
{
    emxArray_real_T *x;
    emxArray_real_T *y;
} b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef struct_emxArray_b_struct_T
#define struct_emxArray_b_struct_T
struct emxArray_b_struct_T
{
    b_struct_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
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
    int *size;
    int allocatedSize;
    int numDimensions;
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
    int *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_int32_T_1
#define struct_emxArray_int32_T_1
struct emxArray_int32_T_1
{
    int data[1];
    int size[1];
};
#endif /*struct_emxArray_int32_T_1*/
#ifndef typedef_emxArray_int32_T_1
#define typedef_emxArray_int32_T_1
typedef struct emxArray_int32_T_1 emxArray_int32_T_1;
#endif /*typedef_emxArray_int32_T_1*/
#ifndef struct_emxArray_int32_T_147
#define struct_emxArray_int32_T_147
struct emxArray_int32_T_147
{
    int data[147];
    int size[1];
};
#endif /*struct_emxArray_int32_T_147*/
#ifndef typedef_emxArray_int32_T_147
#define typedef_emxArray_int32_T_147
typedef struct emxArray_int32_T_147 emxArray_int32_T_147;
#endif /*typedef_emxArray_int32_T_147*/
#ifndef struct_emxArray_int32_T_1x2
#define struct_emxArray_int32_T_1x2
struct emxArray_int32_T_1x2
{
    int data[2];
    int size[2];
};
#endif /*struct_emxArray_int32_T_1x2*/
#ifndef typedef_emxArray_int32_T_1x2
#define typedef_emxArray_int32_T_1x2
typedef struct emxArray_int32_T_1x2 emxArray_int32_T_1x2;
#endif /*typedef_emxArray_int32_T_1x2*/
#ifndef struct_emxArray_int32_T_1x49
#define struct_emxArray_int32_T_1x49
struct emxArray_int32_T_1x49
{
    int data[49];
    int size[2];
};
#endif /*struct_emxArray_int32_T_1x49*/
#ifndef typedef_emxArray_int32_T_1x49
#define typedef_emxArray_int32_T_1x49
typedef struct emxArray_int32_T_1x49 emxArray_int32_T_1x49;
#endif /*typedef_emxArray_int32_T_1x49*/
#ifndef struct_emxArray_real_T_1x2
#define struct_emxArray_real_T_1x2
struct emxArray_real_T_1x2
{
    double data[2];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x2*/
#ifndef typedef_emxArray_real_T_1x2
#define typedef_emxArray_real_T_1x2
typedef struct emxArray_real_T_1x2 emxArray_real_T_1x2;
#endif /*typedef_emxArray_real_T_1x2*/
#ifndef struct_emxArray_real_T_3
#define struct_emxArray_real_T_3
struct emxArray_real_T_3
{
    double data[3];
    int size[1];
};
#endif /*struct_emxArray_real_T_3*/
#ifndef typedef_emxArray_real_T_3
#define typedef_emxArray_real_T_3
typedef struct emxArray_real_T_3 emxArray_real_T_3;
#endif /*typedef_emxArray_real_T_3*/
#ifndef struct_emxArray_real_T_3x49
#define struct_emxArray_real_T_3x49
struct emxArray_real_T_3x49
{
    double data[147];
    int size[2];
};
#endif /*struct_emxArray_real_T_3x49*/
#ifndef typedef_emxArray_real_T_3x49
#define typedef_emxArray_real_T_3x49
typedef struct emxArray_real_T_3x49 emxArray_real_T_3x49;
#endif /*typedef_emxArray_real_T_3x49*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    emxArray_real_T *val;
} struct_T;
#endif /*typedef_struct_T*/
#ifndef struct_emxArray_struct_T
#define struct_emxArray_struct_T
struct emxArray_struct_T
{
    struct_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct_T*/
#ifndef typedef_emxArray_struct_T
#define typedef_emxArray_struct_T
typedef struct emxArray_struct_T emxArray_struct_T;
#endif /*typedef_emxArray_struct_T*/

#endif
/* End of code generation (correspondence_types.h) */
