#include "main.h"

int main(void)
{
	char c, h, i, j, k;
	char *s = "Exemplo";

	c = 'H';
	h = 'E';
	i = 'L';
	j = 'L';
	k = 'O';


	_printf("Printing a char: %c, %c, %c, %c, %c", c, h, i, j, k);
	_printf("Printing a string: %s", s);
	_printf("Print nothing %s", c);
	return (0);
}
