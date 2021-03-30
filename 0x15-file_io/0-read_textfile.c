#include "holberton.h"

/**
*read_textfile - a function that reads a text file and prints
*@filename: pointer of file
*@letters: size letters
*Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int fdread;
	int fdwrite;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	fdread = read(fd, buf, letters);
	if (fdread == -1)
		return (0);
	fdwrite = write(STDOUT_FILENO,  buf, fdread);
	if (fdwrite == -1)
		return (0);
	close(fd);
	return (fdwrite);
}
