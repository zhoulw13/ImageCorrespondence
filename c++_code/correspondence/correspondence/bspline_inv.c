/*
 * bspline_inv.c
 *
 * Code generation for function 'bspline_inv'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "bspline_inv.h"
#include "correspondence_emxutil.h"
#include "power.h"
#include "pinv.h"
#include "floor.h"
#include "rdivide.h"

/* Function Definitions */
void b_bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref,
                   emxArray_real_T *control_p)
{
  int ixstart;
  double mtmp;
  int i18;
  int ix;
  int32_T exitg6;
  int32_T exitg5;
  double b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int ar;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  boolean_T exitg2;
  double down;
  boolean_T exitg1;
  emxArray_real_T *tx;
  double right;
  emxArray_real_T *ty;
  emxArray_real_T *Ax;
  emxArray_real_T *r3;
  emxArray_real_T *a;
  unsigned int unnamed_idx_0;
  int ic;
  int br;
  int ib;
  static const double dv2[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  int ia;
  emxArray_real_T *Ay;
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  int i19;
  emxArray_real_T *b_y;
  unsigned int unnamed_idx_1;
  emxArray_real_T *b;
  emxArray_real_T *b_ref;
  boolean_T guard2 = FALSE;
  emxArray_real_T *c_ref;
  boolean_T guard1 = FALSE;

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  ixstart = 1;
  mtmp = src->data[0];
  i18 = src->size[0];
  if (i18 > 1) {
    if (rtIsNaN(mtmp)) {
      ix = 2;
      do {
        exitg6 = 0;
        i18 = src->size[0];
        if (ix <= i18) {
          ixstart = ix;
          if (!rtIsNaN(src->data[ix - 1])) {
            mtmp = src->data[ix - 1];
            exitg6 = 1;
          } else {
            ix++;
          }
        } else {
          exitg6 = 1;
        }
      } while (exitg6 == 0);
    }

    i18 = src->size[0];
    if (ixstart < i18) {
      do {
        exitg5 = 0;
        i18 = src->size[0];
        if (ixstart + 1 <= i18) {
          if (src->data[ixstart] < mtmp) {
            mtmp = src->data[ixstart];
          }

          ixstart++;
        } else {
          exitg5 = 1;
        }
      } while (exitg5 == 0);
    }
  }

  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i18 = src->size[0];
  if (i18 > 1) {
    if (rtIsNaN(b_mtmp)) {
      ix = 2;
      do {
        exitg4 = 0;
        i18 = src->size[0];
        if (ix <= i18) {
          ixstart = ix;
          if (!rtIsNaN(src->data[(ix + src->size[0]) - 1])) {
            b_mtmp = src->data[(ix + src->size[0]) - 1];
            exitg4 = 1;
          } else {
            ix++;
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);
    }

    i18 = src->size[0];
    if (ixstart < i18) {
      do {
        exitg3 = 0;
        i18 = src->size[0];
        if (ixstart + 1 <= i18) {
          if (src->data[ixstart + src->size[0]] < b_mtmp) {
            b_mtmp = src->data[ixstart + src->size[0]];
          }

          ixstart++;
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);
    }
  }

  b_emxInit_real_T(&b_src, 1);
  ar = src->size[0];
  i18 = b_src->size[0];
  b_src->size[0] = ar;
  emxEnsureCapacity((emxArray__common *)b_src, i18, (int)sizeof(double));
  for (i18 = 0; i18 < ar; i18++) {
    b_src->data[i18] = (src->data[i18] - mtmp) + 1.0;
  }

  b_emxInit_real_T(&x, 1);
  b_emxInit_real_T(&c_src, 1);
  rdivide(b_src, 30.0, x);
  ar = src->size[0];
  i18 = c_src->size[0];
  c_src->size[0] = ar;
  emxEnsureCapacity((emxArray__common *)c_src, i18, (int)sizeof(double));
  emxFree_real_T(&b_src);
  for (i18 = 0; i18 < ar; i18++) {
    c_src->data[i18] = (src->data[i18 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(&y, 1);
  rdivide(c_src, 30.0, y);
  ixstart = 1;
  mtmp = x->data[0];
  emxFree_real_T(&c_src);
  if (x->size[0] > 1) {
    if (rtIsNaN(x->data[0])) {
      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(x->data[ix - 1])) {
          mtmp = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      while (ixstart + 1 <= x->size[0]) {
        if (x->data[ixstart] > mtmp) {
          mtmp = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  down = floor(mtmp);
  ixstart = 1;
  mtmp = y->data[0];
  if (y->size[0] > 1) {
    if (rtIsNaN(y->data[0])) {
      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= y->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(y->data[ix - 1])) {
          mtmp = y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < y->size[0]) {
      while (ixstart + 1 <= y->size[0]) {
        if (y->data[ixstart] > mtmp) {
          mtmp = y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&tx, 1);
  right = floor(mtmp);
  i18 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i18, (int)sizeof(double));
  ar = x->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    tx->data[i18] = x->data[i18];
  }

  b_floor(tx);
  i18 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i18, (int)sizeof(double));
  ar = x->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    tx->data[i18] = x->data[i18] - tx->data[i18];
  }

  b_emxInit_real_T(&ty, 1);
  i18 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i18, (int)sizeof(double));
  ar = y->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ty->data[i18] = y->data[i18];
  }

  b_floor(ty);
  i18 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i18, (int)sizeof(double));
  ar = y->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ty->data[i18] = y->data[i18] - ty->data[i18];
  }

  emxInit_real_T(&Ax, 2);
  ixstart = tx->size[0];
  i18 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i18, (int)sizeof(double));
  ar = tx->size[0] << 2;
  for (i18 = 0; i18 < ar; i18++) {
    Ax->data[i18] = 0.0;
  }

  ixstart = tx->size[0];
  for (i18 = 0; i18 < ixstart; i18++) {
    Ax->data[i18] = 1.0;
  }

  ar = tx->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    Ax->data[i18 + Ax->size[0]] = tx->data[i18];
  }

  b_emxInit_real_T(&r3, 1);
  power(tx, r3);
  ar = r3->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    Ax->data[i18 + (Ax->size[0] << 1)] = r3->data[i18];
  }

  b_power(tx, r3);
  ar = r3->size[0];
  emxFree_real_T(&tx);
  for (i18 = 0; i18 < ar; i18++) {
    Ax->data[i18 + Ax->size[0] * 3] = r3->data[i18];
  }

  emxInit_real_T(&a, 2);
  i18 = a->size[0] * a->size[1];
  a->size[0] = Ax->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i18, (int)sizeof(double));
  ar = Ax->size[0] * Ax->size[1];
  for (i18 = 0; i18 < ar; i18++) {
    a->data[i18] = Ax->data[i18];
  }

  unnamed_idx_0 = (unsigned int)Ax->size[0];
  i18 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i18, (int)sizeof(double));
  ar = (int)unnamed_idx_0 << 2;
  for (i18 = 0; i18 < ar; i18++) {
    Ax->data[i18] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i18 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i18; ic++) {
        Ax->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv2[ib] != 0.0) {
          ia = ar;
          i18 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i18; ic++) {
            ia++;
            Ax->data[ic] += dv2[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxInit_real_T(&Ay, 2);
  ixstart = ty->size[0];
  i18 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i18, (int)sizeof(double));
  ar = ty->size[0] << 2;
  for (i18 = 0; i18 < ar; i18++) {
    Ay->data[i18] = 0.0;
  }

  ixstart = ty->size[0];
  for (i18 = 0; i18 < ixstart; i18++) {
    Ay->data[i18] = 1.0;
  }

  ar = ty->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    Ay->data[i18 + Ay->size[0]] = ty->data[i18];
  }

  power(ty, r3);
  ar = r3->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    Ay->data[i18 + (Ay->size[0] << 1)] = r3->data[i18];
  }

  b_power(ty, r3);
  ar = r3->size[0];
  emxFree_real_T(&ty);
  for (i18 = 0; i18 < ar; i18++) {
    Ay->data[i18 + Ay->size[0] * 3] = r3->data[i18];
  }

  emxFree_real_T(&r3);
  i18 = a->size[0] * a->size[1];
  a->size[0] = Ay->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i18, (int)sizeof(double));
  ar = Ay->size[0] * Ay->size[1];
  for (i18 = 0; i18 < ar; i18++) {
    a->data[i18] = Ay->data[i18];
  }

  unnamed_idx_0 = (unsigned int)Ay->size[0];
  i18 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i18, (int)sizeof(double));
  ar = (int)unnamed_idx_0 << 2;
  for (i18 = 0; i18 < ar; i18++) {
    Ay->data[i18] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i18 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i18; ic++) {
        Ay->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv2[ib] != 0.0) {
          ia = ar;
          i18 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i18; ic++) {
            ia++;
            Ay->data[ic] += dv2[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxFree_real_T(&a);
  emxInit_real_T(&A, 2);
  b_mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  i18 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)A, i18, (int)sizeof(double));
  i18 = A->size[0] * A->size[1];
  A->size[1] = (int)b_mtmp;
  emxEnsureCapacity((emxArray__common *)A, i18, (int)sizeof(double));
  ar = src->size[0] * (int)b_mtmp;
  for (i18 = 0; i18 < ar; i18++) {
    A->data[i18] = 0.0;
  }

  ix = 0;
  emxInit_real_T(&param_matrix, 2);
  while (ix <= src->size[0] - 1) {
    i18 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = (int)(4.0 + down);
    param_matrix->size[1] = (int)(4.0 + right);
    emxEnsureCapacity((emxArray__common *)param_matrix, i18, (int)sizeof(double));
    ar = (int)(4.0 + down) * (int)(4.0 + right);
    for (i18 = 0; i18 < ar; i18++) {
      param_matrix->data[i18] = 0.0;
    }

    b_mtmp = floor(x->data[ix]);
    mtmp = floor(y->data[ix]);
    for (i18 = 0; i18 < 4; i18++) {
      for (i19 = 0; i19 < 4; i19++) {
        param_matrix->data[((int)(b_mtmp + (1.0 + (double)i18)) +
                            param_matrix->size[0] * ((int)(mtmp + (1.0 + (double)
          i19)) - 1)) - 1] = Ax->data[ix + Ax->size[0] * i18] * Ay->data[ix +
          Ay->size[0] * i19];
      }
    }

    ixstart = param_matrix->size[0] * param_matrix->size[1];
    for (i18 = 0; i18 < ixstart; i18++) {
      A->data[ix + A->size[0] * i18] = param_matrix->data[i18];
    }

    ix++;
  }

  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emxFree_real_T(&x);
  i18 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  control_p->size[0] = (int)(4.0 + down);
  control_p->size[1] = (int)(4.0 + right);
  control_p->size[2] = 2;
  emxEnsureCapacity((emxArray__common *)control_p, i18, (int)sizeof(double));
  ar = (int)(4.0 + down) * (int)(4.0 + right) << 1;
  for (i18 = 0; i18 < ar; i18++) {
    control_p->data[i18] = 0.0;
  }

  i18 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i18, (int)sizeof(double));
  ar = A->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = A->size[1];
    for (i19 = 0; i19 < ixstart; i19++) {
      param_matrix->data[i19 + param_matrix->size[0] * i18] = A->data[i18 +
        A->size[0] * i19];
    }
  }

  emxInit_real_T(&b_y, 2);
  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = param_matrix->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      ixstart = A->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        b_y->data[i18 + b_y->size[0] * i19] = 0.0;
        ix = param_matrix->size[1];
        for (br = 0; br < ix; br++) {
          b_y->data[i18 + b_y->size[0] * i19] += param_matrix->data[i18 +
            param_matrix->size[0] * br] * A->data[br + A->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i18 = 0; i18 < ar; i18++) {
      b_y->data[i18] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i18 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i18; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = -1;
        i18 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i18; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i19 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i19; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxInit_real_T(&b, 2);
  pinv(b_y, param_matrix);
  i18 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i18, (int)sizeof(double));
  ar = A->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = A->size[1];
    for (i19 = 0; i19 < ixstart; i19++) {
      b->data[i19 + b->size[0] * i18] = A->data[i18 + A->size[0] * i19];
    }
  }

  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = param_matrix->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      ixstart = b->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        b_y->data[i18 + b_y->size[0] * i19] = 0.0;
        ix = param_matrix->size[1];
        for (br = 0; br < ix; br++) {
          b_y->data[i18 + b_y->size[0] * i19] += param_matrix->data[i18 +
            param_matrix->size[0] * br] * b->data[br + b->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i18 = 0; i18 < ar; i18++) {
      b_y->data[i18] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i18 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i18; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = -1;
        i18 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i18; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i19 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i19; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  b_emxInit_real_T(&b_ref, 1);
  guard2 = FALSE;
  if (b_y->size[1] == 1) {
    guard2 = TRUE;
  } else {
    i18 = ref->size[0];
    if (i18 == 1) {
      guard2 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i18 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i18, (int)sizeof(double));
      ar = (int)unnamed_idx_0;
      for (i18 = 0; i18 < ar; i18++) {
        y->data[i18] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i18 = b_y->size[0];
          for (ic = 1; ic <= i18; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = -1;
          i18 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i18; ib++) {
            if (ref->data[ib] != 0.0) {
              ia = ar;
              i19 = b_y->size[0];
              for (ic = 0; ic + 1 <= i19; ic++) {
                ia++;
                y->data[ic] += ref->data[ib] * b_y->data[ia];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    ar = ref->size[0];
    i18 = b_ref->size[0];
    b_ref->size[0] = ar;
    emxEnsureCapacity((emxArray__common *)b_ref, i18, (int)sizeof(double));
    for (i18 = 0; i18 < ar; i18++) {
      b_ref->data[i18] = ref->data[i18];
    }

    i18 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i18, (int)sizeof(double));
    ar = b_y->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      y->data[i18] = 0.0;
      ixstart = b_y->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        y->data[i18] += b_y->data[i18 + b_y->size[0] * i19] * b_ref->data[i19];
      }
    }
  }

  emxFree_real_T(&b_ref);
  i18 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i18, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  ar = param_matrix->size[1];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = param_matrix->size[0];
    for (i19 = 0; i19 < ixstart; i19++) {
      control_p->data[i19 + control_p->size[0] * i18] = param_matrix->data[i19 +
        param_matrix->size[0] * i18];
    }
  }

  i18 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i18, (int)sizeof(double));
  ar = A->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = A->size[1];
    for (i19 = 0; i19 < ixstart; i19++) {
      param_matrix->data[i19 + param_matrix->size[0] * i18] = A->data[i18 +
        A->size[0] * i19];
    }
  }

  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = param_matrix->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      ixstart = A->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        b_y->data[i18 + b_y->size[0] * i19] = 0.0;
        ix = param_matrix->size[1];
        for (br = 0; br < ix; br++) {
          b_y->data[i18 + b_y->size[0] * i19] += param_matrix->data[i18 +
            param_matrix->size[0] * br] * A->data[br + A->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i18 = 0; i18 < ar; i18++) {
      b_y->data[i18] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i18 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i18; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = -1;
        i18 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i18; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i19 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i19; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  pinv(b_y, param_matrix);
  i18 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i18, (int)sizeof(double));
  ar = A->size[0];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = A->size[1];
    for (i19 = 0; i19 < ixstart; i19++) {
      b->data[i19 + b->size[0] * i18] = A->data[i18 + A->size[0] * i19];
    }
  }

  emxFree_real_T(&A);
  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = param_matrix->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      ixstart = b->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        b_y->data[i18 + b_y->size[0] * i19] = 0.0;
        ix = param_matrix->size[1];
        for (br = 0; br < ix; br++) {
          b_y->data[i18 + b_y->size[0] * i19] += param_matrix->data[i18 +
            param_matrix->size[0] * br] * b->data[br + b->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    i18 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i18, (int)sizeof(double));
    ar = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i18 = 0; i18 < ar; i18++) {
      b_y->data[i18] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i18 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i18; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = -1;
        i18 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i18; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i19 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i19; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxFree_real_T(&b);
  b_emxInit_real_T(&c_ref, 1);
  guard1 = FALSE;
  if (b_y->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i18 = ref->size[0];
    if (i18 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i18 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i18, (int)sizeof(double));
      ar = (int)unnamed_idx_0;
      for (i18 = 0; i18 < ar; i18++) {
        y->data[i18] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i18 = b_y->size[0];
          for (ic = 1; ic <= i18; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = -1;
          i18 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i18; ib++) {
            if (ref->data[ib + ref->size[0]] != 0.0) {
              ia = ar;
              i19 = b_y->size[0];
              for (ic = 0; ic + 1 <= i19; ic++) {
                ia++;
                y->data[ic] += ref->data[ib + ref->size[0]] * b_y->data[ia];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    ar = ref->size[0];
    i18 = c_ref->size[0];
    c_ref->size[0] = ar;
    emxEnsureCapacity((emxArray__common *)c_ref, i18, (int)sizeof(double));
    for (i18 = 0; i18 < ar; i18++) {
      c_ref->data[i18] = ref->data[i18 + ref->size[0]];
    }

    i18 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i18, (int)sizeof(double));
    ar = b_y->size[0];
    for (i18 = 0; i18 < ar; i18++) {
      y->data[i18] = 0.0;
      ixstart = b_y->size[1];
      for (i19 = 0; i19 < ixstart; i19++) {
        y->data[i18] += b_y->data[i18 + b_y->size[0] * i19] * c_ref->data[i19];
      }
    }
  }

  emxFree_real_T(&c_ref);
  emxFree_real_T(&b_y);
  i18 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i18, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  emxFree_real_T(&y);
  ar = param_matrix->size[1];
  for (i18 = 0; i18 < ar; i18++) {
    ixstart = param_matrix->size[0];
    for (i19 = 0; i19 < ixstart; i19++) {
      control_p->data[(i19 + control_p->size[0] * i18) + control_p->size[0] *
        control_p->size[1]] = param_matrix->data[i19 + param_matrix->size[0] *
        i18];
    }
  }

  emxFree_real_T(&param_matrix);

  /* control_p(find(isnan(control_p))) = 0; */
}

void bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref,
                 emxArray_real_T *control_p, double *error)
{
  int ixstart;
  double mtmp;
  int i9;
  int ix;
  int32_T exitg6;
  int32_T exitg5;
  double b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  boolean_T exitg2;
  double down;
  boolean_T exitg1;
  emxArray_real_T *tx;
  double right;
  emxArray_real_T *ty;
  emxArray_real_T *Ax;
  emxArray_real_T *r1;
  emxArray_real_T *a;
  unsigned int unnamed_idx_0;
  int ic;
  int br;
  int ar;
  int ib;
  static const double dv1[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  int ia;
  emxArray_real_T *Ay;
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  int i10;
  emxArray_real_T *b_y;
  int i11;
  unsigned int unnamed_idx_1;
  emxArray_real_T *b;
  emxArray_real_T *b_ref;
  boolean_T guard4 = FALSE;
  emxArray_real_T *c_ref;
  boolean_T guard3 = FALSE;
  emxArray_real_T *b_control_p;
  boolean_T guard2 = FALSE;
  emxArray_real_T *c_control_p;
  boolean_T guard1 = FALSE;
  emxArray_real_T *c_y;
  emxArray_real_T *b_tx;

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  ixstart = 1;
  mtmp = src->data[0];
  i9 = src->size[0];
  if (i9 > 1) {
    if (rtIsNaN(mtmp)) {
      ix = 2;
      do {
        exitg6 = 0;
        i9 = src->size[0];
        if (ix <= i9) {
          ixstart = ix;
          if (!rtIsNaN(src->data[ix - 1])) {
            mtmp = src->data[ix - 1];
            exitg6 = 1;
          } else {
            ix++;
          }
        } else {
          exitg6 = 1;
        }
      } while (exitg6 == 0);
    }

    i9 = src->size[0];
    if (ixstart < i9) {
      do {
        exitg5 = 0;
        i9 = src->size[0];
        if (ixstart + 1 <= i9) {
          if (src->data[ixstart] < mtmp) {
            mtmp = src->data[ixstart];
          }

          ixstart++;
        } else {
          exitg5 = 1;
        }
      } while (exitg5 == 0);
    }
  }

  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i9 = src->size[0];
  if (i9 > 1) {
    if (rtIsNaN(b_mtmp)) {
      ix = 2;
      do {
        exitg4 = 0;
        i9 = src->size[0];
        if (ix <= i9) {
          ixstart = ix;
          if (!rtIsNaN(src->data[(ix + src->size[0]) - 1])) {
            b_mtmp = src->data[(ix + src->size[0]) - 1];
            exitg4 = 1;
          } else {
            ix++;
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);
    }

    i9 = src->size[0];
    if (ixstart < i9) {
      do {
        exitg3 = 0;
        i9 = src->size[0];
        if (ixstart + 1 <= i9) {
          if (src->data[ixstart + src->size[0]] < b_mtmp) {
            b_mtmp = src->data[ixstart + src->size[0]];
          }

          ixstart++;
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);
    }
  }

  b_emxInit_real_T(&b_src, 1);
  loop_ub = src->size[0];
  i9 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_src, i9, (int)sizeof(double));
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_src->data[i9] = (src->data[i9] - mtmp) + 1.0;
  }

  b_emxInit_real_T(&x, 1);
  b_emxInit_real_T(&c_src, 1);
  rdivide(b_src, 30.0, x);
  loop_ub = src->size[0];
  i9 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_src, i9, (int)sizeof(double));
  emxFree_real_T(&b_src);
  for (i9 = 0; i9 < loop_ub; i9++) {
    c_src->data[i9] = (src->data[i9 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(&y, 1);
  rdivide(c_src, 30.0, y);
  ixstart = 1;
  mtmp = x->data[0];
  emxFree_real_T(&c_src);
  if (x->size[0] > 1) {
    if (rtIsNaN(x->data[0])) {
      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(x->data[ix - 1])) {
          mtmp = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      while (ixstart + 1 <= x->size[0]) {
        if (x->data[ixstart] > mtmp) {
          mtmp = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  down = floor(mtmp);
  ixstart = 1;
  mtmp = y->data[0];
  if (y->size[0] > 1) {
    if (rtIsNaN(y->data[0])) {
      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= y->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(y->data[ix - 1])) {
          mtmp = y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < y->size[0]) {
      while (ixstart + 1 <= y->size[0]) {
        if (y->data[ixstart] > mtmp) {
          mtmp = y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&tx, 1);
  right = floor(mtmp);
  i9 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i9, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    tx->data[i9] = x->data[i9];
  }

  b_floor(tx);
  i9 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i9, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    tx->data[i9] = x->data[i9] - tx->data[i9];
  }

  b_emxInit_real_T(&ty, 1);
  i9 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i9, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ty->data[i9] = y->data[i9];
  }

  b_floor(ty);
  i9 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i9, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ty->data[i9] = y->data[i9] - ty->data[i9];
  }

  emxInit_real_T(&Ax, 2);
  ixstart = tx->size[0];
  i9 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i9, (int)sizeof(double));
  loop_ub = tx->size[0] << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9] = 0.0;
  }

  ixstart = tx->size[0];
  for (i9 = 0; i9 < ixstart; i9++) {
    Ax->data[i9] = 1.0;
  }

  loop_ub = tx->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9 + Ax->size[0]] = tx->data[i9];
  }

  b_emxInit_real_T(&r1, 1);
  power(tx, r1);
  loop_ub = r1->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9 + (Ax->size[0] << 1)] = r1->data[i9];
  }

  b_power(tx, r1);
  loop_ub = r1->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9 + Ax->size[0] * 3] = r1->data[i9];
  }

  emxInit_real_T(&a, 2);
  i9 = a->size[0] * a->size[1];
  a->size[0] = Ax->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i9, (int)sizeof(double));
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    a->data[i9] = Ax->data[i9];
  }

  unnamed_idx_0 = (unsigned int)Ax->size[0];
  i9 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i9, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ax->data[i9] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i9 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i9; ic++) {
        Ax->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = 0;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv1[ib] != 0.0) {
          ia = ar;
          i9 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i9; ic++) {
            ia++;
            Ax->data[ic] += dv1[ib] * a->data[ia - 1];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxInit_real_T(&Ay, 2);
  ixstart = ty->size[0];
  i9 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i9, (int)sizeof(double));
  loop_ub = ty->size[0] << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9] = 0.0;
  }

  ixstart = ty->size[0];
  for (i9 = 0; i9 < ixstart; i9++) {
    Ay->data[i9] = 1.0;
  }

  loop_ub = ty->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9 + Ay->size[0]] = ty->data[i9];
  }

  power(ty, r1);
  loop_ub = r1->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9 + (Ay->size[0] << 1)] = r1->data[i9];
  }

  b_power(ty, r1);
  loop_ub = r1->size[0];
  emxFree_real_T(&ty);
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9 + Ay->size[0] * 3] = r1->data[i9];
  }

  emxFree_real_T(&r1);
  i9 = a->size[0] * a->size[1];
  a->size[0] = Ay->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i9, (int)sizeof(double));
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    a->data[i9] = Ay->data[i9];
  }

  unnamed_idx_0 = (unsigned int)Ay->size[0];
  i9 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i9, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    Ay->data[i9] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i9 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i9; ic++) {
        Ay->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = 0;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv1[ib] != 0.0) {
          ia = ar;
          i9 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i9; ic++) {
            ia++;
            Ay->data[ic] += dv1[ib] * a->data[ia - 1];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxFree_real_T(&a);
  emxInit_real_T(&A, 2);
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  i9 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)A, i9, (int)sizeof(double));
  i9 = A->size[0] * A->size[1];
  A->size[1] = (int)mtmp;
  emxEnsureCapacity((emxArray__common *)A, i9, (int)sizeof(double));
  loop_ub = src->size[0] * (int)mtmp;
  for (i9 = 0; i9 < loop_ub; i9++) {
    A->data[i9] = 0.0;
  }

  ix = 0;
  emxInit_real_T(&param_matrix, 2);
  while (ix <= src->size[0] - 1) {
    i9 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = (int)(4.0 + down);
    param_matrix->size[1] = (int)(4.0 + right);
    emxEnsureCapacity((emxArray__common *)param_matrix, i9, (int)sizeof(double));
    loop_ub = (int)(4.0 + down) * (int)(4.0 + right);
    for (i9 = 0; i9 < loop_ub; i9++) {
      param_matrix->data[i9] = 0.0;
    }

    b_mtmp = floor(x->data[ix]);
    mtmp = floor(y->data[ix]);
    for (i9 = 0; i9 < 4; i9++) {
      for (i10 = 0; i10 < 4; i10++) {
        param_matrix->data[((int)(b_mtmp + (1.0 + (double)i9)) +
                            param_matrix->size[0] * ((int)(mtmp + (1.0 + (double)
          i10)) - 1)) - 1] = Ax->data[ix + Ax->size[0] * i9] * Ay->data[ix +
          Ay->size[0] * i10];
      }
    }

    ixstart = param_matrix->size[0] * param_matrix->size[1];
    for (i9 = 0; i9 < ixstart; i9++) {
      A->data[ix + A->size[0] * i9] = param_matrix->data[i9];
    }

    ix++;
  }

  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  i9 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  control_p->size[0] = (int)(4.0 + down);
  control_p->size[1] = (int)(4.0 + right);
  control_p->size[2] = 2;
  emxEnsureCapacity((emxArray__common *)control_p, i9, (int)sizeof(double));
  loop_ub = (int)(4.0 + down) * (int)(4.0 + right) << 1;
  for (i9 = 0; i9 < loop_ub; i9++) {
    control_p->data[i9] = 0.0;
  }

  i9 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i9, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = A->size[1];
    for (i10 = 0; i10 < ix; i10++) {
      param_matrix->data[i10 + param_matrix->size[0] * i9] = A->data[i9 +
        A->size[0] * i10];
    }
  }

  emxInit_real_T(&b_y, 2);
  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      ix = A->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        b_y->data[i9 + b_y->size[0] * i10] = 0.0;
        ixstart = param_matrix->size[1];
        for (i11 = 0; i11 < ixstart; i11++) {
          b_y->data[i9 + b_y->size[0] * i10] += param_matrix->data[i9 +
            param_matrix->size[0] * i11] * A->data[i11 + A->size[0] * i10];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_y->data[i9] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i9 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i9; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i9 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i9; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i10 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i10; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxInit_real_T(&b, 2);
  pinv(b_y, param_matrix);
  i9 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i9, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = A->size[1];
    for (i10 = 0; i10 < ix; i10++) {
      b->data[i10 + b->size[0] * i9] = A->data[i9 + A->size[0] * i10];
    }
  }

  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      ix = b->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        b_y->data[i9 + b_y->size[0] * i10] = 0.0;
        ixstart = param_matrix->size[1];
        for (i11 = 0; i11 < ixstart; i11++) {
          b_y->data[i9 + b_y->size[0] * i10] += param_matrix->data[i9 +
            param_matrix->size[0] * i11] * b->data[i11 + b->size[0] * i10];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_y->data[i9] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i9 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i9; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i9 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i9; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i10 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i10; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  b_emxInit_real_T(&b_ref, 1);
  guard4 = FALSE;
  if (b_y->size[1] == 1) {
    guard4 = TRUE;
  } else {
    i9 = ref->size[0];
    if (i9 == 1) {
      guard4 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i9 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[i9] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i9 = b_y->size[0];
          for (ic = 1; ic <= i9; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i9 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i9; ib++) {
            if (ref->data[ib] != 0.0) {
              ia = ar;
              i10 = b_y->size[0];
              for (ic = 0; ic + 1 <= i10; ic++) {
                ia++;
                y->data[ic] += ref->data[ib] * b_y->data[ia - 1];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard4 == TRUE) {
    loop_ub = ref->size[0];
    i9 = b_ref->size[0];
    b_ref->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)b_ref, i9, (int)sizeof(double));
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_ref->data[i9] = ref->data[i9];
    }

    i9 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
    loop_ub = b_y->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      y->data[i9] = 0.0;
      ix = b_y->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        y->data[i9] += b_y->data[i9 + b_y->size[0] * i10] * b_ref->data[i10];
      }
    }
  }

  emxFree_real_T(&b_ref);
  i9 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i9, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  loop_ub = param_matrix->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = param_matrix->size[0];
    for (i10 = 0; i10 < ix; i10++) {
      control_p->data[i10 + control_p->size[0] * i9] = param_matrix->data[i10 +
        param_matrix->size[0] * i9];
    }
  }

  i9 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i9, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = A->size[1];
    for (i10 = 0; i10 < ix; i10++) {
      param_matrix->data[i10 + param_matrix->size[0] * i9] = A->data[i9 +
        A->size[0] * i10];
    }
  }

  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      ix = A->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        b_y->data[i9 + b_y->size[0] * i10] = 0.0;
        ixstart = param_matrix->size[1];
        for (i11 = 0; i11 < ixstart; i11++) {
          b_y->data[i9 + b_y->size[0] * i10] += param_matrix->data[i9 +
            param_matrix->size[0] * i11] * A->data[i11 + A->size[0] * i10];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_y->data[i9] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i9 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i9; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i9 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i9; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i10 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i10; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  pinv(b_y, param_matrix);
  i9 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i9, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = A->size[1];
    for (i10 = 0; i10 < ix; i10++) {
      b->data[i10 + b->size[0] * i9] = A->data[i9 + A->size[0] * i10];
    }
  }

  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      ix = b->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        b_y->data[i9 + b_y->size[0] * i10] = 0.0;
        ixstart = param_matrix->size[1];
        for (i11 = 0; i11 < ixstart; i11++) {
          b_y->data[i9 + b_y->size[0] * i10] += param_matrix->data[i9 +
            param_matrix->size[0] * i11] * b->data[i11 + b->size[0] * i10];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    i9 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_y->data[i9] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i9 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i9; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i9 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i9; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i10 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i10; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxFree_real_T(&b);
  b_emxInit_real_T(&c_ref, 1);
  guard3 = FALSE;
  if (b_y->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i9 = ref->size[0];
    if (i9 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i9 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[i9] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i9 = b_y->size[0];
          for (ic = 1; ic <= i9; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i9 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i9; ib++) {
            if (ref->data[ib + ref->size[0]] != 0.0) {
              ia = ar;
              i10 = b_y->size[0];
              for (ic = 0; ic + 1 <= i10; ic++) {
                ia++;
                y->data[ic] += ref->data[ib + ref->size[0]] * b_y->data[ia - 1];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard3 == TRUE) {
    loop_ub = ref->size[0];
    i9 = c_ref->size[0];
    c_ref->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)c_ref, i9, (int)sizeof(double));
    for (i9 = 0; i9 < loop_ub; i9++) {
      c_ref->data[i9] = ref->data[i9 + ref->size[0]];
    }

    i9 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
    loop_ub = b_y->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      y->data[i9] = 0.0;
      ix = b_y->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        y->data[i9] += b_y->data[i9 + b_y->size[0] * i10] * c_ref->data[i10];
      }
    }
  }

  emxFree_real_T(&c_ref);
  emxFree_real_T(&b_y);
  i9 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i9, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  loop_ub = param_matrix->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ix = param_matrix->size[0];
    for (i10 = 0; i10 < ix; i10++) {
      control_p->data[(i10 + control_p->size[0] * i9) + control_p->size[0] *
        control_p->size[1]] = param_matrix->data[i10 + param_matrix->size[0] *
        i9];
    }
  }

  /* control_p(find(isnan(control_p))) = 0; */
  emxInit_real_T(&b_control_p, 2);
  guard2 = FALSE;
  if (A->size[1] == 1) {
    guard2 = TRUE;
  } else {
    i9 = control_p->size[0];
    i10 = control_p->size[1];
    if (i9 * i10 == 1) {
      guard2 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i9 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        y->data[i9] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          i9 = A->size[0];
          for (ic = 1; ic <= i9; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = A->size[0];
        }

        br = 0;
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i9 = br + A->size[1];
          for (ib = br; ib + 1 <= i9; ib++) {
            loop_ub = control_p->size[0];
            ix = control_p->size[1];
            i10 = param_matrix->size[0] * param_matrix->size[1];
            param_matrix->size[0] = loop_ub;
            param_matrix->size[1] = ix;
            emxEnsureCapacity((emxArray__common *)param_matrix, i10, (int)sizeof
                              (double));
            for (i10 = 0; i10 < ix; i10++) {
              for (i11 = 0; i11 < loop_ub; i11++) {
                param_matrix->data[i11 + param_matrix->size[0] * i10] =
                  control_p->data[i11 + control_p->size[0] * i10];
              }
            }

            i10 = param_matrix->size[0];
            if (param_matrix->data[ib % param_matrix->size[0] +
                param_matrix->size[0] * (ib / i10)] != 0.0) {
              ia = ar;
              i10 = A->size[0];
              for (ic = 0; ic + 1 <= i10; ic++) {
                ia++;
                loop_ub = control_p->size[0];
                ix = control_p->size[1];
                i11 = param_matrix->size[0] * param_matrix->size[1];
                param_matrix->size[0] = loop_ub;
                param_matrix->size[1] = ix;
                emxEnsureCapacity((emxArray__common *)param_matrix, i11, (int)
                                  sizeof(double));
                for (i11 = 0; i11 < ix; i11++) {
                  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
                    param_matrix->data[ixstart + param_matrix->size[0] * i11] =
                      control_p->data[ixstart + control_p->size[0] * i11];
                  }
                }

                i11 = param_matrix->size[0];
                y->data[ic] += param_matrix->data[ib % param_matrix->size[0] +
                  param_matrix->size[0] * (ib / i11)] * A->data[ia - 1];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          ix = A->size[0];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i9 = b_control_p->size[0] * b_control_p->size[1];
    b_control_p->size[0] = loop_ub;
    b_control_p->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)b_control_p, i9, (int)sizeof(double));
    for (i9 = 0; i9 < ix; i9++) {
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_control_p->data[i10 + b_control_p->size[0] * i9] = control_p->data[i10
          + control_p->size[0] * i9];
      }
    }

    i9 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)y, i9, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      y->data[i9] = 0.0;
      ix = A->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        y->data[i9] += A->data[i9 + A->size[0] * i10] * b_control_p->data[i10];
      }
    }
  }

  emxFree_real_T(&b_control_p);
  emxInit_real_T(&c_control_p, 2);
  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i9 = control_p->size[0];
    i10 = control_p->size[1];
    if (i9 * i10 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i9 = tx->size[0];
      tx->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)tx, i9, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i9 = 0; i9 < loop_ub; i9++) {
        tx->data[i9] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          i9 = A->size[0];
          for (ic = 1; ic <= i9; ic++) {
            tx->data[ic - 1] = 0.0;
          }

          ix = A->size[0];
        }

        br = 0;
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i9 = br + A->size[1];
          for (ib = br; ib + 1 <= i9; ib++) {
            loop_ub = control_p->size[0];
            ix = control_p->size[1];
            i10 = param_matrix->size[0] * param_matrix->size[1];
            param_matrix->size[0] = loop_ub;
            param_matrix->size[1] = ix;
            emxEnsureCapacity((emxArray__common *)param_matrix, i10, (int)sizeof
                              (double));
            for (i10 = 0; i10 < ix; i10++) {
              for (i11 = 0; i11 < loop_ub; i11++) {
                param_matrix->data[i11 + param_matrix->size[0] * i10] =
                  control_p->data[(i11 + control_p->size[0] * i10) +
                  control_p->size[0] * control_p->size[1]];
              }
            }

            i10 = param_matrix->size[0];
            if (param_matrix->data[ib % param_matrix->size[0] +
                param_matrix->size[0] * (ib / i10)] != 0.0) {
              ia = ar;
              i10 = A->size[0];
              for (ic = 0; ic + 1 <= i10; ic++) {
                ia++;
                loop_ub = control_p->size[0];
                ix = control_p->size[1];
                i11 = param_matrix->size[0] * param_matrix->size[1];
                param_matrix->size[0] = loop_ub;
                param_matrix->size[1] = ix;
                emxEnsureCapacity((emxArray__common *)param_matrix, i11, (int)
                                  sizeof(double));
                for (i11 = 0; i11 < ix; i11++) {
                  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
                    param_matrix->data[ixstart + param_matrix->size[0] * i11] =
                      control_p->data[(ixstart + control_p->size[0] * i11) +
                      control_p->size[0] * control_p->size[1]];
                  }
                }

                i11 = param_matrix->size[0];
                tx->data[ic] += param_matrix->data[ib % param_matrix->size[0] +
                  param_matrix->size[0] * (ib / i11)] * A->data[ia - 1];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          ix = A->size[0];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i9 = c_control_p->size[0] * c_control_p->size[1];
    c_control_p->size[0] = loop_ub;
    c_control_p->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)c_control_p, i9, (int)sizeof(double));
    for (i9 = 0; i9 < ix; i9++) {
      for (i10 = 0; i10 < loop_ub; i10++) {
        c_control_p->data[i10 + c_control_p->size[0] * i9] = control_p->data
          [(i10 + control_p->size[0] * i9) + control_p->size[0] *
          control_p->size[1]];
      }
    }

    i9 = tx->size[0];
    tx->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)tx, i9, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      tx->data[i9] = 0.0;
      ix = A->size[1];
      for (i10 = 0; i10 < ix; i10++) {
        tx->data[i9] += A->data[i9 + A->size[0] * i10] * c_control_p->data[i10];
      }
    }
  }

  emxFree_real_T(&c_control_p);
  emxFree_real_T(&param_matrix);
  emxFree_real_T(&A);
  b_emxInit_real_T(&c_y, 1);
  i9 = c_y->size[0];
  c_y->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)c_y, i9, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    c_y->data[i9] = y->data[i9] - ref->data[i9];
  }

  emxFree_real_T(&y);
  power(c_y, x);
  emxFree_real_T(&c_y);
  if (x->size[0] == 0) {
    mtmp = 0.0;
  } else {
    mtmp = x->data[0];
    for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
      mtmp += x->data[ixstart - 1];
    }
  }

  b_emxInit_real_T(&b_tx, 1);
  i9 = b_tx->size[0];
  b_tx->size[0] = tx->size[0];
  emxEnsureCapacity((emxArray__common *)b_tx, i9, (int)sizeof(double));
  loop_ub = tx->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_tx->data[i9] = tx->data[i9] - ref->data[i9 + ref->size[0]];
  }

  emxFree_real_T(&tx);
  power(b_tx, x);
  emxFree_real_T(&b_tx);
  if (x->size[0] == 0) {
    b_mtmp = 0.0;
  } else {
    b_mtmp = x->data[0];
    for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
      b_mtmp += x->data[ixstart - 1];
    }
  }

  emxFree_real_T(&x);
  *error = (mtmp + b_mtmp) / (double)src->size[0];
}

