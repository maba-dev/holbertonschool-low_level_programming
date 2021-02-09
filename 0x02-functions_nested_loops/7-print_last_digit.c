#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int	print_last_digit(int i)
{
	if (i >= 0)
		i = i % 10;
	else
		i = -i % 10;
	_putchar(i + '0');
	return (i);
}
