#include "holberton.h"

/**
* rev_string - reverse a string
* @s: char
*/

void	rev_string(char *s)
{
	int i;
	int j;
	char x;
	char y;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > j)
	{
		--i;
		x = s[j];
		y = s[i];
		s[j] = y;
		s[i] = x;
		j++;
	}
}
