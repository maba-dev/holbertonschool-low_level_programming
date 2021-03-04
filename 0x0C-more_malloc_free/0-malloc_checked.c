#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - a function that allocates memory using malloc
*@b : unsigned int
*Return: a pointer to the allocated memory
*/

void	*malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
