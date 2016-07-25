/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 * C source code generated on: Sun Jul 24 09:09:28 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "issorted.h"

/* Function Definitions */
boolean_T b_issorted(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  int32_T b_k;
  boolean_T exitg2;
  int32_T coloffset;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T b4;
  boolean_T guard1 = FALSE;
  y = TRUE;
  if (x->size[0] == 0) {
  } else {
    k = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (k <= x->size[0] - 1)) {
      p = TRUE;
      b_k = 0;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (b_k < 2)) {
        coloffset = b_k * x->size[0];
        guard2 = FALSE;
        guard3 = FALSE;
        if (x->data[(coloffset + k) - 1] == x->data[coloffset + k]) {
          guard3 = TRUE;
        } else if (muDoubleScalarIsNaN(x->data[(coloffset + k) - 1])) {
          if (muDoubleScalarIsNaN(x->data[coloffset + k])) {
            guard3 = TRUE;
          } else {
            guard2 = TRUE;
          }
        } else {
          guard2 = TRUE;
        }

        if (guard3 == TRUE) {
          b4 = TRUE;
        }

        if (guard2 == TRUE) {
          b4 = FALSE;
        }

        if (!b4) {
          guard1 = FALSE;
          if (x->data[(coloffset + k) - 1] <= x->data[coloffset + k]) {
            guard1 = TRUE;
          } else if (muDoubleScalarIsNaN(x->data[coloffset + k])) {
            guard1 = TRUE;
          } else {
            p = FALSE;
          }

          if (guard1 == TRUE) {
            p = TRUE;
          }

          exitg2 = TRUE;
        } else {
          b_k++;
        }
      }

      if (!p) {
        y = FALSE;
        exitg1 = TRUE;
      } else {
        k++;
      }
    }
  }

  return y;
}

boolean_T eml_sort_le(const emxArray_real_T *v, const int32_T col_data[2],
                      int32_T irow1, int32_T irow2)
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  int32_T b_col_data;
  int32_T coloffset;
  boolean_T guard3 = FALSE;
  boolean_T guard4 = FALSE;
  boolean_T b2;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;
  p = TRUE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k <= 1)) {
    if (col_data[k] < 0) {
      b_col_data = -col_data[k];
    } else {
      b_col_data = col_data[k];
    }

    coloffset = (b_col_data - 1) * v->size[0] - 1;
    guard3 = FALSE;
    guard4 = FALSE;
    if (v->data[coloffset + irow1] == v->data[coloffset + irow2]) {
      guard4 = TRUE;
    } else if (muDoubleScalarIsNaN(v->data[coloffset + irow1])) {
      if (muDoubleScalarIsNaN(v->data[coloffset + irow2])) {
        guard4 = TRUE;
      } else {
        guard3 = TRUE;
      }
    } else {
      guard3 = TRUE;
    }

    if (guard4 == TRUE) {
      b2 = TRUE;
    }

    if (guard3 == TRUE) {
      b2 = FALSE;
    }

    if (!b2) {
      if (col_data[k] < 0) {
        guard2 = FALSE;
        if (v->data[coloffset + irow1] >= v->data[coloffset + irow2]) {
          guard2 = TRUE;
        } else if (muDoubleScalarIsNaN(v->data[coloffset + irow1])) {
          guard2 = TRUE;
        } else {
          p = FALSE;
        }

        if (guard2 == TRUE) {
          p = TRUE;
        }
      } else {
        guard1 = FALSE;
        if (v->data[coloffset + irow1] <= v->data[coloffset + irow2]) {
          guard1 = TRUE;
        } else if (muDoubleScalarIsNaN(v->data[coloffset + irow2])) {
          guard1 = TRUE;
        } else {
          p = FALSE;
        }

        if (guard1 == TRUE) {
          p = TRUE;
        }
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return p;
}

boolean_T issorted(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T col_data[2];
  int32_T k;
  boolean_T exitg1;
  y = TRUE;
  if (x->size[0] == 0) {
  } else {
    col_data[0] = 1;
    col_data[1] = 2;
    k = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (k <= x->size[0] - 1)) {
      if (!eml_sort_le(x, col_data, k, k + 1)) {
        y = FALSE;
        exitg1 = TRUE;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (issorted.c) */
