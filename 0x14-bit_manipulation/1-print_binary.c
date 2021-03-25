#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_binary - a function that prints the binary representation of a number
*@n : number
*Return: void
*/
void print_binary(unsigned long int n)
{
	int i;
	int index;

	i = (sizeof(n) * 8) - 1;
	index = 0;
	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			index = 1;
			_putchar('1');
		}
		else if (index == 1)
			_putchar('0');
		i--;
	}
}
