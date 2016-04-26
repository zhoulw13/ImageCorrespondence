/*
 * pinv.c
 *
 * Code generation for function 'pinv'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "pinv.h"
#include "correspondence_emxutil.h"

/* Function Declarations */
static void b_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0);
static double b_eml_xnrm2(int n, const emxArray_real_T *x, int ix0);
static void b_eml_xscal(int n, double a, emxArray_real_T *x, int ix0);
static void c_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0);
static double eml_div(double x, double y);
static void eml_pinv(const emxArray_real_T *A, emxArray_real_T *X);
static void eml_xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0);
static double eml_xdotc(int n, const emxArray_real_T *x, int ix0, const
  emxArray_real_T *y, int iy0);
static void eml_xgesvd(const emxArray_real_T *A, emxArray_real_T *U,
  emxArray_real_T *S, emxArray_real_T *V);
static double eml_xnrm2(int n, const emxArray_real_T *x, int ix0);
static void eml_xrot(int n, emxArray_real_T *x, int ix0, int iy0, double c,
                     double s);
static void eml_xrotg(double *a, double *b, double *c, double *s);
static void eml_xscal(int n, double a, emxArray_real_T *x, int ix0);
static void eml_xswap(int n, emxArray_real_T *x, int ix0, int iy0);

/* Function Definitions */
static void b_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * x->data[ix];
      ix++;
      iy++;
    }
  }
}

static double b_eml_xnrm2(int n, const emxArray_real_T *x, int ix0)
{
  double y;
  double scale;
  int kend;
  int k;
  double absxk;
  double t;
  y = 0.0;
  if (n < 1) {
  } else if (n == 1) {
    y = fabs(x->data[ix0 - 1]);
  } else {
    scale = 2.2250738585072014E-308;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = fabs(x->data[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = 1.0 + y * t * t;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

static void b_eml_xscal(int n, double a, emxArray_real_T *x, int ix0)
{
  int i34;
  int k;
  i34 = (ix0 + n) - 1;
  for (k = ix0; k <= i34; k++) {
    x->data[k - 1] *= a;
  }
}

static void c_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * x->data[ix];
      ix++;
      iy++;
    }
  }
}

static double eml_div(double x, double y)
{
  return x / y;
}

static void eml_pinv(const emxArray_real_T *A, emxArray_real_T *X)
{
  int vcol;
  int unnamed_idx_1;
  int i14;
  emxArray_real_T *V;
  emxArray_real_T *U;
  emxArray_real_T *S;
  emxArray_real_T *s;
  double tol;
  int r;
  int ic;
  int br;
  int ar;
  int ib;
  int ia;
  int i15;
  vcol = A->size[1];
  unnamed_idx_1 = A->size[0];
  i14 = X->size[0] * X->size[1];
  X->size[0] = vcol;
  emxEnsureCapacity((emxArray__common *)X, i14, (int)sizeof(double));
  i14 = X->size[0] * X->size[1];
  X->size[1] = unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)X, i14, (int)sizeof(double));
  vcol *= unnamed_idx_1;
  for (i14 = 0; i14 < vcol; i14++) {
    X->data[i14] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    emxInit_real_T(&V, 2);
    emxInit_real_T(&U, 2);
    emxInit_real_T(&S, 2);
    b_emxInit_real_T(&s, 1);
    eml_xgesvd(A, U, s, V);
    vcol = s->size[0];
    i14 = S->size[0] * S->size[1];
    S->size[0] = vcol;
    emxEnsureCapacity((emxArray__common *)S, i14, (int)sizeof(double));
    vcol = s->size[0];
    i14 = S->size[0] * S->size[1];
    S->size[1] = vcol;
    emxEnsureCapacity((emxArray__common *)S, i14, (int)sizeof(double));
    vcol = s->size[0] * s->size[0];
    for (i14 = 0; i14 < vcol; i14++) {
      S->data[i14] = 0.0;
    }

    for (vcol = 0; vcol < s->size[0]; vcol++) {
      S->data[vcol + S->size[0] * vcol] = s->data[vcol];
    }

    emxFree_real_T(&s);
    tol = (double)A->size[0] * S->data[0] * 2.2204460492503131E-16;
    r = 0;
    vcol = 0;
    while ((vcol + 1 <= A->size[1]) && (S->data[vcol + S->size[0] * vcol] > tol))
    {
      r++;
      vcol++;
    }

    if (r > 0) {
      vcol = 1;
      for (unnamed_idx_1 = 0; unnamed_idx_1 + 1 <= r; unnamed_idx_1++) {
        tol = 1.0 / S->data[unnamed_idx_1 + S->size[0] * unnamed_idx_1];
        eml_xscal(A->size[1], tol, V, vcol);
        vcol += A->size[1];
      }

      unnamed_idx_1 = A->size[1] * (A->size[0] - 1);
      for (vcol = 0; vcol <= unnamed_idx_1; vcol += A->size[1]) {
        i14 = vcol + A->size[1];
        for (ic = vcol; ic + 1 <= i14; ic++) {
          X->data[ic] = 0.0;
        }
      }

      br = -1;
      for (vcol = 0; vcol <= unnamed_idx_1; vcol += A->size[1]) {
        ar = 0;
        br++;
        i14 = (br + A->size[0] * (r - 1)) + 1;
        for (ib = br; ib + 1 <= i14; ib += A->size[0]) {
          if (U->data[ib] != 0.0) {
            ia = ar;
            i15 = vcol + A->size[1];
            for (ic = vcol; ic + 1 <= i15; ic++) {
              ia++;
              X->data[ic] += U->data[ib] * V->data[ia - 1];
            }
          }

          ar += A->size[1];
        }
      }
    }

    emxFree_real_T(&S);
    emxFree_real_T(&U);
    emxFree_real_T(&V);
  }
}

