/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "eml_setop.h"
#include "correspondence_emxutil.h"

/* Function Declarations */
static void b_skip_to_last_equal_row(int *k, const emxArray_real_T *x);
static unsigned char relop_rows(const emxArray_real_T *a, int arow, const
  emxArray_real_T *b, int brow);
static void skip_to_last_equal_row(int *k, const emxArray_real_T *x);

/* Function Definitions */
static void b_skip_to_last_equal_row(int *k, const emxArray_real_T *x)
{
  int j;
  boolean_T exitg1;
  int b_k;
  int32_T exitg2;
  double absxk;
  int exponent;
  boolean_T p;
  unsigned char b_p;
  j = *k - 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (*k < x->size[0])) {
    b_k = 0;
    do {
      exitg2 = 0;
      if (b_k + 1 < 3) {
        absxk = fabs(x->data[*k + x->size[0] * b_k] / 2.0);
        if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &exponent);
            absxk = ldexp(1.0, exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((fabs(x->data[*k + x->size[0] * b_k] - x->data[j + x->size[0] * b_k])
             < absxk) || (rtIsInf(x->data[j + x->size[0] * b_k]) && rtIsInf
                          (x->data[*k + x->size[0] * b_k]) && ((x->data[j +
               x->size[0] * b_k] > 0.0) == (x->data[*k + x->size[0] * b_k] > 0.0))))
        {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (p) {
          b_k++;
        } else {
          if ((x->data[j + x->size[0] * b_k] < x->data[*k + x->size[0] * b_k]) ||
              rtIsNaN(x->data[*k + x->size[0] * b_k])) {
            p = TRUE;
          } else {
            p = FALSE;
          }

          if (p) {
            b_p = 1;
          } else {
            b_p = 2;
          }

          exitg2 = 1;
        }
      } else {
        b_p = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (b_p == 0) {
      (*k)++;
    } else {
      exitg1 = TRUE;
    }
  }
}

static unsigned char relop_rows(const emxArray_real_T *a, int arow, const
  emxArray_real_T *b, int brow)
{
  unsigned char p;
  int k;
  int32_T exitg1;
  double absxk;
  int exponent;
  boolean_T b_p;
  k = 0;
  do {
    exitg1 = 0;
    if (k + 1 <= 2) {
      absxk = fabs(b->data[(brow + b->size[0] * k) - 1] / 2.0);
      if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((fabs(b->data[(brow + b->size[0] * k) - 1] - a->data[(arow + a->size[0]
             * k) - 1]) < absxk) || (rtIsInf(a->data[(arow + a->size[0] * k) - 1])
           && rtIsInf(b->data[(brow + b->size[0] * k) - 1]) && ((a->data[(arow +
              a->size[0] * k) - 1] > 0.0) == (b->data[(brow + b->size[0] * k) -
             1] > 0.0)))) {
        b_p = TRUE;
      } else {
        b_p = FALSE;
      }

      if (b_p) {
        k++;
      } else {
        if ((a->data[(arow + a->size[0] * k) - 1] < b->data[(brow + b->size[0] *
              k) - 1]) || rtIsNaN(b->data[(brow + b->size[0] * k) - 1])) {
          b_p = TRUE;
        } else {
          b_p = FALSE;
        }

        if (b_p) {
          p = 1;
        } else {
          p = 2;
        }

        exitg1 = 1;
      }
    } else {
      p = 0;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

static void skip_to_last_equal_row(int *k, const emxArray_real_T *x)
{
  int j;
  boolean_T exitg1;
  int b_k;
  int32_T exitg2;
  double absxk;
  int exponent;
  boolean_T p;
  unsigned char b_p;
  j = *k - 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (*k < x->size[0])) {
    b_k = 0;
    do {
      exitg2 = 0;
      if (b_k + 1 <= 2) {
        absxk = fabs(x->data[*k + x->size[0] * b_k] / 2.0);
        if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &exponent);
            absxk = ldexp(1.0, exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((fabs(x->data[*k + x->size[0] * b_k] - x->data[j + x->size[0] * b_k])
             < absxk) || (rtIsInf(x->data[j + x->size[0] * b_k]) && rtIsInf
                          (x->data[*k + x->size[0] * b_k]) && ((x->data[j +
               x->size[0] * b_k] > 0.0) == (x->data[*k + x->size[0] * b_k] > 0.0))))
        {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (p) {
          b_k++;
        } else {
          if ((x->data[j + x->size[0] * b_k] < x->data[*k + x->size[0] * b_k]) ||
              rtIsNaN(x->data[*k + x->size[0] * b_k])) {
            p = TRUE;
          } else {
            p = FALSE;
          }

          if (p) {
            b_p = 1;
          } else {
            b_p = 2;
          }

          exitg2 = 1;
        }
      } else {
        b_p = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (b_p == 0) {
      (*k)++;
    } else {
      exitg1 = TRUE;
    }
  }
}

void b_do_rows(const emxArray_real_T *a, const emxArray_real_T *b,
               emxArray_real_T *c, emxArray_int32_T *ia, int ib_data[1], int
               ib_size[1])
{
  int nia;
  int ibfirst;
  int nc;
  int iafirst;
  int ialast;
  int iblast;
  unsigned char r;
  int k;
  emxArray_int32_T *b_ia;
  emxArray_real_T *b_c;
  (void)ib_data;
  nia = a->size[0];
  ibfirst = c->size[0] * c->size[1];
  c->size[0] = nia;
  c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)c, ibfirst, (int)sizeof(double));
  nc = -1;
  ibfirst = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity((emxArray__common *)ia, ibfirst, (int)sizeof(int));
  nia = -1;
  ib_size[0] = 0;
  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (ibfirst <= b->size[0])) {
    skip_to_last_equal_row(&ialast, a);
    b_skip_to_last_equal_row(&iblast, b);
    r = relop_rows(a, iafirst, b, ibfirst);
    if (r == 0) {
      ialast++;
      iafirst = ialast;
      iblast++;
      ibfirst = iblast;
    } else if (r == 1) {
      nc++;
      nia++;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
      }

      ia->data[nia] = iafirst;
      ialast++;
      iafirst = ialast;
    } else {
      iblast++;
      ibfirst = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    skip_to_last_equal_row(&ialast, a);
    nc++;
    nia++;
    for (k = 0; k < 2; k++) {
      c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
    }

    ia->data[nia] = iafirst;
    ialast++;
  }

  if (1 > nia + 1) {
    iafirst = -1;
  } else {
    iafirst = nia;
  }

  emxInit_int32_T(&b_ia, 1);
  ibfirst = b_ia->size[0];
  b_ia->size[0] = iafirst + 1;
  emxEnsureCapacity((emxArray__common *)b_ia, ibfirst, (int)sizeof(int));
  for (ibfirst = 0; ibfirst <= iafirst; ibfirst++) {
    b_ia->data[ibfirst] = ia->data[ibfirst];
  }

  ibfirst = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity((emxArray__common *)ia, ibfirst, (int)sizeof(int));
  iafirst = b_ia->size[0];
  for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
    ia->data[ibfirst] = b_ia->data[ibfirst];
  }

  emxFree_int32_T(&b_ia);
  if (1 > nc + 1) {
    iafirst = -1;
  } else {
    iafirst = nc;
  }

  emxInit_real_T(&b_c, 2);
  ibfirst = b_c->size[0] * b_c->size[1];
  b_c->size[0] = iafirst + 1;
  b_c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b_c, ibfirst, (int)sizeof(double));
  for (ibfirst = 0; ibfirst < 2; ibfirst++) {
    for (nia = 0; nia <= iafirst; nia++) {
      b_c->data[nia + b_c->size[0] * ibfirst] = c->data[nia + c->size[0] *
        ibfirst];
    }
  }

  ibfirst = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)c, ibfirst, (int)sizeof(double));
  for (ibfirst = 0; ibfirst < 2; ibfirst++) {
    iafirst = b_c->size[0];
    for (nia = 0; nia < iafirst; nia++) {
      c->data[nia + c->size[0] * ibfirst] = b_c->data[nia + b_c->size[0] *
        ibfirst];
    }
  }

  emxFree_real_T(&b_c);
}

