/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "repmat.h"
#include "correspondence_emxutil.h"

/* Function Definitions */
void b_repmat(double m, emxArray_real_T *b)
{
  int mv[2];
  int outsize[2];
  int ib;
  int jcol;
  int itilerow;
  mv[0] = (int)m;
  mv[1] = 1;
  for (ib = 0; ib < 2; ib++) {
    outsize[ib] = (1 + ib) * mv[ib];
  }

  ib = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b, ib, (int)sizeof(double));
  if (outsize[0] == 0) {
  } else {
    ib = 0;
    for (jcol = 0; jcol < 2; jcol++) {
      for (itilerow = 1; itilerow <= (int)m; itilerow++) {
        b->data[ib] = 0.0;
        ib++;
      }
    }
  }
}

void c_repmat(const double a[2], double m, emxArray_real_T *b)
{
  int mv[2];
  int outsize[2];
  int ia;
  int ib;
  int iacol;
  int jcol;
  int itilerow;
  mv[0] = (int)m;
  mv[1] = 1;
  for (ia = 0; ia < 2; ia++) {
    outsize[ia] = (1 + ia) * mv[ia];
  }

  ia = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b, ia, (int)sizeof(double));
  if (outsize[0] == 0) {
  } else {
    ia = 1;
    ib = 0;
    iacol = 1;
    for (jcol = 0; jcol < 2; jcol++) {
      for (itilerow = 1; itilerow <= (int)m; itilerow++) {
        b->data[ib] = a[iacol - 1];
        ia = iacol + 1;
        ib++;
      }

      iacol = ia;
    }
  }
}

void d_repmat(const double a_data[2], const int a_size[2], double m,
              emxArray_real_T *b)
{
  int mv[2];
  int outsize[2];
  int ia;
  int ib;
  int iacol;
  int jcol;
  int itilerow;
  mv[0] = (int)m;
  mv[1] = 1;
  for (ia = 0; ia < 2; ia++) {
    outsize[ia] = a_size[ia] * mv[ia];
  }

  ia = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b, ia, (int)sizeof(double));
  if (outsize[0] == 0) {
  } else {
    ia = 1;
    ib = 0;
    iacol = 1;
    for (jcol = 0; jcol < 2; jcol++) {
      for (itilerow = 1; itilerow <= (int)m; itilerow++) {
        b->data[ib] = a_data[iacol - 1];
        ia = iacol + 1;
        ib++;
      }

      iacol = ia;
    }
  }
}

void e_repmat(const double a_data[3], double b_data[147], int b_size[2])
{
  int ib;
  static const signed char iv0[2] = { 3, 49 };

  int jtilecol;
  int ia;
  int k;
  for (ib = 0; ib < 2; ib++) {
    b_size[ib] = iv0[ib];
  }

  ib = 0;
  for (jtilecol = 0; jtilecol < 49; jtilecol++) {
    ia = 0;
    for (k = 0; k < 3; k++) {
      b_data[ib] = a_data[ia];
      ia++;
      ib++;
    }
  }
}

void f_repmat(const double a[3], double b[147])
{
  int ia;
  int ib;
  int iacol;
  int jcol;
  int itilerow;
  ia = 1;
  ib = 0;
  iacol = 1;
  for (jcol = 0; jcol < 3; jcol++) {
    for (itilerow = 0; itilerow < 49; itilerow++) {
      b[ib] = a[iacol - 1];
      ia = iacol + 1;
      ib++;
    }

    iacol = ia;
  }
}

void g_repmat(const emxArray_real_T *a, double n, emxArray_real_T *b)
{
  int mv[2];
  int b_a[2];
  int outsize[2];
  int ib;
  int jtilecol;
  int ia;
  int k;
  mv[0] = 1;
  mv[1] = (int)n;
  b_a[0] = a->size[0];
  b_a[1] = 1;
  for (ib = 0; ib < 2; ib++) {
    outsize[ib] = b_a[ib] * mv[ib];
  }

  ib = b->size[0] * b->size[1];
  b->size[0] = outsize[0];
  b->size[1] = outsize[1];
  emxEnsureCapacity((emxArray__common *)b, ib, (int)sizeof(double));
  if ((outsize[0] == 0) || (outsize[1] == 0)) {
  } else {
    ib = 0;
    for (jtilecol = 1; jtilecol <= (int)n; jtilecol++) {
      ia = 0;
      for (k = 1; k <= a->size[0]; k++) {
        b->data[ib] = a->data[ia];
        ia++;
        ib++;
      }
    }
  }
}

void repmat(double b[49])
{
  int ib;
  int jtilecol;
  int iacol;
  int jcol;
  ib = 0;
  for (jtilecol = 0; jtilecol < 7; jtilecol++) {
    iacol = 1;
    for (jcol = 0; jcol < 7; jcol++) {
      b[ib] = -3.0 + ((double)iacol - 1.0);
      ib++;
      iacol++;
    }
  }
}

/* End of code generation (repmat.c) */
