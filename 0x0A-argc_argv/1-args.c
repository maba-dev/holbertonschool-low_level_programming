#include <stdio.h>

/**
* main - entry point
* @argc: count argument
* @argv: parameter argument
* Return: int
*/

int	main(int argc, char **argv __attribute__((unused)))
{
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", (argc - 1));
	return (0);
}
