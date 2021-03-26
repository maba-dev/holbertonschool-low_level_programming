#include "holberton.h"
#include <stdio.h>

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: unsigned long int;
* @m: unsigned long int;
* Return: thenumber of buts needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int num;

	num = n ^ m;
	i = 0;
	while (num > 0)
	{
		if ((num & 1) != 0)
			i++;
		num = num >> 1;
	}
	return (i);
}
