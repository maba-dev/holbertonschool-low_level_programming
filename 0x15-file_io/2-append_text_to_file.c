#include "holberton.h"

/**
*append_text_to_file - a function that appends text at the end of a file
*@filename: pointer of string
*@text_content: pointer of string
*Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int fdwrite;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	if (text_content == NULL)
		text_content = "";
	fdwrite = write(fd, text_content, len);
	close(fd);
	if (fdwrite == -1)
		return (-1);
	return (1);
}
