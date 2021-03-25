#include <stdio.h>
#include "holberton.h"

/**
*binary_to_uint -  a function that converts a binary number to an uint
*@b: string
*Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int val;

	i = 0;
	val = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		val = val << 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
