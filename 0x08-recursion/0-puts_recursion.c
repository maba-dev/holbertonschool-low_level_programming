#include "holberton.h"

/**
*_puts_recursion - prints a string
*
*@s : string
*/

void	_puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
