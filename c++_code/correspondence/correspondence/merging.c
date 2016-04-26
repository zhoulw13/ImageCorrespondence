/*
 * merging.c
 *
 * Code generation for function 'merging'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "sum.h"
#include "correspondence_emxutil.h"
#include "abs.h"
#include "repmat.h"
#include "mod.h"
#include "power.h"
#include "getPixelsValue.h"
#include "bspline.h"
#include "bspline_inv.h"
#include "correspondence_rtwutil.h"

/* Function Declarations */
static void b_eml_null_assignment(emxArray_real_T *x, double idx);
static void c_eml_null_assignment(emxArray_real_T *x, double idx);
static void d_eml_null_assignment(emxArray_struct_T *x, double idx);
static void e_eml_null_assignment(emxArray_struct_T *x, double idx);
static void f_eml_null_assignment(emxArray_b_struct_T *x, double idx);

/* Function Definitions */
static void b_eml_null_assignment(emxArray_real_T *x, double idx)
{
  int a;
  int i37;
  int j;
  int i;
  emxArray_real_T *b_x;
  a = x->size[0] - 1;
  i37 = x->size[1];
  for (j = 0; j + 1 <= i37; j++) {
    for (i = (int)idx; i <= a; i++) {
      x->data[(i + x->size[0] * j) - 1] = x->data[i + x->size[0] * j];
    }
  }

  if (1 > a) {
    j = 0;
  } else {
    j = a;
  }

  emxInit_real_T(&b_x, 2);
  a = x->size[1];
  i37 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = j;
  b_x->size[1] = a;
  emxEnsureCapacity((emxArray__common *)b_x, i37, (int)sizeof(double));
  for (i37 = 0; i37 < a; i37++) {
    for (i = 0; i < j; i++) {
      b_x->data[i + b_x->size[0] * i37] = x->data[i + x->size[0] * i37];
    }
  }

  i37 = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, i37, (int)sizeof(double));
  j = b_x->size[1];
  for (i37 = 0; i37 < j; i37++) {
    a = b_x->size[0];
    for (i = 0; i < a; i++) {
      x->data[i + x->size[0] * i37] = b_x->data[i + b_x->size[0] * i37];
    }
  }

  emxFree_real_T(&b_x);
}

static void c_eml_null_assignment(emxArray_real_T *x, double idx)
{
  emxArray_real_T *b_x;
  int i38;
  int loop_ub;
  int j;
  int i39;
  emxArray_real_T *c_x;
  emxInit_real_T(&b_x, 2);
  i38 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = x->size[0];
  b_x->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)b_x, i38, (int)sizeof(double));
  loop_ub = x->size[1];
  for (i38 = 0; i38 < loop_ub; i38++) {
    j = x->size[0];
    for (i39 = 0; i39 < j; i39++) {
      b_x->data[i39 + b_x->size[0] * i38] = x->data[i39 + x->size[0] * i38];
    }
  }

  for (j = (int)idx; j < x->size[1]; j++) {
    i38 = b_x->size[0];
    for (loop_ub = 0; loop_ub + 1 <= i38; loop_ub++) {
      b_x->data[loop_ub + b_x->size[0] * (j - 1)] = b_x->data[loop_ub +
        b_x->size[0] * j];
    }
  }

  if (1 > x->size[1] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = x->size[1] - 1;
  }

  emxInit_real_T(&c_x, 2);
  j = b_x->size[0];
  i38 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = j;
  c_x->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_x, i38, (int)sizeof(double));
  for (i38 = 0; i38 < loop_ub; i38++) {
    for (i39 = 0; i39 < j; i39++) {
      c_x->data[i39 + c_x->size[0] * i38] = b_x->data[i39 + b_x->size[0] * i38];
    }
  }

  i38 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = c_x->size[0];
  b_x->size[1] = c_x->size[1];
  emxEnsureCapacity((emxArray__common *)b_x, i38, (int)sizeof(double));
  loop_ub = c_x->size[1];
  for (i38 = 0; i38 < loop_ub; i38++) {
    j = c_x->size[0];
    for (i39 = 0; i39 < j; i39++) {
      b_x->data[i39 + b_x->size[0] * i38] = c_x->data[i39 + c_x->size[0] * i38];
    }
  }

  emxFree_real_T(&c_x);
  i38 = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, i38, (int)sizeof(double));
  loop_ub = b_x->size[1];
  for (i38 = 0; i38 < loop_ub; i38++) {
    j = b_x->size[0];
    for (i39 = 0; i39 < j; i39++) {
      x->data[i39 + x->size[0] * i38] = b_x->data[i39 + b_x->size[0] * i38];
    }
  }

  emxFree_real_T(&b_x);
}

