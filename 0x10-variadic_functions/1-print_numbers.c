#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - a function that prints numbers, followed by a new line
*@separator: char
*@n: unsigned int
*Return: int
*/

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nb;

	i = 0;
	va_start(nb, n);
	while (i < n)
	{
		printf("%d", va_arg(nb, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nb);
}
