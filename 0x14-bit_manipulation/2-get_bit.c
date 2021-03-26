#include "holberton.h"
#include <stdio.h>

/**
*get_bit - a function that returns the value of a bit at a given index
*@n: unsigned long int
*@index: index of bit
*Return: index of bit or -1;
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit_index;

	i = sizeof(n) * 8 - 1;
	if (index > i)
	{
		return (-1);
	}
	bit_index = (n >> index) & 1;
	return (bit_index);
}
