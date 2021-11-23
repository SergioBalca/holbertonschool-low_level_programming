#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Prototypes */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
ssize_t write_stdout(ssize_t read_letters, char *buf, size_t letters);

#endif /* MAIN_H */
