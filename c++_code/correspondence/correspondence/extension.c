/*
 * extension.c
 *
 * Code generation for function 'extension'
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
#include "sortrows.h"
#include "repmat.h"
#include "mod.h"
#include "sum.h"
#include "power.h"
#include "rdivide.h"
#include "std.h"
#include "mean.h"
#include "getPixelsValue.h"
#include "bspline_single.h"
#include "abs.h"
#include "bspline_inv.h"
#include "bspline.h"
#include "eml_sort.h"
#include "correspondence_rtwutil.h"

/* Function Declarations */
static void b_eml_li_find(const boolean_T x[49], int y_data[49], int y_size[2]);
static void eml_li_find(const boolean_T x[147], int y_data[147], int y_size[1]);
static void eml_null_assignment(emxArray_real_T *x, const emxArray_boolean_T
  *idx);

/* Function Definitions */
static void b_eml_li_find(const boolean_T x[49], int y_data[49], int y_size[2])
{
  int k;
  int i;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      k++;
    }
  }

  y_size[0] = 1;
  y_size[1] = k;
  k = 0;
  for (i = 0; i < 49; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      k++;
    }
  }
}

static void eml_li_find(const boolean_T x[147], int y_data[147], int y_size[1])
{
  int k;
  int i;
  k = 0;
  for (i = 0; i < 147; i++) {
    if (x[i]) {
      k++;
    }
  }

  y_size[0] = k;
  k = 0;
  for (i = 0; i < 147; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      k++;
    }
  }
}

static void eml_null_assignment(emxArray_real_T *x, const emxArray_boolean_T
  *idx)
{
  int nrows;
  int k;
  int i;
  int i32;
  int j;
  emxArray_real_T *b_x;
  nrows = 0;
  for (k = 1; k <= idx->size[0]; k++) {
    nrows += idx->data[k - 1];
  }

  nrows = x->size[0] - nrows;
  i = 0;
  i32 = x->size[0];
  for (k = 1; k <= i32; k++) {
    if ((k > idx->size[0]) || (!idx->data[k - 1])) {
      for (j = 0; j < 2; j++) {
        x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
      }

      i++;
    }
  }

  if (1 > nrows) {
    nrows = 0;
  }

  emxInit_real_T(&b_x, 2);
  i32 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = nrows;
  b_x->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)b_x, i32, (int)sizeof(double));
  for (i32 = 0; i32 < 2; i32++) {
    for (i = 0; i < nrows; i++) {
      b_x->data[i + b_x->size[0] * i32] = x->data[i + x->size[0] * i32];
    }
  }

  i32 = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)x, i32, (int)sizeof(double));
  for (i32 = 0; i32 < 2; i32++) {
    nrows = b_x->size[0];
    for (i = 0; i < nrows; i++) {
      x->data[i + x->size[0] * i32] = b_x->data[i + b_x->size[0] * i32];
    }
  }

  emxFree_real_T(&b_x);
}

