#include "indirect.h"



int indirect_enter(__attribute__((secret)) int a, int b)
{
  int v;
  int u;
  int* pv = &v;
  int* pu = &u;

  if (a < b)
  {
    *pv = 24;
    return *pv;
  }
    *pu = 23;
    return *pu;
}
