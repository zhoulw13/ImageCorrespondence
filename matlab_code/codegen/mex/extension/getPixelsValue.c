/*
 * getPixelsValue.c
 *
 * Code generation for function 'getPixelsValue'
 *
 * C source code generated on: Sat May 21 13:33:56 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "getPixelsValue.h"
#include "extension_data.h"

/* Variable Definitions */
static emlrtBCInfo v_emlrtBCI = { -1, -1, 6, 19, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 6, 32, "img", "getPixelsValue",
  "F:/Git/correspondence/matlab_code/getPixelsValue.m", 0 };

/* Function Definitions */
void getPixelsValue(const emlrtStack *sp, const emxArray_real_T *img, const
                    int32_T b_index[147], real_T val[147])
{
  int32_T i;
  int32_T i18;
  int32_T c_index;
  int32_T d_index;
  for (i = 0; i < 49; i++) {
    i18 = img->size[1];
    c_index = b_index[49 + i];
    c_index = emlrtDynamicBoundsCheckFastR2012b(c_index, 1, i18, &w_emlrtBCI, sp);
    i18 = img->size[0];
    d_index = emlrtDynamicBoundsCheckFastR2012b(b_index[i], 1, i18, &v_emlrtBCI,
      sp);
    for (i18 = 0; i18 < 3; i18++) {
      val[i + 49 * i18] = img->data[((d_index + img->size[0] * (c_index - 1)) +
        img->size[0] * img->size[1] * i18) - 1];
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (getPixelsValue.c) */
