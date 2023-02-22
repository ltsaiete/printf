#include "main.h"
/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 *
 * Return: char
 * https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	int count = 0;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
		if (base == 8)
			n--;
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = array[n % base];
		n /= base;
		count++;
	} while (n != 0);

	if (sign)
	{
		if (base == 10)
		{
			*--ptr = sign;
		}
		else if (base == 2)
		{
			while (count < 32)
			{
				*--ptr = '1';
				count++;
			}
		}
		else if (base == 8)
		{
			while (count > 0)
			{
				ptr[count - 1] = (7 - ((int)ptr[count - 1] - 48)) + '0';

				count--;
			}
		}
	}
	return (ptr);
}
