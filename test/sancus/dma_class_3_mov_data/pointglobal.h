#ifndef POINTGLOBAL_H
#define POINTGLOBAL_H

extern struct SancusModule pointglobal;

__attribute__((eentry)) int pointglobal_enter(int x[], int y[], __attribute((secret)) int a, int b);

#endif
