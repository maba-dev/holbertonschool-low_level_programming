#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: pointer to char
 * Return: char
 */

char	*rot13(char *str)
{
	int i;
	int j;
	char *x;
	char *root_13;

	i = 0;
	x = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	root_13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKZZkLlMm";
	while (str[i] != '\0')
	{
		j = 0;
		while (x[j] != '\0')
		{
			if (str[i] == x[j])
			{
				str[i] = root_13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
