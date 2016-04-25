/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Sun Apr 24 19:39:55 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "getPixelsValue.h"
#include "merging_emxutil.h"
#include "merging_data.h"

/* Variable Definitions */
static emlrtRTEInfo sb_emlrtRTEI = { 1, 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 6, 19, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 6, 32, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 6, 9, "val", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 6, 25, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 6, 38, "index", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

/* Function Definitions */
void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, const
                    emxArray_int32_T *b_index, emxArray_real_T *val)
{
  int32_T index_idx_0;
  int32_T i13;
  int32_T i;
  int32_T c_index;
  index_idx_0 = b_index->size[0];
  i13 = val->size[0] * val->size[1];
  val->size[0] = index_idx_0;
  val->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)val, i13, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  index_idx_0 = b_index->size[0] * 3;
  for (i13 = 0; i13 < index_idx_0; i13++) {
    val->data[i13] = 0.0;
  }

  i = 1;
  while (i - 1 <= b_index->size[0] - 1) {
    index_idx_0 = val->size[0];
    emlrtDynamicBoundsCheckFastR2012b(i, 1, index_idx_0, &u_emlrtBCI, sp);
    i13 = img->size[1];
    index_idx_0 = b_index->size[0];
    index_idx_0 = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
      index_idx_0, &w_emlrtBCI, sp) + b_index->size[0]) - 1];
    c_index = emlrtDynamicBoundsCheckFastR2012b(index_idx_0, 1, i13, &t_emlrtBCI,
      sp);
    i13 = img->size[0];
    index_idx_0 = b_index->size[0];
    index_idx_0 = b_index->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
      index_idx_0, &v_emlrtBCI, sp) - 1];
    index_idx_0 = emlrtDynamicBoundsCheckFastR2012b(index_idx_0, 1, i13,
      &s_emlrtBCI, sp);
    for (i13 = 0; i13 < 3; i13++) {
      val->data[(i + val->size[0] * i13) - 1] = img->data[((index_idx_0 +
        img->size[0] * (c_index - 1)) + img->size[0] * img->size[1] * i13) - 1];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (getPixelsValue.c) */
