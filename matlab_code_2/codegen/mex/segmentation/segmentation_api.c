/*
 * segmentation_api.c
 *
 * Code generation for function 'segmentation_api'
 *
 * C source code generated on: Sat May 21 10:10:29 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "segmentation.h"
#include "segmentation_api.h"
#include "segmentation_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo rb_emlrtRTEI = { 1, 1, "segmentation_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *DCF, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_b_struct_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *d_emlrt_marshallOut(emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv45[2] = { 0, 0 };

  const mxArray *m8;
  y = NULL;
  m8 = mxCreateNumericArray(2, (int32_T *)&iv45, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m8, (void *)u->data);
  mxSetDimensions((mxArray *)m8, u->size, 2);
  emlrtAssign(&y, m8);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *DCF, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(DCF), &thisId, y);
  emlrtDestroyArray(&DCF);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_b_struct_T *u)
{
  const mxArray *y;
  int32_T iv46[2];
  int32_T i11;
  int32_T i;
  int32_T b_j1;
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  for (i11 = 0; i11 < 2; i11++) {
    iv46[i11] = u->size[i11];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv46, 0, NULL));
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(sp, &c_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < u->size[1U]) {
    i11 = c_u->size[0] * c_u->size[1];
    c_u->size[0] = u->data[u->size[0] * b_j1].x->size[0];
    c_u->size[1] = u->data[u->size[0] * b_j1].x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_u, i11, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].x->size[0] * u->data[u->size[0] * b_j1]
      .x->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      c_u->data[i11] = u->data[u->size[0] * b_j1].x->data[i11];
    }

    emlrtAddField(y, d_emlrt_marshallOut(c_u), "x", i);
    i11 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].y->size[0];
    b_u->size[1] = u->data[u->size[0] * b_j1].y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i11, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].y->size[0] * u->data[u->size[0] * b_j1]
      .y->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      b_u->data[i11] = u->data[u->size[0] * b_j1].y->data[i11];
    }

    emlrtAddField(y, d_emlrt_marshallOut(b_u), "y", i);
    i++;
    b_j1++;
  }

  emxFree_real_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m9;
  real_T (*pData)[];
  int32_T i12;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m9 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m9);
  i12 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      (*pData)[i12] = u->data[b_i + u->size[0] * i];
      i12++;
    }
  }

  emlrtAssign(&y, m9);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv47[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv48[2];
  for (i = 0; i < 2; i++) {
    iv47[i] = -1;
    bv0[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv47, bv0, iv48);
  ret->size[0] = iv48[0];
  ret->size[1] = iv48[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(Sp2), &thisId, y);
  emlrtDestroyArray(&Sp2);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T iv44[2];
  int32_T i10;
  int32_T i;
  int32_T b_j1;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m7;
  real_T (*pData)[];
  int32_T b_i;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  y = NULL;
  for (i10 = 0; i10 < 2; i10++) {
    iv44[i10] = u->size[i10];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv44, 0, NULL));
  i = 0;
  for (b_j1 = 0; b_j1 < u->size[1U]; b_j1++) {
    i10 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].val->size[0];
    b_u->size[1] = u->data[u->size[0] * b_j1].val->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i10, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].val->size[0] * u->data[u->size[0] *
      b_j1].val->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_u->data[i10] = u->data[u->size[0] * b_j1].val->data[i10];
    }

    b_y = NULL;
    m7 = mxCreateNumericArray(2, b_u->size, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T (*)[])mxGetPr(m7);
    i10 = 0;
    for (loop_ub = 0; loop_ub < b_u->size[1]; loop_ub++) {
      for (b_i = 0; b_i < b_u->size[0]; b_i++) {
        (*pData)[i10] = b_u->data[b_i + b_u->size[0] * loop_ub];
        i10++;
      }
    }

    emlrtAssign(&b_y, m7);
    emlrtAddField(y, b_y, "val", i);
    i++;
  }

  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv49[3];
  boolean_T bv1[3];
  int32_T i;
  static const int8_T iv50[3] = { -1, -1, 3 };

  static const boolean_T bv2[3] = { TRUE, TRUE, FALSE };

  int32_T iv51[3];
  for (i = 0; i < 3; i++) {
    iv49[i] = iv50[i];
    bv1[i] = bv2[i];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 3U, iv49, bv1, iv51);
  ret->size[0] = iv51[0];
  ret->size[1] = iv51[1];
  ret->size[2] = iv51[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

void segmentation_api(emlrtStack *sp, const mxArray * const prhs[3], const
                      mxArray *plhs[4])
{
  emxArray_real_T *Sp2;
  emxArray_real_T *Confidence;
  emxArray_real_T *DCF;
  emxArray_struct_T *sp_set;
  emxArray_real_T *sp_val;
  emxArray_b_struct_T *bspline_set;
  emxArray_struct_T *ref_set;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Sp2, 2, &rb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Confidence, 2, &rb_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &DCF, 3, &rb_emlrtRTEI, TRUE);
  emxInit_struct_T(sp, &sp_set, 2, &rb_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &sp_val, 2, &rb_emlrtRTEI, TRUE);
  b_emxInit_struct_T(sp, &bspline_set, 2, &rb_emlrtRTEI, TRUE);
  emxInit_struct_T(sp, &ref_set, 2, &rb_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(sp, emlrtAlias(prhs[0]), "Sp2", Sp2);
  emlrt_marshallIn(sp, emlrtAlias(prhs[1]), "Confidence", Confidence);
  c_emlrt_marshallIn(sp, emlrtAlias(prhs[2]), "DCF", DCF);

  /* Invoke the target function */
  segmentation(sp, Sp2, Confidence, DCF, sp_set, sp_val, bspline_set, ref_set);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(sp, sp_set);
  plhs[1] = b_emlrt_marshallOut(sp_val);
  plhs[2] = c_emlrt_marshallOut(sp, bspline_set);
  plhs[3] = emlrt_marshallOut(sp, ref_set);
  emxFree_struct_T(&ref_set);
  b_emxFree_struct_T(&bspline_set);
  sp_val->canFreeData = FALSE;
  emxFree_real_T(&sp_val);
  emxFree_struct_T(&sp_set);
  DCF->canFreeData = FALSE;
  emxFree_real_T(&DCF);
  Confidence->canFreeData = FALSE;
  emxFree_real_T(&Confidence);
  Sp2->canFreeData = FALSE;
  emxFree_real_T(&Sp2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (segmentation_api.c) */
