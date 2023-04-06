#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns true if the number is prime
 *
 * @n: num to check
 * @anothern: int
 *
 * Return: 0 or 1
*/

int check_prime(int n, int anothern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - returns the 1 if n is prime
 *
 * @n: num to be checked
 * @anothern: int
 *
 * Return: int
*/

int check_prime(int n, int anothern)
{
	if (anothern >= n && n > 1)
		return (1);
	else if (n % anothern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, anothern + 1));
}
