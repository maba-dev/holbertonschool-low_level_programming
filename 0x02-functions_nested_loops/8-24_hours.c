#include "holberton.h"

/**
* jack_bauer - Write a function that prints every minute of the day
*
* Return: print every minute from 00:00 to 23:49
*/
void jack_bauer(void)

{
	int i;
	int j;

	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
