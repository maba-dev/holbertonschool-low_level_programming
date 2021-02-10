#include "holberton.h"

/**
 *print_last_digit - function to determine last digit
 *@i: integer
 *
 *Return: the value of the last digit
 */
int	print_last_digit(int i)
{
	int result;

	result = i % 10;
	if (result < 0)
		result = -result;
	_putchar(result + '0');
	return (result);
}
