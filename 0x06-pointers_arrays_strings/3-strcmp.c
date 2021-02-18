#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: int
 */

int	_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
