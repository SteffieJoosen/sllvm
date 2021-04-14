#include "indirect.h"
#include <stdio.h>
#include <string.h>


int digits[10] = {1,2,3,4,5,6,7,8,9,10};
int digits1[10] = {1,2,3,4,5,6,7,8,9,10};
int ind;

void xyz1 () { printf("Hello World1!"); } 
void xyz2 () { printf("Hello World2!"); }
void xyz3 () { printf("Hello World3!"); }
void xyz4 () { printf("Hello World4!"); }
void xyz5 () { printf("Hello World5!"); }
void xyz6 () { printf("Hello World6!"); }
void xyz7 () { printf("Hello World7!"); }
void xyz8 () { printf("Hello World8!"); }
void xyz9 () { printf("Hello World9!"); }
void xyz10 () { printf("Hello World10!"); }
void xyz11 () { printf("Hello World11!"); }
void xyz12 () { printf("Hello World12!"); }
void xyz13 () { printf("Hello World13!"); }
void xyz14 () { printf("Hello World14!"); }
void xyz15 () { printf("Hello World15!"); }
void xyz16 () { printf("Hello World16!"); }


int indirect_enter(int x[], int y[], __attribute__((secret)) int a, int b)
{
  /*void * p1 = (void *) & xyz1;
void * p2 = (void *) & xyz2;
void * p3 = (void *) & xyz3;
void * p4 = (void *) & xyz4;
void * p5 = (void *) & xyz5;
void * p6 = (void *) & xyz6;
void * p7 = (void *) & xyz7;
void * p8 = (void *) & xyz8;
void * p9 = (void *) & xyz9;
void * p10 = (void *) & xyz10;
void * p11 = (void *) & xyz11;
void * p12 = (void *) & xyz12;
void * p13 = (void *) & xyz13;
void * p14 = (void *) & xyz14;
void * p15 = (void *) & xyz15;
void * p16 = (void *) & xyz16;*/
  void * output;

  /*switch (a) 
  {
    case 0x0001:
      output = p1;
      break;

    case 0x0002:
      output = p2;
      break;

    case 0x0003:
      output = p3;
      break;

    case 0x0004:
      output = p4;
      break;

    case 0x0005:
      output = p5;
      break;

    case 0x0006:
      output = p6;
      break;

    case 0x0007:
      output = p7;
      break;

    case 0x0008:
      output = p8;
      break;

    case 0x0009:
      output = p9;
      break;

    case 0x000a:
      output = p10;
      break;

    case 0x000b:
      output = p11;
      break;

    case 0x000c:
      output = p12;
      break;

    case 0x000d:
      output = p13;
      break;

    case 0x000e:
      output = p14;
      break;

    case 0x000f:
      output = p15;
      break;

    case 0x0010:
      output = p16;
      break;
      }  end switch*/
  if (a < b) {
     const int * p = (const int *)0x00FFE;
    //*p = x[a];
    return x[*++p];
  } else {
    /*int * q = (int *)0XFFBA;
    *q = y[b];*/
    return y[b];
  }

  //return (output);
}



