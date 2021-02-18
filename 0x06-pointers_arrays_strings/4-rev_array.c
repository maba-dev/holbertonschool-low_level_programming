#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void	reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n)
	{
		n--;
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		i++;
	}
}
