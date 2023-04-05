#include "main.h"

/**
 * _strlen_recursion - gives length of a str
 *
 * @s: ptr the str
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
