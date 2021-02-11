#include "holberton.h"

/**
*_isupper - check for uppurcase character
*@c: integer
*Return: 1 if c uppercase, 0 othewise
*/

int	_isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
