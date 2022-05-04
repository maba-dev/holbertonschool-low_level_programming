#include "search_algos.h"
/**
* binary_search - searches for a value in an array of integers
*@array: array of elemnt
*@size: number of element in array
*@value: value searched
*Return: index of value
*/

int  binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t mid;
	size_t j;

	if (size < 1)
		return (-1);
	while (i < size)
	{
		printf("Searching in array: ");
		for (j = i; j < size; j++)
		{
			if (j < size - 1)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		mid =  (i + size - 1) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			size = mid;
		else
			i = mid + 1;
	}
	return (-1);
}
