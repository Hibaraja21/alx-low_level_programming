#include "main.h"

/**
 * _strspn - get length of
 * a prefix substring
 * @s : string
 * @accept : byte
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itritr, jtrjtr;

	for (itritr = 0; s[itritr] != '\0' ; itritr++)
{
		for (jtrjtr = 0; accept[jtrjtr] != s[itritr]; jtrjtr++)
		{
			if (accept[jtrjtr] == '\0')
				return (itritr);
		}
	}
	return (itritr);
}
