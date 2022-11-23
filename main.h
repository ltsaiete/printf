#ifndef _main_h
#define _main_h
#include <stdarg.h>
void printChar(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
char *getSpecifier(char *format);
void printArg(char *specifier, va_list *arglist);
int printSpecific(char format, va_list list);
/**
 * struct formats - structure that will hold the format
 * @t: the type of the formater
 * @f: the function to print the specific type
 */
struct formats
{
  char t;
  void (*f)(va_list);
};
#endif
