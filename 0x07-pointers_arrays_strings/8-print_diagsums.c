#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: values of the array
* @size: size of array
*/

void	print_diagsums(int *a, int size)
{
	int i;
	int val_diag;
	int result;

	result = 0;
	i = 0;
	while (i < (size * size))
	{
		val_diag = a[i];
		result = result + val_diag;
		i = i + size + 1;
	}
		printf("%d, ", result);
		result = 0;
		i = size - 1;
	while (i < (size * size) - 1)
	{
		val_diag = a[i];
		result = result + val_diag;
		i = i + size - 1;
	}
	printf("%d\n", result);
}
