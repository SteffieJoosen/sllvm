#include "globalmov.h"

int v;
int u;
  
int globalmov_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;
  int * pv = &v;
  int * pu = &u;

  if (a < b)
  {
    asm("push r5");
    asm("pop r5");
    v = 24;
  } 
    u = 23;
    return result;

}
