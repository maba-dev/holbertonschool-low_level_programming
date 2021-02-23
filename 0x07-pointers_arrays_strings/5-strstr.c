#include "holberton.h"
#include <stddef.h>

/**
* _strstr -  function that locates a substring.
* @haystack: initial string
* @needle: substring
* Return: char
*/

char	*_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
