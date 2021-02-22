#include "holberton.h"

/**
* _memcpy - function that copies memory area.
* @dest: dest positions
* @src: source position
* @n: size of bytes
* Return: char
*/

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
