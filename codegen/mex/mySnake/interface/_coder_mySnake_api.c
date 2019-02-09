/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_mySnake_api.c
 *
 * Code generation for function '_coder_mySnake_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mySnake.h"
#include "_coder_mySnake_api.h"
#include "mySnake_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[939681];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A, const
  char_T *identifier))[2500];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2500];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A0,
  const char_T *identifier))[100];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier))[939681];
static void emlrt_marshallOut(const int32_T u[100], const mxArray *y);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[100];
static int32_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
  const char_T *identifier))[100];
static int32_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[100];
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *omega,
  const char_T *identifier);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[939681];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2500];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100];
static int32_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100];
static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[939681]
{
  real_T (*y)[939681];
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A,
  const char_T *identifier))[2500]
{
  real_T (*y)[2500];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(A), &thisId);
  emlrtDestroyArray(&A);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2500]
{
  real_T (*y)[2500];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A0,
  const char_T *identifier))[100]
{
  real_T (*y)[100];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(A0), &thisId);
  emlrtDestroyArray(&A0);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier))[939681]
{
  real_T (*y)[939681];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(I), &thisId);
  emlrtDestroyArray(&I);
  return y;
}
  static void emlrt_marshallOut(const int32_T u[100], const mxArray *y)
{
  static const int32_T iv0[2] = { 50, 2 };

  emlrtMxSetData((mxArray *)y, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)y, iv0, 2);
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[100]
{
  real_T (*y)[100];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static int32_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
  const char_T *identifier))[100]
{
  int32_T (*y)[100];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(c), &thisId);
  emlrtDestroyArray(&c);
  return y;
}

static int32_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[100]
{
  int32_T (*y)[100];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *omega,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(omega), &thisId);
  emlrtDestroyArray(&omega);
  return y;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[939681]
{
  real_T (*ret)[939681];
  static const int32_T dims[2] = { 729, 1289 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[939681])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2500]
{
  real_T (*ret)[2500];
  static const int32_T dims[2] = { 50, 50 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2500])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100]
{
  real_T (*ret)[100];
  static const int32_T dims[2] = { 50, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[100])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static int32_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100]
{
  int32_T (*ret)[100];
  static const int32_T dims[2] = { 50, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, dims);
  ret = (int32_T (*)[100])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void mySnake_api(const mxArray * const prhs[6], int32_T nlhs, const mxArray
                 *plhs[1])
{
  const mxArray *prhs_copy_idx_0;
  const mxArray *prhs_copy_idx_3;
  real_T (*I)[939681];
  real_T (*A)[2500];
  real_T (*A0)[100];
  int32_T (*c)[100];
  real_T omega;
  real_T eta;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  prhs_copy_idx_0 = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs_copy_idx_3 = emlrtProtectR2012b(prhs[3], 3, true, -1);

  /* Marshall function inputs */
  I = emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "I");
  A = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "A");
  A0 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A0");
  c = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_3), "c");
  omega = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "omega");
  eta = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "eta");

  /* Invoke the target function */
  mySnake(&st, *I, *A, *A0, *c, omega, eta);

  /* Marshall function outputs */
  emlrt_marshallOut(*c, prhs_copy_idx_3);
  plhs[0] = prhs_copy_idx_3;
}

/* End of code generation (_coder_mySnake_api.c) */
