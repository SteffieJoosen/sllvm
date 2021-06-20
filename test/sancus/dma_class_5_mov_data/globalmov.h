#ifndef globalmov_H
#define globalmov_H

extern struct SancusModule globalmov;

__attribute__((eentry)) int globalmov_enter(__attribute((secret)) int a, int b);

#endif
