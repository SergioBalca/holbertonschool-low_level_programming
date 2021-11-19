#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>

/* Prototypes */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);


#endif /* MAIN_H */