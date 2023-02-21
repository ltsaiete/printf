#ifndef _main_h
#define _main_h
#include <stdarg.h>
#include <stdlib.h>
int printPercentage(void);
int printString(va_list);
int printChar(va_list);
int printDefault(char);
int printDec(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int printSpecific(char format, va_list list);
char *itoa(long int num, int base);
int printBin(va_list list);
int printOct(va_list list);
int printHex(va_list list);
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
