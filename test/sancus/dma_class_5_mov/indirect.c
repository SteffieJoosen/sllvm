#include "indirect.h"

int v;
int u;
  
int indirect_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;
  int * pv = &v;
  int * pu = &u;

  if (a < b)
  {
    result = 5;
    v = 24;
  }
    u = 23;
    return result;

}
