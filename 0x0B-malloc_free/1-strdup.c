#include "main.h"

/**
 * _strdup - return a ptr to a newly allocated space in memory which
 *                 contains a copy of the string given as a parameter
 *
 * @str: string to be copied
 *
 * Return: returns 0
*/

char *_strdup(char *str)
{
	int a = 0, siz = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (; str[siz] != '\0'; siz++)
		;
	cpy = malloc(siz * sizeof(*str) + 1);

	if (cpy == 0)
		return (NULL);

	else
	{
		for (; a < siz; a++)
			cpy[a] = str[a];
	}
	return (cpy);
}
