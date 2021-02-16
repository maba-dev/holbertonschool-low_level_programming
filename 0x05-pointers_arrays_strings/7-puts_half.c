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
	i = i + 1;
	n = i / 2;
	while (n < i - 1)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
