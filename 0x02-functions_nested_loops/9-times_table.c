#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
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
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(result + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 9)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