void c_bspline_inv(const emxArray_real_T *src, const emxArray_real_T *ref,
                   emxArray_real_T *control_p, double *error)
{
  int ixstart;
  double mtmp;
  int i23;
  int ix;
  int32_T exitg6;
  int32_T exitg5;
  double b_mtmp;
  int32_T exitg4;
  int32_T exitg3;
  emxArray_real_T *b_src;
  int loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  boolean_T exitg2;
  double down;
  boolean_T exitg1;
  emxArray_real_T *tx;
  double right;
  emxArray_real_T *ty;
  emxArray_real_T *Ax;
  emxArray_real_T *r15;
  emxArray_real_T *a;
  unsigned int unnamed_idx_0;
  int ic;
  int br;
  int ar;
  int ib;
  static const double dv3[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  int ia;
  emxArray_real_T *Ay;
  emxArray_real_T *A;
  emxArray_real_T *param_matrix;
  int i24;
  emxArray_real_T *b_y;
  int i25;
  unsigned int unnamed_idx_1;
  emxArray_real_T *b;
  emxArray_real_T *b_ref;
  boolean_T guard4 = FALSE;
  emxArray_real_T *c_ref;
  boolean_T guard3 = FALSE;
  emxArray_real_T *b_control_p;
  boolean_T guard2 = FALSE;
  emxArray_real_T *c_control_p;
  boolean_T guard1 = FALSE;
  emxArray_real_T *c_y;
  emxArray_real_T *b_tx;

  /*  bspline_inv give 2d cubic uniform control point of given source and reference */
  /*  Detailed explanation goes here */
  ixstart = 1;
  mtmp = src->data[0];
  i23 = src->size[0];
  if (i23 > 1) {
    if (rtIsNaN(mtmp)) {
      ix = 2;
      do {
        exitg6 = 0;
        i23 = src->size[0];
        if (ix <= i23) {
          ixstart = ix;
          if (!rtIsNaN(src->data[ix - 1])) {
            mtmp = src->data[ix - 1];
            exitg6 = 1;
          } else {
            ix++;
          }
        } else {
          exitg6 = 1;
        }
      } while (exitg6 == 0);
    }

    i23 = src->size[0];
    if (ixstart < i23) {
      do {
        exitg5 = 0;
        i23 = src->size[0];
        if (ixstart + 1 <= i23) {
          if (src->data[ixstart] < mtmp) {
            mtmp = src->data[ixstart];
          }

          ixstart++;
        } else {
          exitg5 = 1;
        }
      } while (exitg5 == 0);
    }
  }

  ixstart = 1;
  b_mtmp = src->data[src->size[0]];
  i23 = src->size[0];
  if (i23 > 1) {
    if (rtIsNaN(b_mtmp)) {
      ix = 2;
      do {
        exitg4 = 0;
        i23 = src->size[0];
        if (ix <= i23) {
          ixstart = ix;
          if (!rtIsNaN(src->data[(ix + src->size[0]) - 1])) {
            b_mtmp = src->data[(ix + src->size[0]) - 1];
            exitg4 = 1;
          } else {
            ix++;
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);
    }

    i23 = src->size[0];
    if (ixstart < i23) {
      do {
        exitg3 = 0;
        i23 = src->size[0];
        if (ixstart + 1 <= i23) {
          if (src->data[ixstart + src->size[0]] < b_mtmp) {
            b_mtmp = src->data[ixstart + src->size[0]];
          }

          ixstart++;
        } else {
          exitg3 = 1;
        }
      } while (exitg3 == 0);
    }
  }

  b_emxInit_real_T(&b_src, 1);
  loop_ub = src->size[0];
  i23 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_src, i23, (int)sizeof(double));
  for (i23 = 0; i23 < loop_ub; i23++) {
    b_src->data[i23] = (src->data[i23] - mtmp) + 1.0;
  }

  b_emxInit_real_T(&x, 1);
  b_emxInit_real_T(&c_src, 1);
  rdivide(b_src, 30.0, x);
  loop_ub = src->size[0];
  i23 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_src, i23, (int)sizeof(double));
  emxFree_real_T(&b_src);
  for (i23 = 0; i23 < loop_ub; i23++) {
    c_src->data[i23] = (src->data[i23 + src->size[0]] - b_mtmp) + 1.0;
  }

  b_emxInit_real_T(&y, 1);
  rdivide(c_src, 30.0, y);
  ixstart = 1;
  mtmp = x->data[0];
  emxFree_real_T(&c_src);
  if (x->size[0] > 1) {
    if (rtIsNaN(x->data[0])) {
      ix = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (ix <= x->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(x->data[ix - 1])) {
          mtmp = x->data[ix - 1];
          exitg2 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      while (ixstart + 1 <= x->size[0]) {
        if (x->data[ixstart] > mtmp) {
          mtmp = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  down = floor(mtmp);
  ixstart = 1;
  mtmp = y->data[0];
  if (y->size[0] > 1) {
    if (rtIsNaN(y->data[0])) {
      ix = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (ix <= y->size[0])) {
        ixstart = ix;
        if (!rtIsNaN(y->data[ix - 1])) {
          mtmp = y->data[ix - 1];
          exitg1 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < y->size[0]) {
      while (ixstart + 1 <= y->size[0]) {
        if (y->data[ixstart] > mtmp) {
          mtmp = y->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  b_emxInit_real_T(&tx, 1);
  right = floor(mtmp);
  i23 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i23, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    tx->data[i23] = x->data[i23];
  }

  b_floor(tx);
  i23 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i23, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    tx->data[i23] = x->data[i23] - tx->data[i23];
  }

  b_emxInit_real_T(&ty, 1);
  i23 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i23, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ty->data[i23] = y->data[i23];
  }

  b_floor(ty);
  i23 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i23, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ty->data[i23] = y->data[i23] - ty->data[i23];
  }

  emxInit_real_T(&Ax, 2);
  ixstart = tx->size[0];
  i23 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = ixstart;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i23, (int)sizeof(double));
  loop_ub = tx->size[0] << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23] = 0.0;
  }

  ixstart = tx->size[0];
  for (i23 = 0; i23 < ixstart; i23++) {
    Ax->data[i23] = 1.0;
  }

  loop_ub = tx->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23 + Ax->size[0]] = tx->data[i23];
  }

  b_emxInit_real_T(&r15, 1);
  power(tx, r15);
  loop_ub = r15->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23 + (Ax->size[0] << 1)] = r15->data[i23];
  }

  b_power(tx, r15);
  loop_ub = r15->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23 + Ax->size[0] * 3] = r15->data[i23];
  }

  emxInit_real_T(&a, 2);
  i23 = a->size[0] * a->size[1];
  a->size[0] = Ax->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i23, (int)sizeof(double));
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    a->data[i23] = Ax->data[i23];
  }

  unnamed_idx_0 = (unsigned int)Ax->size[0];
  i23 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i23, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ax->data[i23] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i23 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i23; ic++) {
        Ax->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = 0;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv3[ib] != 0.0) {
          ia = ar;
          i23 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i23; ic++) {
            ia++;
            Ax->data[ic] += dv3[ib] * a->data[ia - 1];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxInit_real_T(&Ay, 2);
  ixstart = ty->size[0];
  i23 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = ixstart;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i23, (int)sizeof(double));
  loop_ub = ty->size[0] << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23] = 0.0;
  }

  ixstart = ty->size[0];
  for (i23 = 0; i23 < ixstart; i23++) {
    Ay->data[i23] = 1.0;
  }

  loop_ub = ty->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23 + Ay->size[0]] = ty->data[i23];
  }

  power(ty, r15);
  loop_ub = r15->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23 + (Ay->size[0] << 1)] = r15->data[i23];
  }

  b_power(ty, r15);
  loop_ub = r15->size[0];
  emxFree_real_T(&ty);
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23 + Ay->size[0] * 3] = r15->data[i23];
  }

  emxFree_real_T(&r15);
  i23 = a->size[0] * a->size[1];
  a->size[0] = Ay->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i23, (int)sizeof(double));
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    a->data[i23] = Ay->data[i23];
  }

  unnamed_idx_0 = (unsigned int)Ay->size[0];
  i23 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i23, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i23 = 0; i23 < loop_ub; i23++) {
    Ay->data[i23] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    ixstart = a->size[0] * 3;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      i23 = ix + a->size[0];
      for (ic = ix; ic + 1 <= i23; ic++) {
        Ay->data[ic] = 0.0;
      }

      ix += a->size[0];
    }

    br = 0;
    ix = 0;
    while ((a->size[0] > 0) && (ix <= ixstart)) {
      ar = 0;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv3[ib] != 0.0) {
          ia = ar;
          i23 = ix + a->size[0];
          for (ic = ix; ic + 1 <= i23; ic++) {
            ia++;
            Ay->data[ic] += dv3[ib] * a->data[ia - 1];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      ix += a->size[0];
    }
  }

  emxFree_real_T(&a);
  emxInit_real_T(&A, 2);
  mtmp = (4.0 + down) * (4.0 + right);
  ixstart = src->size[0];
  i23 = A->size[0] * A->size[1];
  A->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)A, i23, (int)sizeof(double));
  i23 = A->size[0] * A->size[1];
  A->size[1] = (int)mtmp;
  emxEnsureCapacity((emxArray__common *)A, i23, (int)sizeof(double));
  loop_ub = src->size[0] * (int)mtmp;
  for (i23 = 0; i23 < loop_ub; i23++) {
    A->data[i23] = 0.0;
  }

  ix = 0;
  emxInit_real_T(&param_matrix, 2);
  while (ix <= src->size[0] - 1) {
    i23 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = (int)(4.0 + down);
    param_matrix->size[1] = (int)(4.0 + right);
    emxEnsureCapacity((emxArray__common *)param_matrix, i23, (int)sizeof(double));
    loop_ub = (int)(4.0 + down) * (int)(4.0 + right);
    for (i23 = 0; i23 < loop_ub; i23++) {
      param_matrix->data[i23] = 0.0;
    }

    b_mtmp = floor(x->data[ix]);
    mtmp = floor(y->data[ix]);
    for (i23 = 0; i23 < 4; i23++) {
      for (i24 = 0; i24 < 4; i24++) {
        param_matrix->data[((int)(b_mtmp + (1.0 + (double)i23)) +
                            param_matrix->size[0] * ((int)(mtmp + (1.0 + (double)
          i24)) - 1)) - 1] = Ax->data[ix + Ax->size[0] * i23] * Ay->data[ix +
          Ay->size[0] * i24];
      }
    }

    ixstart = param_matrix->size[0] * param_matrix->size[1];
    for (i23 = 0; i23 < ixstart; i23++) {
      A->data[ix + A->size[0] * i23] = param_matrix->data[i23];
    }

    ix++;
  }

  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  i23 = control_p->size[0] * control_p->size[1] * control_p->size[2];
  control_p->size[0] = (int)(4.0 + down);
  control_p->size[1] = (int)(4.0 + right);
  control_p->size[2] = 2;
  emxEnsureCapacity((emxArray__common *)control_p, i23, (int)sizeof(double));
  loop_ub = (int)(4.0 + down) * (int)(4.0 + right) << 1;
  for (i23 = 0; i23 < loop_ub; i23++) {
    control_p->data[i23] = 0.0;
  }

  i23 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i23, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = A->size[1];
    for (i24 = 0; i24 < ix; i24++) {
      param_matrix->data[i24 + param_matrix->size[0] * i23] = A->data[i23 +
        A->size[0] * i24];
    }
  }

  emxInit_real_T(&b_y, 2);
  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      ix = A->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        b_y->data[i23 + b_y->size[0] * i24] = 0.0;
        ixstart = param_matrix->size[1];
        for (i25 = 0; i25 < ixstart; i25++) {
          b_y->data[i23 + b_y->size[0] * i24] += param_matrix->data[i23 +
            param_matrix->size[0] * i25] * A->data[i25 + A->size[0] * i24];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_y->data[i23] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i23 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i23; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i23 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i23; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i24 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i24; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxInit_real_T(&b, 2);
  pinv(b_y, param_matrix);
  i23 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i23, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = A->size[1];
    for (i24 = 0; i24 < ix; i24++) {
      b->data[i24 + b->size[0] * i23] = A->data[i23 + A->size[0] * i24];
    }
  }

  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      ix = b->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        b_y->data[i23 + b_y->size[0] * i24] = 0.0;
        ixstart = param_matrix->size[1];
        for (i25 = 0; i25 < ixstart; i25++) {
          b_y->data[i23 + b_y->size[0] * i24] += param_matrix->data[i23 +
            param_matrix->size[0] * i25] * b->data[i25 + b->size[0] * i24];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_y->data[i23] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i23 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i23; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i23 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i23; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i24 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i24; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  b_emxInit_real_T(&b_ref, 1);
  guard4 = FALSE;
  if (b_y->size[1] == 1) {
    guard4 = TRUE;
  } else {
    i23 = ref->size[0];
    if (i23 == 1) {
      guard4 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i23 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i23 = 0; i23 < loop_ub; i23++) {
        y->data[i23] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i23 = b_y->size[0];
          for (ic = 1; ic <= i23; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i23 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i23; ib++) {
            if (ref->data[ib] != 0.0) {
              ia = ar;
              i24 = b_y->size[0];
              for (ic = 0; ic + 1 <= i24; ic++) {
                ia++;
                y->data[ic] += ref->data[ib] * b_y->data[ia - 1];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard4 == TRUE) {
    loop_ub = ref->size[0];
    i23 = b_ref->size[0];
    b_ref->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)b_ref, i23, (int)sizeof(double));
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_ref->data[i23] = ref->data[i23];
    }

    i23 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
    loop_ub = b_y->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      y->data[i23] = 0.0;
      ix = b_y->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        y->data[i23] += b_y->data[i23 + b_y->size[0] * i24] * b_ref->data[i24];
      }
    }
  }

  emxFree_real_T(&b_ref);
  i23 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i23, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  loop_ub = param_matrix->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = param_matrix->size[0];
    for (i24 = 0; i24 < ix; i24++) {
      control_p->data[i24 + control_p->size[0] * i23] = param_matrix->data[i24 +
        param_matrix->size[0] * i23];
    }
  }

  i23 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = A->size[1];
  param_matrix->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)param_matrix, i23, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = A->size[1];
    for (i24 = 0; i24 < ix; i24++) {
      param_matrix->data[i24 + param_matrix->size[0] * i23] = A->data[i23 +
        A->size[0] * i24];
    }
  }

  if ((param_matrix->size[1] == 1) || (A->size[0] == 1)) {
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = A->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      ix = A->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        b_y->data[i23 + b_y->size[0] * i24] = 0.0;
        ixstart = param_matrix->size[1];
        for (i25 = 0; i25 < ixstart; i25++) {
          b_y->data[i23 + b_y->size[0] * i24] += param_matrix->data[i23 +
            param_matrix->size[0] * i25] * A->data[i25 + A->size[0] * i24];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)A->size[1];
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_y->data[i23] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (A->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (A->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i23 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i23; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i23 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i23; ib++) {
          if (A->data[ib] != 0.0) {
            ia = ar;
            i24 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i24; ic++) {
              ia++;
              b_y->data[ic] += A->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  pinv(b_y, param_matrix);
  i23 = b->size[0] * b->size[1];
  b->size[0] = A->size[1];
  b->size[1] = A->size[0];
  emxEnsureCapacity((emxArray__common *)b, i23, (int)sizeof(double));
  loop_ub = A->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = A->size[1];
    for (i24 = 0; i24 < ix; i24++) {
      b->data[i24 + b->size[0] * i23] = A->data[i23 + A->size[0] * i24];
    }
  }

  if ((param_matrix->size[1] == 1) || (b->size[0] == 1)) {
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = param_matrix->size[0];
    b_y->size[1] = b->size[1];
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = param_matrix->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      ix = b->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        b_y->data[i23 + b_y->size[0] * i24] = 0.0;
        ixstart = param_matrix->size[1];
        for (i25 = 0; i25 < ixstart; i25++) {
          b_y->data[i23 + b_y->size[0] * i24] += param_matrix->data[i23 +
            param_matrix->size[0] * i25] * b->data[i25 + b->size[0] * i24];
        }
      }
    }
  } else {
    unnamed_idx_0 = (unsigned int)param_matrix->size[0];
    unnamed_idx_1 = (unsigned int)b->size[1];
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    i23 = b_y->size[0] * b_y->size[1];
    b_y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)b_y, i23, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_y->data[i23] = 0.0;
    }

    if ((param_matrix->size[0] == 0) || (b->size[1] == 0)) {
    } else {
      ixstart = param_matrix->size[0] * (b->size[1] - 1);
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        i23 = ix + param_matrix->size[0];
        for (ic = ix; ic + 1 <= i23; ic++) {
          b_y->data[ic] = 0.0;
        }

        ix += param_matrix->size[0];
      }

      br = 0;
      ix = 0;
      while ((param_matrix->size[0] > 0) && (ix <= ixstart)) {
        ar = 0;
        i23 = br + param_matrix->size[1];
        for (ib = br; ib + 1 <= i23; ib++) {
          if (b->data[ib] != 0.0) {
            ia = ar;
            i24 = ix + param_matrix->size[0];
            for (ic = ix; ic + 1 <= i24; ic++) {
              ia++;
              b_y->data[ic] += b->data[ib] * param_matrix->data[ia - 1];
            }
          }

          ar += param_matrix->size[0];
        }

        br += param_matrix->size[1];
        ix += param_matrix->size[0];
      }
    }
  }

  emxFree_real_T(&b);
  b_emxInit_real_T(&c_ref, 1);
  guard3 = FALSE;
  if (b_y->size[1] == 1) {
    guard3 = TRUE;
  } else {
    i23 = ref->size[0];
    if (i23 == 1) {
      guard3 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)b_y->size[0];
      i23 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i23 = 0; i23 < loop_ub; i23++) {
        y->data[i23] = 0.0;
      }

      if (b_y->size[0] == 0) {
      } else {
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          i23 = b_y->size[0];
          for (ic = 1; ic <= i23; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = b_y->size[0];
        }

        br = 0;
        ix = 0;
        while ((b_y->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i23 = br + b_y->size[1];
          for (ib = br; ib + 1 <= i23; ib++) {
            if (ref->data[ib + ref->size[0]] != 0.0) {
              ia = ar;
              i24 = b_y->size[0];
              for (ic = 0; ic + 1 <= i24; ic++) {
                ia++;
                y->data[ic] += ref->data[ib + ref->size[0]] * b_y->data[ia - 1];
              }
            }

            ar += b_y->size[0];
          }

          br += b_y->size[1];
          ix = b_y->size[0];
        }
      }
    }
  }

  if (guard3 == TRUE) {
    loop_ub = ref->size[0];
    i23 = c_ref->size[0];
    c_ref->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)c_ref, i23, (int)sizeof(double));
    for (i23 = 0; i23 < loop_ub; i23++) {
      c_ref->data[i23] = ref->data[i23 + ref->size[0]];
    }

    i23 = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
    loop_ub = b_y->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      y->data[i23] = 0.0;
      ix = b_y->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        y->data[i23] += b_y->data[i23 + b_y->size[0] * i24] * c_ref->data[i24];
      }
    }
  }

  emxFree_real_T(&c_ref);
  emxFree_real_T(&b_y);
  i23 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = (int)(4.0 + down);
  param_matrix->size[1] = (int)(4.0 + right);
  emxEnsureCapacity((emxArray__common *)param_matrix, i23, (int)sizeof(double));
  for (ixstart = 0; ixstart + 1 <= y->size[0]; ixstart++) {
    param_matrix->data[ixstart] = y->data[ixstart];
  }

  loop_ub = param_matrix->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    ix = param_matrix->size[0];
    for (i24 = 0; i24 < ix; i24++) {
      control_p->data[(i24 + control_p->size[0] * i23) + control_p->size[0] *
        control_p->size[1]] = param_matrix->data[i24 + param_matrix->size[0] *
        i23];
    }
  }

  /* control_p(find(isnan(control_p))) = 0; */
  emxInit_real_T(&b_control_p, 2);
  guard2 = FALSE;
  if (A->size[1] == 1) {
    guard2 = TRUE;
  } else {
    i23 = control_p->size[0];
    i24 = control_p->size[1];
    if (i23 * i24 == 1) {
      guard2 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i23 = y->size[0];
      y->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i23 = 0; i23 < loop_ub; i23++) {
        y->data[i23] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          i23 = A->size[0];
          for (ic = 1; ic <= i23; ic++) {
            y->data[ic - 1] = 0.0;
          }

          ix = A->size[0];
        }

        br = 0;
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i23 = br + A->size[1];
          for (ib = br; ib + 1 <= i23; ib++) {
            loop_ub = control_p->size[0];
            ix = control_p->size[1];
            i24 = param_matrix->size[0] * param_matrix->size[1];
            param_matrix->size[0] = loop_ub;
            param_matrix->size[1] = ix;
            emxEnsureCapacity((emxArray__common *)param_matrix, i24, (int)sizeof
                              (double));
            for (i24 = 0; i24 < ix; i24++) {
              for (i25 = 0; i25 < loop_ub; i25++) {
                param_matrix->data[i25 + param_matrix->size[0] * i24] =
                  control_p->data[i25 + control_p->size[0] * i24];
              }
            }

            i24 = param_matrix->size[0];
            if (param_matrix->data[ib % param_matrix->size[0] +
                param_matrix->size[0] * (ib / i24)] != 0.0) {
              ia = ar;
              i24 = A->size[0];
              for (ic = 0; ic + 1 <= i24; ic++) {
                ia++;
                loop_ub = control_p->size[0];
                ix = control_p->size[1];
                i25 = param_matrix->size[0] * param_matrix->size[1];
                param_matrix->size[0] = loop_ub;
                param_matrix->size[1] = ix;
                emxEnsureCapacity((emxArray__common *)param_matrix, i25, (int)
                                  sizeof(double));
                for (i25 = 0; i25 < ix; i25++) {
                  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
                    param_matrix->data[ixstart + param_matrix->size[0] * i25] =
                      control_p->data[ixstart + control_p->size[0] * i25];
                  }
                }

                i25 = param_matrix->size[0];
                y->data[ic] += param_matrix->data[ib % param_matrix->size[0] +
                  param_matrix->size[0] * (ib / i25)] * A->data[ia - 1];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          ix = A->size[0];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i23 = b_control_p->size[0] * b_control_p->size[1];
    b_control_p->size[0] = loop_ub;
    b_control_p->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)b_control_p, i23, (int)sizeof(double));
    for (i23 = 0; i23 < ix; i23++) {
      for (i24 = 0; i24 < loop_ub; i24++) {
        b_control_p->data[i24 + b_control_p->size[0] * i23] = control_p->
          data[i24 + control_p->size[0] * i23];
      }
    }

    i23 = y->size[0];
    y->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      y->data[i23] = 0.0;
      ix = A->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        y->data[i23] += A->data[i23 + A->size[0] * i24] * b_control_p->data[i24];
      }
    }
  }

  emxFree_real_T(&b_control_p);
  emxInit_real_T(&c_control_p, 2);
  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    i23 = control_p->size[0];
    i24 = control_p->size[1];
    if (i23 * i24 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i23 = tx->size[0];
      tx->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)tx, i23, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i23 = 0; i23 < loop_ub; i23++) {
        tx->data[i23] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          i23 = A->size[0];
          for (ic = 1; ic <= i23; ic++) {
            tx->data[ic - 1] = 0.0;
          }

          ix = A->size[0];
        }

        br = 0;
        ix = 0;
        while ((A->size[0] > 0) && (ix <= 0)) {
          ar = 0;
          i23 = br + A->size[1];
          for (ib = br; ib + 1 <= i23; ib++) {
            loop_ub = control_p->size[0];
            ix = control_p->size[1];
            i24 = param_matrix->size[0] * param_matrix->size[1];
            param_matrix->size[0] = loop_ub;
            param_matrix->size[1] = ix;
            emxEnsureCapacity((emxArray__common *)param_matrix, i24, (int)sizeof
                              (double));
            for (i24 = 0; i24 < ix; i24++) {
              for (i25 = 0; i25 < loop_ub; i25++) {
                param_matrix->data[i25 + param_matrix->size[0] * i24] =
                  control_p->data[(i25 + control_p->size[0] * i24) +
                  control_p->size[0] * control_p->size[1]];
              }
            }

            i24 = param_matrix->size[0];
            if (param_matrix->data[ib % param_matrix->size[0] +
                param_matrix->size[0] * (ib / i24)] != 0.0) {
              ia = ar;
              i24 = A->size[0];
              for (ic = 0; ic + 1 <= i24; ic++) {
                ia++;
                loop_ub = control_p->size[0];
                ix = control_p->size[1];
                i25 = param_matrix->size[0] * param_matrix->size[1];
                param_matrix->size[0] = loop_ub;
                param_matrix->size[1] = ix;
                emxEnsureCapacity((emxArray__common *)param_matrix, i25, (int)
                                  sizeof(double));
                for (i25 = 0; i25 < ix; i25++) {
                  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
                    param_matrix->data[ixstart + param_matrix->size[0] * i25] =
                      control_p->data[(ixstart + control_p->size[0] * i25) +
                      control_p->size[0] * control_p->size[1]];
                  }
                }

                i25 = param_matrix->size[0];
                tx->data[ic] += param_matrix->data[ib % param_matrix->size[0] +
                  param_matrix->size[0] * (ib / i25)] * A->data[ia - 1];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          ix = A->size[0];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    loop_ub = control_p->size[0];
    ix = control_p->size[1];
    i23 = c_control_p->size[0] * c_control_p->size[1];
    c_control_p->size[0] = loop_ub;
    c_control_p->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)c_control_p, i23, (int)sizeof(double));
    for (i23 = 0; i23 < ix; i23++) {
      for (i24 = 0; i24 < loop_ub; i24++) {
        c_control_p->data[i24 + c_control_p->size[0] * i23] = control_p->data
          [(i24 + control_p->size[0] * i23) + control_p->size[0] *
          control_p->size[1]];
      }
    }

    i23 = tx->size[0];
    tx->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)tx, i23, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      tx->data[i23] = 0.0;
      ix = A->size[1];
      for (i24 = 0; i24 < ix; i24++) {
        tx->data[i23] += A->data[i23 + A->size[0] * i24] * c_control_p->data[i24];
      }
    }
  }

  emxFree_real_T(&c_control_p);
  emxFree_real_T(&param_matrix);
  emxFree_real_T(&A);
  b_emxInit_real_T(&c_y, 1);
  i23 = c_y->size[0];
  c_y->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)c_y, i23, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    c_y->data[i23] = y->data[i23] - ref->data[i23];
  }

  emxFree_real_T(&y);
  power(c_y, x);
  emxFree_real_T(&c_y);
  if (x->size[0] == 0) {
    mtmp = 0.0;
  } else {
    mtmp = x->data[0];
    for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
      mtmp += x->data[ixstart - 1];
    }
  }

  b_emxInit_real_T(&b_tx, 1);
  i23 = b_tx->size[0];
  b_tx->size[0] = tx->size[0];
  emxEnsureCapacity((emxArray__common *)b_tx, i23, (int)sizeof(double));
  loop_ub = tx->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    b_tx->data[i23] = tx->data[i23] - ref->data[i23 + ref->size[0]];
  }

  emxFree_real_T(&tx);
  power(b_tx, x);
  emxFree_real_T(&b_tx);
  if (x->size[0] == 0) {
    b_mtmp = 0.0;
  } else {
    b_mtmp = x->data[0];
    for (ixstart = 2; ixstart <= x->size[0]; ixstart++) {
      b_mtmp += x->data[ixstart - 1];
    }
  }

  emxFree_real_T(&x);
  *error = (mtmp + b_mtmp) / (double)src->size[0];
}

/* End of code generation (bspline_inv.c) */
