#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit(98) if failed
 *
 * @b: size of the memory block
 *
 * Return: ptr to the array anitialized or null
*/

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
