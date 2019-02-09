/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sub2ind.c
 *
 * Code generation for function 'sub2ind'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mySnake.h"
#include "sub2ind.h"

/* Function Definitions */
boolean_T allinrange(const int32_T x[50], int32_T hi)
{
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 50) {
      if ((x[k] >= 1) && (x[k] <= hi)) {
        k++;
      } else {
        p = false;
        exitg1 = 1;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

/* End of code generation (sub2ind.c) */
