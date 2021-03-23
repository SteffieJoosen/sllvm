#include "triangle.h"

int triangle_enter(__attribute__((secret)) int a, int b)
{
  int result = 3;

  if (a < b)
  {
    int *temp = &result -2;
    //asm("mov , r4\n\t"
    //    "cmp 2(r4), r5\n\t");
  }

  return result;
}
