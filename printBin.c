#include "main.h"

/**
 * printBin - it prints the binary representation of a number
 * @list: the list of arguments
 *
 * Return: the size of the converted int to string
 */
int printBin(va_list list)
{
	char *buffer;
	int i;

	buffer = itoa(va_arg(list, int), 2);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);
	return (i);
}
