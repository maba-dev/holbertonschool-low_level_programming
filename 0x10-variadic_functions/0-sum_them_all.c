#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all - a function that returns the sum of all its parameters
*@n: unsigned int
*Return: int
*/

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nb;
	int result;

	i = 0;
	if (n == 0)
		return (0);
	va_start(nb, n);
	while (i < n)
	{
		result += va_arg(nb, int);
		i++;
	}
	va_end(nb);
	return (result);
}
