#include "main.h"

/**
 * *_memset - fills memory with
 * a constat byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int itritr;

	for (itritr = 0; n > 0; itritr++, n--)
	{
		s[itritr] = b;
	}
	return (s);
}
