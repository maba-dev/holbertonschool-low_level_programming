#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @str: Pointer to Char
 * Return: char.
 */

char	*string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