static void eml_xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * y->data[ix];
      ix++;
      iy++;
    }
  }
}

static double eml_xdotc(int n, const emxArray_real_T *x, int ix0, const
  emxArray_real_T *y, int iy0)
{
  double d;
  int ix;
  int iy;
  int k;
  d = 0.0;
  if (n < 1) {
  } else {
    ix = ix0;
    iy = iy0;
    for (k = 1; k <= n; k++) {
      d += x->data[ix - 1] * y->data[iy - 1];
      ix++;
      iy++;
    }
  }

  return d;
}

static void eml_xgesvd(const emxArray_real_T *A, emxArray_real_T *U,
  emxArray_real_T *S, emxArray_real_T *V)
{
  emxArray_real_T *b_A;
  int i16;
  int ns;
  int minnp;
  emxArray_real_T *s;
  emxArray_real_T *e;
  emxArray_real_T *work;
  emxArray_real_T *Vf;
  int qs;
  int nrt;
  int nct;
  int q;
  int nmq;
  double ztest0;
  int jj;
  int iter;
  int m;
  double ztest;
  double tiny;
  double snorm;
  boolean_T exitg3;
  boolean_T exitg2;
  double sn;
  double sm;
  double varargin_1[5];
  boolean_T exitg1;
  double sqds;
  double b;
  emxInit_real_T(&b_A, 2);
  i16 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity((emxArray__common *)b_A, i16, (int)sizeof(double));
  ns = A->size[0] * A->size[1];
  for (i16 = 0; i16 < ns; i16++) {
    b_A->data[i16] = A->data[i16];
  }

  if (A->size[0] + 1 <= A->size[1]) {
    ns = A->size[0] + 1;
  } else {
    ns = A->size[1];
  }

  if (A->size[0] <= A->size[1]) {
    minnp = A->size[0];
  } else {
    minnp = A->size[1];
  }

  b_emxInit_real_T(&s, 1);
  i16 = s->size[0];
  s->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)s, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    s->data[i16] = 0.0;
  }

  b_emxInit_real_T(&e, 1);
  ns = A->size[1];
  i16 = e->size[0];
  e->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)e, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    e->data[i16] = 0.0;
  }

  b_emxInit_real_T(&work, 1);
  ns = A->size[0];
  i16 = work->size[0];
  work->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)work, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    work->data[i16] = 0.0;
  }

  ns = A->size[0];
  i16 = U->size[0] * U->size[1];
  U->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)U, i16, (int)sizeof(double));
  i16 = U->size[0] * U->size[1];
  U->size[1] = minnp;
  emxEnsureCapacity((emxArray__common *)U, i16, (int)sizeof(double));
  ns *= minnp;
  for (i16 = 0; i16 < ns; i16++) {
    U->data[i16] = 0.0;
  }

  emxInit_real_T(&Vf, 2);
  ns = A->size[1];
  qs = A->size[1];
  i16 = Vf->size[0] * Vf->size[1];
  Vf->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)Vf, i16, (int)sizeof(double));
  i16 = Vf->size[0] * Vf->size[1];
  Vf->size[1] = qs;
  emxEnsureCapacity((emxArray__common *)Vf, i16, (int)sizeof(double));
  ns *= qs;
  for (i16 = 0; i16 < ns; i16++) {
    Vf->data[i16] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    if (A->size[0] <= minnp) {
      i16 = A->size[0];
    } else {
      i16 = minnp;
    }

    for (ns = 0; ns + 1 <= i16; ns++) {
      U->data[ns + U->size[0] * ns] = 1.0;
    }

    i16 = A->size[1];
    for (ns = 0; ns + 1 <= i16; ns++) {
      Vf->data[ns + Vf->size[0] * ns] = 1.0;
    }
  } else {
    if (A->size[1] < 2) {
      ns = 0;
    } else {
      ns = A->size[1] - 2;
    }

    if (ns <= A->size[0]) {
      nrt = ns;
    } else {
      nrt = A->size[0];
    }

    ns = A->size[0] - 1;
    if (ns <= A->size[1]) {
      nct = ns;
    } else {
      nct = A->size[1];
    }

    if (nct >= nrt) {
      i16 = nct;
    } else {
      i16 = nrt;
    }

    for (q = 0; q + 1 <= i16; q++) {
      qs = q + A->size[0] * q;
      nmq = A->size[0] - q;
      if (q + 1 <= nct) {
        ztest0 = eml_xnrm2(nmq, b_A, qs + 1);
        if (ztest0 > 0.0) {
          if (b_A->data[qs] < 0.0) {
            ztest0 = -ztest0;
          }

          s->data[q] = ztest0;
          ztest0 = eml_div(1.0, s->data[q]);
          eml_xscal(nmq, ztest0, b_A, qs + 1);
          b_A->data[qs]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }

      for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
        ns = q + A->size[0] * jj;
        if ((q + 1 <= nct) && (s->data[q] != 0.0)) {
          ztest0 = eml_xdotc(nmq, b_A, qs + 1, b_A, ns + 1);
          ztest0 = -eml_div(ztest0, b_A->data[q + b_A->size[0] * q]);
          eml_xaxpy(nmq, ztest0, qs + 1, b_A, ns + 1);
        }

        e->data[jj] = b_A->data[ns];
      }

      if (q + 1 <= nct) {
        for (ns = q; ns + 1 <= A->size[0]; ns++) {
          U->data[ns + U->size[0] * q] = b_A->data[ns + b_A->size[0] * q];
        }
      }

      if (q + 1 <= nrt) {
        iter = (A->size[1] - q) - 1;
        ztest0 = b_eml_xnrm2(iter, e, q + 2);
        if (ztest0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            ztest0 = -ztest0;
          }

          e->data[q] = ztest0;
          ztest0 = eml_div(1.0, e->data[q]);
          b_eml_xscal(iter, ztest0, e, q + 2);
          e->data[q + 1]++;
        }

        e->data[q] = -e->data[q];
        if ((q + 2 <= A->size[0]) && (e->data[q] != 0.0)) {
          for (ns = q + 1; ns + 1 <= A->size[0]; ns++) {
            work->data[ns] = 0.0;
          }

          for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
            b_eml_xaxpy(nmq - 1, e->data[jj], b_A, (q + A->size[0] * jj) + 2,
                        work, q + 2);
          }

          for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
            ztest0 = eml_div(-e->data[jj], e->data[q + 1]);
            c_eml_xaxpy(nmq - 1, ztest0, work, q + 2, b_A, (q + A->size[0] * jj)
                        + 2);
          }
        }

        for (ns = q + 1; ns + 1 <= A->size[1]; ns++) {
          Vf->data[ns + Vf->size[0] * q] = e->data[ns];
        }
      }
    }

    if (A->size[1] <= A->size[0] + 1) {
      m = A->size[1];
    } else {
      m = A->size[0] + 1;
    }

    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }

    if (A->size[0] < m) {
      s->data[m - 1] = 0.0;
    }

    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }

    e->data[m - 1] = 0.0;
    if (nct + 1 <= minnp) {
      for (jj = nct; jj + 1 <= minnp; jj++) {
        for (ns = 1; ns <= A->size[0]; ns++) {
          U->data[(ns + U->size[0] * jj) - 1] = 0.0;
        }

        U->data[jj + U->size[0] * jj] = 1.0;
      }
    }

    for (q = nct - 1; q + 1 > 0; q--) {
      nmq = A->size[0] - q;
      qs = q + A->size[0] * q;
      if (s->data[q] != 0.0) {
        for (jj = q + 1; jj + 1 <= minnp; jj++) {
          ns = (q + A->size[0] * jj) + 1;
          ztest0 = eml_xdotc(nmq, U, qs + 1, U, ns);
          ztest0 = -eml_div(ztest0, U->data[qs]);
          eml_xaxpy(nmq, ztest0, qs + 1, U, ns);
        }

        for (ns = q; ns + 1 <= A->size[0]; ns++) {
          U->data[ns + U->size[0] * q] = -U->data[ns + U->size[0] * q];
        }

        U->data[qs]++;
        for (ns = 1; ns <= q; ns++) {
          U->data[(ns + U->size[0] * q) - 1] = 0.0;
        }
      } else {
        for (ns = 1; ns <= A->size[0]; ns++) {
          U->data[(ns + U->size[0] * q) - 1] = 0.0;
        }

        U->data[qs] = 1.0;
      }
    }

    for (q = A->size[1] - 1; q + 1 > 0; q--) {
      if ((q + 1 <= nrt) && (e->data[q] != 0.0)) {
        iter = (A->size[1] - q) - 1;
        ns = (q + A->size[1] * q) + 2;
        for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
          qs = (q + A->size[1] * jj) + 2;
          ztest0 = eml_xdotc(iter, Vf, ns, Vf, qs);
          ztest0 = -eml_div(ztest0, Vf->data[ns - 1]);
          eml_xaxpy(iter, ztest0, ns, Vf, qs);
        }
      }

      for (ns = 1; ns <= A->size[1]; ns++) {
        Vf->data[(ns + Vf->size[0] * q) - 1] = 0.0;
      }

      Vf->data[q + Vf->size[0] * q] = 1.0;
    }

    for (q = 0; q + 1 <= m; q++) {
      if (s->data[q] != 0.0) {
        ztest = fabs(s->data[q]);
        ztest0 = eml_div(s->data[q], ztest);
        s->data[q] = ztest;
        if (q + 1 < m) {
          e->data[q] = eml_div(e->data[q], ztest0);
        }

        if (q + 1 <= A->size[0]) {
          i16 = A->size[0] * q + 1;
          eml_xscal(A->size[0], ztest0, U, i16);
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        ztest = fabs(e->data[q]);
        ztest0 = eml_div(ztest, e->data[q]);
        e->data[q] = ztest;
        s->data[q + 1] *= ztest0;
        i16 = A->size[1] * (q + 1) + 1;
        eml_xscal(A->size[1], ztest0, Vf, i16);
      }
    }

    nct = m;
    iter = 0;
    tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
    snorm = 0.0;
    for (ns = 0; ns + 1 <= m; ns++) {
      ztest0 = fabs(s->data[ns]);
      ztest = fabs(e->data[ns]);
      if ((ztest0 >= ztest) || rtIsNaN(ztest)) {
      } else {
        ztest0 = ztest;
      }

      if ((snorm >= ztest0) || rtIsNaN(ztest0)) {
      } else {
        snorm = ztest0;
      }
    }

    while ((m > 0) && (!(iter >= 75))) {
      q = m - 1;
      exitg3 = FALSE;
      while (!((exitg3 == TRUE) || (q == 0))) {
        ztest0 = fabs(e->data[q - 1]);
        if ((ztest0 <= 2.2204460492503131E-16 * (fabs(s->data[q - 1]) + fabs
              (s->data[q]))) || (ztest0 <= tiny) || ((iter > 20) && (ztest0 <=
              2.2204460492503131E-16 * snorm))) {
          e->data[q - 1] = 0.0;
          exitg3 = TRUE;
        } else {
          q--;
        }
      }

      if (q == m - 1) {
        ns = 4;
      } else {
        qs = m;
        ns = m;
        exitg2 = FALSE;
        while ((exitg2 == FALSE) && (ns >= q)) {
          qs = ns;
          if (ns == q) {
            exitg2 = TRUE;
          } else {
            ztest0 = 0.0;
            if (ns < m) {
              ztest0 = fabs(e->data[ns - 1]);
            }

            if (ns > q + 1) {
              ztest0 += fabs(e->data[ns - 2]);
            }

            ztest = fabs(s->data[ns - 1]);
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <= tiny)) {
              s->data[ns - 1] = 0.0;
              exitg2 = TRUE;
            } else {
              ns--;
            }
          }
        }

        if (qs == q) {
          ns = 3;
        } else if (qs == m) {
          ns = 1;
        } else {
          ns = 2;
          q = qs;
        }
      }

      switch (ns) {
       case 1:
        ztest = e->data[m - 2];
        e->data[m - 2] = 0.0;
        for (ns = m - 2; ns + 1 >= q + 1; ns--) {
          ztest0 = s->data[ns];
          eml_xrotg(&ztest0, &ztest, &sm, &sn);
          s->data[ns] = ztest0;
          if (ns + 1 > q + 1) {
            ztest = -sn * e->data[ns - 1];
            e->data[ns - 1] *= sm;
          }

          i16 = A->size[1] * ns + 1;
          qs = A->size[1] * (m - 1) + 1;
          eml_xrot(A->size[1], Vf, i16, qs, sm, sn);
        }
        break;

       case 2:
        ztest = e->data[q - 1];
        e->data[q - 1] = 0.0;
        for (ns = q; ns + 1 <= m; ns++) {
          eml_xrotg(&s->data[ns], &ztest, &sm, &sn);
          ztest = -sn * e->data[ns];
          e->data[ns] *= sm;
          i16 = A->size[0] * ns + 1;
          qs = A->size[0] * (q - 1) + 1;
          eml_xrot(A->size[0], U, i16, qs, sm, sn);
        }
        break;

       case 3:
        varargin_1[0] = fabs(s->data[m - 1]);
        varargin_1[1] = fabs(s->data[m - 2]);
        varargin_1[2] = fabs(e->data[m - 2]);
        varargin_1[3] = fabs(s->data[q]);
        varargin_1[4] = fabs(e->data[q]);
        ns = 1;
        sn = varargin_1[0];
        if (rtIsNaN(varargin_1[0])) {
          qs = 2;
          exitg1 = FALSE;
          while ((exitg1 == FALSE) && (qs < 6)) {
            ns = qs;
            if (!rtIsNaN(varargin_1[qs - 1])) {
              sn = varargin_1[qs - 1];
              exitg1 = TRUE;
            } else {
              qs++;
            }
          }
        }

        if (ns < 5) {
          while (ns + 1 < 6) {
            if (varargin_1[ns] > sn) {
              sn = varargin_1[ns];
            }

            ns++;
          }
        }

        sm = eml_div(s->data[m - 1], sn);
        ztest0 = eml_div(s->data[m - 2], sn);
        ztest = eml_div(e->data[m - 2], sn);
        sqds = eml_div(s->data[q], sn);
        b = eml_div((ztest0 + sm) * (ztest0 - sm) + ztest * ztest, 2.0);
        ztest0 = sm * ztest;
        ztest0 *= ztest0;
        ztest = 0.0;
        if ((b != 0.0) || (ztest0 != 0.0)) {
          ztest = sqrt(b * b + ztest0);
          if (b < 0.0) {
            ztest = -ztest;
          }

          ztest = eml_div(ztest0, b + ztest);
        }

        ztest += (sqds + sm) * (sqds - sm);
        ztest0 = sqds * eml_div(e->data[q], sn);
        for (ns = q + 1; ns < m; ns++) {
          eml_xrotg(&ztest, &ztest0, &sm, &sn);
          if (ns > q + 1) {
            e->data[ns - 2] = ztest;
          }

          ztest0 = sm * s->data[ns - 1];
          ztest = sn * e->data[ns - 1];
          e->data[ns - 1] = sm * e->data[ns - 1] - sn * s->data[ns - 1];
          b = s->data[ns];
          s->data[ns] *= sm;
          i16 = A->size[1] * (ns - 1) + 1;
          qs = A->size[1] * ns + 1;
          eml_xrot(A->size[1], Vf, i16, qs, sm, sn);
          s->data[ns - 1] = ztest0 + ztest;
          ztest0 = sn * b;
          eml_xrotg(&s->data[ns - 1], &ztest0, &sm, &sn);
          ztest = sm * e->data[ns - 1] + sn * s->data[ns];
          s->data[ns] = -sn * e->data[ns - 1] + sm * s->data[ns];
          ztest0 = sn * e->data[ns];
          e->data[ns] *= sm;
          if (ns < A->size[0]) {
            i16 = A->size[0] * (ns - 1) + 1;
            qs = A->size[0] * ns + 1;
            eml_xrot(A->size[0], U, i16, qs, sm, sn);
          }
        }

        e->data[m - 2] = ztest;
        iter++;
        break;

       default:
        if (s->data[q] < 0.0) {
          s->data[q] = -s->data[q];
          i16 = A->size[1] * q + 1;
          eml_xscal(A->size[1], -1.0, Vf, i16);
        }

        ns = q + 1;
        while ((q + 1 < nct) && (s->data[q] < s->data[ns])) {
          ztest = s->data[q];
          s->data[q] = s->data[ns];
          s->data[ns] = ztest;
          if (q + 1 < A->size[1]) {
            i16 = A->size[1] * q + 1;
            qs = A->size[1] * (q + 1) + 1;
            eml_xswap(A->size[1], Vf, i16, qs);
          }

          if (q + 1 < A->size[0]) {
            i16 = A->size[0] * q + 1;
            qs = A->size[0] * (q + 1) + 1;
            eml_xswap(A->size[0], U, i16, qs);
          }

          q = ns;
          ns++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  i16 = S->size[0];
  S->size[0] = minnp;
  emxEnsureCapacity((emxArray__common *)S, i16, (int)sizeof(double));
  for (ns = 0; ns + 1 <= minnp; ns++) {
    S->data[ns] = s->data[ns];
  }

  emxFree_real_T(&s);
  ns = A->size[1];
  i16 = V->size[0] * V->size[1];
  V->size[0] = ns;
  V->size[1] = minnp;
  emxEnsureCapacity((emxArray__common *)V, i16, (int)sizeof(double));
  for (ns = 0; ns + 1 <= minnp; ns++) {
    for (qs = 0; qs + 1 <= A->size[1]; qs++) {
      V->data[qs + V->size[0] * ns] = Vf->data[qs + Vf->size[0] * ns];
    }
  }

  emxFree_real_T(&Vf);
}

static double eml_xnrm2(int n, const emxArray_real_T *x, int ix0)
{
  double y;
  double scale;
  int kend;
  int k;
  double absxk;
  double t;
  y = 0.0;
  if (n < 1) {
  } else if (n == 1) {
    y = fabs(x->data[ix0 - 1]);
  } else {
    scale = 2.2250738585072014E-308;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = fabs(x->data[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = 1.0 + y * t * t;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

static void eml_xrot(int n, emxArray_real_T *x, int ix0, int iy0, double c,
                     double s)
{
  int ix;
  int iy;
  int k;
  double y;
  double b_y;
  if (n < 1) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 1; k <= n; k++) {
      y = c * x->data[ix];
      b_y = s * x->data[iy];
      x->data[iy] = c * x->data[iy] - s * x->data[ix];
      x->data[ix] = y + b_y;
      iy++;
      ix++;
    }
  }
}

static void eml_xrotg(double *a, double *b, double *c, double *s)
{
  double roe;
  double absa;
  double absb;
  double scale;
  double ads;
  double bds;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ads = 0.0;
    scale = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    ads = scale * sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      ads = -ads;
    }

    *c = *a / ads;
    *s = *b / ads;
    if (absa > absb) {
      scale = *s;
    } else if (*c != 0.0) {
      scale = 1.0 / *c;
    } else {
      scale = 1.0;
    }
  }

  *a = ads;
  *b = scale;
}

static void eml_xscal(int n, double a, emxArray_real_T *x, int ix0)
{
  int i33;
  int k;
  i33 = (ix0 + n) - 1;
  for (k = ix0; k <= i33; k++) {
    x->data[k - 1] *= a;
  }
}

static void eml_xswap(int n, emxArray_real_T *x, int ix0, int iy0)
{
  int ix;
  int iy;
  int k;
  double temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 1; k <= n; k++) {
    temp = x->data[ix];
    x->data[ix] = x->data[iy];
    x->data[iy] = temp;
    ix++;
    iy++;
  }
}

