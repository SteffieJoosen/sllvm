#ifndef SPcheck1_H
#define SPcheck1_H

extern struct SancusModule SPcheck1;

struct test {
  int x;
  int s;
};

__attribute__((eentry)) int SPcheck1_enter(__attribute__((secret)) int a, int b, struct test *x, int y);

#endif
