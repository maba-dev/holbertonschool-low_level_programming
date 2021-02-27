#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: count argument
* @argv: parameter argument
* Return: int
*/

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 3)
		printf("%d\n", (atoi(argv[i]) * atoi(argv[i + 1])));
	else
	{
		printf("Error\n");
		return (1);
	}
}
