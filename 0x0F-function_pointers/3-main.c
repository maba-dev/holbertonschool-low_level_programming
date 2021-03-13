#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function main
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: none
 */

int main(int argc, char *argv[])
{

	int a, b;
	int (*res)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	res = get_op_func(argv[2]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if (res == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", res(a, b));

return (0);

}