static void d_eml_null_assignment(emxArray_struct_T *x, double idx)
{
  int nxin;
  int k;
  emxArray_struct_T *b_x;
  nxin = x->size[1] - 1;
  for (k = (int)idx; k <= nxin; k++) {
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

static void e_eml_null_assignment(emxArray_struct_T *x, double idx)
{
  int nxin;
  int k;
  emxArray_struct_T *b_x;
  nxin = x->size[1] - 1;
  for (k = (int)idx; k <= nxin; k++) {
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

static void f_eml_null_assignment(emxArray_b_struct_T *x, double idx)
{
  int nxin;
  int k;
  emxArray_b_struct_T *b_x;
  nxin = x->size[1] - 1;
  for (k = (int)idx; k <= nxin; k++) {
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

void merging(emxArray_struct_T *sp_set, const emxArray_real_T *sp_val,
             emxArray_b_struct_T *bspline_set, emxArray_struct_T *ref_set, const
             emxArray_real_T *Sp2, const emxArray_real_T *Ref)
{
  emxArray_real_T *adjacency_graph;
  int ix;
  int i35;
  int ixstop;
  int i;
  emxArray_real_T *area_j;
  emxArray_real_T *pairs;
  emxArray_real_T *ref_union;
  emxArray_real_T *r18;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *r19;
  emxArray_real_T *b_ii;
  emxArray_real_T *b_ref_union;
  emxArray_int32_T *c_ii;
  emxArray_int32_T *d_ii;
  emxArray_int32_T *e_ii;
  double D_sp1;
  int nx;
  int idx;
  boolean_T exitg8;
  boolean_T guard5 = FALSE;
  int j;
  double b_j;
  int i36;
  boolean_T exitg7;
  boolean_T guard4 = FALSE;
  int b_ix;
  boolean_T exitg6;
  boolean_T guard3 = FALSE;
  boolean_T exitg5;
  boolean_T guard2 = FALSE;
  emxArray_int32_T *f_ii;
  emxArray_real_T *union_ij;
  emxArray_real_T *control_p;
  emxArray_int32_T *ref_it;
  emxArray_int32_T *ref_i;
  emxArray_real_T *val_it;
  emxArray_real_T *val_i;
  emxArray_real_T *val_jt;
  emxArray_real_T *val_j;
  emxArray_real_T *t0_x;
  emxArray_real_T *t0_y;
  emxArray_real_T *t1_x;
  emxArray_real_T *t1_y;
  emxArray_real_T *r20;
  emxArray_real_T *r21;
  b_struct_T expl_temp;
  b_struct_T b_expl_temp;
  b_struct_T c_expl_temp;
  emxArray_real_T *b_val_jt;
  emxArray_real_T *b_val_it;
  emxArray_boolean_T *b_ref_i;
  emxArray_boolean_T *c_ref_i;
  emxArray_boolean_T *d_ref_i;
  emxArray_boolean_T *b_ref_it;
  emxArray_boolean_T *c_ref_it;
  emxArray_boolean_T *d_ref_it;
  emxArray_boolean_T *e_ref_i;
  emxArray_boolean_T *f_ref_i;
  emxArray_boolean_T *g_ref_i;
  emxArray_boolean_T *e_ref_it;
  emxArray_boolean_T *f_ref_it;
  emxArray_boolean_T *g_ref_it;
  emxArray_real_T *b_adjacency_graph;
  emxArray_real_T *c_adjacency_graph;
  emxArray_real_T *d_adjacency_graph;
  struct_T b_sp_set;
  struct_T c_sp_set;
  struct_T b_ref_set;
  struct_T c_ref_set;
  emxArray_int32_T *g_ii;
  double b_i;
  double bound1[2];
  boolean_T exitg4;
  double bound2[2];
  boolean_T exitg3;
  double bound3[2];
  boolean_T exitg2;
  double dv17[3];
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  emxInit_real_T(&adjacency_graph, 2);

  /* % initialize adjacency graph */
  ix = sp_set->size[1];
  i35 = adjacency_graph->size[0] * adjacency_graph->size[1];
  adjacency_graph->size[0] = ix;
  emxEnsureCapacity((emxArray__common *)adjacency_graph, i35, (int)sizeof(double));
  ix = sp_set->size[1];
  i35 = adjacency_graph->size[0] * adjacency_graph->size[1];
  adjacency_graph->size[1] = ix;
  emxEnsureCapacity((emxArray__common *)adjacency_graph, i35, (int)sizeof(double));
  ixstop = sp_set->size[1] * sp_set->size[1];
  for (i35 = 0; i35 < ixstop; i35++) {
    adjacency_graph->data[i35] = 0.0;
  }

  i = 0;
  b_emxInit_real_T(&area_j, 1);
  b_emxInit_real_T(&pairs, 1);
  emxInit_real_T(&ref_union, 2);
  emxInit_real_T(&r18, 2);
  emxInit_boolean_T(&x, 2);
  emxInit_int32_T(&ii, 1);
  emxInit_real_T(&r19, 2);
  b_emxInit_real_T(&b_ii, 1);
  emxInit_real_T(&b_ref_union, 2);
  emxInit_int32_T(&c_ii, 1);
  emxInit_int32_T(&d_ii, 1);
  emxInit_int32_T(&e_ii, 1);
  while (i <= sp_set->size[1] - 1) {
    i35 = x->size[0] * x->size[1];
    x->size[0] = Sp2->size[0];
    x->size[1] = Sp2->size[1];
    emxEnsureCapacity((emxArray__common *)x, i35, (int)sizeof(boolean_T));
    D_sp1 = sp_val->data[i];
    ixstop = Sp2->size[0] * Sp2->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      x->data[i35] = (Sp2->data[i35] == D_sp1);
    }

    nx = x->size[0] * x->size[1];
    idx = 0;
    i35 = ii->size[0];
    ii->size[0] = nx;
    emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
    ix = 1;
    exitg8 = FALSE;
    while ((exitg8 == FALSE) && (ix <= nx)) {
      guard5 = FALSE;
      if (x->data[ix - 1]) {
        idx++;
        ii->data[idx - 1] = ix;
        if (idx >= nx) {
          exitg8 = TRUE;
        } else {
          guard5 = TRUE;
        }
      } else {
        guard5 = TRUE;
      }

      if (guard5 == TRUE) {
        ix++;
      }
    }

    if (nx == 1) {
      if (idx == 0) {
        i35 = ii->size[0];
        ii->size[0] = 0;
        emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
      }
    } else {
      if (1 > idx) {
        ixstop = 0;
      } else {
        ixstop = idx;
      }

      i35 = c_ii->size[0];
      c_ii->size[0] = ixstop;
      emxEnsureCapacity((emxArray__common *)c_ii, i35, (int)sizeof(int));
      for (i35 = 0; i35 < ixstop; i35++) {
        c_ii->data[i35] = ii->data[i35];
      }

      i35 = ii->size[0];
      ii->size[0] = c_ii->size[0];
      emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
      ixstop = c_ii->size[0];
      for (i35 = 0; i35 < ixstop; i35++) {
        ii->data[i35] = c_ii->data[i35];
      }
    }

    i35 = pairs->size[0];
    pairs->size[0] = ii->size[0];
    emxEnsureCapacity((emxArray__common *)pairs, i35, (int)sizeof(double));
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      pairs->data[i35] = ii->data[i35];
    }

    i35 = (int)((double)sp_set->size[1] + (1.0 - ((1.0 + (double)i) + 1.0)));
    for (j = 0; j < i35; j++) {
      b_j = ((1.0 + (double)i) + 1.0) + (double)j;
      i36 = x->size[0] * x->size[1];
      x->size[0] = Sp2->size[0];
      x->size[1] = Sp2->size[1];
      emxEnsureCapacity((emxArray__common *)x, i36, (int)sizeof(boolean_T));
      D_sp1 = sp_val->data[(int)b_j - 1];
      ixstop = Sp2->size[0] * Sp2->size[1];
      for (i36 = 0; i36 < ixstop; i36++) {
        x->data[i36] = (Sp2->data[i36] == D_sp1);
      }

      nx = x->size[0] * x->size[1];
      idx = 0;
      i36 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
      ix = 1;
      exitg7 = FALSE;
      while ((exitg7 == FALSE) && (ix <= nx)) {
        guard4 = FALSE;
        if (x->data[ix - 1]) {
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= nx) {
            exitg7 = TRUE;
          } else {
            guard4 = TRUE;
          }
        } else {
          guard4 = TRUE;
        }

        if (guard4 == TRUE) {
          ix++;
        }
      }

      if (nx == 1) {
        if (idx == 0) {
          i36 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
        }
      } else {
        if (1 > idx) {
          ixstop = 0;
        } else {
          ixstop = idx;
        }

        i36 = d_ii->size[0];
        d_ii->size[0] = ixstop;
        emxEnsureCapacity((emxArray__common *)d_ii, i36, (int)sizeof(int));
        for (i36 = 0; i36 < ixstop; i36++) {
          d_ii->data[i36] = ii->data[i36];
        }

        i36 = ii->size[0];
        ii->size[0] = d_ii->size[0];
        emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
        ixstop = d_ii->size[0];
        for (i36 = 0; i36 < ixstop; i36++) {
          ii->data[i36] = d_ii->data[i36];
        }
      }

      i36 = area_j->size[0];
      area_j->size[0] = ii->size[0];
      emxEnsureCapacity((emxArray__common *)area_j, i36, (int)sizeof(double));
      ixstop = ii->size[0];
      for (i36 = 0; i36 < ixstop; i36++) {
        area_j->data[i36] = ii->data[i36];
      }

      g_repmat(pairs, area_j->size[0], ref_union);
      g_repmat(area_j, pairs->size[0], r19);
      i36 = r18->size[0] * r18->size[1];
      r18->size[0] = r19->size[1];
      r18->size[1] = r19->size[0];
      emxEnsureCapacity((emxArray__common *)r18, i36, (int)sizeof(double));
      ixstop = r19->size[0];
      for (i36 = 0; i36 < ixstop; i36++) {
        ix = r19->size[1];
        for (b_ix = 0; b_ix < ix; b_ix++) {
          r18->data[b_ix + r18->size[0] * i36] = r19->data[i36 + r19->size[0] *
            b_ix];
        }
      }

      i36 = b_ref_union->size[0] * b_ref_union->size[1];
      b_ref_union->size[0] = ref_union->size[0];
      b_ref_union->size[1] = ref_union->size[1];
      emxEnsureCapacity((emxArray__common *)b_ref_union, i36, (int)sizeof(double));
      ixstop = ref_union->size[0] * ref_union->size[1];
      for (i36 = 0; i36 < ixstop; i36++) {
        b_ref_union->data[i36] = ref_union->data[i36] - r18->data[i36];
      }

      c_abs(b_ref_union, ref_union);
      i36 = x->size[0] * x->size[1];
      x->size[0] = ref_union->size[0];
      x->size[1] = ref_union->size[1];
      emxEnsureCapacity((emxArray__common *)x, i36, (int)sizeof(boolean_T));
      ix = Sp2->size[0];
      ixstop = ref_union->size[0] * ref_union->size[1];
      for (i36 = 0; i36 < ixstop; i36++) {
        x->data[i36] = ((ref_union->data[i36] == 1.0) || (ref_union->data[i36] ==
          ix));
      }

      nx = x->size[0] * x->size[1];
      idx = 0;
      i36 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
      ix = 1;
      exitg6 = FALSE;
      while ((exitg6 == FALSE) && (ix <= nx)) {
        guard3 = FALSE;
        if (x->data[ix - 1]) {
          idx++;
          ii->data[idx - 1] = ix;
          if (idx >= nx) {
            exitg6 = TRUE;
          } else {
            guard3 = TRUE;
          }
        } else {
          guard3 = TRUE;
        }

        if (guard3 == TRUE) {
          ix++;
        }
      }

      if (nx == 1) {
        if (idx == 0) {
          i36 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
        }
      } else {
        if (1 > idx) {
          ixstop = 0;
        } else {
          ixstop = idx;
        }

        i36 = e_ii->size[0];
        e_ii->size[0] = ixstop;
        emxEnsureCapacity((emxArray__common *)e_ii, i36, (int)sizeof(int));
        for (i36 = 0; i36 < ixstop; i36++) {
          e_ii->data[i36] = ii->data[i36];
        }

        i36 = ii->size[0];
        ii->size[0] = e_ii->size[0];
        emxEnsureCapacity((emxArray__common *)ii, i36, (int)sizeof(int));
        ixstop = e_ii->size[0];
        for (i36 = 0; i36 < ixstop; i36++) {
          ii->data[i36] = e_ii->data[i36];
        }
      }

      i36 = b_ii->size[0];
      b_ii->size[0] = ii->size[0];
      emxEnsureCapacity((emxArray__common *)b_ii, i36, (int)sizeof(double));
      ixstop = ii->size[0];
      for (i36 = 0; i36 < ixstop; i36++) {
        b_ii->data[i36] = ii->data[i36];
      }

      if (b_sum(b_ii) != 0.0) {
        adjacency_graph->data[i + adjacency_graph->size[0] * ((int)b_j - 1)] =
          1.0;
      }
    }

    i++;
  }

  emxFree_int32_T(&e_ii);
  emxFree_int32_T(&d_ii);
  emxFree_int32_T(&c_ii);
  emxFree_real_T(&b_ref_union);
  emxFree_real_T(&b_ii);
  emxFree_real_T(&r19);
  emxFree_real_T(&r18);
  emxFree_real_T(&area_j);

  /* % merge superpixels with similiar bspline */
  i35 = x->size[0] * x->size[1];
  x->size[0] = adjacency_graph->size[0];
  x->size[1] = adjacency_graph->size[1];
  emxEnsureCapacity((emxArray__common *)x, i35, (int)sizeof(boolean_T));
  ixstop = adjacency_graph->size[0] * adjacency_graph->size[1];
  for (i35 = 0; i35 < ixstop; i35++) {
    x->data[i35] = (adjacency_graph->data[i35] != 0.0);
  }

  nx = x->size[0] * x->size[1];
  idx = 0;
  i35 = ii->size[0];
  ii->size[0] = nx;
  emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
  ix = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ix <= nx)) {
    guard2 = FALSE;
    if (x->data[ix - 1]) {
      idx++;
      ii->data[idx - 1] = ix;
      if (idx >= nx) {
        exitg5 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      ix++;
    }
  }

  if (nx == 1) {
    if (idx == 0) {
      i35 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
    }
  } else {
    if (1 > idx) {
      ixstop = 0;
    } else {
      ixstop = idx;
    }

    emxInit_int32_T(&f_ii, 1);
    i35 = f_ii->size[0];
    f_ii->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)f_ii, i35, (int)sizeof(int));
    for (i35 = 0; i35 < ixstop; i35++) {
      f_ii->data[i35] = ii->data[i35];
    }

    i35 = ii->size[0];
    ii->size[0] = f_ii->size[0];
    emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
    ixstop = f_ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      ii->data[i35] = f_ii->data[i35];
    }

    emxFree_int32_T(&f_ii);
  }

  i35 = pairs->size[0];
  pairs->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)pairs, i35, (int)sizeof(double));
  ixstop = ii->size[0];
  for (i35 = 0; i35 < ixstop; i35++) {
    pairs->data[i35] = ii->data[i35];
  }

  emxInit_real_T(&union_ij, 2);
  c_emxInit_real_T(&control_p, 3);
  b_emxInit_int32_T(&ref_it, 2);
  b_emxInit_int32_T(&ref_i, 2);
  emxInit_real_T(&val_it, 2);
  emxInit_real_T(&val_i, 2);
  emxInit_real_T(&val_jt, 2);
  emxInit_real_T(&val_j, 2);
  emxInit_real_T(&t0_x, 2);
  emxInit_real_T(&t0_y, 2);
  emxInit_real_T(&t1_x, 2);
  emxInit_real_T(&t1_y, 2);
  emxInit_real_T(&r20, 2);
  emxInit_real_T(&r21, 2);
  b_emxInitStruct_struct_T(&expl_temp);
  b_emxInitStruct_struct_T(&b_expl_temp);
  b_emxInitStruct_struct_T(&c_expl_temp);
  emxInit_real_T(&b_val_jt, 2);
  emxInit_real_T(&b_val_it, 2);
  b_emxInit_boolean_T(&b_ref_i, 1);
  b_emxInit_boolean_T(&c_ref_i, 1);
  emxInit_boolean_T(&d_ref_i, 2);
  b_emxInit_boolean_T(&b_ref_it, 1);
  b_emxInit_boolean_T(&c_ref_it, 1);
  emxInit_boolean_T(&d_ref_it, 2);
  b_emxInit_boolean_T(&e_ref_i, 1);
  b_emxInit_boolean_T(&f_ref_i, 1);
  emxInit_boolean_T(&g_ref_i, 2);
  b_emxInit_boolean_T(&e_ref_it, 1);
  b_emxInit_boolean_T(&f_ref_it, 1);
  emxInit_boolean_T(&g_ref_it, 2);
  emxInit_real_T(&b_adjacency_graph, 2);
  b_emxInit_real_T(&c_adjacency_graph, 1);
  emxInit_real_T(&d_adjacency_graph, 2);
  emxInitStruct_struct_T(&b_sp_set);
  emxInitStruct_struct_T(&c_sp_set);
  emxInitStruct_struct_T(&b_ref_set);
  emxInitStruct_struct_T(&c_ref_set);
  emxInit_int32_T(&g_ii, 1);
  while (b_sum(pairs) > 0.0) {
    b_i = b_mod(pairs->data[0], sp_set->size[1]);
    b_j = ceil(pairs->data[0] / (double)sp_set->size[1]);
    i35 = union_ij->size[0] * union_ij->size[1];
    union_ij->size[0] = sp_set->data[(int)b_i - 1].val->size[0] + sp_set->data
      [(int)b_j - 1].val->size[0];
    union_ij->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)union_ij, i35, (int)sizeof(double));
    for (i35 = 0; i35 < 2; i35++) {
      ixstop = sp_set->data[(int)b_i - 1].val->size[0];
      for (i36 = 0; i36 < ixstop; i36++) {
        union_ij->data[i36 + union_ij->size[0] * i35] = sp_set->data[(int)b_i -
          1].val->data[i36 + sp_set->data[(int)b_i - 1].val->size[0] * i35];
      }
    }

    for (i35 = 0; i35 < 2; i35++) {
      ixstop = sp_set->data[(int)b_j - 1].val->size[0];
      for (i36 = 0; i36 < ixstop; i36++) {
        union_ij->data[(i36 + sp_set->data[(int)b_i - 1].val->size[0]) +
          union_ij->size[0] * i35] = sp_set->data[(int)b_j - 1].val->data[i36 +
          sp_set->data[(int)b_j - 1].val->size[0] * i35];
      }
    }

    i35 = ref_union->size[0] * ref_union->size[1];
    ref_union->size[0] = ref_set->data[(int)b_i - 1].val->size[0] +
      ref_set->data[(int)b_j - 1].val->size[0];
    ref_union->size[1] = ref_set->data[(int)b_i - 1].val->size[1];
    emxEnsureCapacity((emxArray__common *)ref_union, i35, (int)sizeof(double));
    ixstop = ref_set->data[(int)b_i - 1].val->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      ix = ref_set->data[(int)b_i - 1].val->size[0];
      for (i36 = 0; i36 < ix; i36++) {
        ref_union->data[i36 + ref_union->size[0] * i35] = ref_set->data[(int)b_i
          - 1].val->data[i36 + ref_set->data[(int)b_i - 1].val->size[0] * i35];
      }
    }

    ixstop = ref_set->data[(int)b_j - 1].val->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      ix = ref_set->data[(int)b_j - 1].val->size[0];
      for (i36 = 0; i36 < ix; i36++) {
        ref_union->data[(i36 + ref_set->data[(int)b_i - 1].val->size[0]) +
          ref_union->size[0] * i35] = ref_set->data[(int)b_j - 1].val->data[i36
          + ref_set->data[(int)b_j - 1].val->size[0] * i35];
      }
    }

    b_bspline_inv(union_ij, ref_union, control_p);
    ix = 0;
    nx = -1;
    for (i = 0; i < 2; i++) {
      idx = ix + 1;
      ixstop = ix + union_ij->size[0];
      D_sp1 = union_ij->data[ix];
      if (union_ij->size[0] > 1) {
        if (rtIsNaN(union_ij->data[ix])) {
          b_ix = ix + 1;
          exitg4 = FALSE;
          while ((exitg4 == FALSE) && (b_ix + 1 <= ixstop)) {
            idx = b_ix + 1;
            if (!rtIsNaN(union_ij->data[b_ix])) {
              D_sp1 = union_ij->data[b_ix];
              exitg4 = TRUE;
            } else {
              b_ix++;
            }
          }
        }

        if (idx < ixstop) {
          while (idx + 1 <= ixstop) {
            if (union_ij->data[idx] < D_sp1) {
              D_sp1 = union_ij->data[idx];
            }

            idx++;
          }
        }
      }

      nx++;
      bound1[nx] = D_sp1;
      ix += union_ij->size[0];
    }

    ix = 0;
    nx = -1;
    for (i = 0; i < 2; i++) {
      idx = ix + 1;
      ixstop = ix + sp_set->data[(int)b_i - 1].val->size[0];
      D_sp1 = sp_set->data[(int)b_i - 1].val->data[ix];
      if (sp_set->data[(int)b_i - 1].val->size[0] > 1) {
        if (rtIsNaN(sp_set->data[(int)b_i - 1].val->data[ix])) {
          b_ix = ix + 1;
          exitg3 = FALSE;
          while ((exitg3 == FALSE) && (b_ix + 1 <= ixstop)) {
            idx = b_ix + 1;
            if (!rtIsNaN(sp_set->data[(int)b_i - 1].val->data[b_ix])) {
              D_sp1 = sp_set->data[(int)b_i - 1].val->data[b_ix];
              exitg3 = TRUE;
            } else {
              b_ix++;
            }
          }
        }

        if (idx < ixstop) {
          while (idx + 1 <= ixstop) {
            if (sp_set->data[(int)b_i - 1].val->data[idx] < D_sp1) {
              D_sp1 = sp_set->data[(int)b_i - 1].val->data[idx];
            }

            idx++;
          }
        }
      }

      nx++;
      bound2[nx] = D_sp1;
      ix += sp_set->data[(int)b_i - 1].val->size[0];
    }

    ix = 0;
    nx = -1;
    for (i = 0; i < 2; i++) {
      idx = ix + 1;
      ixstop = ix + sp_set->data[(int)b_j - 1].val->size[0];
      D_sp1 = sp_set->data[(int)b_j - 1].val->data[ix];
      if (sp_set->data[(int)b_j - 1].val->size[0] > 1) {
        if (rtIsNaN(sp_set->data[(int)b_j - 1].val->data[ix])) {
          b_ix = ix + 1;
          exitg2 = FALSE;
          while ((exitg2 == FALSE) && (b_ix + 1 <= ixstop)) {
            idx = b_ix + 1;
            if (!rtIsNaN(sp_set->data[(int)b_j - 1].val->data[b_ix])) {
              D_sp1 = sp_set->data[(int)b_j - 1].val->data[b_ix];
              exitg2 = TRUE;
            } else {
              b_ix++;
            }
          }
        }

        if (idx < ixstop) {
          while (idx + 1 <= ixstop) {
            if (sp_set->data[(int)b_j - 1].val->data[idx] < D_sp1) {
              D_sp1 = sp_set->data[(int)b_j - 1].val->data[idx];
            }

            idx++;
          }
        }
      }

      nx++;
      bound3[nx] = D_sp1;
      ix += sp_set->data[(int)b_j - 1].val->size[0];
    }

    ixstop = control_p->size[0];
    ix = control_p->size[1];
    i35 = t1_x->size[0] * t1_x->size[1];
    t1_x->size[0] = ixstop;
    t1_x->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)t1_x, i35, (int)sizeof(double));
    for (i35 = 0; i35 < ix; i35++) {
      for (i36 = 0; i36 < ixstop; i36++) {
        t1_x->data[i36 + t1_x->size[0] * i35] = control_p->data[i36 +
          control_p->size[0] * i35];
      }
    }

    ixstop = control_p->size[0];
    ix = control_p->size[1];
    i35 = t1_y->size[0] * t1_y->size[1];
    t1_y->size[0] = ixstop;
    t1_y->size[1] = ix;
    emxEnsureCapacity((emxArray__common *)t1_y, i35, (int)sizeof(double));
    for (i35 = 0; i35 < ix; i35++) {
      for (i36 = 0; i36 < ixstop; i36++) {
        t1_y->data[i36 + t1_y->size[0] * i35] = control_p->data[(i36 +
          control_p->size[0] * i35) + control_p->size[0] * control_p->size[1]];
      }
    }

    bspline(sp_set->data[(int)b_i - 1].val, t1_x, t1_y, bound1, r20);
    i35 = ref_it->size[0] * ref_it->size[1];
    ref_it->size[0] = r20->size[0];
    ref_it->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_it, i35, (int)sizeof(int));
    ixstop = r20->size[0] * r20->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      D_sp1 = rt_roundd_snf(r20->data[i35]);
      if (D_sp1 < 2.147483648E+9) {
        if (D_sp1 >= -2.147483648E+9) {
          i36 = (int)D_sp1;
        } else {
          i36 = MIN_int32_T;
        }
      } else if (D_sp1 >= 2.147483648E+9) {
        i36 = MAX_int32_T;
      } else {
        i36 = 0;
      }

      ref_it->data[i35] = i36;
    }

    b_emxCopyStruct_struct_T(&b_expl_temp, &bspline_set->data[(int)b_i - 1]);
    bspline(sp_set->data[(int)b_i - 1].val, b_expl_temp.x, b_expl_temp.y, bound2,
            r20);
    i35 = ref_i->size[0] * ref_i->size[1];
    ref_i->size[0] = r20->size[0];
    ref_i->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_i, i35, (int)sizeof(int));
    ixstop = r20->size[0] * r20->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      D_sp1 = rt_roundd_snf(r20->data[i35]);
      if (D_sp1 < 2.147483648E+9) {
        if (D_sp1 >= -2.147483648E+9) {
          i36 = (int)D_sp1;
        } else {
          i36 = MIN_int32_T;
        }
      } else if (D_sp1 >= 2.147483648E+9) {
        i36 = MAX_int32_T;
      } else {
        i36 = 0;
      }

      ref_i->data[i35] = i36;
    }

    i35 = g_ref_it->size[0] * g_ref_it->size[1];
    g_ref_it->size[0] = ref_it->size[0];
    g_ref_it->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)g_ref_it, i35, (int)sizeof(boolean_T));
    ixstop = ref_it->size[0] * ref_it->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      g_ref_it->data[i35] = (ref_it->data[i35] < 1);
    }

    c_eml_li_find(g_ref_it, ii);
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      ref_it->data[ii->data[i35] - 1] = 1;
    }

    ixstop = ref_it->size[0];
    ix = Sp2->size[0];
    i35 = f_ref_it->size[0];
    f_ref_it->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)f_ref_it, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      f_ref_it->data[i35] = (ref_it->data[i35] > ix);
    }

    d_eml_li_find(f_ref_it, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_it->data[ii->data[i35] - 1] = Sp2->size[0];
    }

    ixstop = ref_it->size[0];
    ix = Sp2->size[1];
    i35 = e_ref_it->size[0];
    e_ref_it->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)e_ref_it, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      e_ref_it->data[i35] = (ref_it->data[i35 + ref_it->size[0]] > ix);
    }

    d_eml_li_find(e_ref_it, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_it->data[(ii->data[i35] + ref_it->size[0]) - 1] = Sp2->size[1];
    }

    i35 = g_ref_i->size[0] * g_ref_i->size[1];
    g_ref_i->size[0] = ref_i->size[0];
    g_ref_i->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)g_ref_i, i35, (int)sizeof(boolean_T));
    ixstop = ref_i->size[0] * ref_i->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      g_ref_i->data[i35] = (ref_i->data[i35] < 1);
    }

    c_eml_li_find(g_ref_i, ii);
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      ref_i->data[ii->data[i35] - 1] = 1;
    }

    ixstop = ref_i->size[0];
    ix = Sp2->size[0];
    i35 = f_ref_i->size[0];
    f_ref_i->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)f_ref_i, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      f_ref_i->data[i35] = (ref_i->data[i35] > ix);
    }

    d_eml_li_find(f_ref_i, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_i->data[ii->data[i35] - 1] = Sp2->size[0];
    }

    ixstop = ref_i->size[0];
    ix = Sp2->size[1];
    i35 = e_ref_i->size[0];
    e_ref_i->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)e_ref_i, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      e_ref_i->data[i35] = (ref_i->data[i35 + ref_i->size[0]] > ix);
    }

    d_eml_li_find(e_ref_i, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_i->data[(ii->data[i35] + ref_i->size[0]) - 1] = Sp2->size[1];
    }

    b_getPixelsValue(Ref, ref_it, val_it);
    b_getPixelsValue(Ref, ref_i, val_i);
    bspline(sp_set->data[(int)b_j - 1].val, t1_x, t1_y, bound1, r20);
    i35 = ref_it->size[0] * ref_it->size[1];
    ref_it->size[0] = r20->size[0];
    ref_it->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_it, i35, (int)sizeof(int));
    ixstop = r20->size[0] * r20->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      D_sp1 = rt_roundd_snf(r20->data[i35]);
      if (D_sp1 < 2.147483648E+9) {
        if (D_sp1 >= -2.147483648E+9) {
          i36 = (int)D_sp1;
        } else {
          i36 = MIN_int32_T;
        }
      } else if (D_sp1 >= 2.147483648E+9) {
        i36 = MAX_int32_T;
      } else {
        i36 = 0;
      }

      ref_it->data[i35] = i36;
    }

    b_emxCopyStruct_struct_T(&expl_temp, &bspline_set->data[(int)b_j - 1]);
    bspline(sp_set->data[(int)b_j - 1].val, expl_temp.x, expl_temp.y, bound3,
            r20);
    i35 = ref_i->size[0] * ref_i->size[1];
    ref_i->size[0] = r20->size[0];
    ref_i->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)ref_i, i35, (int)sizeof(int));
    ixstop = r20->size[0] * r20->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      D_sp1 = rt_roundd_snf(r20->data[i35]);
      if (D_sp1 < 2.147483648E+9) {
        if (D_sp1 >= -2.147483648E+9) {
          i36 = (int)D_sp1;
        } else {
          i36 = MIN_int32_T;
        }
      } else if (D_sp1 >= 2.147483648E+9) {
        i36 = MAX_int32_T;
      } else {
        i36 = 0;
      }

      ref_i->data[i35] = i36;
    }

    i35 = d_ref_it->size[0] * d_ref_it->size[1];
    d_ref_it->size[0] = ref_it->size[0];
    d_ref_it->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)d_ref_it, i35, (int)sizeof(boolean_T));
    ixstop = ref_it->size[0] * ref_it->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      d_ref_it->data[i35] = (ref_it->data[i35] < 1);
    }

    c_eml_li_find(d_ref_it, ii);
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      ref_it->data[ii->data[i35] - 1] = 1;
    }

    ixstop = ref_it->size[0];
    ix = Sp2->size[0];
    i35 = c_ref_it->size[0];
    c_ref_it->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)c_ref_it, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      c_ref_it->data[i35] = (ref_it->data[i35] > ix);
    }

    d_eml_li_find(c_ref_it, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_it->data[ii->data[i35] - 1] = Sp2->size[0];
    }

    ixstop = ref_it->size[0];
    ix = Sp2->size[1];
    i35 = b_ref_it->size[0];
    b_ref_it->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)b_ref_it, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      b_ref_it->data[i35] = (ref_it->data[i35 + ref_it->size[0]] > ix);
    }

    d_eml_li_find(b_ref_it, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_it->data[(ii->data[i35] + ref_it->size[0]) - 1] = Sp2->size[1];
    }

    i35 = d_ref_i->size[0] * d_ref_i->size[1];
    d_ref_i->size[0] = ref_i->size[0];
    d_ref_i->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)d_ref_i, i35, (int)sizeof(boolean_T));
    ixstop = ref_i->size[0] * ref_i->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      d_ref_i->data[i35] = (ref_i->data[i35] < 1);
    }

    c_eml_li_find(d_ref_i, ii);
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      ref_i->data[ii->data[i35] - 1] = 1;
    }

    ixstop = ref_i->size[0];
    ix = Sp2->size[0];
    i35 = c_ref_i->size[0];
    c_ref_i->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)c_ref_i, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      c_ref_i->data[i35] = (ref_i->data[i35] > ix);
    }

    d_eml_li_find(c_ref_i, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_i->data[ii->data[i35] - 1] = Sp2->size[0];
    }

    ixstop = ref_i->size[0];
    ix = Sp2->size[1];
    i35 = b_ref_i->size[0];
    b_ref_i->size[0] = ixstop;
    emxEnsureCapacity((emxArray__common *)b_ref_i, i35, (int)sizeof(boolean_T));
    for (i35 = 0; i35 < ixstop; i35++) {
      b_ref_i->data[i35] = (ref_i->data[i35 + ref_i->size[0]] > ix);
    }

    d_eml_li_find(b_ref_i, ii);
    ix = ii->size[0];
    for (i35 = 0; i35 < ix; i35++) {
      ref_i->data[(ii->data[i35] + ref_i->size[0]) - 1] = Sp2->size[1];
    }

    b_getPixelsValue(Ref, ref_it, val_jt);
    b_getPixelsValue(Ref, ref_i, val_j);
    i35 = b_val_it->size[0] * b_val_it->size[1];
    b_val_it->size[0] = val_it->size[0];
    b_val_it->size[1] = 3;
    emxEnsureCapacity((emxArray__common *)b_val_it, i35, (int)sizeof(double));
    ixstop = val_it->size[0] * val_it->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      b_val_it->data[i35] = val_it->data[i35] - val_i->data[i35];
    }

    d_power(b_val_it, val_it);
    c_sum(val_it, dv17);
    D_sp1 = d_sum(dv17);
    i35 = b_val_jt->size[0] * b_val_jt->size[1];
    b_val_jt->size[0] = val_jt->size[0];
    b_val_jt->size[1] = 3;
    emxEnsureCapacity((emxArray__common *)b_val_jt, i35, (int)sizeof(double));
    ixstop = val_jt->size[0] * val_jt->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      b_val_jt->data[i35] = val_jt->data[i35] - val_j->data[i35];
    }

    d_power(b_val_jt, val_it);
    c_sum(val_it, dv17);
    adjacency_graph->data[((int)b_i + adjacency_graph->size[0] * ((int)b_j - 1))
      - 1] = 0.0;
    if ((D_sp1 + d_sum(dv17)) / (double)union_ij->size[0] < 10.0) {
      if (b_i > b_j) {
        i35 = 0;
        i36 = 0;
      } else {
        i35 = (int)b_i - 1;
        i36 = (int)b_j;
      }

      if (b_i > b_j) {
        b_ix = 0;
      } else {
        b_ix = (int)b_i - 1;
      }

      if (b_i > b_j) {
        nx = 0;
      } else {
        nx = (int)b_i - 1;
      }

      ix = b_adjacency_graph->size[0] * b_adjacency_graph->size[1];
      b_adjacency_graph->size[0] = 1;
      b_adjacency_graph->size[1] = i36 - i35;
      emxEnsureCapacity((emxArray__common *)b_adjacency_graph, ix, (int)sizeof
                        (double));
      ixstop = i36 - i35;
      for (i36 = 0; i36 < ixstop; i36++) {
        b_adjacency_graph->data[b_adjacency_graph->size[0] * i36] =
          adjacency_graph->data[((int)b_i + adjacency_graph->size[0] * (i35 +
          i36)) - 1] + adjacency_graph->data[(b_ix + i36) +
          adjacency_graph->size[0] * ((int)b_j - 1)];
      }

      ixstop = b_adjacency_graph->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        adjacency_graph->data[((int)b_i + adjacency_graph->size[0] * (nx + i35))
          - 1] = b_adjacency_graph->data[b_adjacency_graph->size[0] * i35];
      }

      if (1.0 > b_i) {
        ixstop = 0;
      } else {
        ixstop = (int)b_i;
      }

      i35 = c_adjacency_graph->size[0];
      c_adjacency_graph->size[0] = ixstop;
      emxEnsureCapacity((emxArray__common *)c_adjacency_graph, i35, (int)sizeof
                        (double));
      for (i35 = 0; i35 < ixstop; i35++) {
        c_adjacency_graph->data[i35] = adjacency_graph->data[i35 +
          adjacency_graph->size[0] * ((int)b_i - 1)] + adjacency_graph->data[i35
          + adjacency_graph->size[0] * ((int)b_j - 1)];
      }

      ixstop = c_adjacency_graph->size[0];
      for (i35 = 0; i35 < ixstop; i35++) {
        adjacency_graph->data[i35 + adjacency_graph->size[0] * ((int)b_i - 1)] =
          c_adjacency_graph->data[i35];
      }

      if ((int)b_j > adjacency_graph->size[1]) {
        i35 = 0;
        i36 = 0;
      } else {
        i35 = (int)b_j - 1;
        i36 = adjacency_graph->size[1];
      }

      if ((int)b_j > adjacency_graph->size[1]) {
        b_ix = 0;
      } else {
        b_ix = (int)b_j - 1;
      }

      if ((int)b_j > adjacency_graph->size[1]) {
        nx = 0;
      } else {
        nx = (int)b_j - 1;
      }

      ix = d_adjacency_graph->size[0] * d_adjacency_graph->size[1];
      d_adjacency_graph->size[0] = 1;
      d_adjacency_graph->size[1] = i36 - i35;
      emxEnsureCapacity((emxArray__common *)d_adjacency_graph, ix, (int)sizeof
                        (double));
      ixstop = i36 - i35;
      for (i36 = 0; i36 < ixstop; i36++) {
        d_adjacency_graph->data[d_adjacency_graph->size[0] * i36] =
          adjacency_graph->data[((int)b_i + adjacency_graph->size[0] * (i35 +
          i36)) - 1] + adjacency_graph->data[((int)b_j + adjacency_graph->size[0]
          * (b_ix + i36)) - 1];
      }

      ixstop = d_adjacency_graph->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        adjacency_graph->data[((int)b_i + adjacency_graph->size[0] * (nx + i35))
          - 1] = d_adjacency_graph->data[d_adjacency_graph->size[0] * i35];
      }

      b_eml_null_assignment(adjacency_graph, b_j);
      i35 = r21->size[0] * r21->size[1];
      r21->size[0] = adjacency_graph->size[0];
      r21->size[1] = adjacency_graph->size[1];
      emxEnsureCapacity((emxArray__common *)r21, i35, (int)sizeof(double));
      ixstop = adjacency_graph->size[0] * adjacency_graph->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        r21->data[i35] = adjacency_graph->data[i35];
      }

      c_eml_null_assignment(r21, b_j);
      i35 = adjacency_graph->size[0] * adjacency_graph->size[1];
      adjacency_graph->size[0] = r21->size[0];
      adjacency_graph->size[1] = r21->size[1];
      emxEnsureCapacity((emxArray__common *)adjacency_graph, i35, (int)sizeof
                        (double));
      ixstop = r21->size[0] * r21->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        adjacency_graph->data[i35] = r21->data[i35];
      }

      i35 = sp_set->data[(int)b_i - 1].val->size[0] * sp_set->data[(int)b_i - 1]
        .val->size[1];
      sp_set->data[(int)b_i - 1].val->size[0] = union_ij->size[0];
      emxEnsureCapacity((emxArray__common *)sp_set->data[(int)b_i - 1].val, i35,
                        (int)sizeof(double));
      i35 = sp_set->data[(int)b_i - 1].val->size[0] * sp_set->data[(int)b_i - 1]
        .val->size[1];
      sp_set->data[(int)b_i - 1].val->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)sp_set->data[(int)b_i - 1].val, i35,
                        (int)sizeof(double));
      emxCopyStruct_struct_T(&b_sp_set, &sp_set->data[(int)b_i - 1]);
      emxCopyStruct_struct_T(&c_sp_set, &sp_set->data[(int)b_i - 1]);
      ixstop = union_ij->size[0] * union_ij->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        sp_set->data[(int)b_i - 1].val->data[i35] = union_ij->data[i35];
      }

      d_eml_null_assignment(sp_set, b_j);
      i35 = ref_set->data[(int)b_i - 1].val->size[0] * ref_set->data[(int)b_i -
        1].val->size[1];
      ref_set->data[(int)b_i - 1].val->size[0] = ref_union->size[0];
      emxEnsureCapacity((emxArray__common *)ref_set->data[(int)b_i - 1].val, i35,
                        (int)sizeof(double));
      i35 = ref_set->data[(int)b_i - 1].val->size[0] * ref_set->data[(int)b_i -
        1].val->size[1];
      ref_set->data[(int)b_i - 1].val->size[1] = ref_union->size[1];
      emxEnsureCapacity((emxArray__common *)ref_set->data[(int)b_i - 1].val, i35,
                        (int)sizeof(double));
      emxCopyStruct_struct_T(&b_ref_set, &ref_set->data[(int)b_i - 1]);
      emxCopyStruct_struct_T(&c_ref_set, &ref_set->data[(int)b_i - 1]);
      ixstop = ref_union->size[0] * ref_union->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        ref_set->data[(int)b_i - 1].val->data[i35] = ref_union->data[i35];
      }

      e_eml_null_assignment(ref_set, b_j);
      ixstop = control_p->size[0];
      ix = control_p->size[1];
      i35 = t0_x->size[0] * t0_x->size[1];
      t0_x->size[0] = ixstop;
      t0_x->size[1] = ix;
      emxEnsureCapacity((emxArray__common *)t0_x, i35, (int)sizeof(double));
      for (i35 = 0; i35 < ix; i35++) {
        for (i36 = 0; i36 < ixstop; i36++) {
          t0_x->data[i36 + t0_x->size[0] * i35] = control_p->data[i36 +
            control_p->size[0] * i35];
        }
      }

      ixstop = control_p->size[0];
      ix = control_p->size[1];
      i35 = t0_y->size[0] * t0_y->size[1];
      t0_y->size[0] = ixstop;
      t0_y->size[1] = ix;
      emxEnsureCapacity((emxArray__common *)t0_y, i35, (int)sizeof(double));
      for (i35 = 0; i35 < ix; i35++) {
        for (i36 = 0; i36 < ixstop; i36++) {
          t0_y->data[i36 + t0_y->size[0] * i35] = control_p->data[(i36 +
            control_p->size[0] * i35) + control_p->size[0] * control_p->size[1]];
        }
      }

      i35 = c_expl_temp.x->size[0] * c_expl_temp.x->size[1];
      c_expl_temp.x->size[0] = t0_x->size[0];
      c_expl_temp.x->size[1] = t0_x->size[1];
      emxEnsureCapacity((emxArray__common *)c_expl_temp.x, i35, (int)sizeof
                        (double));
      ixstop = t0_x->size[0] * t0_x->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        c_expl_temp.x->data[i35] = t0_x->data[i35];
      }

      i35 = c_expl_temp.y->size[0] * c_expl_temp.y->size[1];
      c_expl_temp.y->size[0] = t0_y->size[0];
      c_expl_temp.y->size[1] = t0_y->size[1];
      emxEnsureCapacity((emxArray__common *)c_expl_temp.y, i35, (int)sizeof
                        (double));
      ixstop = t0_y->size[0] * t0_y->size[1];
      for (i35 = 0; i35 < ixstop; i35++) {
        c_expl_temp.y->data[i35] = t0_y->data[i35];
      }

      b_emxCopyStruct_struct_T(&bspline_set->data[(int)b_i - 1], &c_expl_temp);
      f_eml_null_assignment(bspline_set, b_j);
    }

    i35 = x->size[0] * x->size[1];
    x->size[0] = adjacency_graph->size[0];
    x->size[1] = adjacency_graph->size[1];
    emxEnsureCapacity((emxArray__common *)x, i35, (int)sizeof(boolean_T));
    ixstop = adjacency_graph->size[0] * adjacency_graph->size[1];
    for (i35 = 0; i35 < ixstop; i35++) {
      x->data[i35] = (adjacency_graph->data[i35] != 0.0);
    }

    nx = x->size[0] * x->size[1];
    idx = 0;
    i35 = ii->size[0];
    ii->size[0] = nx;
    emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
    ix = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix <= nx)) {
      guard1 = FALSE;
      if (x->data[ix - 1]) {
        idx++;
        ii->data[idx - 1] = ix;
        if (idx >= nx) {
          exitg1 = TRUE;
        } else {
          guard1 = TRUE;
        }
      } else {
        guard1 = TRUE;
      }

      if (guard1 == TRUE) {
        ix++;
      }
    }

    if (nx == 1) {
      if (idx == 0) {
        i35 = ii->size[0];
        ii->size[0] = 0;
        emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
      }
    } else {
      if (1 > idx) {
        ixstop = 0;
      } else {
        ixstop = idx;
      }

      i35 = g_ii->size[0];
      g_ii->size[0] = ixstop;
      emxEnsureCapacity((emxArray__common *)g_ii, i35, (int)sizeof(int));
      for (i35 = 0; i35 < ixstop; i35++) {
        g_ii->data[i35] = ii->data[i35];
      }

      i35 = ii->size[0];
      ii->size[0] = g_ii->size[0];
      emxEnsureCapacity((emxArray__common *)ii, i35, (int)sizeof(int));
      ixstop = g_ii->size[0];
      for (i35 = 0; i35 < ixstop; i35++) {
        ii->data[i35] = g_ii->data[i35];
      }
    }

    i35 = pairs->size[0];
    pairs->size[0] = ii->size[0];
    emxEnsureCapacity((emxArray__common *)pairs, i35, (int)sizeof(double));
    ixstop = ii->size[0];
    for (i35 = 0; i35 < ixstop; i35++) {
      pairs->data[i35] = ii->data[i35];
    }
  }

  emxFree_int32_T(&g_ii);
  emxFreeStruct_struct_T(&c_ref_set);
  emxFreeStruct_struct_T(&b_ref_set);
  emxFreeStruct_struct_T(&c_sp_set);
  emxFreeStruct_struct_T(&b_sp_set);
  emxFree_real_T(&d_adjacency_graph);
  emxFree_real_T(&c_adjacency_graph);
  emxFree_real_T(&b_adjacency_graph);
  emxFree_boolean_T(&g_ref_it);
  emxFree_boolean_T(&f_ref_it);
  emxFree_boolean_T(&e_ref_it);
  emxFree_boolean_T(&g_ref_i);
  emxFree_boolean_T(&f_ref_i);
  emxFree_boolean_T(&e_ref_i);
  emxFree_boolean_T(&d_ref_it);
  emxFree_boolean_T(&c_ref_it);
  emxFree_boolean_T(&b_ref_it);
  emxFree_boolean_T(&d_ref_i);
  emxFree_boolean_T(&c_ref_i);
  emxFree_boolean_T(&b_ref_i);
  emxFree_real_T(&b_val_it);
  emxFree_real_T(&b_val_jt);
  b_emxFreeStruct_struct_T(&c_expl_temp);
  b_emxFreeStruct_struct_T(&b_expl_temp);
  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&r21);
  emxFree_real_T(&r20);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&t1_y);
  emxFree_real_T(&t1_x);
  emxFree_real_T(&t0_y);
  emxFree_real_T(&t0_x);
  emxFree_real_T(&val_j);
  emxFree_real_T(&val_jt);
  emxFree_real_T(&val_i);
  emxFree_real_T(&val_it);
  emxFree_int32_T(&ref_i);
  emxFree_int32_T(&ref_it);
  emxFree_real_T(&control_p);
  emxFree_real_T(&ref_union);
  emxFree_real_T(&union_ij);
  emxFree_real_T(&pairs);
  emxFree_real_T(&adjacency_graph);
}

/* End of code generation (merging.c) */
