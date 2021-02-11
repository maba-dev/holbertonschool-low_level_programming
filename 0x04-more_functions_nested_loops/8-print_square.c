#include "holberton.h"

/**
*print_square - print squares of a specified size
*@size: integer
*/

void	print_square(int size)
{
	int i;
	int j;

	j = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size > j)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
}
