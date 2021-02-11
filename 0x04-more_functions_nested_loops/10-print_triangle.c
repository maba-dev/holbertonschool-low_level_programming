#include "holberton.h"

/**
*print_triangle - print a triangle
*@size: integer
*/

void	print_triangle(int size)
{
	int i;
	int j;

	j = 1;
	if (size <= 0)
	_putchar('\n');
	else
	{
		while (size >= j)
		{
			i = 1;
			while (i <= size)
			{
				if (i <= size - j)
					_putchar(' ');
				else
					_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
}
