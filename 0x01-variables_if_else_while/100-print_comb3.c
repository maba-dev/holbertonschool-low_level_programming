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
	int j;

	i = 0;
	while (i <= 9)
	{
		j = j + 1;
		while (j <= 9)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (j != 9 || i != 8)
			{
				putchar(',');
				putchar(32);
			}
			j++;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}

