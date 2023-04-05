#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *                                  square root of a number
 *
 * @n: num to be used
 * @x: square root
 *
 * Return: the sqr root of n
*/

int square(int n, int x);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - returns the square root of a number
 * @n: int to find square root
 * @x: square root
 *
 * Return:the sqyare root of n
 */

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
