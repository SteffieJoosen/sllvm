#ifndef SPcheck2_H
#define SPcheck2_H

extern struct SancusModule SPcheck2;

struct test {
  int x;
  int s;
};

__attribute__((eentry)) int SPcheck2_enter(__attribute__((secret)) int a, int b, struct test *x, int y);

#endif
