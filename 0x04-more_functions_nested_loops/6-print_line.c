#include "holberton.h"

/**
*print_line - d
*@n: integer
*
*Return - print line n spaces long to stdout; print newline if n<=0
*/

void	print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n >= 1)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
