#include "holberton.h"

/**
* _strcat- function that concatenates two strings.
* @dest: pointer to destination char
* @src: pointer to source char
* Return: char
*/

char	*_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

