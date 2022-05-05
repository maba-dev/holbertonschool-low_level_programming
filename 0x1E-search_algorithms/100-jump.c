#include "search_algos.h"
/**
*jump_search - searches for a value in an array of integers
*@array: array of elemnt
*@size: number of element in array
*@value: value searched
*Return: index of value
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	int i = 0;
	size_t x;

	if (size < 1 && value > array[size - 1])
		return (-1);
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		i = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%d] and [%lu]\n", i, step);
	for (x = i; x <= step && x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
