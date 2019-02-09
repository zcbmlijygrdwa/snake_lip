/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mySnake.c
 *
 * Code generation for function 'mySnake'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "mySnake.h"
#include "eml_setop.h"
#include "sub2ind.h"
#include "error.h"
#include "mySnake_data.h"
#include "lapacke.h"
#include "blas.h"

/* Type Definitions */
#include <stdlib.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 15,  /* lineNo */
  5,                                   /* colNo */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 18,    /* lineNo */
  "mySnake",                           /* fcnName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "mySnake",                           /* fcnName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 30,  /* lineNo */
  "mySnake",                           /* fcnName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 35,  /* lineNo */
  "mySnake",                           /* fcnName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 19,  /* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 70,  /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 16,  /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 52,  /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 21,  /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 114, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 118, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 47,  /* lineNo */
  "norm",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 69,  /* lineNo */
  "norm",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 29,  /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 101, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 105, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 28,  /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 193, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 125, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 114, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 107,/* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 56, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  939681,                              /* iLast */
  22,                                  /* lineNo */
  36,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  22,                                  /* lineNo */
  57,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  23,                                  /* lineNo */
  24,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  23,                                  /* lineNo */
  58,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  25,                                  /* lineNo */
  36,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  26,                                  /* lineNo */
  24,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  939681,                              /* iLast */
  26,                                  /* lineNo */
  52,                                  /* colNo */
  "I",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  50,                                  /* iLast */
  30,                                  /* lineNo */
  57,                                  /* colNo */
  "A",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  50,                                  /* iLast */
  31,                                  /* lineNo */
  22,                                  /* colNo */
  "c",                                 /* aName */
  "mySnake",                           /* fName */
  "C:\\Users\\Yan\\Downloads\\snake_lip\\mySnake.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void mySnake(const emlrtStack *sp, const real_T I[939681], const real_T A[2500],
             const real_T A0[100], int32_T c[100], real_T omega, real_T eta)
{
  int32_T i;
  boolean_T exitg1;
  const mxArray *y;
  const mxArray *m0;
  int32_T c_old[100];
  real_T a;
  real_T b_a;
  int32_T new_ind;
  real_T old_ind_data[50];
  int32_T old_ind_size[2];
  int32_T c_ind[50];
  int32_T ia_size[1];
  int32_T ib_size[1];
  int32_T i2;
  int32_T b_i;
  int32_T q1;
  real_T x[100];
  real_T b[50];
  ptrdiff_t info_t;
  real_T s[2];
  real_T superb;
  real_T b_b[50];
  real_T c_b[50];
  int32_T loop_ub;
  int32_T b_size_idx_0;
  real_T d_b[50];
  real_T a_data[50];
  real_T c_a[2];
  real_T b_data[100];
  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int16_T i3;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;

  /*  ECE 281B Homework Assignment #2 Function */
  /*  Minimizing ||A*x-b|| to obtain minimium total energy */
  /*  This function is compile to C code (MEX-file) to enhance performance */
  /*  Created on 04/20/2016 Ready for submission */
  /*  Author: Yitian Shao */
  /*  ========================================================================= */
  /*  Number of tracking points */
  /*  Return threshold */
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 50)) {
    y = NULL;
    m0 = emlrtCreateDoubleScalar((1.0 + (real_T)i) / 50.0);
    emlrtAssign(&y, m0);
    emlrtDisplayR2012b(y, "prog", &emlrtRTEI, sp);
    memcpy(&c_old[0], &c[0], 100U * sizeof(int32_T));
    a = 2.0 * eta;
    b_a = 2.0 * eta;
    new_ind = 0;
    while (new_ind < 50) {
      st.site = &emlrtRSI;
      b_st.site = &g_emlrtRSI;
      c_st.site = &h_emlrtRSI;
      do_vectors(1.0 + (real_T)new_ind, old_ind_data, old_ind_size, c_ind,
                 ia_size, ib_size);

      /*  Old indices of points        */
      st.site = &b_emlrtRSI;
      b_st.site = &l_emlrtRSI;
      if (!allinrange(*(int32_T (*)[50])&c[50], 729)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
          "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange", 0);
      }

      if (!allinrange(*(int32_T (*)[50])&c[0], 1289)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
          "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange", 0);
      }

      for (i2 = 0; i2 < 50; i2++) {
        c_ind[i2] = c[50 + i2] + 729 * (c[i2] - 1);
      }

      /*  Linear index */
      /*  'Bx = A*x0 + omega*[I(x+1,y)-I(x,y)] + 2eta*[I(x+1,y)-2I(x,y)+I(x-1,y)]' */
      for (i2 = 0; i2 < 50; i2++) {
        b_i = (int32_T)((real_T)c_ind[i2] + 729.0);
        if (!((b_i >= 1) && (b_i <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, 939681, &emlrtBCI, sp);
        }

        if (!((c_ind[i2] >= 1) && (c_ind[i2] <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(c_ind[i2], 1, 939681, &b_emlrtBCI, sp);
        }

        b[i2] = I[b_i - 1] - I[c_ind[i2] - 1];
      }

      for (i2 = 0; i2 < 50; i2++) {
        b_i = c_ind[i2] + 729;
        if (!((b_i >= 1) && (b_i <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, 939681, &c_emlrtBCI, sp);
        }

        q1 = c_ind[i2] - 729;
        if (!((q1 >= 1) && (q1 <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(q1, 1, 939681, &d_emlrtBCI, sp);
        }

        c_b[i2] = (I[b_i - 1] - 2.0 * I[c_ind[i2] - 1]) + I[q1 - 1];
      }

      /*  'By = A*y0 + omega*[I(x,y+1)-I(x,y)] + 2eta*[I(x,y+1)-2I(x,y)+I(x,y-1)]' */
      for (i2 = 0; i2 < 50; i2++) {
        b_i = c_ind[i2] + 1;
        if (!((b_i >= 1) && (b_i <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, 939681, &e_emlrtBCI, sp);
        }

        b_b[i2] = I[b_i - 1] - I[c_ind[i2] - 1];
      }

      for (i2 = 0; i2 < 50; i2++) {
        b_i = c_ind[i2] + 1;
        if (!((b_i >= 1) && (b_i <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, 939681, &f_emlrtBCI, sp);
        }

        q1 = c_ind[i2] - 1;
        if (!((q1 >= 1) && (q1 <= 939681))) {
          emlrtDynamicBoundsCheckR2012b(q1, 1, 939681, &g_emlrtBCI, sp);
        }

        d_b[i2] = (I[b_i - 1] - 2.0 * I[c_ind[i2] - 1]) + I[q1 - 1];
      }

      /*  New indices of points  */
      st.site = &c_emlrtRSI;
      loop_ub = old_ind_size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_i = (int32_T)old_ind_data[old_ind_size[0] * i2];
        if (!((b_i >= 1) && (b_i <= 50))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, 50, &h_emlrtBCI, &st);
        }

        a_data[i2] = A[new_ind + 50 * (b_i - 1)];
      }

      b_size_idx_0 = old_ind_size[1];
      loop_ub = old_ind_size[1];
      for (i2 = 0; i2 < 2; i2++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          q1 = (int32_T)old_ind_data[old_ind_size[0] * b_i];
          if (!((q1 >= 1) && (q1 <= 50))) {
            emlrtDynamicBoundsCheckR2012b(q1, 1, 50, &i_emlrtBCI, &st);
          }

          b_data[b_i + b_size_idx_0 * i2] = c[(q1 + 50 * i2) - 1];
        }
      }

      b_st.site = &n_emlrtRSI;
      if (old_ind_size[1] == 1) {
        for (i2 = 0; i2 < 2; i2++) {
          c_a[i2] = 0.0;
          for (b_i = 0; b_i < 1; b_i++) {
            c_a[i2] += a_data[0] * b_data[b_size_idx_0 * i2];
          }

          s[i2] = c_a[i2];
        }
      } else {
        b_st.site = &m_emlrtRSI;
        if (old_ind_size[1] == 0) {
          for (b_i = 0; b_i < 2; b_i++) {
            s[b_i] = 0.0;
          }
        } else {
          c_st.site = &o_emlrtRSI;
          c_st.site = &p_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          superb = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)2;
          k_t = (ptrdiff_t)old_ind_size[1];
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)old_ind_size[1];
          ldc_t = (ptrdiff_t)1;
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &superb, &a_data[0], &lda_t,
                &b_data[0], &ldb_t, &beta1, &s[0], &ldc_t);
        }
      }

      for (i2 = 0; i2 < 50; i2++) {
        x[i2] = (A0[i2] + omega * b[i2]) + a * c_b[i2];
        x[50 + i2] = (A0[50 + i2] + omega * b_b[i2]) + b_a * d_b[i2];
      }

      for (i2 = 0; i2 < 2; i2++) {
        superb = muDoubleScalarRound((x[new_ind + 50 * i2] - s[i2]) / A[new_ind
          + 50 * new_ind]);
        if (superb < 32768.0) {
          if (superb >= -32768.0) {
            i3 = (int16_T)superb;
          } else {
            i3 = MIN_int16_T;
          }
        } else if (superb >= 32768.0) {
          i3 = MAX_int16_T;
        } else {
          i3 = 0;
        }

        c[new_ind + 50 * i2] = i3;
      }

      new_ind++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* displaySnakeOnImage(c(:,1),c(:,2),I); */
    /*  Return once iteration converges  */
    st.site = &d_emlrtRSI;
    for (i2 = 0; i2 < 100; i2++) {
      b_i = c[i2];
      q1 = c_old[i2];
      if ((b_i >= 0) && (q1 < b_i - MAX_int32_T)) {
        b_i = MAX_int32_T;
      } else if ((b_i < 0) && (q1 > b_i - MIN_int32_T)) {
        b_i = MIN_int32_T;
      } else {
        b_i -= q1;
      }

      x[i2] = b_i;
    }

    b_st.site = &q_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    e_st.site = &t_emlrtRSI;
    f_st.site = &v_emlrtRSI;
    g_st.site = &bb_emlrtRSI;
    g_st.site = &ab_emlrtRSI;
    g_st.site = &y_emlrtRSI;
    g_st.site = &x_emlrtRSI;
    info_t = LAPACKE_dgesvd(102, 'N', 'N', (ptrdiff_t)50, (ptrdiff_t)2, &x[0],
      (ptrdiff_t)50, &s[0], NULL, (ptrdiff_t)1, NULL, (ptrdiff_t)1, &superb);
    b_i = (int32_T)info_t;
    g_st.site = &w_emlrtRSI;
    if (b_i < 0) {
      if (b_i == -1010) {
        h_st.site = &fb_emlrtRSI;
        error(&h_st);
      } else {
        h_st.site = &gb_emlrtRSI;
        b_error(&h_st, b_i);
      }
    }

    if (b_i > 0) {
      e_st.site = &u_emlrtRSI;
      c_error(&e_st);
    }

    if (s[0] < 0.1) {
      exitg1 = true;
    } else {
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }
}

/* End of code generation (mySnake.c) */
