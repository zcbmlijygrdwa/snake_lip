/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include <math.h>
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "mySnake.h"
#include "eml_setop.h"

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x[50]);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x[50])
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  xk = x[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < 50)) {
    absxk = muDoubleScalarAbs(xk / 2.0);
    if (absxk <= 2.2250738585072014E-308) {
      absxk = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      absxk = ldexp(1.0, exponent - 53);
    }

    if (muDoubleScalarAbs(xk - x[*k]) < absxk) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

void do_vectors(real_T b, real_T c_data[], int32_T c_size[2], int32_T ia_data[],
                int32_T ia_size[1], int32_T ib_size[1])
{
  boolean_T b0;
  boolean_T b1;
  int32_T nc;
  int32_T nia;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T b_ialast;
  int32_T i0;
  real_T ak;
  real_T dv0[50];
  real_T dv1[50];
  int32_T b_ia_data[50];
  real_T absxk;
  int32_T exponent;
  int32_T i1;
  b0 = false;
  b1 = false;
  c_size[0] = 1;
  ib_size[0] = 0;
  nc = -1;
  nia = -1;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= 50) && (iblast <= 1)) {
    b_ialast = ialast;
    if (!b1) {
      for (i0 = 0; i0 < 50; i0++) {
        dv0[i0] = 1.0 + (real_T)i0;
      }

      b1 = true;
    }

    ak = skip_to_last_equal_value(&b_ialast, dv0);
    ialast = b_ialast;
    absxk = muDoubleScalarAbs(b / 2.0);
    if (absxk <= 2.2250738585072014E-308) {
      absxk = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      absxk = ldexp(1.0, exponent - 53);
    }

    if (muDoubleScalarAbs(b - ak) < absxk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = 2;
    } else if (ak < b) {
      nc++;
      nia++;
      c_data[nc] = ak;
      ia_data[nia] = iafirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast = 2;
    }
  }

  while (ialast <= 50) {
    iafirst = ialast;
    if (!b0) {
      for (i0 = 0; i0 < 50; i0++) {
        dv1[i0] = 1.0 + (real_T)i0;
      }

      b0 = true;
    }

    ak = skip_to_last_equal_value(&iafirst, dv1);
    nc++;
    nia++;
    c_data[nc] = ak;
    ia_data[nia] = ialast;
    ialast = iafirst + 1;
  }

  if (1 > nia + 1) {
    iafirst = -1;
  } else {
    iafirst = nia;
  }

  if (0 <= iafirst) {
    memcpy(&b_ia_data[0], &ia_data[0], (uint32_T)((iafirst + 1) * (int32_T)
            sizeof(int32_T)));
  }

  ia_size[0] = iafirst + 1;
  iafirst++;
  if (0 <= iafirst - 1) {
    memcpy(&ia_data[0], &b_ia_data[0], (uint32_T)(iafirst * (int32_T)sizeof
            (int32_T)));
  }

  if (1 > nc + 1) {
    i1 = -1;
  } else {
    i1 = nc;
  }

  c_size[1] = i1 + 1;
}

/* End of code generation (eml_setop.c) */
