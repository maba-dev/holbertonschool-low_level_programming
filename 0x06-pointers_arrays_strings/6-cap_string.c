#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: Pointer to Char
 * Return: char.
 */

char	*cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}
		if ((str[i] == ',') || (str[i] == ';') || (str[i] == ' ') || (str[i] == '.')
			|| (str[i] == '?') || (str[i] == '"') || (str[i] == '(') ||
			 (str[i] == ')') || (str[i] == '\n') || (str[i] == '{') ||
			 (str[i] == '}')  || (str[i] == '!') || (str[i] == '\t'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
			i++;
	}
	return (str);
}
