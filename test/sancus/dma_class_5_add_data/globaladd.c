#include "globaladd.h"

int v;
int u;

int globaladd_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;

  if (a < b)
  {
    v += 10;
    u += v;
    result = v;
  }
    return result;
}


