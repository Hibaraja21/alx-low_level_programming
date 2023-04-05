#include "main.h"

/**
 * _puts_recursion - prints a str followed
 *                       by a new line
 *
 * @s: charachter to be printed
 * Return: returns void
*/

void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

