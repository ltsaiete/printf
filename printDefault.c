#include "main.h"
/**
  * printDefault - function that prints the default case
  * @format: the char to verify
  * Return: the length to be printed
  */
int printDefault(char format)
{
	if (format == '\0')
		return (-1);
	_putchar('%');
	_putchar(format);
	return (2);
}
