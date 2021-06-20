#include "globalmov2.h"
#include "msp430f5329.h"

int v;
int u;

int globalmov2_enter(int x[], int y[], __attribute__((secret)) int a, int b)
{
  int result = 3;
  if (a < 3)
  {
    result = 5;
    v = u;
  }
    u = 23;
    return result;
}




