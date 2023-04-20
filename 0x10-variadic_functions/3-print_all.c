#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints  anything.
 *
 * @format:list of types of arguments passed.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *separator = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(li, double));
					break;
				case 's':
					str = va_arg(li, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(li);
}
