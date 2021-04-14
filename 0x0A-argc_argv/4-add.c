#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _isdigit - the digit function
* @c: char c
* Return: 0 or 1
*/
int     _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
* _isdigit_str - the digit function string
* @s: char s
* Return: 0 or 1
*/
int	_isdigit_str(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/**
*main - entry point
* @argc: count argument
* @argv: parameter argument
* Return: int
*/
int main(int argc, char **argv)
{
	int i;
	int result;

	i = 1;
	result = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > i)
	{
		if (_isdigit_str(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = i - 1;
	while (i > 0)
	{
		result += atoi(argv[i]);
		i--;
	}
	printf("%d\n", result);
}
