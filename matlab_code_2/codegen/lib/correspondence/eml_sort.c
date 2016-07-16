/*
 * eml_sort.c
 *
 * Code generation for function 'eml_sort'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "eml_sort.h"

/* Function Definitions */
void eml_sort(const double x[49], double y[49])
{
  signed char idx[49];
  int k;
  boolean_T p;
  signed char idx0[49];
  int i;
  int i2;
  int j;
  int pEnd;
  int b_p;
  int q;
  int qEnd;
  int kEnd;
  for (k = 0; k < 49; k++) {
    idx[k] = (signed char)(k + 1);
  }

  for (k = 0; k < 47; k += 2) {
    if ((x[k] <= x[k + 1]) || rtIsNaN(x[k + 1])) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (p) {
    } else {
      idx[k] = (signed char)(k + 2);
      idx[k + 1] = (signed char)(k + 1);
    }
  }

  for (i = 0; i < 49; i++) {
    idx0[i] = 1;
  }

  i = 2;
  while (i < 49) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < 50; pEnd = qEnd + i) {
      b_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > 50) {
        qEnd = 50;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if ((x[idx[b_p - 1] - 1] <= x[idx[q] - 1]) || rtIsNaN(x[idx[q] - 1])) {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (p) {
          idx0[k] = idx[b_p - 1];
          b_p++;
          if (b_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              idx0[k] = idx[q];
              q++;
            }
          }
        } else {
          idx0[k] = idx[q];
          q++;
          if (q + 1 == qEnd) {
            while (b_p < pEnd) {
              k++;
              idx0[k] = idx[b_p - 1];
              b_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx[(j + k) - 1] = idx0[k];
      }

      j = qEnd;
    }

    i = i2;
  }

  for (k = 0; k < 49; k++) {
    y[k] = x[idx[k] - 1];
  }
}

/* End of code generation (eml_sort.c) */
