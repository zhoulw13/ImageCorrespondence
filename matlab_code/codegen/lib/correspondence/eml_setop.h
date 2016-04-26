/*
 * eml_setop.h
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

#ifndef __EML_SETOP_H__
#define __EML_SETOP_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "correspondence_types.h"

/* Function Declarations */
extern void b_do_rows(const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, int ib_data[1], int ib_size[1]);
extern void do_rows(const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, emxArray_int32_T *ib);
#endif
/* End of code generation (eml_setop.h) */
