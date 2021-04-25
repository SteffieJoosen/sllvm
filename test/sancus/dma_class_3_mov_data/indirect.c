#include "indirect.h"
#include <stdio.h>
#include <string.h>

static int f;

int indirect_enter(int x[], int y[], __attribute__((secret)) int a, int b)
{
  void * output;
  if (a < b) {
    static int * p = &f;
    return x[*++p];
  } else {
    return y[b];
  }
}



