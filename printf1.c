#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - prints something formated
 * @format: the format to be printed
 * @return: the number of characters printed
 */
int _printf(const char *format, ...)
{
  va_list list;
  int i = 0, j = 0, size;
  char ch, *c;
  if (format == NULL)
    return (0);

  size = strlen(format);
  va_start(list, format);
  while (format[i] != '\0')
  {
	  if (format[i] == '%' )
	  {
		  i++;
			  switch(format[i])
			  {
				  case 's':
					  puts(va_arg(list, char *));
					  break;
				  case 'c':
					  _putchar(va_arg(list, int));
					  break;
			  }
	  }
	  else
		_putchar(format[i]);
	  i++;
  }
  _putchar('\n');
  va_end(list);
  return (0);
}
