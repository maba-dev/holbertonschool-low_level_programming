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
	char *nul;

	i = 0;
	size2 = 0;
	size2 = 0;
	nul = "";
	if (s1 == NULL)
		s1 = nul;
	while (s1[size1] != '\0')
		size1++;
	if (s2 == NULL)
		s2 = nul;
	while (s2[size2] != '\0' && size2 < n)
		size2++;
	if (n >= size2)
		n = size2;
	str = malloc((size1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	size2 = 0;
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	while (size2 < n && s2[size2] != '\0')
	{
		str[i] = s2[size2];
		i++;
		size2++;
	}
	str[i] = '\0';
	return (str);
}
