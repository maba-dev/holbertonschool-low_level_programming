#include "holberton.h"

/**
 * _strncat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
 */

char	*_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
