/*
 * bspline.c
 *
 * Code generation for function 'bspline'
 *
 * C source code generated on: Mon Apr 25 19:43:42 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "bspline.h"
#include "correspondence_emxutil.h"
#include "power.h"
#include "floor.h"
#include "rdivide.h"

/* Function Definitions */
void b_bspline(const emxArray_real_T *src, const emxArray_real_T *control_p_x,
               const emxArray_real_T *control_p_y, const double bound_data[2],
               const int bound_size[2], emxArray_real_T *ref)
{
  emxArray_real_T *b_src;
  int loop_ub;
  int i26;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  emxArray_real_T *ty;
  emxArray_real_T *Ax;
  int tx_idx_0;
  emxArray_real_T *r16;
  emxArray_real_T *a;
  unsigned int unnamed_idx_0;
  int ic;
  int br;
  int ar;
  int ib;
  static const double dv4[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  int ia;
  emxArray_real_T *Ay;
  emxArray_real_T *A;
  double b_y;
  emxArray_real_T *param_matrix;
  double d3;
  int i27;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;
  b_emxInit_real_T(&b_src, 1);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  loop_ub = src->size[0];
  i26 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_src, i26, (int)sizeof(double));
  for (i26 = 0; i26 < loop_ub; i26++) {
    b_src->data[i26] = (src->data[i26] - bound_data[0]) + 1.0;
  }

  b_emxInit_real_T(&x, 1);
  b_emxInit_real_T(&c_src, 1);
  rdivide(b_src, 30.0, x);
  loop_ub = src->size[0];
  i26 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_src, i26, (int)sizeof(double));
  emxFree_real_T(&b_src);
  for (i26 = 0; i26 < loop_ub; i26++) {
    c_src->data[i26] = (src->data[i26 + src->size[0]] - bound_data[bound_size[0]])
      + 1.0;
  }

  b_emxInit_real_T(&y, 1);
  b_emxInit_real_T(&tx, 1);
  rdivide(c_src, 30.0, y);
  i26 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i26, (int)sizeof(double));
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i26 = 0; i26 < loop_ub; i26++) {
    tx->data[i26] = x->data[i26];
  }

  b_floor(tx);
  i26 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i26, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    tx->data[i26] = x->data[i26] - tx->data[i26];
  }

  b_emxInit_real_T(&ty, 1);
  i26 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i26, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    ty->data[i26] = y->data[i26];
  }

  b_floor(ty);
  i26 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i26, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    ty->data[i26] = y->data[i26] - ty->data[i26];
  }

  emxInit_real_T(&Ax, 2);
  tx_idx_0 = tx->size[0];
  i26 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = tx_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i26, (int)sizeof(double));
  loop_ub = tx->size[0] << 2;
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ax->data[i26] = 0.0;
  }

  tx_idx_0 = tx->size[0];
  for (i26 = 0; i26 < tx_idx_0; i26++) {
    Ax->data[i26] = 1.0;
  }

  loop_ub = tx->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ax->data[i26 + Ax->size[0]] = tx->data[i26];
  }

  b_emxInit_real_T(&r16, 1);
  power(tx, r16);
  loop_ub = r16->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ax->data[i26 + (Ax->size[0] << 1)] = r16->data[i26];
  }

  b_power(tx, r16);
  loop_ub = r16->size[0];
  emxFree_real_T(&tx);
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ax->data[i26 + Ax->size[0] * 3] = r16->data[i26];
  }

  emxInit_real_T(&a, 2);
  i26 = a->size[0] * a->size[1];
  a->size[0] = Ax->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i26, (int)sizeof(double));
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i26 = 0; i26 < loop_ub; i26++) {
    a->data[i26] = Ax->data[i26];
  }

  unnamed_idx_0 = (unsigned int)Ax->size[0];
  i26 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i26, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ax->data[i26] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    tx_idx_0 = a->size[0] * 3;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      i26 = loop_ub + a->size[0];
      for (ic = loop_ub; ic + 1 <= i26; ic++) {
        Ax->data[ic] = 0.0;
      }

      loop_ub += a->size[0];
    }

    br = 0;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv4[ib] != 0.0) {
          ia = ar;
          i26 = loop_ub + a->size[0];
          for (ic = loop_ub; ic + 1 <= i26; ic++) {
            ia++;
            Ax->data[ic] += dv4[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      loop_ub += a->size[0];
    }
  }

  emxInit_real_T(&Ay, 2);
  tx_idx_0 = ty->size[0];
  i26 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = tx_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i26, (int)sizeof(double));
  loop_ub = ty->size[0] << 2;
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ay->data[i26] = 0.0;
  }

  tx_idx_0 = ty->size[0];
  for (i26 = 0; i26 < tx_idx_0; i26++) {
    Ay->data[i26] = 1.0;
  }

  loop_ub = ty->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ay->data[i26 + Ay->size[0]] = ty->data[i26];
  }

  power(ty, r16);
  loop_ub = r16->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ay->data[i26 + (Ay->size[0] << 1)] = r16->data[i26];
  }

  b_power(ty, r16);
  loop_ub = r16->size[0];
  emxFree_real_T(&ty);
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ay->data[i26 + Ay->size[0] * 3] = r16->data[i26];
  }

  emxFree_real_T(&r16);
  i26 = a->size[0] * a->size[1];
  a->size[0] = Ay->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i26, (int)sizeof(double));
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i26 = 0; i26 < loop_ub; i26++) {
    a->data[i26] = Ay->data[i26];
  }

  unnamed_idx_0 = (unsigned int)Ay->size[0];
  i26 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i26, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i26 = 0; i26 < loop_ub; i26++) {
    Ay->data[i26] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    tx_idx_0 = a->size[0] * 3;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      i26 = loop_ub + a->size[0];
      for (ic = loop_ub; ic + 1 <= i26; ic++) {
        Ay->data[ic] = 0.0;
      }

      loop_ub += a->size[0];
    }

    br = 0;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv4[ib] != 0.0) {
          ia = ar;
          i26 = loop_ub + a->size[0];
          for (ic = loop_ub; ic + 1 <= i26; ic++) {
            ia++;
            Ay->data[ic] += dv4[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      loop_ub += a->size[0];
    }
  }

  emxFree_real_T(&a);
  emxInit_real_T(&A, 2);
  b_y = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  tx_idx_0 = src->size[0];
  i26 = A->size[0] * A->size[1];
  A->size[0] = tx_idx_0;
  emxEnsureCapacity((emxArray__common *)A, i26, (int)sizeof(double));
  i26 = A->size[0] * A->size[1];
  A->size[1] = (int)b_y;
  emxEnsureCapacity((emxArray__common *)A, i26, (int)sizeof(double));
  loop_ub = src->size[0] * (int)b_y;
  for (i26 = 0; i26 < loop_ub; i26++) {
    A->data[i26] = 0.0;
  }

  br = 0;
  emxInit_real_T(&param_matrix, 2);
  while (br <= src->size[0] - 1) {
    tx_idx_0 = control_p_x->size[0];
    i26 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = tx_idx_0;
    emxEnsureCapacity((emxArray__common *)param_matrix, i26, (int)sizeof(double));
    tx_idx_0 = control_p_x->size[1];
    i26 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = tx_idx_0;
    emxEnsureCapacity((emxArray__common *)param_matrix, i26, (int)sizeof(double));
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i26 = 0; i26 < loop_ub; i26++) {
      param_matrix->data[i26] = 0.0;
    }

    b_y = floor(x->data[br]);
    d3 = floor(y->data[br]);
    for (i26 = 0; i26 < 4; i26++) {
      for (i27 = 0; i27 < 4; i27++) {
        param_matrix->data[((int)(b_y + (1.0 + (double)i26)) +
                            param_matrix->size[0] * ((int)(d3 + (1.0 + (double)
          i27)) - 1)) - 1] = Ax->data[br + Ax->size[0] * i26] * Ay->data[br +
          Ay->size[0] * i27];
      }
    }

    tx_idx_0 = param_matrix->size[0] * param_matrix->size[1];
    for (i26 = 0; i26 < tx_idx_0; i26++) {
      A->data[br + A->size[0] * i26] = param_matrix->data[i26];
    }

    br++;
  }

  emxFree_real_T(&param_matrix);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emxFree_real_T(&y);
  tx_idx_0 = src->size[0];
  i26 = ref->size[0] * ref->size[1];
  ref->size[0] = tx_idx_0;
  ref->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)ref, i26, (int)sizeof(double));
  loop_ub = src->size[0] << 1;
  for (i26 = 0; i26 < loop_ub; i26++) {
    ref->data[i26] = 0.0;
  }

  guard2 = FALSE;
  if (A->size[1] == 1) {
    guard2 = TRUE;
  } else {
    tx_idx_0 = control_p_x->size[0] * control_p_x->size[1];
    if (tx_idx_0 == 1) {
      guard2 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i26 = x->size[0];
      x->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)x, i26, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i26 = 0; i26 < loop_ub; i26++) {
        x->data[i26] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          i26 = A->size[0];
          for (ic = 1; ic <= i26; ic++) {
            x->data[ic - 1] = 0.0;
          }

          loop_ub = A->size[0];
        }

        br = 0;
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          ar = -1;
          i26 = br + A->size[1];
          for (ib = br; ib + 1 <= i26; ib++) {
            if (control_p_x->data[ib] != 0.0) {
              ia = ar;
              i27 = A->size[0];
              for (ic = 0; ic + 1 <= i27; ic++) {
                ia++;
                x->data[ic] += control_p_x->data[ib] * A->data[ia];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          loop_ub = A->size[0];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    i26 = x->size[0];
    x->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)x, i26, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i26 = 0; i26 < loop_ub; i26++) {
      x->data[i26] = 0.0;
      tx_idx_0 = A->size[1];
      for (i27 = 0; i27 < tx_idx_0; i27++) {
        x->data[i26] += A->data[i26 + A->size[0] * i27] * control_p_x->data[i27];
      }
    }
  }

  loop_ub = x->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    ref->data[i26] = x->data[i26];
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    tx_idx_0 = control_p_y->size[0] * control_p_y->size[1];
    if (tx_idx_0 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i26 = x->size[0];
      x->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)x, i26, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i26 = 0; i26 < loop_ub; i26++) {
        x->data[i26] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          i26 = A->size[0];
          for (ic = 1; ic <= i26; ic++) {
            x->data[ic - 1] = 0.0;
          }

          loop_ub = A->size[0];
        }

        br = 0;
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          ar = -1;
          i26 = br + A->size[1];
          for (ib = br; ib + 1 <= i26; ib++) {
            if (control_p_y->data[ib] != 0.0) {
              ia = ar;
              i27 = A->size[0];
              for (ic = 0; ic + 1 <= i27; ic++) {
                ia++;
                x->data[ic] += control_p_y->data[ib] * A->data[ia];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          loop_ub = A->size[0];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    i26 = x->size[0];
    x->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)x, i26, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i26 = 0; i26 < loop_ub; i26++) {
      x->data[i26] = 0.0;
      tx_idx_0 = A->size[1];
      for (i27 = 0; i27 < tx_idx_0; i27++) {
        x->data[i26] += A->data[i26 + A->size[0] * i27] * control_p_y->data[i27];
      }
    }
  }

  emxFree_real_T(&A);
  loop_ub = x->size[0];
  for (i26 = 0; i26 < loop_ub; i26++) {
    ref->data[i26 + ref->size[0]] = x->data[i26];
  }

  emxFree_real_T(&x);
}

