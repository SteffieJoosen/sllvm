#ifndef globaladd_H
#define globaladd_H

extern struct SancusModule globaladd;

__attribute__((eentry)) int globaladd_enter(__attribute((secret)) int a, int b);

#endif
