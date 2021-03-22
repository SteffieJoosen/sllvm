#include "indirect.h"

static int v;

int indirect_enter(__attribute__((secret)) int a, int b, struct Person *p)
{
  int result = 3;

  if (a < b)
  {
    result = 7;
    p->age = 5;
  }

  /* Secret-dependent branch because result was assigned in a statement
   *  that is control-dependent on another secret-dependent branch.
   */
  if (result == b) 
  {
    v++;
    p->age = 22;
  }

  return result;
}
