#include "holberton.h"
#include <stdio.h>

/**
* print_array - print array of integers
* @a: int
* @n: int
*/

void	print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
