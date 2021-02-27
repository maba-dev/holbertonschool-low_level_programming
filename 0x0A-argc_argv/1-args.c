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

	i = argc - 1;
	if (argc == 1)
		argv[i] = argv[0];
	printf("%d\n", i);
}
