#include "main.h"

/**
 * *_memcpy - copy memory
 * area
 * @dest : memory area
 * @src : source
 * @n : length of src to be
 * copied
 * Return: pointer dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itritr;

	for (itritr = 0; itritr < n; itritr++)
	{
		dest[itritr] = src[itritr];
	}
	return (dest);
}
