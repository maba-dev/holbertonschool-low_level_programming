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
	int i;

	i = 0;
	while (i < 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(32);
		i++;
	}
	putchar(i + '0');
	putchar('\n');
	return (0);
}

