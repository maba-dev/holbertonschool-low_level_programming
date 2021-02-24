#include "holberton.h"

/**
* _strlen_recursion - fonction tha return the length of string
* @s : string
* Return: int
*/
int	_strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
