#ifndef _main_h
#define _main_h
#include <stdarg.h>
int _printf(char *format, ...);
char *getSpecifier(char *format);
void printArg(char *specifier, va_list *arglist);
#endif
