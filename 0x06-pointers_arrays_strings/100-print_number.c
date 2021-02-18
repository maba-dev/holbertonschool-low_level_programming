#include "holberton.h"

/**
 * print_number a function that prints an integer
 * @n: integer
 */
void	print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		print_number(i / 10);
		i %= 10;
	}
	_putchar(i + '0');
}
