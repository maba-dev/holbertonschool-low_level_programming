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

/**
* palindrome - function that return 1 if a palindrome 0 else
* @s: string
* @j: int
* @i: int
* Return: 1 if string is a palindrome and 0 if not
*/
int	palindrome(char *s, int j, int i)
{
	j = 0;
	i  = _strlen_recursion(s);
	if (s[i - 1] != s[j])
		return (0);
	if (s[j] > i)
		return (1);
	else
		return (palindrome(s, j + 1, i - 1));
}
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: string
* Return: int
*/
int	is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i == 0)
		return (0);
	return (palindrome(s, 0, i));
}
