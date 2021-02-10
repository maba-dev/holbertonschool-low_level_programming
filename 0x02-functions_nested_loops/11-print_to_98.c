#include "holberton.h"

/**
* print_to_98  - print numbers n to 98
* @n: integer
*
* Return: print to stdout numbers n to 98 followed by a newline.
*/
void	print_to_98(int n)
	{
		if (n > 98)
		{
			while (n >= 98)
			{
				if (n >= 100)
				{
					int j ;
					j = n / 10;
					if (j <= 10)
						j = 0;
					_putchar(n / 100 + '0');
					_putchar(j / 10 + '0');
					_putchar(n % 10 + '0');
				}
				if (n < 100)
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n--;
			}
			_putchar('\n');
		}
		else
		{
			while (n <= 98)
			{
				if (n < 0)
					_putchar('-');
				if (n >= -9 && n < 0)
					_putchar(-n + '0');
				if (n >= 0 && n <= 9)
					_putchar(n + '0');
				if (n <= -10)
				{
					_putchar(-n / 10 + '0');
					_putchar(-n % 10 + '0');
				}
				if (n >= 10)
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				if (n != 98)
				{
				_putchar(',');
				_putchar(' ');
				}
				n++;
			}
			_putchar('\n');
		}
	}
