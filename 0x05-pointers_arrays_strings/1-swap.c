#include "holberton.h"

/**
* swap_int - swaps values of two integers
* @a: pointer to integer
* @b: pointer to integer
*
*/

void	swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
