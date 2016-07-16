/*
 * segmentation.c
 *
 * Code generation for function 'segmentation'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "correspondence_emxutil.h"
#include "ceil.h"
#include "rdivide.h"
#include "mod.h"
#include "sum.h"
#include "power.h"
#include "getPixelsValue.h"
#include "bspline.h"
#include "bspline_inv.h"
#include "correspondence_rtwutil.h"

/* Function Declarations */
static void g_eml_null_assignment(emxArray_struct_T *x);
static void h_eml_null_assignment(emxArray_b_struct_T *x);

/* Function Definitions */
static void g_eml_null_assignment(emxArray_struct_T *x)
{
  int nxin;
  int k;
  emxArray_struct_T *b_x;
  nxin = x->size[1] - 1;
  for (k = 1; k <= nxin; k++) {
    emxCopyStruct_struct_T(&x->data[k - 1], &x->data[k]);
  }

  if (1 > nxin) {
    nxin = 0;
  }

  emxInit_struct_T(&b_x, 2);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = nxin;
  emxEnsureCapacity_struct_T(b_x, k);
  for (k = 0; k < nxin; k++) {
    emxCopyStruct_struct_T(&b_x->data[b_x->size[0] * k], &x->data[k]);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_struct_T(x, k);
  nxin = b_x->size[1];
  for (k = 0; k < nxin; k++) {
    emxCopyStruct_struct_T(&x->data[x->size[0] * k], &b_x->data[b_x->size[0] * k]);
  }

  emxFree_struct_T(&b_x);
}

static void h_eml_null_assignment(emxArray_b_struct_T *x)
{
  int nxin;
  int k;
  emxArray_b_struct_T *b_x;
  nxin = x->size[1] - 1;
  for (k = 1; k <= nxin; k++) {
    b_emxCopyStruct_struct_T(&x->data[k - 1], &x->data[k]);
  }

  if (1 > nxin) {
    nxin = 0;
  }

  b_emxInit_struct_T(&b_x, 2);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = nxin;
  b_emxEnsureCapacity_struct_T(b_x, k);
  for (k = 0; k < nxin; k++) {
    b_emxCopyStruct_struct_T(&b_x->data[b_x->size[0] * k], &x->data[k]);
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  b_emxEnsureCapacity_struct_T(x, k);
  nxin = b_x->size[1];
  for (k = 0; k < nxin; k++) {
    b_emxCopyStruct_struct_T(&x->data[x->size[0] * k], &b_x->data[b_x->size[0] *
      k]);
  }

  b_emxFree_struct_T(&b_x);
}

void c_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int n;
  int k;
  int i;
  int j;
  n = x->size[0] << 1;
  k = 0;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void d_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int k;
  int i;
  int j;
  k = 0;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void segmentation(const emxArray_real_T *Sp2, const emxArray_real_T *Confidence,
                  const emxArray_real_T *DCF, const emxArray_real_T *Ref,
                  emxArray_struct_T *sp_set, emxArray_real_T *sp_val,
                  emxArray_b_struct_T *bspline_set, emxArray_struct_T *ref_set)
{
  struct_T r4;
  int i22;
  int i;
  emxArray_real_T *sp_val2;
  emxArray_real_T *error_set;
  emxArray_real_T *ref_point;
  struct_T r5;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_boolean_T *b_ref_point;
  emxArray_real_T *b_ii;
  emxArray_int32_T *c_ii;
  emxArray_int32_T *d_ii;
  int j;
  double s;
  int loop_ub;
  int ixstop;
  int idx;
  int ixstart;
  boolean_T exitg3;
  boolean_T guard2 = FALSE;
  boolean_T exitg2;
  boolean_T guard1 = FALSE;
  int surface_amount;
  double outsz[2];
  emxArray_struct_T *sp_set2;
  struct_T r6;
  b_struct_T r7;
  struct_T r8;
  emxArray_int32_T *ref_p;
  emxArray_real_T *val_p;
  emxArray_real_T *val_o;
  emxArray_real_T *control_p;
  b_struct_T r9;
  struct_T r10;
  emxArray_real_T *r11;
  emxArray_real_T *b_val_p;
  emxArray_boolean_T *b_ref_p;
  emxArray_boolean_T *c_ref_p;
  emxArray_boolean_T *d_ref_p;
  emxArray_boolean_T *c_ref_point;
  emxArray_boolean_T *d_ref_point;
  emxArray_boolean_T *e_ref_point;
  emxArray_real_T *f_ref_point;
  int ix;
  int iy;
  double error;
  int bound_size[2];
  boolean_T exitg1;
  double y[3];
  emxArray_struct_T *ref_set2;
  emxArray_b_struct_T *bspline_set2;
  struct_T r12;
  b_struct_T r13;
  struct_T r14;
  emxInitStruct_struct_T(&r4);
  i22 = r4.val->size[0] * r4.val->size[1];
  r4.val->size[0] = 0;
  r4.val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r4.val, i22, (int)sizeof(double));
  i22 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = 1;
  emxEnsureCapacity_struct_T(sp_set, i22);
  emxCopyStruct_struct_T(&sp_set->data[0], &r4);
  i22 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = 0;
  sp_val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));

  /* % get superpixels in coordinate form */
  i = 0;
  emxFreeStruct_struct_T(&r4);
  b_emxInit_real_T(&sp_val2, 1);
  b_emxInit_real_T(&error_set, 1);
  emxInit_real_T(&ref_point, 2);
  emxInitStruct_struct_T(&r5);
  emxInit_boolean_T(&x, 2);
  emxInit_int32_T(&ii, 1);
  emxInit_boolean_T(&b_ref_point, 2);
  b_emxInit_real_T(&b_ii, 1);
  emxInit_int32_T(&c_ii, 1);
  emxInit_int32_T(&d_ii, 1);
  while (i <= Sp2->size[0] - 1) {
    for (j = 0; j < Sp2->size[1]; j++) {
      i22 = x->size[0] * x->size[1];
      x->size[0] = sp_val->size[0];
      x->size[1] = sp_val->size[1];
      emxEnsureCapacity((emxArray__common *)x, i22, (int)sizeof(boolean_T));
      s = Sp2->data[i + Sp2->size[0] * j];
      loop_ub = sp_val->size[0] * sp_val->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        x->data[i22] = (sp_val->data[i22] == s);
      }

      ixstop = x->size[0] * x->size[1];
      idx = 0;
      i22 = ii->size[0];
      ii->size[0] = ixstop;
      emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
      ixstart = 1;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (ixstart <= ixstop)) {
        guard2 = FALSE;
        if (x->data[ixstart - 1]) {
          idx++;
          ii->data[idx - 1] = ixstart;
          if (idx >= ixstop) {
            exitg3 = TRUE;
          } else {
            guard2 = TRUE;
          }
        } else {
          guard2 = TRUE;
        }

        if (guard2 == TRUE) {
          ixstart++;
        }
      }

      if (ixstop == 1) {
        if (idx == 0) {
          i22 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        i22 = c_ii->size[0];
        c_ii->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)c_ii, i22, (int)sizeof(int));
        for (i22 = 0; i22 < loop_ub; i22++) {
          c_ii->data[i22] = ii->data[i22];
        }

        i22 = ii->size[0];
        ii->size[0] = c_ii->size[0];
        emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
        loop_ub = c_ii->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          ii->data[i22] = c_ii->data[i22];
        }
      }

      i22 = b_ii->size[0];
      b_ii->size[0] = ii->size[0];
      emxEnsureCapacity((emxArray__common *)b_ii, i22, (int)sizeof(double));
      loop_ub = ii->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_ii->data[i22] = ii->data[i22];
      }

      if (b_sum(b_ii) == 0.0) {
        i22 = x->size[0] * x->size[1];
        x->size[0] = Sp2->size[0];
        x->size[1] = Sp2->size[1];
        emxEnsureCapacity((emxArray__common *)x, i22, (int)sizeof(boolean_T));
        s = Sp2->data[i + Sp2->size[0] * j];
        loop_ub = Sp2->size[0] * Sp2->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          x->data[i22] = (Sp2->data[i22] == s);
        }

        ixstop = x->size[0] * x->size[1];
        idx = 0;
        i22 = ii->size[0];
        ii->size[0] = ixstop;
        emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
        ixstart = 1;
        exitg2 = FALSE;
        while ((exitg2 == FALSE) && (ixstart <= ixstop)) {
          guard1 = FALSE;
          if (x->data[ixstart - 1]) {
            idx++;
            ii->data[idx - 1] = ixstart;
            if (idx >= ixstop) {
              exitg2 = TRUE;
            } else {
              guard1 = TRUE;
            }
          } else {
            guard1 = TRUE;
          }

          if (guard1 == TRUE) {
            ixstart++;
          }
        }

        if (ixstop == 1) {
          if (idx == 0) {
            i22 = ii->size[0];
            ii->size[0] = 0;
            emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
          }
        } else {
          if (1 > idx) {
            loop_ub = 0;
          } else {
            loop_ub = idx;
          }

          i22 = d_ii->size[0];
          d_ii->size[0] = loop_ub;
          emxEnsureCapacity((emxArray__common *)d_ii, i22, (int)sizeof(int));
          for (i22 = 0; i22 < loop_ub; i22++) {
            d_ii->data[i22] = ii->data[i22];
          }

          i22 = ii->size[0];
          ii->size[0] = d_ii->size[0];
          emxEnsureCapacity((emxArray__common *)ii, i22, (int)sizeof(int));
          loop_ub = d_ii->size[0];
          for (i22 = 0; i22 < loop_ub; i22++) {
            ii->data[i22] = d_ii->data[i22];
          }
        }

        i22 = sp_val2->size[0];
        sp_val2->size[0] = ii->size[0];
        emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
        loop_ub = ii->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          sp_val2->data[i22] = ii->data[i22];
        }

        i22 = error_set->size[0];
        error_set->size[0] = sp_val->size[0] + 1;
        emxEnsureCapacity((emxArray__common *)error_set, i22, (int)sizeof(double));
        loop_ub = sp_val->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          error_set->data[i22] = sp_val->data[i22];
        }

        error_set->data[sp_val->size[0]] = Sp2->data[i + Sp2->size[0] * j];
        ixstop = error_set->size[0];
        i22 = sp_val->size[0] * sp_val->size[1];
        sp_val->size[0] = ixstop;
        emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
        i22 = sp_val->size[0] * sp_val->size[1];
        sp_val->size[1] = 1;
        emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
        loop_ub = error_set->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          sp_val->data[i22] = error_set->data[i22];
        }

        ixstart = sp_val2->size[0];
        i22 = ref_point->size[0] * ref_point->size[1];
        ref_point->size[0] = ixstart;
        ref_point->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)ref_point, i22, (int)sizeof(double));
        loop_ub = sp_val2->size[0] << 1;
        for (i22 = 0; i22 < loop_ub; i22++) {
          ref_point->data[i22] = 0.0;
        }

        c_mod(sp_val2, Sp2->size[0], error_set);
        loop_ub = error_set->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          ref_point->data[i22] = error_set->data[i22];
        }

        rdivide(sp_val2, Sp2->size[0], error_set);
        b_ceil(error_set);
        loop_ub = error_set->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          ref_point->data[i22 + ref_point->size[0]] = error_set->data[i22];
        }

        i22 = b_ref_point->size[0] * b_ref_point->size[1];
        b_ref_point->size[0] = ref_point->size[0];
        b_ref_point->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)b_ref_point, i22, (int)sizeof
                          (boolean_T));
        loop_ub = ref_point->size[0] * ref_point->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          b_ref_point->data[i22] = (ref_point->data[i22] == 0.0);
        }

        c_eml_li_find(b_ref_point, ii);
        loop_ub = ii->size[0];
        for (i22 = 0; i22 < loop_ub; i22++) {
          ref_point->data[ii->data[i22] - 1] = Sp2->size[0];
        }

        i22 = r5.val->size[0] * r5.val->size[1];
        r5.val->size[0] = ref_point->size[0];
        r5.val->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)r5.val, i22, (int)sizeof(double));
        loop_ub = ref_point->size[0] * ref_point->size[1];
        for (i22 = 0; i22 < loop_ub; i22++) {
          r5.val->data[i22] = ref_point->data[i22];
        }

        ixstart = sp_set->size[1];
        i22 = sp_set->size[0] * sp_set->size[1];
        sp_set->size[1] = ixstart + 1;
        emxEnsureCapacity_struct_T(sp_set, i22);
        emxCopyStruct_struct_T(&sp_set->data[ixstart], &r5);
      }
    }

    i++;
  }

  emxFree_int32_T(&d_ii);
  emxFree_int32_T(&c_ii);
  emxFree_real_T(&b_ii);
  emxFree_boolean_T(&b_ref_point);
  emxFree_boolean_T(&x);
  emxFreeStruct_struct_T(&r5);
  g_eml_null_assignment(sp_set);

  /* % remove point with low confidence */
  surface_amount = sp_set->size[1];
  for (i = 0; i < surface_amount; i++) {
    i22 = sp_val2->size[0];
    sp_val2->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
    i22 = error_set->size[0];
    error_set->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)error_set, i22, (int)sizeof(double));
    for (j = 0; j < sp_set->data[i].val->size[0]; j++) {
      outsz[0] = sp_set->data[i].val->data[j];
      outsz[1] = sp_set->data[i].val->data[j + sp_set->data[i].val->size[0]];
      if ((DCF->data[((int)outsz[0] + DCF->size[0] * ((int)outsz[1] - 1)) - 1] >
           0.0) && (DCF->data[((int)outsz[0] + DCF->size[0] * ((int)outsz[1] - 1))
                    - 1] <= Sp2->size[1]) && (DCF->data[(((int)outsz[0] +
             DCF->size[0] * ((int)outsz[1] - 1)) + DCF->size[0] * DCF->size[1])
           - 1] > 0.0) && (DCF->data[(((int)outsz[0] + DCF->size[0] * ((int)
              outsz[1] - 1)) + DCF->size[0] * DCF->size[1]) - 1] <= Sp2->size[0]))
      {
        ixstart = sp_val2->size[0];
        i22 = sp_val2->size[0];
        sp_val2->size[0] = ixstart + 1;
        emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
        sp_val2->data[ixstart] = outsz[0];
        ixstart = error_set->size[0];
        i22 = error_set->size[0];
        error_set->size[0] = ixstart + 1;
        emxEnsureCapacity((emxArray__common *)error_set, i22, (int)sizeof(double));
        error_set->data[ixstart] = outsz[1];
      }
    }

    ixstart = sp_val2->size[0];
    ixstop = error_set->size[0];
    i22 = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
    sp_set->data[i].val->size[0] = ixstart;
    sp_set->data[i].val->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)sp_set->data[i].val, i22, (int)sizeof
                      (double));
    for (i22 = 0; i22 < ixstart; i22++) {
      sp_set->data[i].val->data[i22] = sp_val2->data[i22];
    }

    for (i22 = 0; i22 < ixstop; i22++) {
      sp_set->data[i].val->data[i22 + sp_set->data[i].val->size[0]] =
        error_set->data[i22];
    }
  }

  emxInit_struct_T(&sp_set2, 2);
  emxInitStruct_struct_T(&r6);

  /* % remove surface with low confidence */
  i22 = r6.val->size[0] * r6.val->size[1];
  r6.val->size[0] = 0;
  r6.val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r6.val, i22, (int)sizeof(double));
  i22 = sp_set2->size[0] * sp_set2->size[1];
  sp_set2->size[0] = 1;
  sp_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(sp_set2, i22);
  emxCopyStruct_struct_T(&sp_set2->data[0], &r6);
  i22 = sp_val2->size[0];
  sp_val2->size[0] = 0;
  emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
  i = 0;
  emxFreeStruct_struct_T(&r6);
  while (i <= sp_set->size[1] - 1) {
    s = 0.0;
    for (j = 0; j < sp_set->data[i].val->size[0]; j++) {
      s += Confidence->data[((int)sp_set->data[i].val->data[j] +
        Confidence->size[0] * ((int)sp_set->data[i].val->data[j + sp_set->data[i]
        .val->size[0]] - 1)) - 1];
    }

    s /= (double)sp_set->data[i].val->size[0];
    if (s >= 0.8) {
      ixstart = sp_set2->size[1];
      i22 = sp_set2->size[0] * sp_set2->size[1];
      sp_set2->size[1] = ixstart + 1;
      emxEnsureCapacity_struct_T(sp_set2, i22);
      emxCopyStruct_struct_T(&sp_set2->data[ixstart], &sp_set->data[i]);
      ixstart = sp_val2->size[0];
      i22 = sp_val2->size[0];
      sp_val2->size[0] = ixstart + 1;
      emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
      sp_val2->data[ixstart] = sp_val->data[i];
    }

    i++;
  }

  g_eml_null_assignment(sp_set2);
  i22 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = sp_set2->size[1];
  emxEnsureCapacity_struct_T(sp_set, i22);
  loop_ub = sp_set2->size[0] * sp_set2->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    emxCopyStruct_struct_T(&sp_set->data[i22], &sp_set2->data[i22]);
  }

  ixstart = sp_val2->size[0];
  i22 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
  i22 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
  loop_ub = sp_val2->size[0];
  for (i22 = 0; i22 < loop_ub; i22++) {
    sp_val->data[i22] = sp_val2->data[i22];
  }

  b_emxInitStruct_struct_T(&r7);

  /* % compute bsplines of superpixels */
  surface_amount = sp_set2->size[1];
  i22 = r7.x->size[0] * r7.x->size[1];
  r7.x->size[0] = 0;
  r7.x->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r7.x, i22, (int)sizeof(double));
  i22 = r7.y->size[0] * r7.y->size[1];
  r7.y->size[0] = 0;
  r7.y->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r7.y, i22, (int)sizeof(double));
  i22 = bspline_set->size[0] * bspline_set->size[1];
  bspline_set->size[0] = 1;
  bspline_set->size[1] = 1;
  b_emxEnsureCapacity_struct_T(bspline_set, i22);
  b_emxCopyStruct_struct_T(&bspline_set->data[0], &r7);
  i22 = error_set->size[0];
  error_set->size[0] = sp_set2->size[1];
  emxEnsureCapacity((emxArray__common *)error_set, i22, (int)sizeof(double));
  loop_ub = sp_set2->size[1];
  b_emxFreeStruct_struct_T(&r7);
  for (i22 = 0; i22 < loop_ub; i22++) {
    error_set->data[i22] = 0.0;
  }

  emxInitStruct_struct_T(&r8);
  i22 = r8.val->size[0] * r8.val->size[1];
  r8.val->size[0] = 0;
  r8.val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r8.val, i22, (int)sizeof(double));
  i22 = ref_set->size[0] * ref_set->size[1];
  ref_set->size[0] = 1;
  ref_set->size[1] = 1;
  emxEnsureCapacity_struct_T(ref_set, i22);
  emxCopyStruct_struct_T(&ref_set->data[0], &r8);
  i = 0;
  emxFreeStruct_struct_T(&r8);
  b_emxInit_int32_T(&ref_p, 2);
  emxInit_real_T(&val_p, 2);
  emxInit_real_T(&val_o, 2);
  c_emxInit_real_T(&control_p, 3);
  b_emxInitStruct_struct_T(&r9);
  emxInitStruct_struct_T(&r10);
  emxInit_real_T(&r11, 2);
  emxInit_real_T(&b_val_p, 2);
  b_emxInit_boolean_T(&b_ref_p, 1);
  b_emxInit_boolean_T(&c_ref_p, 1);
  emxInit_boolean_T(&d_ref_p, 2);
  b_emxInit_boolean_T(&c_ref_point, 1);
  b_emxInit_boolean_T(&d_ref_point, 1);
  emxInit_boolean_T(&e_ref_point, 2);
  emxInit_real_T(&f_ref_point, 2);
  while (i <= sp_set2->size[1] - 1) {
    i22 = ref_point->size[0] * ref_point->size[1];
    ref_point->size[0] = 0;
    ref_point->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_point, i22, (int)sizeof(double));
    for (j = 0; j < sp_set2->data[i].val->size[0]; j++) {
      idx = (int)sp_set2->data[i].val->data[j + sp_set2->data[i].val->size[0]];
      ixstart = (int)sp_set2->data[i].val->data[j];
      ixstop = (int)sp_set2->data[i].val->data[j + sp_set2->data[i].val->size[0]];
      ix = (int)sp_set2->data[i].val->data[j];
      i22 = f_ref_point->size[0] * f_ref_point->size[1];
      f_ref_point->size[0] = ref_point->size[0] + 1;
      f_ref_point->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)f_ref_point, i22, (int)sizeof(double));
      for (i22 = 0; i22 < 2; i22++) {
        loop_ub = ref_point->size[0];
        for (iy = 0; iy < loop_ub; iy++) {
          f_ref_point->data[iy + f_ref_point->size[0] * i22] = ref_point->
            data[iy + ref_point->size[0] * i22];
        }
      }

      f_ref_point->data[ref_point->size[0]] = DCF->data[((ixstart + DCF->size[0]
        * (idx - 1)) + DCF->size[0] * DCF->size[1]) - 1];
      f_ref_point->data[ref_point->size[0] + f_ref_point->size[0]] = DCF->data
        [(ix + DCF->size[0] * (ixstop - 1)) - 1];
      i22 = ref_point->size[0] * ref_point->size[1];
      ref_point->size[0] = f_ref_point->size[0];
      ref_point->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)ref_point, i22, (int)sizeof(double));
      for (i22 = 0; i22 < 2; i22++) {
        loop_ub = f_ref_point->size[0];
        for (iy = 0; iy < loop_ub; iy++) {
          ref_point->data[iy + ref_point->size[0] * i22] = f_ref_point->data[iy
            + f_ref_point->size[0] * i22];
        }
      }
    }

    i22 = e_ref_point->size[0] * e_ref_point->size[1];
    e_ref_point->size[0] = ref_point->size[0];
    e_ref_point->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)e_ref_point, i22, (int)sizeof
                      (boolean_T));
    loop_ub = ref_point->size[0] * ref_point->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      e_ref_point->data[i22] = (ref_point->data[i22] < 1.0);
    }

    c_eml_li_find(e_ref_point, ii);
    loop_ub = ii->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      ref_point->data[ii->data[i22] - 1] = 1.0;
    }

    loop_ub = ref_point->size[0];
    ixstart = Sp2->size[0];
    i22 = d_ref_point->size[0];
    d_ref_point->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)d_ref_point, i22, (int)sizeof
                      (boolean_T));
    for (i22 = 0; i22 < loop_ub; i22++) {
      d_ref_point->data[i22] = (ref_point->data[i22] > ixstart);
    }

    d_eml_li_find(d_ref_point, ii);
    ixstart = ii->size[0];
    for (i22 = 0; i22 < ixstart; i22++) {
      ref_point->data[ii->data[i22] - 1] = Sp2->size[0];
    }

    loop_ub = ref_point->size[0];
    ixstart = Sp2->size[1];
    i22 = c_ref_point->size[0];
    c_ref_point->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)c_ref_point, i22, (int)sizeof
                      (boolean_T));
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_ref_point->data[i22] = (ref_point->data[i22 + ref_point->size[0]] >
        ixstart);
    }

    d_eml_li_find(c_ref_point, ii);
    ixstart = ii->size[0];
    for (i22 = 0; i22 < ixstart; i22++) {
      ref_point->data[(ii->data[i22] + ref_point->size[0]) - 1] = Sp2->size[1];
    }

    i22 = r10.val->size[0] * r10.val->size[1];
    r10.val->size[0] = ref_point->size[0];
    r10.val->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)r10.val, i22, (int)sizeof(double));
    loop_ub = ref_point->size[0] * ref_point->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      r10.val->data[i22] = ref_point->data[i22];
    }

    ixstart = ref_set->size[1];
    i22 = ref_set->size[0] * ref_set->size[1];
    ref_set->size[1] = ixstart + 1;
    emxEnsureCapacity_struct_T(ref_set, i22);
    emxCopyStruct_struct_T(&ref_set->data[ixstart], &r10);
    c_bspline_inv(sp_set2->data[i].val, ref_point, control_p, &error);
    loop_ub = control_p->size[0];
    ixstart = control_p->size[1];
    i22 = r9.x->size[0] * r9.x->size[1];
    r9.x->size[0] = loop_ub;
    r9.x->size[1] = ixstart;
    emxEnsureCapacity((emxArray__common *)r9.x, i22, (int)sizeof(double));
    for (i22 = 0; i22 < ixstart; i22++) {
      for (iy = 0; iy < loop_ub; iy++) {
        r9.x->data[iy + r9.x->size[0] * i22] = control_p->data[iy +
          control_p->size[0] * i22];
      }
    }

    loop_ub = control_p->size[0];
    ixstart = control_p->size[1];
    i22 = r9.y->size[0] * r9.y->size[1];
    r9.y->size[0] = loop_ub;
    r9.y->size[1] = ixstart;
    emxEnsureCapacity((emxArray__common *)r9.y, i22, (int)sizeof(double));
    for (i22 = 0; i22 < ixstart; i22++) {
      for (iy = 0; iy < loop_ub; iy++) {
        r9.y->data[iy + r9.y->size[0] * i22] = control_p->data[(iy +
          control_p->size[0] * i22) + control_p->size[0] * control_p->size[1]];
      }
    }

    for (i22 = 0; i22 < 2; i22++) {
      outsz[i22] = sp_set2->data[i].val->size[i22];
    }

    bound_size[0] = 1;
    bound_size[1] = (int)outsz[1];
    ix = 1;
    iy = -1;
    for (loop_ub = 1; loop_ub <= sp_set2->data[i].val->size[1]; loop_ub++) {
      ixstart = ix;
      ixstop = (ix + sp_set2->data[i].val->size[0]) - 1;
      s = sp_set2->data[i].val->data[ix - 1];
      if (sp_set2->data[i].val->size[0] > 1) {
        if (rtIsNaN(s)) {
          idx = ix;
          exitg1 = FALSE;
          while ((exitg1 == FALSE) && (idx + 1 <= ixstop)) {
            ixstart = idx + 1;
            if (!rtIsNaN(sp_set2->data[i].val->data[idx])) {
              s = sp_set2->data[i].val->data[idx];
              exitg1 = TRUE;
            } else {
              idx++;
            }
          }
        }

        if (ixstart < ixstop) {
          while (ixstart + 1 <= ixstop) {
            if (sp_set2->data[i].val->data[ixstart] < s) {
              s = sp_set2->data[i].val->data[ixstart];
            }

            ixstart++;
          }
        }
      }

      iy++;
      outsz[iy] = s;
      ix += sp_set2->data[i].val->size[0];
    }

    b_bspline(sp_set2->data[i].val, r9.x, r9.y, outsz, bound_size, r11);
    i22 = ref_p->size[0] * ref_p->size[1];
    ref_p->size[0] = r11->size[0];
    ref_p->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_p, i22, (int)sizeof(int));
    loop_ub = r11->size[0] * r11->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      s = rt_roundd_snf(r11->data[i22]);
      if (s < 2.147483648E+9) {
        if (s >= -2.147483648E+9) {
          iy = (int)s;
        } else {
          iy = MIN_int32_T;
        }
      } else if (s >= 2.147483648E+9) {
        iy = MAX_int32_T;
      } else {
        iy = 0;
      }

      ref_p->data[i22] = iy;
    }

    i22 = d_ref_p->size[0] * d_ref_p->size[1];
    d_ref_p->size[0] = ref_p->size[0];
    d_ref_p->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)d_ref_p, i22, (int)sizeof(boolean_T));
    loop_ub = ref_p->size[0] * ref_p->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      d_ref_p->data[i22] = (ref_p->data[i22] < 1);
    }

    c_eml_li_find(d_ref_p, ii);
    loop_ub = ii->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      ref_p->data[ii->data[i22] - 1] = 1;
    }

    loop_ub = ref_p->size[0];
    ixstart = Sp2->size[0];
    i22 = c_ref_p->size[0];
    c_ref_p->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)c_ref_p, i22, (int)sizeof(boolean_T));
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_ref_p->data[i22] = (ref_p->data[i22] > ixstart);
    }

    d_eml_li_find(c_ref_p, ii);
    ixstart = ii->size[0];
    for (i22 = 0; i22 < ixstart; i22++) {
      ref_p->data[ii->data[i22] - 1] = Sp2->size[0];
    }

    loop_ub = ref_p->size[0];
    ixstart = Sp2->size[1];
    i22 = b_ref_p->size[0];
    b_ref_p->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)b_ref_p, i22, (int)sizeof(boolean_T));
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_ref_p->data[i22] = (ref_p->data[i22 + ref_p->size[0]] > ixstart);
    }

    d_eml_li_find(b_ref_p, ii);
    ixstart = ii->size[0];
    for (i22 = 0; i22 < ixstart; i22++) {
      ref_p->data[(ii->data[i22] + ref_p->size[0]) - 1] = Sp2->size[1];
    }

    b_getPixelsValue(Ref, ref_p, val_p);
    c_getPixelsValue(Ref, ref_point, val_o);
    i22 = b_val_p->size[0] * b_val_p->size[1];
    b_val_p->size[0] = val_p->size[0];
    b_val_p->size[1] = 3;
    emxEnsureCapacity((emxArray__common *)b_val_p, i22, (int)sizeof(double));
    loop_ub = val_p->size[0] * val_p->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_val_p->data[i22] = val_p->data[i22] - val_o->data[i22];
    }

    d_power(b_val_p, val_p);
    if (val_p->size[0] == 0) {
      for (i22 = 0; i22 < 3; i22++) {
        y[i22] = 0.0;
      }
    } else {
      ix = -1;
      iy = -1;
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        ixstart = ix + 1;
        ix++;
        s = val_p->data[ixstart];
        for (ixstart = 2; ixstart <= val_p->size[0]; ixstart++) {
          ix++;
          s += val_p->data[ix];
        }

        iy++;
        y[iy] = s;
      }
    }

    s = y[0];
    for (ixstart = 0; ixstart < 2; ixstart++) {
      s += y[ixstart + 1];
    }

    error_set->data[i] = s / (double)sp_set2->data[i].val->size[0];
    ixstart = bspline_set->size[1];
    i22 = bspline_set->size[0] * bspline_set->size[1];
    bspline_set->size[1] = ixstart + 1;
    b_emxEnsureCapacity_struct_T(bspline_set, i22);
    b_emxCopyStruct_struct_T(&bspline_set->data[ixstart], &r9);
    i++;
  }

  emxFree_real_T(&f_ref_point);
  emxFree_boolean_T(&e_ref_point);
  emxFree_boolean_T(&d_ref_point);
  emxFree_boolean_T(&c_ref_point);
  emxFree_boolean_T(&d_ref_p);
  emxFree_boolean_T(&c_ref_p);
  emxFree_boolean_T(&b_ref_p);
  emxFree_real_T(&b_val_p);
  emxFree_real_T(&r11);
  emxFree_int32_T(&ii);
  emxFreeStruct_struct_T(&r10);
  b_emxFreeStruct_struct_T(&r9);
  emxFree_real_T(&control_p);
  emxFree_real_T(&val_o);
  emxFree_real_T(&val_p);
  emxFree_int32_T(&ref_p);
  emxFree_real_T(&ref_point);
  emxInit_struct_T(&ref_set2, 2);
  b_emxInit_struct_T(&bspline_set2, 2);
  emxInitStruct_struct_T(&r12);
  b_emxInitStruct_struct_T(&r13);
  emxInitStruct_struct_T(&r14);
  h_eml_null_assignment(bspline_set);
  g_eml_null_assignment(ref_set);

  /* % remove surfaces with too big error */
  i22 = r12.val->size[0] * r12.val->size[1];
  r12.val->size[0] = 0;
  r12.val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r12.val, i22, (int)sizeof(double));
  i22 = sp_set2->size[0] * sp_set2->size[1];
  sp_set2->size[0] = 1;
  sp_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(sp_set2, i22);
  emxCopyStruct_struct_T(&sp_set2->data[0], &r12);
  i22 = sp_val2->size[0];
  sp_val2->size[0] = 0;
  emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
  i22 = r14.val->size[0] * r14.val->size[1];
  r14.val->size[0] = 0;
  r14.val->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r14.val, i22, (int)sizeof(double));
  i22 = ref_set2->size[0] * ref_set2->size[1];
  ref_set2->size[0] = 1;
  ref_set2->size[1] = 1;
  emxEnsureCapacity_struct_T(ref_set2, i22);
  emxCopyStruct_struct_T(&ref_set2->data[0], &r14);
  i22 = r13.x->size[0] * r13.x->size[1];
  r13.x->size[0] = 0;
  r13.x->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r13.x, i22, (int)sizeof(double));
  i22 = r13.y->size[0] * r13.y->size[1];
  r13.y->size[0] = 0;
  r13.y->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)r13.y, i22, (int)sizeof(double));
  i22 = bspline_set2->size[0] * bspline_set2->size[1];
  bspline_set2->size[0] = 1;
  bspline_set2->size[1] = 1;
  b_emxEnsureCapacity_struct_T(bspline_set2, i22);
  b_emxCopyStruct_struct_T(&bspline_set2->data[0], &r13);
  i = 0;
  emxFreeStruct_struct_T(&r14);
  b_emxFreeStruct_struct_T(&r13);
  emxFreeStruct_struct_T(&r12);
  while (i <= surface_amount - 1) {
    if (error_set->data[i] < 100.0) {
      ixstart = sp_set2->size[1];
      i22 = sp_set2->size[0] * sp_set2->size[1];
      sp_set2->size[1] = ixstart + 1;
      emxEnsureCapacity_struct_T(sp_set2, i22);
      emxCopyStruct_struct_T(&sp_set2->data[ixstart], &sp_set->data[i]);
      ixstart = bspline_set2->size[1];
      i22 = bspline_set2->size[0] * bspline_set2->size[1];
      bspline_set2->size[1] = ixstart + 1;
      b_emxEnsureCapacity_struct_T(bspline_set2, i22);
      b_emxCopyStruct_struct_T(&bspline_set2->data[ixstart], &bspline_set->
        data[i]);
      ixstart = sp_val2->size[0];
      i22 = sp_val2->size[0];
      sp_val2->size[0] = ixstart + 1;
      emxEnsureCapacity((emxArray__common *)sp_val2, i22, (int)sizeof(double));
      sp_val2->data[ixstart] = sp_val->data[i];
      ixstart = ref_set2->size[1];
      i22 = ref_set2->size[0] * ref_set2->size[1];
      ref_set2->size[1] = ixstart + 1;
      emxEnsureCapacity_struct_T(ref_set2, i22);
      emxCopyStruct_struct_T(&ref_set2->data[ixstart], &ref_set->data[i]);
    }

    i++;
  }

  emxFree_real_T(&error_set);
  g_eml_null_assignment(sp_set2);
  h_eml_null_assignment(bspline_set2);
  g_eml_null_assignment(ref_set2);
  i22 = sp_set->size[0] * sp_set->size[1];
  sp_set->size[0] = 1;
  sp_set->size[1] = sp_set2->size[1];
  emxEnsureCapacity_struct_T(sp_set, i22);
  loop_ub = sp_set2->size[0] * sp_set2->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    emxCopyStruct_struct_T(&sp_set->data[i22], &sp_set2->data[i22]);
  }

  emxFree_struct_T(&sp_set2);
  ixstart = sp_val2->size[0];
  i22 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
  i22 = sp_val->size[0] * sp_val->size[1];
  sp_val->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)sp_val, i22, (int)sizeof(double));
  loop_ub = sp_val2->size[0];
  for (i22 = 0; i22 < loop_ub; i22++) {
    sp_val->data[i22] = sp_val2->data[i22];
  }

  emxFree_real_T(&sp_val2);
  i22 = bspline_set->size[0] * bspline_set->size[1];
  bspline_set->size[0] = 1;
  bspline_set->size[1] = bspline_set2->size[1];
  b_emxEnsureCapacity_struct_T(bspline_set, i22);
  loop_ub = bspline_set2->size[0] * bspline_set2->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    b_emxCopyStruct_struct_T(&bspline_set->data[i22], &bspline_set2->data[i22]);
  }

  b_emxFree_struct_T(&bspline_set2);
  i22 = ref_set->size[0] * ref_set->size[1];
  ref_set->size[0] = 1;
  ref_set->size[1] = ref_set2->size[1];
  emxEnsureCapacity_struct_T(ref_set, i22);
  loop_ub = ref_set2->size[0] * ref_set2->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    emxCopyStruct_struct_T(&ref_set->data[i22], &ref_set2->data[i22]);
  }

  emxFree_struct_T(&ref_set2);

  /* { */
  /* figure;  */
  /* subplot(1,2,1); */
  /* imshow(result); */
  /* subplot(1,2,2); */
  /* imshow(result2); */
  /* } */
}

/* End of code generation (segmentation.c) */