void pinv(const emxArray_real_T *A, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int i12;
  int loop_ub;
  int b_loop_ub;
  int i13;
  emxArray_real_T *r2;
  if (A->size[0] < A->size[1]) {
    emxInit_real_T(&b_A, 2);
    i12 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[1];
    b_A->size[1] = A->size[0];
    emxEnsureCapacity((emxArray__common *)b_A, i12, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_loop_ub = A->size[1];
      for (i13 = 0; i13 < b_loop_ub; i13++) {
        b_A->data[i13 + b_A->size[0] * i12] = A->data[i12 + A->size[0] * i13];
      }
    }

    emxInit_real_T(&r2, 2);
    eml_pinv(b_A, r2);
    i12 = X->size[0] * X->size[1];
    X->size[0] = r2->size[1];
    X->size[1] = r2->size[0];
    emxEnsureCapacity((emxArray__common *)X, i12, (int)sizeof(double));
    loop_ub = r2->size[0];
    emxFree_real_T(&b_A);
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_loop_ub = r2->size[1];
      for (i13 = 0; i13 < b_loop_ub; i13++) {
        X->data[i13 + X->size[0] * i12] = r2->data[i12 + r2->size[0] * i13];
      }
    }

    emxFree_real_T(&r2);
  } else {
    eml_pinv(A, X);
  }
}

/* End of code generation (pinv.c) */
