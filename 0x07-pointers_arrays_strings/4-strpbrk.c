#include "holberton.h"
#include <stddef.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: string to receive
* @accept: bytes to accept
* Return: char
*/
char	*_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (s[i] == accept[j])
			break;
		i++;
	}
	if (s[i] == accept[j])
		return (&s[i]);
	else
		return (NULL);
}
