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
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
