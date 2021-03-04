#include "holberton.h"
#include <stdlib.h>

/**
*_calloc -  a function that allocates memory for an array
*@nmemb: unsigned int
*@size: unsigned int
*Return: array
*/

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;
	unsigned int j;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb * size) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		j = 0;
		while (j < size - 1)
		{
			ptr[i] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
