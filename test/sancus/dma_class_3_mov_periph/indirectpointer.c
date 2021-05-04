#include "indirect.h"

const int digits[] = {0,1,2,3,4,5,6,7,8,9}; 
const int digits1[] = {1,2,3,4,5,6,7,8,9,10};

const char indirect_enter(__attribute__((secret)) int a, int b)
{
  char result = 0x1;
  const char * p = (const char *)0xFFDC;

  int i = 0;
  if (a < b)
  {
    result = *p;
  }
  return result;


}
