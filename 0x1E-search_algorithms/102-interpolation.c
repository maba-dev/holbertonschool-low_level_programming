#include "search_algos.h"
/**
*interpolation_search - searches for a value in an array of integers
*@array: array of elemnt
*@size: number of element in array
*@value: value searched
*Return: index of value
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t bottom = 0;

	if (size < 1)
		return (-1);
	while (bottom < size && value <= array[size - 1])
	{
		mid = bottom + (((double)(size - 1 - bottom) /
		 (array[size - 1] - array[bottom])) * (value - array[bottom]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			size = mid - 1;
		else
			bottom = mid + 1;
	}
	mid = bottom + (((double)(size - 1 - bottom) /
	 (array[size - 1] - array[bottom])) * (value - array[bottom]));
	printf("Value checked array[%lu] is out of range\n", mid);
	return (-1);
}
