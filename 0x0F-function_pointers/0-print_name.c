#include "function_pointers.h"


/**
 * print_name - prints a name
 *
 * @name: the str name
 * @f: function which print name
 *
 * Return: nothing (void)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
