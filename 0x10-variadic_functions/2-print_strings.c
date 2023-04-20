#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings,
 *                           followed by a new line.
 *
 * @separator: the str to be printed
 * @n: The number of strings
 * @...: a variable num of strings to be printed
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	char *str;
	unsigned int indx;

	va_start(li, n);

	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(li, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(li);
}
