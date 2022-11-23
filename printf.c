#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * _printf - prints a formatted string
 * @format: The format of the string to print
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count = 0, length = 0;

	va_start(arglist, format);
	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			_putchar(format[count]);
			length++;
		}
		else
		{
			count++;
			if (format[count])
			{
				length += printSpecific(format[count], arglist);
			}
		}
		count++;
	}

	va_end(arglist);

	/**
	  * if (format[count - 1] != '\n')
	  *	_putchar('\n');
	 */

	return (length);
}

/**
 * printSpecific - function that prints acording to the format
 * @format: the format if it's 'c' or 's'
 * @list: the va_list containing the arguments
 * Return: nothing
 */
int printSpecific(char format, va_list list)
{
	int len = 0;
	char *str;

	switch (format)
	{
	case 'c':
		_putchar(va_arg(list, int));
		len = 1;
		break;
	case 's':
		str = va_arg(list, char *);
		len = strlen(str);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		break;
	default:
		break;
	}
	return (len);
}
