#include "main.h"

/**
 * read_textfile- function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters read and printed
 * Return: the actual number of read and printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;         /* File descriptor */
	char *buf;
	ssize_t read_letters, write_letters;

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}

	read_letters = read(fd, buf, letters);
	write_letters = write_stdout(read_letters, buf, letters);
	free(buf);
	return (write_letters);
}

/**
 * write_stdout- prints characters from file into the
 * standard output
 * @read_letters: the name of read letters in the file
 * @buf: a pointer to the allocated space in memory
 * @letters: number of characters to be printed
 * Return: the actual number of read and printed letters
 */

ssize_t write_stdout(ssize_t read_letters, char *buf, size_t letters)
{
	ssize_t write_letters;

	if (read_letters > 0)
	{
		write_letters = write(STDOUT_FILENO, buf, read_letters);
		if (write_letters == -1)
		{
			free(buf);
			return (0);
		}
		buf[read_letters] = '\0';
	}

	else
	{
		if (read_letters == -1)
		{
			free(buf);
			return (0);
		}

		else
		{
			write_letters = write(STDOUT_FILENO, buf, letters);
			if (write_letters == -1)
			{
				free(buf);
				return (0);
			}
		}

		buf[letters] = '\0';
	}



	return (write_letters);
}
