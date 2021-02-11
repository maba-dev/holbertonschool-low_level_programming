#include "holberton.h"

/**
*print_diagonal- print a diagonal line on terminal
*@n: integer
*/

void	print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	if  (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			j = 0;
			while (j != i)
			{
				_putchar(' ');
				j++;
			}
			_putchar ('\\');
			_putchar('\n');
			n--;
			i++;
		}
	}
}
