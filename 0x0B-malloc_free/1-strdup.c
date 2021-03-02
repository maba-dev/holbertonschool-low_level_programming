#include "holberton.h"
#include <stdlib.h>

/**
*_strdup - contains copy of a string as a parameter
* @str: char
* Return: char
*/

char	*_strdup(char *str)
{
	char *s;
	int i;
	int size;

	i = 0;
	size = 0;
	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	size = size + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[size] = '\0';
	return (s);
}
