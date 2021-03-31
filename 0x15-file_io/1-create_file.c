#include "holberton.h"

/**
*create_file -  a function that creates a file
*@filename: pointer filename
*@text_content: string
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int fdwrite;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	if (text_content == NULL)
		text_content = "";
	fdwrite = write(fd, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
