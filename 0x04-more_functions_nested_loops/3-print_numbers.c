#include "holberton.h"
/**
*print_numbers - print numbers 0 to 9
*@void: noargument
*
*Return : alwalays 0
*/

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar('\n');
}
