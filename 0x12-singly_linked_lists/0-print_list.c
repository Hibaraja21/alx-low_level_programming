#include "lists.h"

/**
 * _strlen -  entry point (returns length of a str).
 *
 * @s:str whose length to check.
 *
 * Return:  Int length of str.
 */

int _strlen(char *s)
{
	int in = 0;

	if (!s)
		return (0);
	while (*s++)
		in++;
	return (in);
}

/**
 * print_list -  Entry point (prints linked list).
 *
 * @h: Ptr to 1 node.
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t in = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		in++;
	}
	return (in);
}