void extension(emxArray_struct_T *sp_set, emxArray_b_struct_T *bspline_set,
               const emxArray_real_T *Sp2, const emxArray_real_T *Src_lab, const
               emxArray_real_T *Ref_lab, emxArray_real_T *errors)
{
  emxArray_real_T *Sp_new;
  int surface_amount;
  int iy;
  int i29;
  int loop_ub;
  int i;
  int j;
  double patch[147];
  double dv5[49];
  double y[49];
  static const double x[49] = { -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0,
    -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0,
    -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0,
    -1.0, 0.0, 1.0, 2.0, 3.0, -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0 };

  emxArray_real_T *single_ref_set;
  emxArray_real_T *omega;
  emxArray_real_T *temp_sx;
  emxArray_real_T *temp_sy;
  emxArray_real_T *temp_rx;
  emxArray_real_T *temp_ry;
  emxArray_real_T *control_p;
  emxArray_real_T *temp;
  emxArray_real_T *t2_x;
  emxArray_real_T *t2_y;
  emxArray_real_T *varargin_1;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_boolean_T *r17;
  b_struct_T expl_temp;
  b_struct_T b_expl_temp;
  b_struct_T c_expl_temp;
  b_struct_T d_expl_temp;
  b_struct_T e_expl_temp;
  emxArray_boolean_T *b_Sp_new;
  emxArray_real_T *b_omega;
  emxArray_real_T *c_omega;
  emxArray_real_T *b_temp;
  struct_T b_sp_set;
  emxArray_real_T *b_single_ref_set;
  boolean_T modified;
  double bound[2];
  int ix;
  int b_i;
  int ixstart;
  int ixstop;
  double e;
  int theta;
  boolean_T exitg2;
  int i30;
  double b_j[2];
  int ib_size[1];
  int ib_data[1];
  double omega_data[2];
  int omega_size[2];
  boolean_T exitg1;
  double temp1[2];
  double ref_p[2];
  double offset_p[2];
  double jacobian[4];
  double error;
  double scale[4];
  double dv6[4];
  double dv7[4];
  double jacobian_d[4];
  double t1[3];
  int tmp_size[2];
  double tmp_data[147];
  boolean_T Np[147];
  double b_Np;
  double c_Np[147];
  int d_Np[147];
  int b_tmp_size[1];
  int b_tmp_data[147];
  boolean_T e_Np[49];
  int c_tmp_data[49];
  signed char iv1[2];
  double b_jacobian_d[9];
  static const signed char iv2[3] = { 0, 0, 1 };

  int Np_ref[147];
  int b_Np_ref[147];
  double Ps[147];
  double Pt[147];
  double dv8[3];
  double dv9[147];
  double dv10[3];
  double dv11[147];
  double dv12[3];
  double dv13[3];
  double dv14[147];
  double dv15[147];
  double dv16[147];
  double t2[3];
  signed char iv3[2];
  signed char refp_data[2];
  double b_error;
  emxInit_real_T(&Sp_new, 2);
  surface_amount = sp_set->size[1];

  /* % initialize */
  iy = Sp2->size[0];
  i29 = Sp_new->size[0] * Sp_new->size[1];
  Sp_new->size[0] = iy;
  emxEnsureCapacity((emxArray__common *)Sp_new, i29, (int)sizeof(double));
  iy = Sp2->size[1];
  i29 = Sp_new->size[0] * Sp_new->size[1];
  Sp_new->size[1] = iy;
  emxEnsureCapacity((emxArray__common *)Sp_new, i29, (int)sizeof(double));
  loop_ub = Sp2->size[0] * Sp2->size[1];
  for (i29 = 0; i29 < loop_ub; i29++) {
    Sp_new->data[i29] = 0.0;
  }

  for (i = 0; i < sp_set->size[1]; i++) {
    for (j = 0; j < sp_set->data[i].val->size[0]; j++) {
      Sp_new->data[((int)sp_set->data[i].val->data[j] + Sp_new->size[0] * ((int)
        sp_set->data[i].val->data[j + sp_set->data[i].val->size[0]] - 1)) - 1] =
        1.0 + (double)i;
    }
  }

  /* % adjacent patch */
  memset(&patch[0], 0, 147U * sizeof(double));
  repmat(dv5);
  eml_sort(x, y);
  for (i29 = 0; i29 < 49; i29++) {
    patch[3 * i29] = dv5[i29];
    patch[1 + 3 * i29] = y[i29];
    patch[2 + 3 * i29] = 1.0;
  }

  /* % extension */
  i29 = errors->size[0];
  errors->size[0] = 0;
  emxEnsureCapacity((emxArray__common *)errors, i29, (int)sizeof(double));
  i = 0;
  emxInit_real_T(&single_ref_set, 2);
  emxInit_real_T(&omega, 2);
  b_emxInit_real_T(&temp_sx, 1);
  b_emxInit_real_T(&temp_sy, 1);
  b_emxInit_real_T(&temp_rx, 1);
  b_emxInit_real_T(&temp_ry, 1);
  c_emxInit_real_T(&control_p, 3);
  emxInit_real_T(&temp, 2);
  emxInit_real_T(&t2_x, 2);
  emxInit_real_T(&t2_y, 2);
  b_emxInit_real_T(&varargin_1, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  b_emxInit_boolean_T(&r17, 1);
  b_emxInitStruct_struct_T(&expl_temp);
  b_emxInitStruct_struct_T(&b_expl_temp);
  b_emxInitStruct_struct_T(&c_expl_temp);
  b_emxInitStruct_struct_T(&d_expl_temp);
  b_emxInitStruct_struct_T(&e_expl_temp);
  b_emxInit_boolean_T(&b_Sp_new, 1);
  emxInit_real_T(&b_omega, 2);
  emxInit_real_T(&c_omega, 2);
  emxInit_real_T(&b_temp, 2);
  emxInitStruct_struct_T(&b_sp_set);
  emxInit_real_T(&b_single_ref_set, 2);
  while (i <= surface_amount - 1) {
    modified = TRUE;
    while (modified) {
      modified = FALSE;
      ix = 0;
      iy = -1;
      for (b_i = 0; b_i < 2; b_i++) {
        ixstart = ix + 1;
        ixstop = ix + sp_set->data[i].val->size[0];
        e = sp_set->data[i].val->data[ix];
        if (sp_set->data[i].val->size[0] > 1) {
          if (rtIsNaN(sp_set->data[i].val->data[ix])) {
            theta = ix + 1;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (theta + 1 <= ixstop)) {
              ixstart = theta + 1;
              if (!rtIsNaN(sp_set->data[i].val->data[theta])) {
                e = sp_set->data[i].val->data[theta];
                exitg2 = TRUE;
              } else {
                theta++;
              }
            }
          }

          if (ixstart < ixstop) {
            while (ixstart + 1 <= ixstop) {
              if (sp_set->data[i].val->data[ixstart] < e) {
                e = sp_set->data[i].val->data[ixstart];
              }

              ixstart++;
            }
          }
        }

        iy++;
        bound[iy] = e;
        ix += sp_set->data[i].val->size[0];
      }

      b_emxCopyStruct_struct_T(&d_expl_temp, &bspline_set->data[i]);
      bspline(sp_set->data[i].val, d_expl_temp.x, d_expl_temp.y, bound,
              single_ref_set);

      /*         %% find adjacency area within 5 pixels */
      b_repmat(sp_set->data[i].val->size[0], omega);
      i29 = omega->size[0] * omega->size[1];
      omega->size[0] = sp_set->data[i].val->size[0];
      omega->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)omega, i29, (int)sizeof(double));
      loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
      for (i29 = 0; i29 < loop_ub; i29++) {
        omega->data[i29] += sp_set->data[i].val->data[i29];
      }

      for (j = 0; j < 11; j++) {
        i29 = (int)fabs(-5.0 + (double)j);
        i30 = (int)((5.0F - (float)fabs(-5.0 + (double)j)) + (1.0F - ((float)
          fabs(-5.0 + (double)j) - 5.0F)));
        for (iy = -5; iy + 5 < i30; iy++) {
          b_j[0] = (double)j - 5.0;
          b_j[1] = (signed char)(i29 + iy);
          c_repmat(b_j, sp_set->data[i].val->size[0], temp);
          sortrows(omega);
          b_i = temp->size[0] * temp->size[1];
          temp->size[0] = sp_set->data[i].val->size[0];
          temp->size[1] = 2;
          emxEnsureCapacity((emxArray__common *)temp, b_i, (int)sizeof(double));
          loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            temp->data[b_i] += sp_set->data[i].val->data[b_i];
          }

          b_sortrows(temp);
          b_i = c_omega->size[0] * c_omega->size[1];
          c_omega->size[0] = omega->size[0];
          c_omega->size[1] = 2;
          emxEnsureCapacity((emxArray__common *)c_omega, b_i, (int)sizeof(double));
          loop_ub = omega->size[0] * omega->size[1];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            c_omega->data[b_i] = omega->data[b_i];
          }

          do_rows(c_omega, temp, omega, ia, ib);
        }
      }

      sortrows(omega);
      i29 = temp->size[0] * temp->size[1];
      temp->size[0] = sp_set->data[i].val->size[0];
      temp->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)temp, i29, (int)sizeof(double));
      loop_ub = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
      for (i29 = 0; i29 < loop_ub; i29++) {
        temp->data[i29] = sp_set->data[i].val->data[i29];
      }

      b_sortrows(temp);
      i29 = b_omega->size[0] * b_omega->size[1];
      b_omega->size[0] = omega->size[0];
      b_omega->size[1] = 2;
      emxEnsureCapacity((emxArray__common *)b_omega, i29, (int)sizeof(double));
      loop_ub = omega->size[0] * omega->size[1];
      for (i29 = 0; i29 < loop_ub; i29++) {
        b_omega->data[i29] = omega->data[i29];
      }

      b_do_rows(b_omega, temp, omega, ia, ib_data, ib_size);
      loop_ub = omega->size[0];
      b_i = Sp2->size[0];
      iy = Sp2->size[1];
      i29 = r17->size[0];
      r17->size[0] = loop_ub;
      emxEnsureCapacity((emxArray__common *)r17, i29, (int)sizeof(boolean_T));
      for (i29 = 0; i29 < loop_ub; i29++) {
        r17->data[i29] = ((omega->data[i29] < 1.0) || (omega->data[i29 +
          omega->size[0]] < 1.0) || (omega->data[i29] > b_i) || (omega->data[i29
          + omega->size[0]] > iy));
      }

      eml_null_assignment(omega, r17);
      loop_ub = omega->size[0];
      b_i = Sp2->size[0];
      i29 = b_Sp_new->size[0];
      b_Sp_new->size[0] = loop_ub;
      emxEnsureCapacity((emxArray__common *)b_Sp_new, i29, (int)sizeof(boolean_T));
      for (i29 = 0; i29 < loop_ub; i29++) {
        b_Sp_new->data[i29] = (Sp_new->data[(int)(omega->data[i29] +
          (omega->data[i29 + omega->size[0]] - 1.0) * (double)b_i) - 1] != 0.0);
      }

      eml_null_assignment(omega, b_Sp_new);

      /*         %% for all adjacent pixels ...  */
      i29 = temp_sx->size[0];
      temp_sx->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)temp_sx, i29, (int)sizeof(double));
      i29 = temp_sy->size[0];
      temp_sy->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)temp_sy, i29, (int)sizeof(double));
      i29 = temp_rx->size[0];
      temp_rx->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)temp_rx, i29, (int)sizeof(double));
      i29 = temp_ry->size[0];
      temp_ry->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)temp_ry, i29, (int)sizeof(double));
      for (j = 0; j < omega->size[0]; j++) {
        /*             %% find nearest pixel q from surface i */
        omega_size[0] = 1;
        omega_size[1] = 2;
        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = omega->data[j + omega->size[0] * i29];
        }

        d_repmat(omega_data, omega_size, sp_set->data[i].val->size[0], temp);
        i29 = b_temp->size[0] * b_temp->size[1];
        b_temp->size[0] = temp->size[0];
        b_temp->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)b_temp, i29, (int)sizeof(double));
        loop_ub = temp->size[0] * temp->size[1];
        for (i29 = 0; i29 < loop_ub; i29++) {
          b_temp->data[i29] = temp->data[i29] - sp_set->data[i].val->data[i29];
        }

        b_abs(b_temp, temp);
        loop_ub = temp->size[0];
        i29 = varargin_1->size[0];
        varargin_1->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)varargin_1, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < loop_ub; i29++) {
          varargin_1->data[i29] = temp->data[i29] + temp->data[i29 + temp->size
            [0]];
        }

        ixstart = 1;
        e = varargin_1->data[0];
        iy = 0;
        if (varargin_1->size[0] > 1) {
          if (rtIsNaN(varargin_1->data[0])) {
            ix = 2;
            exitg1 = FALSE;
            while ((exitg1 == FALSE) && (ix <= varargin_1->size[0])) {
              ixstart = ix;
              if (!rtIsNaN(varargin_1->data[ix - 1])) {
                e = varargin_1->data[ix - 1];
                iy = ix - 1;
                exitg1 = TRUE;
              } else {
                ix++;
              }
            }
          }

          if (ixstart < varargin_1->size[0]) {
            while (ixstart + 1 <= varargin_1->size[0]) {
              if (varargin_1->data[ixstart] < e) {
                e = varargin_1->data[ixstart];
                iy = ixstart;
              }

              ixstart++;
            }
          }
        }

        /*             %% compute temp correspondence */
        b_emxCopyStruct_struct_T(&c_expl_temp, &bspline_set->data[i]);
        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = sp_set->data[i].val->data[iy + sp_set->data[i]
            .val->size[0] * i29];
        }

        bspline_single(omega_data, c_expl_temp.x, c_expl_temp.y, bound, temp1);
        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = omega->data[j + omega->size[0] * i29];
        }

        for (i29 = 0; i29 < 2; i29++) {
          ref_p[i29] = single_ref_set->data[iy + single_ref_set->size[0] * i29]
            + temp1[i29] * (omega_data[i29] - sp_set->data[i].val->data[iy +
                            sp_set->data[i].val->size[0] * i29]);
        }

        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = omega->data[j + omega->size[0] * i29];
        }

        for (i29 = 0; i29 < 2; i29++) {
          offset_p[i29] = ref_p[i29] - omega_data[i29];
        }

        /*             %% compute patch transformation jacobian matirx */
        b_emxCopyStruct_struct_T(&b_expl_temp, &bspline_set->data[i]);
        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = sp_set->data[i].val->data[iy + sp_set->data[i]
            .val->size[0] * i29];
        }

        b_bspline_single(omega_data, b_expl_temp.x, b_expl_temp.y, bound, temp1);
        b_emxCopyStruct_struct_T(&expl_temp, &bspline_set->data[i]);
        for (i29 = 0; i29 < 2; i29++) {
          omega_data[i29] = sp_set->data[i].val->data[iy + sp_set->data[i]
            .val->size[0] * i29];
        }

        c_bspline_single(omega_data, expl_temp.x, expl_temp.y, bound, ref_p);
        jacobian[0] = temp1[0];
        jacobian[2] = ref_p[0];
        jacobian[1] = temp1[1];
        jacobian[3] = ref_p[1];

        /*             %% minimize error             */
        error = 1.0E+7;
        for (ixstop = 0; ixstop < 3; ixstop++) {
          scale[0] = 0.9 + 0.099999999999999978 * (double)ixstop;
          scale[2] = 0.0;
          scale[1] = 0.0;
          scale[3] = 0.9 + 0.099999999999999978 * (double)ixstop;
          for (theta = 0; theta < 3; theta++) {
            dv6[0] = cos(-0.087266462599716474 + 0.087266462599716474 * (double)
                         theta);
            dv6[2] = -sin(-0.087266462599716474 + 0.087266462599716474 * (double)
                          theta);
            dv6[1] = sin(-0.087266462599716474 + 0.087266462599716474 * (double)
                         theta);
            dv6[3] = cos(-0.087266462599716474 + 0.087266462599716474 * (double)
                         theta);
            for (i29 = 0; i29 < 2; i29++) {
              for (i30 = 0; i30 < 2; i30++) {
                dv7[i29 + (i30 << 1)] = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  dv7[i29 + (i30 << 1)] += dv6[i29 + (b_i << 1)] * scale[b_i +
                    (i30 << 1)];
                }
              }

              for (i30 = 0; i30 < 2; i30++) {
                jacobian_d[i29 + (i30 << 1)] = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  jacobian_d[i29 + (i30 << 1)] += dv7[i29 + (b_i << 1)] *
                    jacobian[b_i + (i30 << 1)];
                }
              }
            }

            for (ix = 0; ix < 3; ix++) {
              for (ixstart = 0; ixstart < 3; ixstart++) {
                for (i29 = 0; i29 < 2; i29++) {
                  t1[i29] = omega->data[j + omega->size[0] * i29];
                }

                t1[2] = 0.0;
                e_repmat(t1, tmp_data, tmp_size);
                for (i29 = 0; i29 < 147; i29++) {
                  b_Np = patch[i29] + tmp_data[i29];
                  e = rt_roundd_snf(b_Np);
                  if (e < 2.147483648E+9) {
                    if (e >= -2.147483648E+9) {
                      iy = (int)e;
                    } else {
                      iy = MIN_int32_T;
                    }
                  } else if (e >= 2.147483648E+9) {
                    iy = MAX_int32_T;
                  } else {
                    iy = 0;
                  }

                  Np[i29] = (iy < 1);
                  c_Np[i29] = b_Np;
                  d_Np[i29] = iy;
                }

                eml_li_find(Np, b_tmp_data, b_tmp_size);
                loop_ub = b_tmp_size[0];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  d_Np[b_tmp_data[i29] - 1] = 1;
                }

                b_i = Sp2->size[0];
                for (i29 = 0; i29 < 49; i29++) {
                  e_Np[i29] = (d_Np[3 * i29] > b_i);
                }

                b_eml_li_find(e_Np, c_tmp_data, tmp_size);
                loop_ub = tmp_size[1];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  d_Np[3 * (c_tmp_data[tmp_size[0] * i29] - 1)] = Sp2->size[0];
                }

                b_i = Sp2->size[1];
                for (i29 = 0; i29 < 49; i29++) {
                  e_Np[i29] = (d_Np[1 + 3 * i29] > b_i);
                }

                b_eml_li_find(e_Np, c_tmp_data, tmp_size);
                loop_ub = tmp_size[1];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  d_Np[1 + 3 * (c_tmp_data[tmp_size[0] * i29] - 1)] = Sp2->size
                    [1];
                }

                iv1[0] = (signed char)(-1 + ix);
                iv1[1] = (signed char)(-1 + ixstart);
                for (i29 = 0; i29 < 2; i29++) {
                  for (i30 = 0; i30 < 2; i30++) {
                    b_jacobian_d[i30 + 3 * i29] = jacobian_d[i30 + (i29 << 1)];
                  }
                }

                for (i29 = 0; i29 < 2; i29++) {
                  b_jacobian_d[6 + i29] = offset_p[i29] + (double)iv1[i29];
                }

                for (i29 = 0; i29 < 3; i29++) {
                  b_jacobian_d[2 + 3 * i29] = iv2[i29];
                }

                for (i29 = 0; i29 < 3; i29++) {
                  for (i30 = 0; i30 < 49; i30++) {
                    e = 0.0;
                    for (b_i = 0; b_i < 3; b_i++) {
                      e += b_jacobian_d[i29 + 3 * b_i] * c_Np[b_i + 3 * i30];
                    }

                    e = rt_roundd_snf(e);
                    if (e < 2.147483648E+9) {
                      if (e >= -2.147483648E+9) {
                        b_i = (int)e;
                      } else {
                        b_i = MIN_int32_T;
                      }
                    } else if (e >= 2.147483648E+9) {
                      b_i = MAX_int32_T;
                    } else {
                      b_i = 0;
                    }

                    Np_ref[i29 + 3 * i30] = b_i;
                  }
                }

                for (i29 = 0; i29 < 147; i29++) {
                  Np[i29] = (Np_ref[i29] < 1);
                }

                eml_li_find(Np, b_tmp_data, b_tmp_size);
                loop_ub = b_tmp_size[0];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  Np_ref[b_tmp_data[i29] - 1] = 1;
                }

                b_i = Sp2->size[0];
                for (i29 = 0; i29 < 49; i29++) {
                  e_Np[i29] = (Np_ref[3 * i29] > b_i);
                }

                b_eml_li_find(e_Np, c_tmp_data, tmp_size);
                loop_ub = tmp_size[1];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  Np_ref[3 * (c_tmp_data[tmp_size[0] * i29] - 1)] = Sp2->size[0];
                }

                b_i = Sp2->size[1];
                for (i29 = 0; i29 < 49; i29++) {
                  e_Np[i29] = (Np_ref[1 + 3 * i29] > b_i);
                }

                b_eml_li_find(e_Np, c_tmp_data, tmp_size);
                loop_ub = tmp_size[1];
                for (i29 = 0; i29 < loop_ub; i29++) {
                  Np_ref[1 + 3 * (c_tmp_data[tmp_size[0] * i29] - 1)] =
                    Sp2->size[1];
                }

                for (i29 = 0; i29 < 3; i29++) {
                  for (i30 = 0; i30 < 49; i30++) {
                    b_tmp_data[i30 + 49 * i29] = d_Np[i29 + 3 * i30];
                    b_Np_ref[i30 + 49 * i29] = Np_ref[i29 + 3 * i30];
                  }
                }

                getPixelsValue(Src_lab, b_tmp_data, Ps);
                getPixelsValue(Ref_lab, b_Np_ref, Pt);
                mean(Ps, dv8);
                f_repmat(dv8, dv9);
                for (i29 = 0; i29 < 147; i29++) {
                  tmp_data[i29] = Ps[i29] - dv9[i29];
                }

                b_std(Ps, dv10);
                f_repmat(dv10, dv11);
                b_rdivide(tmp_data, dv11, Ps);
                mean(Pt, dv12);
                f_repmat(dv12, dv9);
                for (i29 = 0; i29 < 147; i29++) {
                  tmp_data[i29] = Pt[i29] - dv9[i29];
                }

                b_std(Pt, dv13);
                f_repmat(dv13, dv14);
                b_rdivide(tmp_data, dv14, Pt);
                c_power(Ps, dv15);
                sum(dv15, t1);
                c_power(Pt, dv16);
                sum(dv16, t2);
                for (iy = 0; iy < 3; iy++) {
                  t1[iy] = sqrt(t1[iy]);
                  t2[iy] = sqrt(t2[iy]);
                }

                for (i29 = 0; i29 < 49; i29++) {
                  Ps[i29] /= t1[0];
                  Ps[49 + i29] /= t1[1];
                  Ps[98 + i29] /= t1[2];
                  Pt[i29] /= t2[0];
                  Pt[49 + i29] /= t2[1];
                  Pt[98 + i29] /= t2[2];
                }

                for (i29 = 0; i29 < 147; i29++) {
                  e = Ps[i29] - Pt[i29];
                  Pt[i29] = e * e;
                }

                sum(Pt, t1);
                e = t1[0];
                for (iy = 0; iy < 2; iy++) {
                  e += t1[iy + 1];
                }

                if (e < error) {
                  error = e;
                  iv3[0] = (signed char)(-1 + ix);
                  iv3[1] = (signed char)(-1 + ixstart);
                  for (i29 = 0; i29 < 2; i29++) {
                    refp_data[i29] = iv3[i29];
                  }
                }
              }
            }
          }
        }

        iy = errors->size[0];
        i29 = errors->size[0];
        errors->size[0] = iy + 1;
        emxEnsureCapacity((emxArray__common *)errors, i29, (int)sizeof(double));
        errors->data[iy] = error;
        if (error < 1.0) {
          modified = TRUE;
          iy = temp_sx->size[0];
          i29 = temp_sx->size[0];
          temp_sx->size[0] = iy + 1;
          emxEnsureCapacity((emxArray__common *)temp_sx, i29, (int)sizeof(double));
          temp_sx->data[iy] = omega->data[j];
          iy = temp_sy->size[0];
          i29 = temp_sy->size[0];
          temp_sy->size[0] = iy + 1;
          emxEnsureCapacity((emxArray__common *)temp_sy, i29, (int)sizeof(double));
          temp_sy->data[iy] = omega->data[j + omega->size[0]];
          Sp_new->data[((int)omega->data[j] + Sp_new->size[0] * ((int)
            omega->data[j + omega->size[0]] - 1)) - 1] = 1.0 + (double)i;
          for (i29 = 0; i29 < 2; i29++) {
            omega_data[i29] = omega->data[j + omega->size[0] * i29];
          }

          for (i29 = 0; i29 < 2; i29++) {
            temp1[i29] = ((double)refp_data[i29] + offset_p[i29]) +
              omega_data[i29];
          }

          iy = temp_rx->size[0];
          i29 = temp_rx->size[0];
          temp_rx->size[0] = iy + 1;
          emxEnsureCapacity((emxArray__common *)temp_rx, i29, (int)sizeof(double));
          temp_rx->data[iy] = temp1[0];
          iy = temp_ry->size[0];
          i29 = temp_ry->size[0];
          temp_ry->size[0] = iy + 1;
          emxEnsureCapacity((emxArray__common *)temp_ry, i29, (int)sizeof(double));
          temp_ry->data[iy] = temp1[1];

          /*                 %{ */
          /*                 refp = refp + offset_p + omega(j, :); */
          /*                 superpixel = [superpixel; double(omega(j, :))]; */
          /*                 Sp_new(omega(j,1), omega(j,2)) = i; */
          /*                 single_ref_set = [single_ref_set; double(refp)]; */
          /*                 %} */
        }
      }

      if (modified) {
        emxCopyStruct_struct_T(&b_sp_set, &sp_set->data[i]);
        iy = temp_sx->size[0];
        b_i = temp_sy->size[0];
        i29 = sp_set->data[i].val->size[0] * sp_set->data[i].val->size[1];
        sp_set->data[i].val->size[0] = b_sp_set.val->size[0] + iy;
        sp_set->data[i].val->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)sp_set->data[i].val, i29, (int)
                          sizeof(double));
        for (i29 = 0; i29 < 2; i29++) {
          loop_ub = b_sp_set.val->size[0];
          for (i30 = 0; i30 < loop_ub; i30++) {
            sp_set->data[i].val->data[i30 + sp_set->data[i].val->size[0] * i29] =
              b_sp_set.val->data[i30 + b_sp_set.val->size[0] * i29];
          }
        }

        for (i29 = 0; i29 < iy; i29++) {
          sp_set->data[i].val->data[i29 + b_sp_set.val->size[0]] = temp_sx->
            data[i29];
        }

        for (i29 = 0; i29 < b_i; i29++) {
          sp_set->data[i].val->data[(i29 + b_sp_set.val->size[0]) + sp_set->
            data[i].val->size[0]] = temp_sy->data[i29];
        }

        iy = temp_rx->size[0];
        b_i = temp_ry->size[0];
        i29 = b_single_ref_set->size[0] * b_single_ref_set->size[1];
        b_single_ref_set->size[0] = single_ref_set->size[0] + iy;
        b_single_ref_set->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)b_single_ref_set, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < 2; i29++) {
          loop_ub = single_ref_set->size[0];
          for (i30 = 0; i30 < loop_ub; i30++) {
            b_single_ref_set->data[i30 + b_single_ref_set->size[0] * i29] =
              single_ref_set->data[i30 + single_ref_set->size[0] * i29];
          }
        }

        for (i29 = 0; i29 < iy; i29++) {
          b_single_ref_set->data[i29 + single_ref_set->size[0]] = temp_rx->
            data[i29];
        }

        for (i29 = 0; i29 < b_i; i29++) {
          b_single_ref_set->data[(i29 + single_ref_set->size[0]) +
            b_single_ref_set->size[0]] = temp_ry->data[i29];
        }

        i29 = single_ref_set->size[0] * single_ref_set->size[1];
        single_ref_set->size[0] = b_single_ref_set->size[0];
        single_ref_set->size[1] = 2;
        emxEnsureCapacity((emxArray__common *)single_ref_set, i29, (int)sizeof
                          (double));
        for (i29 = 0; i29 < 2; i29++) {
          loop_ub = b_single_ref_set->size[0];
          for (i30 = 0; i30 < loop_ub; i30++) {
            single_ref_set->data[i30 + single_ref_set->size[0] * i29] =
              b_single_ref_set->data[i30 + b_single_ref_set->size[0] * i29];
          }
        }

        /* sp_set(i).val = superpixel; */
        bspline_inv(sp_set->data[i].val, single_ref_set, control_p, &b_error);
        loop_ub = control_p->size[0];
        iy = control_p->size[1];
        i29 = t2_x->size[0] * t2_x->size[1];
        t2_x->size[0] = loop_ub;
        t2_x->size[1] = iy;
        emxEnsureCapacity((emxArray__common *)t2_x, i29, (int)sizeof(double));
        for (i29 = 0; i29 < iy; i29++) {
          for (i30 = 0; i30 < loop_ub; i30++) {
            t2_x->data[i30 + t2_x->size[0] * i29] = control_p->data[i30 +
              control_p->size[0] * i29];
          }
        }

        loop_ub = control_p->size[0];
        iy = control_p->size[1];
        i29 = t2_y->size[0] * t2_y->size[1];
        t2_y->size[0] = loop_ub;
        t2_y->size[1] = iy;
        emxEnsureCapacity((emxArray__common *)t2_y, i29, (int)sizeof(double));
        for (i29 = 0; i29 < iy; i29++) {
          for (i30 = 0; i30 < loop_ub; i30++) {
            t2_y->data[i30 + t2_y->size[0] * i29] = control_p->data[(i30 +
              control_p->size[0] * i29) + control_p->size[0] * control_p->size[1]];
          }
        }

        i29 = e_expl_temp.x->size[0] * e_expl_temp.x->size[1];
        e_expl_temp.x->size[0] = t2_x->size[0];
        e_expl_temp.x->size[1] = t2_x->size[1];
        emxEnsureCapacity((emxArray__common *)e_expl_temp.x, i29, (int)sizeof
                          (double));
        loop_ub = t2_x->size[0] * t2_x->size[1];
        for (i29 = 0; i29 < loop_ub; i29++) {
          e_expl_temp.x->data[i29] = t2_x->data[i29];
        }

        i29 = e_expl_temp.y->size[0] * e_expl_temp.y->size[1];
        e_expl_temp.y->size[0] = t2_y->size[0];
        e_expl_temp.y->size[1] = t2_y->size[1];
        emxEnsureCapacity((emxArray__common *)e_expl_temp.y, i29, (int)sizeof
                          (double));
        loop_ub = t2_y->size[0] * t2_y->size[1];
        for (i29 = 0; i29 < loop_ub; i29++) {
          e_expl_temp.y->data[i29] = t2_y->data[i29];
        }

        b_emxCopyStruct_struct_T(&bspline_set->data[i], &e_expl_temp);
      }
    }

    i++;
  }

  emxFree_real_T(&b_single_ref_set);
  emxFreeStruct_struct_T(&b_sp_set);
  emxFree_real_T(&b_temp);
  emxFree_real_T(&c_omega);
  emxFree_real_T(&b_omega);
  emxFree_boolean_T(&b_Sp_new);
  b_emxFreeStruct_struct_T(&e_expl_temp);
  b_emxFreeStruct_struct_T(&d_expl_temp);
  b_emxFreeStruct_struct_T(&c_expl_temp);
  b_emxFreeStruct_struct_T(&b_expl_temp);
  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_boolean_T(&r17);
  emxFree_int32_T(&ib);
  emxFree_int32_T(&ia);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&t2_y);
  emxFree_real_T(&t2_x);
  emxFree_real_T(&temp);
  emxFree_real_T(&control_p);
  emxFree_real_T(&temp_ry);
  emxFree_real_T(&temp_rx);
  emxFree_real_T(&temp_sy);
  emxFree_real_T(&temp_sx);
  emxFree_real_T(&omega);
  emxFree_real_T(&single_ref_set);
  emxFree_real_T(&Sp_new);
}

/* End of code generation (extension.c) */
