#include "main.h"

/**
 * _print_rev_recursion - prints a str
 *                                in reverse
 *
 * @s: parameter string
 * Return: returns void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

