#ifndef globalmov2_H
#define globalmov2_H

extern struct SancusModule globalmov2;

__attribute__((eentry)) int globalmov2_enter(int x[], int y[], __attribute((secret)) int a, int b);

#endif
