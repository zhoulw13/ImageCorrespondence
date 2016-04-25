/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Sun Apr 24 19:21:27 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "getPixelsValue.h"
#include "segmentation_emxutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRTEInfo gc_emlrtRTEI = { 1, 18, "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m" };

/* Function Definitions */
void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, const
                    emxArray_int32_T *b_index, emxArray_real_T *val)
{
  int32_T index_idx_0;
  int32_T i14;
  int32_T i;
  int32_T i15;
  int32_T i16;
  int32_T i17;
  int32_T i18;
  index_idx_0 = b_index->size[0];
  i14 = val->size[0] * val->size[1];
  val->size[0] = index_idx_0;
  val->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)val, i14, (int32_T)sizeof(real_T),
                    &gc_emlrtRTEI);
  index_idx_0 = b_index->size[0] * 3;
  for (i14 = 0; i14 < index_idx_0; i14++) {
    val->data[i14] = 0.0;
  }

  i = 1;
  while (i - 1 <= b_index->size[0] - 1) {
    index_idx_0 = val->size[0];
    emlrtDynamicBoundsCheckFastR2012b(i, 1, index_idx_0, &u_emlrtBCI, sp);
    index_idx_0 = img->size[0];
    for (i14 = 0; i14 < 3; i14++) {
      i15 = img->size[0];
      i16 = b_index->size[0];
      i16 = b_index->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i16,
        &mb_emlrtBCI, sp) - 1];
      i17 = img->size[1];
      i18 = b_index->size[0];
      i18 = b_index->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i18,
        &ob_emlrtBCI, sp) + b_index->size[0]) - 1];
      val->data[(i + val->size[0] * i14) - 1] = img->data
        [(emlrtDynamicBoundsCheckFastR2012b(i16, 1, i15, &lb_emlrtBCI, sp) +
          index_idx_0 * (emlrtDynamicBoundsCheckFastR2012b(i18, 1, i17,
            &nb_emlrtBCI, sp) - 1)) - 1];
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (getPixelsValue.c) */
