#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

int main(void)
{
	// char c, h, i, j, k;
	// char *s = "Exemplo";

	// c = 'H';
	// h = 'E';
	// i = 'L';
	// j = 'L';
	// k = 'O';

	// _printf("Let's print a simple sentence.\n");

	// // _printf("Printing a char: %c, %c, %c, %c, %c\n", c, h, i, j, k);
	// // _printf("Printing a string: %s\n", s);
	// // _printf("Print nothing %s\n");
	// return (0);

	int len, len2;

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
