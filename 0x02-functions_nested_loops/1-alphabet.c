#include "holberton.h"

/**
* main - check the code for Holberton School students.
* print_alphabet(void)
* Return: Always 0.
*/

void	print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
