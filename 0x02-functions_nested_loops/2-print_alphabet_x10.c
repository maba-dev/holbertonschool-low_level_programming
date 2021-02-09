#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void	print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
