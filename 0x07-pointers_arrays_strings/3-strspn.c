#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: initial segment
* @accept: bytes to check
* Return: unsigned int
*/

unsigned	int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned  int n;

	i = 0;
	n = 0;
	if (accept[i] == 0)
		return (0);
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i + j] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
