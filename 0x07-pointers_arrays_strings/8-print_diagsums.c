#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of int
 * @a: 2d array of int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, sm1 = 0, sm2 = 0;

	for (i = 0; i < size; i++)
	{
		sm1 += a[i];
		sm2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sm1);
	printf("%d\n", sm2);
}
