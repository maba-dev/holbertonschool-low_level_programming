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

	if (i >= 0)
	{
		result = i % 10;
	}
	else
	{
		result = -i % 10;
	}
	_putchar(result + '0');
	return (result);
}
