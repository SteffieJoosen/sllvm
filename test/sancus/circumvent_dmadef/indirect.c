#include "indirect.h"
#include <stdio.h>
#include <string.h>



int indirect_enter(int x[], int y[], __attribute__((secret)) int a, int b)
{
  void * output;
  if (a < b) {
    const int * p = (const int *)0x0FFFE;
    return x[p[-65500]];
  } else {
    return y[b];
  }
}



