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

int _printf(char *format, ...)
{
	va_list arglist;
	int count = 0, i;
	char *specifier = NULL;
	char ch = format[count];

	va_start(arglist, format);
	while (ch != '\0')
	{
		if (ch != '%')
		{
			write(1, &ch, 1);
		}
		else
		{
			specifier = getSpecifier(&format[count]);
			/*Handle the special character printing here*/
			printArg(specifier, &arglist);
			free(specifier);
		}

		count++;
		ch = format[count];
	}

	write(1, "\n", 1);
	return (0);
}

/**
 * getSpecifier - identifies the specifier to be formatted,
 * given a pointer to the character %
 * @format: where to start verifying the specifier
 *
 * Return - the specifier
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

void printArg(char *specifier, va_list *arglist)
{
	if (!strcmp(specifier, "%c"))
	{
		/* Handle char printing here*/
		/* puts("\nHandle printing of char");*/
	}
}
