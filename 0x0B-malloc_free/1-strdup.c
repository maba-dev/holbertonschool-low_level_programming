#include "holberton.h"
#include <stdlib.h>
 /**
 * _strdup - a function that returns a pointer to a newly allocated
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
