#include "indirect.h"

int v;
int u;

int indirect_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;

  if (a < b)
  {
    v += 24;
    result += v;
  }
    result += u;
    return result;
}


