#include "indirect.h"
#include <stdio.h>
#include <string.h>
#include "msp430fr5959.h"



int indirect_enter(int x[], int y[], __attribute__((secret)) int a, int b)
{
  long output;
  if (a < b) {
    output = SYSRSTIV_PERF;
    return output;
  } else {
    return y[b];
  }
}



