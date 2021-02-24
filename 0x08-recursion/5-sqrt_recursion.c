#include "holberton.h"

/**
*_sqrt_recursion - returns sqrt of number
*@n : int
*return: -1 if no sqrt
*@i : int
* @j: int
* _sqrt - fonction square
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

int 	_sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
