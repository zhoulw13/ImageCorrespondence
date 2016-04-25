/*
 * merging_api.c
 *
 * Code generation for function 'merging_api'
 *
 * C source code generated on: Sun Apr 24 19:39:55 2016
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "merging.h"
#include "merging_api.h"
#include "merging_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ub_emlrtRTEI = { 1, 1, "merging_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct_T *y);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_b_struct_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_val,
  const char_T *identifier, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_set, const
  char_T *identifier, emxArray_struct_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bspline_set,
  const char_T *identifier, emxArray_b_struct_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_b_struct_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ref, const
  char_T *identifier, emxArray_real_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv60[2];
  boolean_T bv0[2];
  int32_T i15;
  static const boolean_T bv1[2] = { FALSE, TRUE };

  int32_T sizes[2];
  static const char * fieldNames[1] = { "val" };

  int32_T i;
  int32_T b_j1;
  emxArray_real_T *t2_val;
  b_struct_T expl_temp;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  thisId.fParent = parentId;
  for (i15 = 0; i15 < 2; i15++) {
    iv60[i15] = 1 + -2 * i15;
    bv0[i15] = bv1[i15];
  }

  emlrtCheckVsStructR2012b(sp, parentId, u, 1, fieldNames, 2U, iv60, bv0, sizes);
  i15 = y->size[0] * y->size[1];
  y->size[1] = sizes[1];
  y->size[0] = 1;
  emxEnsureCapacity_struct_T(sp, y, i15, (emlrtRTEInfo *)NULL);
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &t2_val, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInitStruct_struct_T(sp, &expl_temp, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < y->size[1U]) {
    thisId.fIdentifier = "val";
    c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "val")),
                       &thisId, t2_val);
    i15 = expl_temp.val->size[0] * expl_temp.val->size[1];
    expl_temp.val->size[0] = t2_val->size[0];
    expl_temp.val->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.val, i15, (int32_T)
                      sizeof(real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t2_val->size[0] * t2_val->size[1];
    for (i15 = 0; i15 < loop_ub; i15++) {
      expl_temp.val->data[i15] = t2_val->data[i15];
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
  emxArray_b_struct_T *u)
{
  const mxArray *y;
  int32_T iv63[2];
  int32_T i18;
  int32_T i;
  int32_T b_j1;
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  for (i18 = 0; i18 < 2; i18++) {
    iv63[i18] = u->size[i18];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv63, 0, NULL));
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(sp, &c_u, 2, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < u->size[1U]) {
    i18 = c_u->size[0] * c_u->size[1];
    c_u->size[0] = u->data[u->size[0] * b_j1].x->size[0];
    c_u->size[1] = u->data[u->size[0] * b_j1].x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_u, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].x->size[0] * u->data[u->size[0] * b_j1]
      .x->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      c_u->data[i18] = u->data[u->size[0] * b_j1].x->data[i18];
    }

    emlrtAddField(y, c_emlrt_marshallOut(c_u), "x", i);
    i18 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].y->size[0];
    b_u->size[1] = u->data[u->size[0] * b_j1].y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].y->size[0] * u->data[u->size[0] * b_j1]
      .y->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_u->data[i18] = u->data[u->size[0] * b_j1].y->data[i18];
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

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m8;
  real_T (*pData)[];
  int32_T i19;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m8 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m8);
  i19 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      (*pData)[i19] = u->data[b_i + u->size[0] * i];
      i19++;
    }
  }

  emlrtAssign(&y, m8);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_val,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  e_emlrt_marshallIn(sp, emlrtAlias(sp_val), &thisId, y);
  emlrtDestroyArray(&sp_val);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T iv62[2];
  int32_T i17;
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
  for (i17 = 0; i17 < 2; i17++) {
    iv62[i17] = u->size[i17];
  }

  emlrtAssign(&y, mxCreateStructArray(2, iv62, 0, NULL));
  i = 0;
  for (b_j1 = 0; b_j1 < u->size[1U]; b_j1++) {
    i17 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u->data[u->size[0] * b_j1].val->size[0];
    b_u->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i17, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].val->size[0] * u->data[u->size[0] *
      b_j1].val->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_u->data[i17] = u->data[u->size[0] * b_j1].val->data[i17];
    }

    b_y = NULL;
    m7 = mxCreateNumericArray(2, b_u->size, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T (*)[])mxGetPr(m7);
    i17 = 0;
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      for (b_i = 0; b_i < b_u->size[0]; b_i++) {
        (*pData)[i17] = b_u->data[b_i + b_u->size[0] * loop_ub];
        i17++;
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

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bspline_set,
  const char_T *identifier, emxArray_b_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  g_emlrt_marshallIn(sp, emlrtAlias(bspline_set), &thisId, y);
  emlrtDestroyArray(&bspline_set);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_b_struct_T *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv61[2];
  boolean_T bv2[2];
  int32_T i16;
  static const boolean_T bv3[2] = { FALSE, TRUE };

  int32_T sizes[2];
  static const char * fieldNames[2] = { "x", "y" };

  int32_T i;
  int32_T b_j1;
  emxArray_real_T *t3_x;
  emxArray_real_T *t3_y;
  struct_T expl_temp;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  thisId.fParent = parentId;
  for (i16 = 0; i16 < 2; i16++) {
    iv61[i16] = 1 + -2 * i16;
    bv2[i16] = bv3[i16];
  }

  emlrtCheckVsStructR2012b(sp, parentId, u, 2, fieldNames, 2U, iv61, bv2, sizes);
  i16 = y->size[0] * y->size[1];
  y->size[1] = sizes[1];
  y->size[0] = 1;
  b_emxEnsureCapacity_struct_T(sp, y, i16, (emlrtRTEInfo *)NULL);
  i = 0;
  b_j1 = 0;
  emxInit_real_T(sp, &t3_x, 2, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(sp, &t3_y, 2, (emlrtRTEInfo *)NULL, TRUE);
  b_emxInitStruct_struct_T(sp, &expl_temp, (emlrtRTEInfo *)NULL, TRUE);
  while (b_j1 < y->size[1U]) {
    thisId.fIdentifier = "x";
    h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "x")),
                       &thisId, t3_x);
    thisId.fIdentifier = "y";
    h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i, "y")),
                       &thisId, t3_y);
    i16 = expl_temp.x->size[0] * expl_temp.x->size[1];
    expl_temp.x->size[0] = t3_x->size[0];
    expl_temp.x->size[1] = t3_x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.x, i16, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t3_x->size[0] * t3_x->size[1];
    for (i16 = 0; i16 < loop_ub; i16++) {
      expl_temp.x->data[i16] = t3_x->data[i16];
    }

    i16 = expl_temp.y->size[0] * expl_temp.y->size[1];
    expl_temp.y->size[0] = t3_y->size[0];
    expl_temp.y->size[1] = t3_y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)expl_temp.y, i16, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    loop_ub = t3_y->size[0] * t3_y->size[1];
    for (i16 = 0; i16 < loop_ub; i16++) {
      expl_temp.y->data[i16] = t3_y->data[i16];
    }

    b_emxCopyStruct_struct_T(sp, &y->data[y->size[0] * b_j1], &expl_temp,
      (emlrtRTEInfo *)NULL);
    i++;
    b_j1++;
  }

  b_emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&t3_y);
  emxFree_real_T(&t3_x);
  emlrtDestroyArray(&u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Sp2, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(sp, emlrtAlias(Sp2), &thisId, y);
  emlrtDestroyArray(&Sp2);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ref, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  l_emlrt_marshallIn(sp, emlrtAlias(Ref), &thisId, y);
  emlrtDestroyArray(&Ref);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv64[2];
  boolean_T bv4[2];
  int32_T i20;
  static const boolean_T bv5[2] = { TRUE, FALSE };

  int32_T iv65[2];
  for (i20 = 0; i20 < 2; i20++) {
    iv64[i20] = 3 * i20 - 1;
    bv4[i20] = bv5[i20];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv64, bv4, iv65);
  i20 = ret->size[0] * ret->size[1];
  ret->size[0] = iv65[0];
  ret->size[1] = iv65[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i20, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv66[1];
  boolean_T bv6[1];
  int32_T iv67[1];
  iv66[0] = -1;
  bv6[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 1U, iv66, bv6, iv67);
  ret->size[0] = iv67[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv68[2];
  boolean_T bv7[2];
  int32_T i;
  int32_T iv69[2];
  for (i = 0; i < 2; i++) {
    iv68[i] = -1;
    bv7[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv68, bv7, iv69);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv69[0];
  ret->size[1] = iv69[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv70[2];
  boolean_T bv8[2];
  int32_T i;
  int32_T iv71[2];
  for (i = 0; i < 2; i++) {
    iv70[i] = -1;
    bv8[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv70, bv8, iv71);
  ret->size[0] = iv71[0];
  ret->size[1] = iv71[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv72[3];
  boolean_T bv9[3];
  int32_T i;
  static const int8_T iv73[3] = { -1, -1, 3 };

  static const boolean_T bv10[3] = { TRUE, TRUE, FALSE };

  int32_T iv74[3];
  for (i = 0; i < 3; i++) {
    iv72[i] = iv73[i];
    bv9[i] = bv10[i];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", FALSE, 3U, iv72, bv9, iv74);
  ret->size[0] = iv74[0];
  ret->size[1] = iv74[1];
  ret->size[2] = iv74[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

void merging_api(emlrtStack *sp, const mxArray * const prhs[6], const mxArray
                 *plhs[3])
{
  emxArray_struct_T *sp_set;
  emxArray_real_T *sp_val;
  emxArray_b_struct_T *bspline_set;
  emxArray_struct_T *ref_set;
  emxArray_real_T *Sp2;
  emxArray_real_T *Ref;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_struct_T(sp, &sp_set, 2, &ub_emlrtRTEI, TRUE);
  b_emxInit_real_T(sp, &sp_val, 1, &ub_emlrtRTEI, TRUE);
  b_emxInit_struct_T(sp, &bspline_set, 2, &ub_emlrtRTEI, TRUE);
  emxInit_struct_T(sp, &ref_set, 2, &ub_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &Sp2, 2, &ub_emlrtRTEI, TRUE);
  c_emxInit_real_T(sp, &Ref, 3, &ub_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(sp, emlrtAliasP(prhs[0]), "sp_set", sp_set);
  d_emlrt_marshallIn(sp, emlrtAlias(prhs[1]), "sp_val", sp_val);
  f_emlrt_marshallIn(sp, emlrtAliasP(prhs[2]), "bspline_set", bspline_set);
  emlrt_marshallIn(sp, emlrtAliasP(prhs[3]), "ref_set", ref_set);
  i_emlrt_marshallIn(sp, emlrtAlias(prhs[4]), "Sp2", Sp2);
  k_emlrt_marshallIn(sp, emlrtAlias(prhs[5]), "Ref", Ref);

  /* Invoke the target function */
  merging(sp, sp_set, sp_val, bspline_set, ref_set, Sp2, Ref);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(sp, sp_set);
  plhs[1] = b_emlrt_marshallOut(sp, bspline_set);
  plhs[2] = emlrt_marshallOut(sp, ref_set);
  Ref->canFreeData = FALSE;
  emxFree_real_T(&Ref);
  Sp2->canFreeData = FALSE;
  emxFree_real_T(&Sp2);
  emxFree_struct_T(&ref_set);
  b_emxFree_struct_T(&bspline_set);
  sp_val->canFreeData = FALSE;
  emxFree_real_T(&sp_val);
  emxFree_struct_T(&sp_set);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (merging_api.c) */
