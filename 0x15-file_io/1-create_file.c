#include "main.h"

/**
 * create_file- creates a file, with
 * rw------- permissions
 * @filename: is the name of the file being created
 * @text_content: is the content of the file being created
 * Return: on succes, returns 1
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;
	int count;
	ssize_t num_write;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1 || filename == NULL || text_content == NULL)
	{
		return (-1);

	}

	count = length(text_content);
	buf = malloc(sizeof(char) * count + 1);
	if (!buf)
	{
		return (-1);
	}
	buf = text_content;
	num_write = write(fd, buf, (size_t)count);
	if (num_write == -1)
	{
		free(buf);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * length- returns the length of a string
 * @str: the string
 * Return: the length of the string str
 */

int length(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
