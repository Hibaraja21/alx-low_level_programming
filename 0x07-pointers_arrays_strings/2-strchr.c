#include "main.h"


/**
 * *_strchr-fills memory with
 * a constant byte
 * @s: ptr to put te cst
 * @c: cst
 * Return: ptr s
*/

char *_strchr(char *s, char c)
{
	int itritr;

	for (itritr = 0; s[itritr] >= '\0' ; itritr++)
	{
		if (s[itritr] == c)
		{
			return (s + itritr);
		}
	}
	return ('\0');
}
