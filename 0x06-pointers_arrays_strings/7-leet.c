#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: Pointer to Char
 * Return: char.
 */

char	*leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 4 + '0';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = 3 + '0';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = 7 + '0';
		if (str[i] == 't' || str[i] == 'L')
			str[i] = 1 + '0';
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
