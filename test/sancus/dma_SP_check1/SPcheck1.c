#include "SPcheck1.h"
#include "msp430f5329.h"

int v;
int u;


int SPcheck1_enter(__attribute__((secret)) int a, int b, struct test *x, int y)
{
  // x on stack
  // y in r12
  int result = 3;
  if (a < 3)
  {
    return (x->x);
  } else {
    u = 3;
    return 4;
  }
  
}




