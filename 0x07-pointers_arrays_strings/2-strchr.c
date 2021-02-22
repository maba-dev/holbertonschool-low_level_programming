#include "holberton.h"
#include <stddef.h>

/**
* _strchr - function that locates a character in a string.
* @s: string to receive and return
* @c: character to receive
* Return: char
*/

char	*_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
