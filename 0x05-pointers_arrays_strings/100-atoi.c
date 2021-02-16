#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: int
 */

int	_atoi(char *s)
{
	int i;
	int n;
	unsigned int result;

	i = 0;
	result = 0;
	n = 1;
	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			n = n * (-1);
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		result = result * 10 + s[i]  - '0';
		i++;
	}
	result = n * result;
	return (result);
}
