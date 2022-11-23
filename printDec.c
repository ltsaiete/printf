#include "main.h"
/**
  * printDec - it prints a decimal number
  * @list: the list of arguments
  * Return: the size of the converted int to string
  */
int printDec(va_list list)
{
	char *buffer;
	int i;

	buffer = itoa(va_arg(list, int), 10);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);
	return (i);
}
