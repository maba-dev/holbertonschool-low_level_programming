#include "holberton.h"
#include <stdlib.h>

/**
*str_concat - a function that concatenates two strings
*@s1: char
*@s2: char
*Return: char
*/

char	*str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i = 0;
	char *str;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size1 + size2)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
		i++;
	}
	str[size1 + size2] = '\0';
	return (str);
}
