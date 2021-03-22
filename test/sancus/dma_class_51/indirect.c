#include "indirect.h"

int v;
int u;

int indirect_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;

  if (a < b)
  {
    result = 5;
    v += 24;
    return a;
  }
  else {
    u += 23;
    return u;
  }
}
