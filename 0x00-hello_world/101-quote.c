#include <unistd.h>

/**
 * main - Main function
 * Return: After printing, return 0
*/

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	main(main)

{
	char c[] = "\"and that piece of art is useful\" - Dora Korpar, 2014-10-19"
	ft_putchar(c)
	return (1);
}

