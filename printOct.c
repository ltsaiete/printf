#include "main.h"

/**
 * printOct - it prints the octal representation of a number
 * @list: the list of arguments
 *
 * Return: the size of the converted int to string
 */
int printOct(va_list list)
{
	char *buffer;
	int i;

	buffer = itoa(va_arg(list, int), 8);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);
	return (i);
}
