/*
 * bspline_single.c
 *
 * Code generation for function 'bspline_single'
 *
 * C source code generated on: Mon Apr 25 19:43:43 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "merging.h"
#include "segmentation.h"
#include "bspline_single.h"
#include "correspondence_emxutil.h"
#include "power.h"
#include "correspondence_rtwutil.h"

/* Function Definitions */
void b_bspline_single(const double src[2], const emxArray_real_T *control_p_x,
                      const emxArray_real_T *control_p_y, const double bound[2],
                      double ref[2])
{
  double x;
  double y;
  double tx;
  double ty;
  double Ax_d[4];
  double b_Ax_d[4];
  int i5;
  double d2;
  int loop_ub;
  static const double b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  double Ay[4];
  double b_Ay[4];
  emxArray_real_T *Au;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  x = ((src[0] - bound[0]) + 1.0) / 30.0;
  y = ((src[1] - bound[1]) + 1.0) / 30.0;
  tx = x - floor(x);
  ty = y - floor(y);
  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  Ax_d[2] = 2.0 * tx;
  Ax_d[3] = 3.0 * (tx * tx);
  for (i5 = 0; i5 < 4; i5++) {
    d2 = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      d2 += Ax_d[loop_ub] * b[loop_ub + (i5 << 2)];
    }

    b_Ax_d[i5] = d2 / 30.0;
  }

  Ay[0] = 1.0;
  Ay[1] = ty;
  Ay[2] = ty * ty;
  Ay[3] = rt_powd_snf(ty, 3.0);
  for (i5 = 0; i5 < 4; i5++) {
    Ax_d[i5] = b_Ax_d[i5];
    b_Ay[i5] = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_Ay[i5] += Ay[loop_ub] * b[loop_ub + (i5 << 2)];
    }
  }

  for (i5 = 0; i5 < 4; i5++) {
    Ay[i5] = b_Ay[i5];
  }

  emxInit_real_T(&Au, 2);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i5 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Au, i5, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i5 = 0; i5 < loop_ub; i5++) {
    Au->data[i5] = 0.0;
  }

  emxInit_real_T(&Av, 2);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i5 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Av, i5, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i5 = 0; i5 < loop_ub; i5++) {
    Av->data[i5] = 0.0;
  }

  emxInit_real_T(&param_matrix, 2);
  loop_ub = control_p_x->size[0];
  i5 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i5, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i5 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i5, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    param_matrix->data[i5] = 0.0;
  }

  d2 = floor(x);
  tx = floor(y);
  for (i5 = 0; i5 < 4; i5++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(d2 + (1.0 + (double)i5)) + param_matrix->size[0]
                          * ((int)(tx + (1.0 + (double)loop_ub)) - 1)) - 1] =
        Ax_d[i5] * Ay[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    Au->data[Au->size[0] * i5] = param_matrix->data[i5];
  }

  loop_ub = control_p_x->size[0];
  i5 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i5, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i5 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i5, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    param_matrix->data[i5] = 0.0;
  }

  d2 = floor(x);
  tx = floor(y);
  for (i5 = 0; i5 < 4; i5++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(d2 + (1.0 + (double)i5)) + param_matrix->size[0]
                          * ((int)(tx + (1.0 + (double)loop_ub)) - 1)) - 1] =
        Ax_d[i5] * Ay[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    Av->data[Av->size[0] * i5] = param_matrix->data[i5];
  }

  emxFree_real_T(&param_matrix);
  guard2 = FALSE;
  if (Au->size[1] == 1) {
    guard2 = TRUE;
  } else {
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    if (loop_ub == 1) {
      guard2 = TRUE;
    } else {
      y = 0.0;
      if (Au->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Au->size[1]; loop_ub++) {
          y += Au->data[loop_ub] * control_p_x->data[loop_ub];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    y = 0.0;
    for (i5 = 0; i5 < Au->size[1]; i5++) {
      y += Au->data[Au->size[0] * i5] * control_p_x->data[i5];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    loop_ub = control_p_y->size[0] * control_p_y->size[1];
    if (loop_ub == 1) {
      guard1 = TRUE;
    } else {
      y = 0.0;
      if (Av->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Av->size[1]; loop_ub++) {
          y += Av->data[loop_ub] * control_p_y->data[loop_ub];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i5 = 0; i5 < Av->size[1]; i5++) {
      y += Av->data[Av->size[0] * i5] * control_p_y->data[i5];
    }
  }

  emxFree_real_T(&Av);
  ref[1] = y;
}

void bspline_single(const double src[2], const emxArray_real_T *control_p_x,
                    const emxArray_real_T *control_p_y, const double bound[2],
                    double ref[2])
{
  double x;
  double y;
  double tx;
  double ty;
  double Ax[4];
  double b_Ax[4];
  int i4;
  int loop_ub;
  static const double b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  double Ax_d[4];
  double Ay[4];
  double b_Ay[4];
  emxArray_real_T *Au;
  double Ay_d[4];
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  double d1;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  x = ((src[0] - bound[0]) + 1.0) / 30.0;
  y = ((src[1] - bound[1]) + 1.0) / 30.0;
  tx = x - floor(x);
  ty = y - floor(y);
  Ax[0] = 1.0;
  Ax[1] = tx;
  Ax[2] = tx * tx;
  Ax[3] = rt_powd_snf(tx, 3.0);
  for (i4 = 0; i4 < 4; i4++) {
    b_Ax[i4] = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_Ax[i4] += Ax[loop_ub] * b[loop_ub + (i4 << 2)];
    }
  }

  Ax_d[0] = 0.0;
  Ax_d[1] = 1.0;
  Ax_d[2] = 2.0 * tx;
  Ax_d[3] = 3.0 * (tx * tx);
  Ay[0] = 1.0;
  Ay[1] = ty;
  Ay[2] = ty * ty;
  Ay[3] = rt_powd_snf(ty, 3.0);
  for (i4 = 0; i4 < 4; i4++) {
    Ax[i4] = b_Ax[i4];
    b_Ay[i4] = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_Ay[i4] += Ay[loop_ub] * b[loop_ub + (i4 << 2)];
    }
  }

  for (i4 = 0; i4 < 4; i4++) {
    Ay[i4] = b_Ay[i4];
  }

  emxInit_real_T(&Au, 2);
  Ay_d[0] = 0.0;
  Ay_d[1] = 1.0;
  Ay_d[2] = 2.0 * ty;
  Ay_d[3] = 3.0 * (ty * ty);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i4 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Au, i4, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Au->data[i4] = 0.0;
  }

  emxInit_real_T(&Av, 2);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i4 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Av, i4, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i4 = 0; i4 < loop_ub; i4++) {
    Av->data[i4] = 0.0;
  }

  emxInit_real_T(&param_matrix, 2);
  loop_ub = control_p_x->size[0];
  i4 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i4, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i4 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i4, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    param_matrix->data[i4] = 0.0;
  }

  tx = floor(x);
  ty = floor(y);
  for (i4 = 0; i4 < 4; i4++) {
    d1 = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      d1 += Ax_d[loop_ub] * b[loop_ub + (i4 << 2)];
    }

    b_Ax[i4] = d1 / 30.0;
  }

  for (i4 = 0; i4 < 4; i4++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(tx + (1.0 + (double)i4)) + param_matrix->size[0]
                          * ((int)(ty + (1.0 + (double)loop_ub)) - 1)) - 1] =
        b_Ax[i4] * Ay[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Au->data[Au->size[0] * i4] = param_matrix->data[i4];
  }

  loop_ub = control_p_x->size[0];
  i4 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i4, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i4 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i4, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    param_matrix->data[i4] = 0.0;
  }

  tx = floor(x);
  ty = floor(y);
  for (i4 = 0; i4 < 4; i4++) {
    d1 = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      d1 += Ay_d[loop_ub] * b[loop_ub + (i4 << 2)];
    }

    b_Ax[i4] = d1 / 30.0;
  }

  for (i4 = 0; i4 < 4; i4++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(tx + (1.0 + (double)i4)) + param_matrix->size[0]
                          * ((int)(ty + (1.0 + (double)loop_ub)) - 1)) - 1] =
        Ax[i4] * b_Ax[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    Av->data[Av->size[0] * i4] = param_matrix->data[i4];
  }

  emxFree_real_T(&param_matrix);
  guard2 = FALSE;
  if (Au->size[1] == 1) {
    guard2 = TRUE;
  } else {
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    if (loop_ub == 1) {
      guard2 = TRUE;
    } else {
      y = 0.0;
      if (Au->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Au->size[1]; loop_ub++) {
          y += Au->data[loop_ub] * control_p_x->data[loop_ub];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    y = 0.0;
    for (i4 = 0; i4 < Au->size[1]; i4++) {
      y += Au->data[Au->size[0] * i4] * control_p_x->data[i4];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    loop_ub = control_p_y->size[0] * control_p_y->size[1];
    if (loop_ub == 1) {
      guard1 = TRUE;
    } else {
      y = 0.0;
      if (Av->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Av->size[1]; loop_ub++) {
          y += Av->data[loop_ub] * control_p_y->data[loop_ub];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i4 = 0; i4 < Av->size[1]; i4++) {
      y += Av->data[Av->size[0] * i4] * control_p_y->data[i4];
    }
  }

  emxFree_real_T(&Av);
  ref[1] = y;
}

void c_bspline_single(const double src[2], const emxArray_real_T *control_p_x,
                      const emxArray_real_T *control_p_y, const double bound[2],
                      double ref[2])
{
  double x;
  double y;
  double tx;
  double ty;
  double Ax[4];
  double b_Ax[4];
  int i6;
  int loop_ub;
  static const double b[16] = { 0.16666666666666666, -0.5, 0.5,
    -0.16666666666666666, 0.66666666666666663, 0.0, -1.0, 0.5,
    0.16666666666666666, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.16666666666666666 };

  double Ay_d[4];
  emxArray_real_T *Au;
  emxArray_real_T *Av;
  emxArray_real_T *param_matrix;
  boolean_T guard2 = FALSE;
  boolean_T guard1 = FALSE;

  /*  bspline give 2d cubic uniform references of given sole point and control points */
  /*  Detailed explanation goes here */
  x = ((src[0] - bound[0]) + 1.0) / 30.0;
  y = ((src[1] - bound[1]) + 1.0) / 30.0;
  tx = x - floor(x);
  ty = y - floor(y);
  Ax[0] = 1.0;
  Ax[1] = tx;
  Ax[2] = tx * tx;
  Ax[3] = rt_powd_snf(tx, 3.0);
  for (i6 = 0; i6 < 4; i6++) {
    b_Ax[i6] = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_Ax[i6] += Ax[loop_ub] * b[loop_ub + (i6 << 2)];
    }
  }

  for (i6 = 0; i6 < 4; i6++) {
    Ax[i6] = b_Ax[i6];
  }

  Ay_d[0] = 0.0;
  Ay_d[1] = 1.0;
  Ay_d[2] = 2.0 * ty;
  Ay_d[3] = 3.0 * (ty * ty);
  for (i6 = 0; i6 < 4; i6++) {
    tx = 0.0;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      tx += Ay_d[loop_ub] * b[loop_ub + (i6 << 2)];
    }

    b_Ax[i6] = tx / 30.0;
  }

  for (i6 = 0; i6 < 4; i6++) {
    Ay_d[i6] = b_Ax[i6];
  }

  emxInit_real_T(&Au, 2);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i6 = Au->size[0] * Au->size[1];
  Au->size[0] = 1;
  Au->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Au, i6, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i6 = 0; i6 < loop_ub; i6++) {
    Au->data[i6] = 0.0;
  }

  emxInit_real_T(&Av, 2);
  tx = (double)control_p_x->size[0] * (double)control_p_x->size[1];
  i6 = Av->size[0] * Av->size[1];
  Av->size[0] = 1;
  Av->size[1] = (int)tx;
  emxEnsureCapacity((emxArray__common *)Av, i6, (int)sizeof(double));
  loop_ub = (int)tx;
  for (i6 = 0; i6 < loop_ub; i6++) {
    Av->data[i6] = 0.0;
  }

  emxInit_real_T(&param_matrix, 2);
  loop_ub = control_p_x->size[0];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i6, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i6, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    param_matrix->data[i6] = 0.0;
  }

  tx = floor(x);
  ty = floor(y);
  for (i6 = 0; i6 < 4; i6++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(tx + (1.0 + (double)i6)) + param_matrix->size[0]
                          * ((int)(ty + (1.0 + (double)loop_ub)) - 1)) - 1] =
        Ax[i6] * Ay_d[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    Au->data[Au->size[0] * i6] = param_matrix->data[i6];
  }

  loop_ub = control_p_x->size[0];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i6, (int)sizeof(double));
  loop_ub = control_p_x->size[1];
  i6 = param_matrix->size[0] * param_matrix->size[1];
  param_matrix->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)param_matrix, i6, (int)sizeof(double));
  loop_ub = control_p_x->size[0] * control_p_x->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    param_matrix->data[i6] = 0.0;
  }

  tx = floor(x);
  ty = floor(y);
  for (i6 = 0; i6 < 4; i6++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      param_matrix->data[((int)(tx + (1.0 + (double)i6)) + param_matrix->size[0]
                          * ((int)(ty + (1.0 + (double)loop_ub)) - 1)) - 1] =
        Ax[i6] * Ay_d[loop_ub];
    }
  }

  loop_ub = param_matrix->size[0] * param_matrix->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    Av->data[Av->size[0] * i6] = param_matrix->data[i6];
  }

  emxFree_real_T(&param_matrix);
  guard2 = FALSE;
  if (Au->size[1] == 1) {
    guard2 = TRUE;
  } else {
    loop_ub = control_p_x->size[0] * control_p_x->size[1];
    if (loop_ub == 1) {
      guard2 = TRUE;
    } else {
      y = 0.0;
      if (Au->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Au->size[1]; loop_ub++) {
          y += Au->data[loop_ub] * control_p_x->data[loop_ub];
        }
      }
    }
  }

  if (guard2 == TRUE) {
    y = 0.0;
    for (i6 = 0; i6 < Au->size[1]; i6++) {
      y += Au->data[Au->size[0] * i6] * control_p_x->data[i6];
    }
  }

  emxFree_real_T(&Au);
  ref[0] = y;
  guard1 = FALSE;
  if (Av->size[1] == 1) {
    guard1 = TRUE;
  } else {
    loop_ub = control_p_y->size[0] * control_p_y->size[1];
    if (loop_ub == 1) {
      guard1 = TRUE;
    } else {
      y = 0.0;
      if (Av->size[1] < 1) {
      } else {
        for (loop_ub = 0; loop_ub + 1 <= Av->size[1]; loop_ub++) {
          y += Av->data[loop_ub] * control_p_y->data[loop_ub];
        }
      }
    }
  }

  if (guard1 == TRUE) {
    y = 0.0;
    for (i6 = 0; i6 < Av->size[1]; i6++) {
      y += Av->data[Av->size[0] * i6] * control_p_y->data[i6];
    }
  }

  emxFree_real_T(&Av);
  ref[1] = y;
}

/* End of code generation (bspline_single.c) */
