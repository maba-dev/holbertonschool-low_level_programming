#include "holberton.h"
#include <stdlib.h>

/**
*array_range - a function that creates an array of integers
*@min: int
*@max: int
*Return: array
*/
int	*array_range(int min, int max)
{
	int i;
	int *ptr;

	i = 0;
	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	while (max >= min)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
