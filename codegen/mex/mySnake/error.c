/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mySnake.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 's', 'v', 'd' };

  emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 14, varargin_1, 12, varargin_2);
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", "Coder:MATLAB:svd_NoConvergence", 0);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI, "MATLAB:nomem", "MATLAB:nomem",
    0);
}

/* End of code generation (error.c) */