void bspline(const emxArray_real_T *src, const emxArray_real_T *control_p_x,
             const emxArray_real_T *control_p_y, const double bound[2],
             emxArray_real_T *ref)
{
  emxArray_real_T *b_src;
  int loop_ub;
  int i0;
  emxArray_real_T *x;
  emxArray_real_T *c_src;
  emxArray_real_T *y;
  emxArray_real_T *tx;
  emxArray_real_T *ty;
  emxArray_real_T *Ax;
  int tx_idx_0;
  emxArray_real_T *r0;
  emxArray_real_T *a;
  unsigned int unnamed_idx_0;
  int ic;
  int br;
  int ar;
  int ib;
  static const double dv0[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  int ia;
  emxArray_real_T *Ay;
  emxArray_real_T *A;
  double b_y;
  emxArray_real_T *param_matrix;
  double d0;
  int i1;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;
  b_emxInit_real_T(&b_src, 1);

  /*  bspline give 2d cubic uniform references of given source and control points */
  /*  Detailed explanation goes here */
  loop_ub = src->size[0];
  i0 = b_src->size[0];
  b_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_src, i0, (int)sizeof(double));
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_src->data[i0] = (src->data[i0] - bound[0]) + 1.0;
  }

  b_emxInit_real_T(&x, 1);
  b_emxInit_real_T(&c_src, 1);
  rdivide(b_src, 30.0, x);
  loop_ub = src->size[0];
  i0 = c_src->size[0];
  c_src->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_src, i0, (int)sizeof(double));
  emxFree_real_T(&b_src);
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_src->data[i0] = (src->data[i0 + src->size[0]] - bound[1]) + 1.0;
  }

  b_emxInit_real_T(&y, 1);
  b_emxInit_real_T(&tx, 1);
  rdivide(c_src, 30.0, y);
  i0 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i0, (int)sizeof(double));
  loop_ub = x->size[0];
  emxFree_real_T(&c_src);
  for (i0 = 0; i0 < loop_ub; i0++) {
    tx->data[i0] = x->data[i0];
  }

  b_floor(tx);
  i0 = tx->size[0];
  tx->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)tx, i0, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    tx->data[i0] = x->data[i0] - tx->data[i0];
  }

  b_emxInit_real_T(&ty, 1);
  i0 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i0, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ty->data[i0] = y->data[i0];
  }

  b_floor(ty);
  i0 = ty->size[0];
  ty->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)ty, i0, (int)sizeof(double));
  loop_ub = y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ty->data[i0] = y->data[i0] - ty->data[i0];
  }

  emxInit_real_T(&Ax, 2);
  tx_idx_0 = tx->size[0];
  i0 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = tx_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i0, (int)sizeof(double));
  loop_ub = tx->size[0] << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0] = 0.0;
  }

  tx_idx_0 = tx->size[0];
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    Ax->data[i0] = 1.0;
  }

  loop_ub = tx->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0 + Ax->size[0]] = tx->data[i0];
  }

  b_emxInit_real_T(&r0, 1);
  power(tx, r0);
  loop_ub = r0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0 + (Ax->size[0] << 1)] = r0->data[i0];
  }

  b_power(tx, r0);
  loop_ub = r0->size[0];
  emxFree_real_T(&tx);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0 + Ax->size[0] * 3] = r0->data[i0];
  }

  emxInit_real_T(&a, 2);
  i0 = a->size[0] * a->size[1];
  a->size[0] = Ax->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i0, (int)sizeof(double));
  loop_ub = Ax->size[0] * Ax->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    a->data[i0] = Ax->data[i0];
  }

  unnamed_idx_0 = (unsigned int)Ax->size[0];
  i0 = Ax->size[0] * Ax->size[1];
  Ax->size[0] = (int)unnamed_idx_0;
  Ax->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ax, i0, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ax->data[i0] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    tx_idx_0 = a->size[0] * 3;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      i0 = loop_ub + a->size[0];
      for (ic = loop_ub; ic + 1 <= i0; ic++) {
        Ax->data[ic] = 0.0;
      }

      loop_ub += a->size[0];
    }

    br = 0;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv0[ib] != 0.0) {
          ia = ar;
          i0 = loop_ub + a->size[0];
          for (ic = loop_ub; ic + 1 <= i0; ic++) {
            ia++;
            Ax->data[ic] += dv0[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      loop_ub += a->size[0];
    }
  }

  emxInit_real_T(&Ay, 2);
  tx_idx_0 = ty->size[0];
  i0 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = tx_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i0, (int)sizeof(double));
  loop_ub = ty->size[0] << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0] = 0.0;
  }

  tx_idx_0 = ty->size[0];
  for (i0 = 0; i0 < tx_idx_0; i0++) {
    Ay->data[i0] = 1.0;
  }

  loop_ub = ty->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0 + Ay->size[0]] = ty->data[i0];
  }

  power(ty, r0);
  loop_ub = r0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0 + (Ay->size[0] << 1)] = r0->data[i0];
  }

  b_power(ty, r0);
  loop_ub = r0->size[0];
  emxFree_real_T(&ty);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0 + Ay->size[0] * 3] = r0->data[i0];
  }

  emxFree_real_T(&r0);
  i0 = a->size[0] * a->size[1];
  a->size[0] = Ay->size[0];
  a->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)a, i0, (int)sizeof(double));
  loop_ub = Ay->size[0] * Ay->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    a->data[i0] = Ay->data[i0];
  }

  unnamed_idx_0 = (unsigned int)Ay->size[0];
  i0 = Ay->size[0] * Ay->size[1];
  Ay->size[0] = (int)unnamed_idx_0;
  Ay->size[1] = 4;
  emxEnsureCapacity((emxArray__common *)Ay, i0, (int)sizeof(double));
  loop_ub = (int)unnamed_idx_0 << 2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ay->data[i0] = 0.0;
  }

  if (a->size[0] == 0) {
  } else {
    tx_idx_0 = a->size[0] * 3;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      i0 = loop_ub + a->size[0];
      for (ic = loop_ub; ic + 1 <= i0; ic++) {
        Ay->data[ic] = 0.0;
      }

      loop_ub += a->size[0];
    }

    br = 0;
    loop_ub = 0;
    while ((a->size[0] > 0) && (loop_ub <= tx_idx_0)) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 4; ib++) {
        if (dv0[ib] != 0.0) {
          ia = ar;
          i0 = loop_ub + a->size[0];
          for (ic = loop_ub; ic + 1 <= i0; ic++) {
            ia++;
            Ay->data[ic] += dv0[ib] * a->data[ia];
          }
        }

        ar += a->size[0];
      }

      br += 4;
      loop_ub += a->size[0];
    }
  }

  emxFree_real_T(&a);
  emxInit_real_T(&A, 2);
  b_y = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  tx_idx_0 = src->size[0];
  i0 = A->size[0] * A->size[1];
  A->size[0] = tx_idx_0;
  emxEnsureCapacity((emxArray__common *)A, i0, (int)sizeof(double));
  i0 = A->size[0] * A->size[1];
  A->size[1] = (int)b_y;
  emxEnsureCapacity((emxArray__common *)A, i0, (int)sizeof(double));
  loop_ub = src->size[0] * (int)b_y;
  for (i0 = 0; i0 < loop_ub; i0++) {
    A->data[i0] = 0.0;
  }

  br = 0;
  emxInit_real_T(&param_matrix, 2);
  while (br <= src->size[0] - 1) {
    tx_idx_0 = control_p_x->size[0];
    i0 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[0] = tx_idx_0;
    emxEnsureCapacity((emxArray__common *)param_matrix, i0, (int)sizeof(double));
    tx_idx_0 = control_p_x->size[1];
    i0 = param_matrix->size[0] * param_matrix->size[1];
    param_matrix->size[1] = tx_idx_0;
    emxEnsureCapacity((emxArray__common *)param_matrix, i0, (int)sizeof(double));
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      param_matrix->data[i0] = 0.0;
    }

    b_y = floor(x->data[br]);
    d0 = floor(y->data[br]);
    for (i0 = 0; i0 < 4; i0++) {
      for (i1 = 0; i1 < 4; i1++) {
        param_matrix->data[((int)(b_y + (1.0 + (double)i0)) + param_matrix->
                            size[0] * ((int)(d0 + (1.0 + (double)i1)) - 1)) - 1]
          = Ax->data[br + Ax->size[0] * i0] * Ay->data[br + Ay->size[0] * i1];
      }
    }

    tx_idx_0 = param_matrix->size[0] * param_matrix->size[1];
    for (i0 = 0; i0 < tx_idx_0; i0++) {
      A->data[br + A->size[0] * i0] = param_matrix->data[i0];
    }

    br++;
  }

  emxFree_real_T(&param_matrix);
  emxFree_real_T(&Ay);
  emxFree_real_T(&Ax);
  emxFree_real_T(&y);
  tx_idx_0 = src->size[0];
  i0 = ref->size[0] * ref->size[1];
  ref->size[0] = tx_idx_0;
  ref->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)ref, i0, (int)sizeof(double));
  loop_ub = src->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[i0] = 0.0;
  }

  guard2 = FALSE;
  if (A->size[1] == 1) {
    guard2 = TRUE;
  } else {
    tx_idx_0 = control_p_x->size[0] * control_p_x->size[1];
    if (tx_idx_0 == 1) {
      guard2 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i0 = x->size[0];
      x->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i0 = 0; i0 < loop_ub; i0++) {
        x->data[i0] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          i0 = A->size[0];
          for (ic = 1; ic <= i0; ic++) {
            x->data[ic - 1] = 0.0;
          }

          loop_ub = A->size[0];
        }

        br = 0;
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          ar = -1;
          i0 = br + A->size[1];
          for (ib = br; ib + 1 <= i0; ib++) {
            if (control_p_x->data[ib] != 0.0) {
              ia = ar;
              i1 = A->size[0];
              for (ic = 0; ic + 1 <= i1; ic++) {
                ia++;
                x->data[ic] += control_p_x->data[ib] * A->data[ia];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          loop_ub = A->size[0];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    i0 = x->size[0];
    x->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      x->data[i0] = 0.0;
      tx_idx_0 = A->size[1];
      for (i1 = 0; i1 < tx_idx_0; i1++) {
        x->data[i0] += A->data[i0 + A->size[0] * i1] * control_p_x->data[i1];
      }
    }
  }

  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[i0] = x->data[i0];
  }

  guard1 = FALSE;
  if (A->size[1] == 1) {
    guard1 = TRUE;
  } else {
    tx_idx_0 = control_p_y->size[0] * control_p_y->size[1];
    if (tx_idx_0 == 1) {
      guard1 = TRUE;
    } else {
      unnamed_idx_0 = (unsigned int)A->size[0];
      i0 = x->size[0];
      x->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(double));
      loop_ub = (int)unnamed_idx_0;
      for (i0 = 0; i0 < loop_ub; i0++) {
        x->data[i0] = 0.0;
      }

      if (A->size[0] == 0) {
      } else {
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          i0 = A->size[0];
          for (ic = 1; ic <= i0; ic++) {
            x->data[ic - 1] = 0.0;
          }

          loop_ub = A->size[0];
        }

        br = 0;
        loop_ub = 0;
        while ((A->size[0] > 0) && (loop_ub <= 0)) {
          ar = -1;
          i0 = br + A->size[1];
          for (ib = br; ib + 1 <= i0; ib++) {
            if (control_p_y->data[ib] != 0.0) {
              ia = ar;
              i1 = A->size[0];
              for (ic = 0; ic + 1 <= i1; ic++) {
                ia++;
                x->data[ic] += control_p_y->data[ib] * A->data[ia];
              }
            }

            ar += A->size[0];
          }

          br += A->size[1];
          loop_ub = A->size[0];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    i0 = x->size[0];
    x->size[0] = A->size[0];
    emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(double));
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      x->data[i0] = 0.0;
      tx_idx_0 = A->size[1];
      for (i1 = 0; i1 < tx_idx_0; i1++) {
        x->data[i0] += A->data[i0 + A->size[0] * i1] * control_p_y->data[i1];
      }
    }
  }

  emxFree_real_T(&A);
  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ref->data[i0 + ref->size[0]] = x->data[i0];
  }

  emxFree_real_T(&x);
}

/* End of code generation (bspline.c) */
