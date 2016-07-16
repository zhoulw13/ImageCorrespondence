/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 * C source code generated on: Sat May 21 10:10:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "mod.h"
#include "segmentation_emxutil.h"
#include "segmentation_data.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 38, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

static emlrtRSInfo eb_emlrtRSI = { 73, "mod",
  "D:/Program Files/MATLAB/R2013b/toolbox/eml/lib/matlab/elfun/mod.m" };

/* Function Definitions */
void b_mod(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
           emxArray_real_T *r)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  real_T b_r;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = r->size[0];
  r->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)r, k, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    st.site = &eb_emlrtRSI;
    if (y == 0.0) {
      b_r = x->data[k];
    } else if (y == muDoubleScalarFloor(y)) {
      b_r = x->data[k] - muDoubleScalarFloor(x->data[k] / y) * y;
    } else {
      b_r = x->data[k] / y;
      if (muDoubleScalarAbs(b_r - muDoubleScalarRound(b_r)) <=
          2.2204460492503131E-16 * muDoubleScalarAbs(b_r)) {
        b_r = 0.0;
      } else {
        b_r = (b_r - muDoubleScalarFloor(b_r)) * y;
      }
    }

    r->data[k] = b_r;
  }
}

/* End of code generation (mod.c) */
