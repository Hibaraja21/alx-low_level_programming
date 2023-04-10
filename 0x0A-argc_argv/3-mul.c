#include <stdio.h>
#include <stdlib.h>


/**
 * main - print multiplication
 *                   of 2 numbers
 *
 * @argc: num of commandline args
 * @argv: ptr to an array of commandline args
 *
 * Return: success-0 fail-non_zero
*/

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
