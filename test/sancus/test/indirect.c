#include "indirect.h"

const int digits[] = {0,1,2,3,4,5,6,7,8,9}; 

int indirect_enter(__attribute__((secret)) int a, int b)
{ 
  
  int result = digits[3];
  if (a < b) {
    result = 13;
  }
    return result;
  
}

