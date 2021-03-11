#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - a function that prints strings, followed by a new line
*@separator: char
*@n: unsigned int
*Return: int
*/

void    print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	i = 0;
	va_start(str, n);
	while (i < n)
	{
		printf("%s", va_arg(str, char *));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}
