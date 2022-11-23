#include "../main.h"

int main(void)
{
	char c, h, i, j, k;
	char *s = "Exemplo";

	c = 'H';
	h = 'E';
	i = 'L';
	j = 'L';
	k = 'O';


	_printf("Printing a char: %c, %c, %c, %c, %c\n", c, h, i, j, k);
	_printf("Printing a string: %s\n", s);
	_printf("Print nothing\n");
	_printf("Print nothing %\n");
	return (0);
}
