#include <unistd.h>
#include <stdio.h>

/**
* main - entry poin
* more headers goes there
* betty style doc for function main goes there
* Return: Return description
*/

int	main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			i++;
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
