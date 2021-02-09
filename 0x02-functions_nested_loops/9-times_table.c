#include "holberton.h"

/**
* times_table - create a table of multiplication facts
*
* Return: print to stdout the 9 times table, starting with 0.
*/
void times_table(void)

{
	int i;
	int j;
	int result;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			if (result <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
