#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strs using at most an inputted num of byte
 *
 * @s1: ptr to first str
 * @s2: ptr to second string
 * @n: num of bytes from n2 to concatenate
 *
 * Return: if the function fails - NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s1_len] != '\0'; s2_len++)
		;
	s = malloc(s1_len + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}

	s[a] = '\0';
	return (s);
}