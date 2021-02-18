#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: pointer to char
 * Return: char
 */

char	*rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i]  >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'A' && str[i]  <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] = str[i] + 13;
			else
				str[i] = str[i] - 13;
			i++;
		}
		i++;
	}
	return (str);
}
