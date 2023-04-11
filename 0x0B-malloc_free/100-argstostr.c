#include "main.h"

/**
 * _strlen - find length of a str
 *
 * @s: str
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
 * argstostr - a function that concatenates all the args of your program
 *
 * @ac: int
 * @av: args
 *
 * Return: ptr to the new string
*/

char *argstostr(int ac, char **av)
{
	int a = 0, nc = 0, b = 0, temp = 0;
	char *new_s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++, nc++)
		nc += _strlen(av[a]);

	new_s = malloc(sizeof(char) * nc + 1);
	if (new_s == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, temp++)
			new_s[temp] = av[a][b];

		new_s[temp] = '\n';
		temp++;
	}
	new_s[temp] = '\0';
	return (new_s);
}
