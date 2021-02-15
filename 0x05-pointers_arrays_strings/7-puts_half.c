#include "holberton.h"

/**
* puts_half - prints half a string
* @str: character
*/

void    puts_half(char *str)
{
	int i;
	int n;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	n = i / 2;
	while (n < i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[n]);
			n++;
		}
		else
		{
			n++;
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
