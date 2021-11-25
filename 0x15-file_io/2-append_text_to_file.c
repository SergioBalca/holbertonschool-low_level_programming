#include "main.h"

/**
 * append_text_to_file-  appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to be appended to file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_write;
	int count;
	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
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
	if (text_content != NULL)
	{
		num_write = write(fd, buf, (size_t)count);
		if (num_write == -1)
		{
			free(buf);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * length- returns the length of a string
 * @str: the string
 * Return: the length of string str
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
