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
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}
}
