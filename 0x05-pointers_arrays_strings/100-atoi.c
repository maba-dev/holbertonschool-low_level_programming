#include "holberton.h"

/**
* @s: string to convert
*  function _atoi  that convert a string to an integer
* Return int
*/

int	_atoi(char *s)
{
	int i;
	int n;
	unsigned int result;

	i = 0;
	result = 0;
	n = 1;
	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			n = n * (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i]  - '0';
		i++;
	}
	result = n * result;
	return (result);
}
