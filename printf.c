#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - prints a formatted string
 * @format: The format of the string to print
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count = 0;

	va_start(arglist, format);
	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			_putchar(format[count]);
		}
		else
		{
			count++;
			printSpecific(format[count], arglist);
		}
		count++;
	}
	va_end(arglist);
	write(1, "\n", 1);
	return (0);
}

/**
  * printSpecific - function that prints acording to the format
  * @format: the format if it's 'c' or 's'
  * @list: the va_list containing the arguments
  * Return: nothing
  */
void printSpecific(char format, va_list list)
{
	switch (format)
	{
		case 'c':
			_putchar(va_arg(list, int));
			break;
		case 's':
			puts(va_arg(list, char *));
			break;
	}
}
