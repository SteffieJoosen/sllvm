#ifndef LOCALVAR_H
#define LOCALVAR_H

extern struct SancusModule localvar;

__attribute__((eentry)) int localvar_enter(__attribute((secret)) int a, int b);

#endif