void do_rows(const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T
             *c, emxArray_int32_T *ia, emxArray_int32_T *ib)
{
  int iafirst;
  int ialast;
  int nc;
  int nia;
  int nib;
  int ibfirst;
  int iblast;
  unsigned char r;
  int k;
  emxArray_int32_T *b_ia;
  emxArray_int32_T *b_ib;
  emxArray_real_T *b_c;
  iafirst = a->size[0] + b->size[0];
  ialast = c->size[0] * c->size[1];
  c->size[0] = iafirst;
  c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)c, ialast, (int)sizeof(double));
  nc = -1;
  ialast = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity((emxArray__common *)ia, ialast, (int)sizeof(int));
  nia = -1;
  ialast = ib->size[0];
  ib->size[0] = b->size[0];
  emxEnsureCapacity((emxArray__common *)ib, ialast, (int)sizeof(int));
  nib = -1;
  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a->size[0]) && (ibfirst <= b->size[0])) {
    skip_to_last_equal_row(&ialast, a);
    b_skip_to_last_equal_row(&iblast, b);
    r = relop_rows(a, iafirst, b, ibfirst);
    if (r == 0) {
      nc++;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
      }

      nia++;
      ia->data[nia] = iafirst;
      ialast++;
      iafirst = ialast;
      iblast++;
      ibfirst = iblast;
    } else if (r == 1) {
      nc++;
      nia++;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
      }

      ia->data[nia] = iafirst;
      ialast++;
      iafirst = ialast;
    } else {
      nc++;
      nib++;
      for (k = 0; k < 2; k++) {
        c->data[nc + c->size[0] * k] = b->data[(ibfirst + b->size[0] * k) - 1];
      }

      ib->data[nib] = ibfirst;
      iblast++;
      ibfirst = iblast;
    }
  }

  while (ialast <= a->size[0]) {
    iafirst = ialast;
    skip_to_last_equal_row(&ialast, a);
    nc++;
    nia++;
    for (k = 0; k < 2; k++) {
      c->data[nc + c->size[0] * k] = a->data[(iafirst + a->size[0] * k) - 1];
    }

    ia->data[nia] = iafirst;
    ialast++;
  }

  while (iblast <= b->size[0]) {
    ibfirst = iblast;
    b_skip_to_last_equal_row(&iblast, b);
    nc++;
    nib++;
    for (k = 0; k < 2; k++) {
      c->data[nc + c->size[0] * k] = b->data[(ibfirst + b->size[0] * k) - 1];
    }

    ib->data[nib] = ibfirst;
    iblast++;
  }

  if (1 > nia + 1) {
    ibfirst = -1;
  } else {
    ibfirst = nia;
  }

  emxInit_int32_T(&b_ia, 1);
  ialast = b_ia->size[0];
  b_ia->size[0] = ibfirst + 1;
  emxEnsureCapacity((emxArray__common *)b_ia, ialast, (int)sizeof(int));
  for (ialast = 0; ialast <= ibfirst; ialast++) {
    b_ia->data[ialast] = ia->data[ialast];
  }

  ialast = ia->size[0];
  ia->size[0] = b_ia->size[0];
  emxEnsureCapacity((emxArray__common *)ia, ialast, (int)sizeof(int));
  ibfirst = b_ia->size[0];
  for (ialast = 0; ialast < ibfirst; ialast++) {
    ia->data[ialast] = b_ia->data[ialast];
  }

  emxFree_int32_T(&b_ia);
  if (1 > nib + 1) {
    ibfirst = -1;
  } else {
    ibfirst = nib;
  }

  emxInit_int32_T(&b_ib, 1);
  ialast = b_ib->size[0];
  b_ib->size[0] = ibfirst + 1;
  emxEnsureCapacity((emxArray__common *)b_ib, ialast, (int)sizeof(int));
  for (ialast = 0; ialast <= ibfirst; ialast++) {
    b_ib->data[ialast] = ib->data[ialast];
  }

  ialast = ib->size[0];
  ib->size[0] = b_ib->size[0];
  emxEnsureCapacity((emxArray__common *)ib, ialast, (int)sizeof(int));
  ibfirst = b_ib->size[0];
  for (ialast = 0; ialast < ibfirst; ialast++) {
    ib->data[ialast] = b_ib->data[ialast];
  }

  emxFree_int32_T(&b_ib);
  if (1 > nc + 1) {
    ibfirst = -1;
  } else {
    ibfirst = nc;
  }

  emxInit_real_T(&b_c, 2);
  ialast = b_c->size[0] * b_c->size[1];
  b_c->size[0] = ibfirst + 1;
  b_c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b_c, ialast, (int)sizeof(double));
  for (ialast = 0; ialast < 2; ialast++) {
    for (iafirst = 0; iafirst <= ibfirst; iafirst++) {
      b_c->data[iafirst + b_c->size[0] * ialast] = c->data[iafirst + c->size[0] *
        ialast];
    }
  }

  ialast = c->size[0] * c->size[1];
  c->size[0] = b_c->size[0];
  c->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)c, ialast, (int)sizeof(double));
  for (ialast = 0; ialast < 2; ialast++) {
    ibfirst = b_c->size[0];
    for (iafirst = 0; iafirst < ibfirst; iafirst++) {
      c->data[iafirst + c->size[0] * ialast] = b_c->data[iafirst + b_c->size[0] *
        ialast];
    }
  }

  emxFree_real_T(&b_c);
}

/* End of code generation (eml_setop.c) */
