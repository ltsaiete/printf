#include "main.h"

/**
 * printHex - it prints the hexadecimal representation of a number
 * @list: the list of arguments
 *
 * Return: the size of the converted int to string
 */
int printHex(va_list list)
{
	char *buffer;
	int i;

	buffer = itoa(va_arg(list, int), 16);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);
	return (i);
}
