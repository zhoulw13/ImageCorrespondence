/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

#ifndef __REPMAT_H__
#define __REPMAT_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_repmat(double m, emxArray_real_T *b);
extern void c_repmat(const double a[2], double m, emxArray_real_T *b);
extern void d_repmat(const double a_data[2], const int a_size[2], double m, emxArray_real_T *b);
extern void e_repmat(const double a_data[3], double b_data[147], int b_size[2]);
extern void f_repmat(const double a[3], double b[147]);
extern void g_repmat(const emxArray_real_T *a, double n, emxArray_real_T *b);
extern void repmat(double b[49]);
#endif
/* End of code generation (repmat.h) */
