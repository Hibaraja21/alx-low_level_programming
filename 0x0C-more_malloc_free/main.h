#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>

int _putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void print_int(unsigned long int n);
int _atoi(const char *s);
int main(int argc, char *argv[]);


#endif
