#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* more headers goes there
* betty style doc for function main goes there
* Return: Return description
*/

int	main(void)
/* main - main description */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is Zero\n", n);
	return (0);
}
