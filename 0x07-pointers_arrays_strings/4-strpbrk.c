#include "main.h"


/**
 * _strpbrk - search a string
 * @accept: str where searched bytes are located
 * @s: str
 *
 * Return: returns a ptr to the byte in s that matches one
 * of the bytes ic accept or null if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}

