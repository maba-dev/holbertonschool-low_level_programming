#include "holberton.h"

/**
* prime_number - return 1 if i is prime
* @i: int
* @j: int
* Return: int
*/

int	prime_number(int i, int j)
{
	if (i < 2)
		return (0);
	if (i % j == 0)
		return (0);
	if (j < i)
		return (1);
	else
		return (prime_number(i, j + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 * Return: int
 */
int	is_prime_number(int n)
{
	return (prime_number(n, 2));
}
