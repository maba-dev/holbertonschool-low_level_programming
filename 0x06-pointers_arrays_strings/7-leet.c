#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: Pointer to Char
 * Return: char.
 */

char	*leet(char *str)
{
	int i;
	int j;
	char *x;
	char *y;

	i = 0;
	x = "aAeEoOtTlL";
	y = "4433007711";
	while (str[i] != '\0')
	{
		j = 0;
		while (x[j] != '\0')
		{
			if (str[i] == x[j])
				str[i] = y[j];
			j++;
		}
		i++;
	}
	return (str);
}
