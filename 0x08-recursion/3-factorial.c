#include "holberton.h"

/**
* factorial  - return the factorial of a  number
*
* @n : intput number n
* Return: int
*/

int	factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
