#include "holberton.h"

/**
*_sqrt - function that returns sqrt of number
* @i: int
* @j: int
* Return: integer or - 1 if no _sqrt
*/

int	_sqrt(int j, int i)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (0);
	if (i > j / i)
		return (-1);
	if (j == i * i)
		return (i);
	else
		return (_sqrt(j, i + 1));
}

/**
* _sqrt_recursion - function that returns the natural
* square root of a number
* @n: input number
* Return: int
*/

int	_sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
