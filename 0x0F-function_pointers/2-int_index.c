#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - a function that searches for an integer
*@array: int array
*@size: int
*@cmp: pointer of function
*Return: int_index of the first element for which the cmp
*/

int	int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
