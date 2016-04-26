/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "getPixelsValue.h"
#include "mod.h"
#include "correspondence_emxutil.h"
#include "correspondence_rtwutil.h"

/* Function Definitions */
void b_getPixelsValue(const emxArray_real_T *img, const emxArray_int32_T
                      *b_index, emxArray_real_T *val)
{
  int index_idx_0;
  int i20;
  int c_index;
  int d_index;
  index_idx_0 = b_index->size[0];
  i20 = val->size[0] * val->size[1];
  val->size[0] = index_idx_0;
  val->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)val, i20, (int)sizeof(double));
  index_idx_0 = b_index->size[0] * 3;
  for (i20 = 0; i20 < index_idx_0; i20++) {
    val->data[i20] = 0.0;
  }

  for (index_idx_0 = 0; index_idx_0 < b_index->size[0]; index_idx_0++) {
    c_index = b_index->data[index_idx_0 + b_index->size[0]];
    d_index = b_index->data[index_idx_0];
    for (i20 = 0; i20 < 3; i20++) {
      val->data[index_idx_0 + val->size[0] * i20] = img->data[((d_index +
        img->size[0] * (c_index - 1)) + img->size[0] * img->size[1] * i20) - 1];
    }
  }
}

void c_getPixelsValue(const emxArray_real_T *img, const emxArray_real_T *b_index,
                      emxArray_real_T *val)
{
  emxArray_int32_T *c_index;
  int i28;
  int loop_ub;
  double d4;
  int d_index;
  int e_index;
  b_emxInit_int32_T(&c_index, 2);
  i28 = c_index->size[0] * c_index->size[1];
  c_index->size[0] = b_index->size[0];
  c_index->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)c_index, i28, (int)sizeof(int));
  loop_ub = b_index->size[0] * b_index->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    d4 = rt_roundd_snf(b_index->data[i28]);
    if (d4 < 2.147483648E+9) {
      if (d4 >= -2.147483648E+9) {
        d_index = (int)d4;
      } else {
        d_index = MIN_int32_T;
      }
    } else if (d4 >= 2.147483648E+9) {
      d_index = MAX_int32_T;
    } else {
      d_index = 0;
    }

    c_index->data[i28] = d_index;
  }

  loop_ub = c_index->size[0];
  i28 = val->size[0] * val->size[1];
  val->size[0] = loop_ub;
  val->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)val, i28, (int)sizeof(double));
  loop_ub = c_index->size[0] * 3;
  for (i28 = 0; i28 < loop_ub; i28++) {
    val->data[i28] = 0.0;
  }

  for (loop_ub = 0; loop_ub < c_index->size[0]; loop_ub++) {
    d_index = c_index->data[loop_ub + c_index->size[0]];
    e_index = c_index->data[loop_ub];
    for (i28 = 0; i28 < 3; i28++) {
      val->data[loop_ub + val->size[0] * i28] = img->data[((e_index + img->size
        [0] * (d_index - 1)) + img->size[0] * img->size[1] * i28) - 1];
    }
  }

  emxFree_int32_T(&c_index);
}

void getPixelsValue(const emxArray_real_T *img, const int b_index[147], double
                    val[147])
{
  int i;
  int i7;
  for (i = 0; i < 49; i++) {
    for (i7 = 0; i7 < 3; i7++) {
      val[i + 49 * i7] = img->data[((b_index[i] + img->size[0] * (b_index[49 + i]
        - 1)) + img->size[0] * img->size[1] * i7) - 1];
    }
  }
}

/* End of code generation (getPixelsValue.c) */
