/*
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "sortrows.h"
#include "correspondence_emxutil.h"

/* Function Declarations */
static boolean_T b_eml_sort_le(const emxArray_real_T *v, const int col[2], int
  irow1, int irow2);
static boolean_T eml_sort_le(const emxArray_real_T *v, const int col_data[2],
  int irow1, int irow2);

/* Function Definitions */
static boolean_T b_eml_sort_le(const emxArray_real_T *v, const int col[2], int
  irow1, int irow2)
{
  boolean_T p;
  int k;
  boolean_T exitg1;
  int b_col;
  int coloffset;
  boolean_T b1;
  p = TRUE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 2)) {
    if (col[k] < 0) {
      b_col = -col[k];
    } else {
      b_col = col[k];
    }

    coloffset = (b_col - 1) * v->size[0] - 1;
    if ((v->data[coloffset + irow1] == v->data[coloffset + irow2]) || (rtIsNaN
         (v->data[coloffset + irow1]) && rtIsNaN(v->data[coloffset + irow2]))) {
      b1 = TRUE;
    } else {
      b1 = FALSE;
    }

    if (!b1) {
      if ((v->data[coloffset + irow1] <= v->data[coloffset + irow2]) || rtIsNaN
          (v->data[coloffset + irow2])) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return p;
}

static boolean_T eml_sort_le(const emxArray_real_T *v, const int col_data[2],
  int irow1, int irow2)
{
  boolean_T p;
  int k;
  boolean_T exitg1;
  int b_col_data;
  int coloffset;
  boolean_T b0;
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
    if ((v->data[coloffset + irow1] == v->data[coloffset + irow2]) || (rtIsNaN
         (v->data[coloffset + irow1]) && rtIsNaN(v->data[coloffset + irow2]))) {
      b0 = TRUE;
    } else {
      b0 = FALSE;
    }

    if (!b0) {
      if (col_data[k] < 0) {
        if ((v->data[coloffset + irow1] >= v->data[coloffset + irow2]) ||
            rtIsNaN(v->data[coloffset + irow1])) {
          p = TRUE;
        } else {
          p = FALSE;
        }
      } else if ((v->data[coloffset + irow1] <= v->data[coloffset + irow2]) ||
                 rtIsNaN(v->data[coloffset + irow2])) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return p;
}

void b_sortrows(emxArray_real_T *y)
{
  int col[2];
  int k;
  emxArray_int32_T *idx;
  emxArray_int32_T *idx0;
  int i2;
  int i;
  int j;
  int pEnd;
  int p;
  int q;
  int qEnd;
  int kEnd;
  emxArray_real_T *ycol;
  for (k = 0; k < 2; k++) {
    col[k] = k + 1;
  }

  emxInit_int32_T(&idx, 1);
  k = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)idx, k, (int)sizeof(int));
  if (y->size[0] == 0) {
    for (k = 1; k <= y->size[0]; k++) {
      idx->data[k - 1] = k;
    }
  } else {
    for (k = 1; k <= y->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    for (k = 1; k <= y->size[0] - 1; k += 2) {
      if (b_eml_sort_le(y, col, k, k + 1)) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(&idx0, 1);
    k = idx0->size[0];
    idx0->size[0] = y->size[0];
    emxEnsureCapacity((emxArray__common *)idx0, k, (int)sizeof(int));
    i2 = y->size[0];
    for (k = 0; k < i2; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < y->size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < y->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > y->size[0] + 1) {
          qEnd = y->size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if (b_eml_sort_le(y, col, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                idx0->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                idx0->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  b_emxInit_real_T(&ycol, 1);
  i2 = y->size[0];
  col[0] = y->size[0];
  k = ycol->size[0];
  ycol->size[0] = col[0];
  emxEnsureCapacity((emxArray__common *)ycol, k, (int)sizeof(double));
  for (j = 0; j < 2; j++) {
    for (i = 0; i + 1 <= i2; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }

    for (i = 0; i + 1 <= i2; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

void sortrows(emxArray_real_T *y)
{
  int col_data[2];
  int k;
  emxArray_int32_T *idx;
  int i2;
  emxArray_int32_T *idx0;
  int i;
  int j;
  int pEnd;
  int p;
  int q;
  int qEnd;
  int kEnd;
  emxArray_real_T *ycol;
  for (k = 0; k < 2; k++) {
    col_data[k] = k + 1;
  }

  emxInit_int32_T(&idx, 1);
  i2 = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)idx, i2, (int)sizeof(int));
  if (y->size[0] == 0) {
    for (k = 1; k <= y->size[0]; k++) {
      idx->data[k - 1] = k;
    }
  } else {
    for (k = 1; k <= y->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    for (k = 1; k <= y->size[0] - 1; k += 2) {
      if (eml_sort_le(y, col_data, k, k + 1)) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(&idx0, 1);
    i2 = idx0->size[0];
    idx0->size[0] = y->size[0];
    emxEnsureCapacity((emxArray__common *)idx0, i2, (int)sizeof(int));
    k = y->size[0];
    for (i2 = 0; i2 < k; i2++) {
      idx0->data[i2] = 1;
    }

    i = 2;
    while (i < y->size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < y->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > y->size[0] + 1) {
          qEnd = y->size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if (eml_sort_le(y, col_data, idx->data[p - 1], idx->data[q - 1])) {
            idx0->data[k] = idx->data[p - 1];
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                idx0->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q - 1];
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                idx0->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  b_emxInit_real_T(&ycol, 1);
  pEnd = y->size[0];
  k = y->size[0];
  i2 = ycol->size[0];
  ycol->size[0] = k;
  emxEnsureCapacity((emxArray__common *)ycol, i2, (int)sizeof(double));
  for (j = 0; j < 2; j++) {
    for (i = 0; i + 1 <= pEnd; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }

    for (i = 0; i + 1 <= pEnd; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }

  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

/* End of code generation (sortrows.c) */
