#include "holberton.h"

/**
*_isdigit - checks for a digit 0 through 9
*@c: integer
*
*Return: 1 if c is digit, 0 otherwise
*/
int     _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}