#include <stdio.h>

/**
 * main - print the num of arg
 *
 * @argc: int
 * @argv: list
 *
 * Return: returns 0
*/

int main(int argc, char *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
