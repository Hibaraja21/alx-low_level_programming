#include "main.h"

/**
 * _strlen - find length of a str
 *
 * @s: string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int siz = 0;

	for (; s[siz] != '\0'; siz++)
	;
	return (siz);
}

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	int siz1, siz2, a;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	siz1 = _strlen(s1);
	siz2 = _strlen(s2);
	m = malloc((siz1 + siz2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (a = 0; a <= siz1 + siz2; a++)
	{
		if (a < siz1)
			m[a] = s1[a];
		else
			 m[a] = s2[a - siz1];
	}
	m[a] = '\0';
	return (m);
}
