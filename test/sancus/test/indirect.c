#include "indirect.h"
#include <stdlib.h> 

int v;
int u;

struct P {
    int val;
};

//static struct P p = {2};
//static struct P q = {3};

int indirect_enter(__attribute__((secret)) int a, int b)
{
  //struct P *pointerp  = &p;
  //struct P *pointerq = &q;
  
  if (a < b)
  {
    v = 24;
    return 4;
  }
  u = 23;
  return u;
}
