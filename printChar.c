#include "main.h"
/**
  * printChar - fun that prints a single char
  * @list: the va_list that containes the char
  * Return: nothing
  */
void printChar(va_list list)
{
	char aux = va_arg(list, int);

	_putchar(aux);
}
