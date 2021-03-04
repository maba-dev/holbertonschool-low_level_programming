#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
*@s1: char
*@s2: char
*@n: unsigned int
*Return: string
*/

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1;
	unsigned int size2;
	unsigned int i;
	char *str;

	i = 0;
	size2 = 0;
	size1 = 0;
	while (s1[size1] != '\0' && s1)
		size1++;
	while (s2[size2] != '\0' && s2)
		size2++;
	if (n >= size2)
		n = size2;
	str = malloc((size1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size1 + n)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
