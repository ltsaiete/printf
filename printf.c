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
	int count = 0, i;
	char *specifier = NULL;
	struct formats f = {'c', printChar};


	va_start(arglist, format);
	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			/*write(1, &ch, 1);*/
			_putchar(format[count]);
		}
		else if(format[count + 1] == f.t)
		{
			/*specifier = getSpecifier(&format[count]);
			Handle the special character printing here
			printArg(specifier, &arglist);
			free(specifier);*/
			count++;
			/*switch(format[count])
			{
				case 'c':
					_putchar(va_arg(arglist, int));
					break;
				case 's':
					puts(va_arg(arglist, char *));
					break;
			}*/
			f.f(arglist);
		}
		count++;
	}
	va_end(arglist);
	write(1, "\n", 1);
	return (0);
}

/**
 * getSpecifier - identifies the specifier to be formatted,
 * given a pointer to the character %
 * @format: where to start verifying the specifier
 *
 * Return: the specifier
 */
char *getSpecifier(char *format)
{
	char *specifier = NULL;
	int i;

	for (i = 0; format[i] != ' ' && format[i] != '\n'; i++)
	{
		specifier = (char *)realloc(specifier, sizeof(char) * (i + 1));
		specifier[i] = format[i];
	}
	return (specifier);
}

/**
  * printArg - function that prints argument
  * @specifier: the specifier to print
  * @arglist: the list to be printed
  * Return: nothing
  */
void printArg(char *specifier, va_list *arglist)
{
	char ch;
	if (!strcmp(specifier, "%c"))
	{
		/* Handle char printing here*/
		/* puts("\nHandle printing of char");*/
		write(1, &ch, -1);
	}
}
