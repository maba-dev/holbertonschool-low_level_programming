#include <stdio.h>

/**
* main - entry point
* @argc: count argument
* @argv: parameter argument
* Return: int
*/

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
