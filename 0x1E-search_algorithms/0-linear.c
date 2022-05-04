#include "search_algos.h"
/**
*linear_search - searches for a value in an array of integers
*@array: array of elemnt
*@size: number of element in array
*@value: value searched
*Return: index of value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
