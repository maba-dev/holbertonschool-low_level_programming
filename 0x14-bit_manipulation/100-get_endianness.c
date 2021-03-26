#include "holberton.h"
#include <stdio.h>

/**
*get_endianness - a function that checks the endianness.
*
*Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	char i;
	char *p;

	i = '1';
	p = &i;
	if (*p == 0)
		return (0);
	else
		return (1);
}
