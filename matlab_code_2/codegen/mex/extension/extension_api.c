/*
 * extension_api.c
 *
 * Code generation for function 'extension_api'
 *
 * C source code generated on: Thu Jul 14 16:54:48 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "extension.h"
#include "extension_api.h"
#include "extension_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo jc_emlrtRTEI = { 1, 1, "extension_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct_T *y);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bspline_set,
  const char_T *identifier, emxArray_b_struct_T *y);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_b_struct_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_b_struct_T *y);
static const mxArray *e_emlrt_marshallOut(emxArray_real_T *u);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_set, const
  char_T *identifier, emxArray_struct_T *y);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Src_lab,
  const char_T *identifier, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv84[2];
  boolean_T bv0[2];
  int32_T i23;
  static const boolean_T bv1[2] = { FALSE, TRUE };

  int32_T sizes[2];
  static const char * fieldNames[1] = { "val" };

  int32_T i;
  int32_T b_j1;
  emxArray_real_T *t2_val;
  struct_T expl_temp;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  thisId.fParent = parentId;
  for (i23 = 0; i23 < 2; i23++) {
    iv84[i23] = 1 + -2 * i23;
    bv0[i23] = bv1[i23];
  }

  emlrtCheckVsStructR2012b(sp, parentId, u, 1, fieldNames, 2U, iv84, bv0, sizes);
  i23 = y->size[0] * y->size[1];
  y->size[1] = sizes[1];
  y->size[0] = 1;
  emxEnsureCapacity_struct_T(sp, y, i23, (emlrtRTEInfo *)NULL);
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &t2_val, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInitStruct_struct_T(sp, &expl_temp, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < y->size[1U]) {
    thisId.fIdentifier = "val";
    c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "val")),
                       &thisId, t2_val);
    i23 = expl_temp.val->size[0] * expl_temp.val->size[1];
    expl_temp.val->size[0] = t2_val->size[0];
    expl_temp.val->size[1] = t2_val->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.val, i23, (int32_T)
                      sizeof(real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t2_val->size[0] * t2_val->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      expl_temp.val->data[i23] = t2_val->data[i23];
    }

    emxCopyStruct_struct_T(sp, &y->data[y->size[0] * b_j1], &expl_temp,
      (emlrtRTEInfo *)NULL);
    i++;
    b_j1++;
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&t2_val);
  emlrtDestroyArray(&u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u)
{
  const mxArray *y;
  int32_T iv87[2];
  int32_T i25;
  int32_T i;
  int32_T b_j1;
  emxArray_real_T *b_u;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  for (i25 = 0; i25 < 2; i25++) {
    iv87[i25] = u->size[i25];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv87, 0, NULL));
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < u->size[1U]) {
    i25 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].val->size[0];
    b_u->size[1] = u->data[u->size[0] * b_j1].val->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i25, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].val->size[0] * u->data[u->size[0] *
      b_j1].val->size[1];
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_u->data[i25] = u->data[u->size[0] * b_j1].val->data[i25];
    }

    emlrtAddField(y, c_emlrt_marshallOut(b_u), "val", i);
    i++;
    b_j1++;
  }

  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m12;
  real_T (*pData)[];
  int32_T i26;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m12 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m12);
  i26 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      (*pData)[i26] = u->data[b_i + u->size[0] * i];
      i26++;
    }
  }

  emlrtAssign(&y, m12);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bspline_set,
  const char_T *identifier, emxArray_b_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  e_emlrt_marshallIn(sp, emlrtAlias(bspline_set), &thisId, y);
  emlrtDestroyArray(&bspline_set);
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_b_struct_T *u)
{
  const mxArray *y;
  int32_T iv88[2];
  int32_T i27;
  int32_T i;
  int32_T b_j1;
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  for (i27 = 0; i27 < 2; i27++) {
    iv88[i27] = u->size[i27];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv88, 0, NULL));
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(sp, &c_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < u->size[1U]) {
    i27 = c_u->size[0] * c_u->size[1];
    c_u->size[0] = u->data[u->size[0] * b_j1].x->size[0];
    c_u->size[1] = u->data[u->size[0] * b_j1].x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_u, i27, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].x->size[0] * u->data[u->size[0] * b_j1]
      .x->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      c_u->data[i27] = u->data[u->size[0] * b_j1].x->data[i27];
    }

    emlrtAddField(y, c_emlrt_marshallOut(c_u), "x", i);
    i27 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].y->size[0];
    b_u->size[1] = u->data[u->size[0] * b_j1].y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i27, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].y->size[0] * u->data[u->size[0] * b_j1]
      .y->size[1];
    for (i27 = 0; i27 < loop_ub; i27++) {
      b_u->data[i27] = u->data[u->size[0] * b_j1].y->data[i27];
    }

    emlrtAddField(y, c_emlrt_marshallOut(b_u), "y", i);
    i++;
    b_j1++;
  }

  emxFree_real_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_b_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv85[2];
  boolean_T bv2[2];
  int32_T i24;
  static const boolean_T bv3[2] = { FALSE, TRUE };

  int32_T sizes[2];
  static const char * fieldNames[2] = { "x", "y" };

  int32_T i;
  int32_T b_j1;
  emxArray_real_T *t1_x;
  emxArray_real_T *t1_y;
  b_struct_T expl_temp;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  thisId.fParent = parentId;
  for (i24 = 0; i24 < 2; i24++) {
    iv85[i24] = 1 + -2 * i24;
    bv2[i24] = bv3[i24];
  }

  emlrtCheckVsStructR2012b(sp, parentId, u, 2, fieldNames, 2U, iv85, bv2, sizes);
  i24 = y->size[0] * y->size[1];
  y->size[1] = sizes[1];
  y->size[0] = 1;
  b_emxEnsureCapacity_struct_T(sp, y, i24, (emlrtRTEInfo *)NULL);
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &t1_x, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(sp, &t1_y, 2, (emlrtRTEInfo *)NULL, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < y->size[1U]) {
    thisId.fIdentifier = "x";
    c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "x")),
                       &thisId, t1_x);
    thisId.fIdentifier = "y";
    c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "y")),
                       &thisId, t1_y);
    i24 = expl_temp.x->size[0] * expl_temp.x->size[1];
    expl_temp.x->size[0] = t1_x->size[0];
    expl_temp.x->size[1] = t1_x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.x, i24, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t1_x->size[0] * t1_x->size[1];
    for (i24 = 0; i24 < loop_ub; i24++) {
      expl_temp.x->data[i24] = t1_x->data[i24];
    }

    i24 = expl_temp.y->size[0] * expl_temp.y->size[1];
    expl_temp.y->size[0] = t1_y->size[0];
    expl_temp.y->size[1] = t1_y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.y, i24, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t1_y->size[0] * t1_y->size[1];
    for (i24 = 0; i24 < loop_ub; i24++) {
      expl_temp.y->data[i24] = t1_y->data[i24];
    }

    b_emxCopyStruct_struct_T(sp, &y->data[y->size[0] * b_j1], &expl_temp,
      (emlrtRTEInfo *)NULL);
    i++;
    b_j1++;
  }

  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&t1_y);
  emxFree_real_T(&t1_x);
  emlrtDestroyArray(&u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static const mxArray *e_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv89[3] = { 0, 0, 0 };

  const mxArray *m13;
  y = NULL;
  m13 = mxCreateNumericArray(3, (int32_T *)&iv89, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m13, (void *)u->data);
  mxSetDimensions((mxArray *)m13, u->size, 3);
  emlrtAssign(&y, m13);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_set, const
  char_T *identifier, emxArray_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(sp_set), &thisId, y);
  emlrtDestroyArray(&sp_set);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv86[1] = { 0 };

  const mxArray *m11;
  y = NULL;
  m11 = mxCreateNumericArray(1, (int32_T *)&iv86, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m11, (void *)u->data);
  mxSetDimensions((mxArray *)m11, u->size, 1);
  emlrtAssign(&y, m11);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  g_emlrt_marshallIn(sp, emlrtAlias(Sp2), &thisId, y);
  emlrtDestroyArray(&Sp2);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Src_lab,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  i_emlrt_marshallIn(sp, emlrtAlias(Src_lab), &thisId, y);
  emlrtDestroyArray(&Src_lab);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv90[2];
  boolean_T bv4[2];
  int32_T i;
  int32_T iv91[2];
  for (i = 0; i < 2; i++) {
    iv90[i] = -1;
    bv4[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv90, bv4, iv91);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv91[0];
  ret->size[1] = iv91[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv92[2];
  boolean_T bv5[2];
  int32_T i;
  int32_T iv93[2];
  for (i = 0; i < 2; i++) {
    iv92[i] = -1;
    bv5[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv92, bv5, iv93);
  ret->size[0] = iv93[0];
  ret->size[1] = iv93[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv94[3];
  boolean_T bv6[3];
  int32_T i;
  static const int8_T iv95[3] = { -1, -1, 3 };

  static const boolean_T bv7[3] = { TRUE, TRUE, FALSE };

  int32_T iv96[3];
  for (i = 0; i < 3; i++) {
    iv94[i] = iv95[i];
    bv6[i] = bv7[i];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 3U, iv94, bv6, iv96);
  ret->size[0] = iv96[0];
  ret->size[1] = iv96[1];
  ret->size[2] = iv96[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

void extension_api(emlrtStack *sp, const mxArray * const prhs[5], const mxArray *
                   plhs[4])
{
  emxArray_struct_T *sp_set;
  emxArray_b_struct_T *bspline_set;
  emxArray_real_T *Sp2;
  emxArray_real_T *Src_lab;
  emxArray_real_T *Ref_lab;
  emxArray_real_T *errors;
  emxArray_real_T *Corr;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_struct_T(sp, &sp_set, 2, &jc_emlrtRTEI, TRUE);
  b_emxInit_struct_T(sp, &bspline_set, 2, &jc_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Sp2, 2, &jc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &Src_lab, 3, &jc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &Ref_lab, 3, &jc_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &errors, 1, &jc_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &Corr, 3, &jc_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(sp, emlrtAliasP(prhs[0]), "sp_set", sp_set);
  d_emlrt_marshallIn(sp, emlrtAliasP(prhs[1]), "bspline_set", bspline_set);
  f_emlrt_marshallIn(sp, emlrtAlias(prhs[2]), "Sp2", Sp2);
  h_emlrt_marshallIn(sp, emlrtAlias(prhs[3]), "Src_lab", Src_lab);
  h_emlrt_marshallIn(sp, emlrtAlias(prhs[4]), "Ref_lab", Ref_lab);

  /* Invoke the target function */
  extension(sp, sp_set, bspline_set, Sp2, Src_lab, Ref_lab, errors, Corr);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(errors);
  plhs[1] = b_emlrt_marshallOut(sp, sp_set);
  plhs[2] = d_emlrt_marshallOut(sp, bspline_set);
  plhs[3] = e_emlrt_marshallOut(Corr);
  Corr->canFreeData = FALSE;
  emxFree_real_T(&Corr);
  errors->canFreeData = FALSE;
  emxFree_real_T(&errors);
  Ref_lab->canFreeData = FALSE;
  emxFree_real_T(&Ref_lab);
  Src_lab->canFreeData = FALSE;
  emxFree_real_T(&Src_lab);
  Sp2->canFreeData = FALSE;
  emxFree_real_T(&Sp2);
  b_emxFree_struct_T(&bspline_set);
  emxFree_struct_T(&sp_set);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extension_api.c) */
