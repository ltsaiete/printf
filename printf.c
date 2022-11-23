#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * _printf - prints a formatted string
 * @format: The format of the string to print
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count = 0, length = 0, size, specLen;

	if (format == NULL)
		return (-1);

	size = strlen(format);
	if (size <= 0)
		return (0);

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
			if (format[count] || size == 1)
			{
				specLen = printSpecific(format[count], arglist);
				if (specLen == -1)
					return (-1);
				length += specLen;
			}
			else
				return (length);
		}
		count++;
	}
	va_end(arglist);
	return (length);
}

/**
  * printChar - function that prints 1 char
  * @list: the list of arguments
  * Return: size of the char = 1
  */
int printChar(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
  * printString - function that prints a String
  * @list: the list of arguments
  * Return: the length of the string
  */
int printString(va_list list)
{
	int len;
	char *str, *nl = "(null)";

	str = va_arg(list, char *);
	if (str != NULL)
	{
		len = strlen(str);
		while (*str != '\0')
		{
			_putchar(*str), str++;
		}
	}
	else
	{
		len = strlen(nl);
		while (*nl != '\0')
			_putchar(*nl), nl++;
	}
	return (len);
}

/**
  * printPercentage - fun that prints %
  * Return: 1
  */
int printPercentage(void)
{
	_putchar('%');
	return (1);
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

	switch (format)
	{
	case 'c':
		len = printChar(list);
		break;
	case 's':
		len = printString(list);
		break;
	case '%':
		len = printPercentage();
		break;
	default:
		len = printDefault(format);
		break;
	}
	return (len);
}
