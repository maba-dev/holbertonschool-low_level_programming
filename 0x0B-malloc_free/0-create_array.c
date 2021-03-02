#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[size] = '\0';
	return (str);
}
