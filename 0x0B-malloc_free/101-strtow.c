#include "main.h"

/**
 * wrdcnt - counts the num of words in a str
 *
 * @s: str to count
 *
 * Return: int of the num of words
*/

int wrdcnt(char *s)
{
	int a, m = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				m++;
		}
		else if (a == 0)
			m++;
	}
	m++;
	return (m);
}

/**
 * strtow - splits a str into words
 *
 * @str: str to split
 *
 * Return: ptr to an array of strgs
*/

char **strtow(char *str)
{
	int a, b, q, j, m = 0, wc = 0;
	char **v;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = wrdcnt(str);
	if (m == 1)
		return (NULL);
	v = (char **)malloc(m * sizeof(char *));
	if (v == NULL)
		return (NULL);
	v[m - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			v[wc] = (char *)malloc(b * sizeof(char));
			b--;
			if (v[wc] == NULL)
			{
				for (q = 0; q < wc; q++)
					free(v[q]);
				free(v[m - 1]);
				free(v);
				return (NULL);
			}
			for (j = 0; j < b; j++)
				v[wc][j] = str[a + j];
			v[wc][j] = '\0';
			wc++;
			a += b;
		}
		else
			a++;
	}
	return (v);
}
