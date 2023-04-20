#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sums all its parameters
 *
 * @n: the num of paramters passed to function
 * @...: variable num of paramter to calculate the sum of
 *
 * Return: If n == 0 - 0.
 *         or sum of parameters in other case
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int a, sum = 0;

	va_start(l, n);

	for (a = 0; a < n; a++)
		sum += va_arg(l, int);

	va_end(l);

	return (sum);
}
