#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbs
 *
 * @argc: the num of arguments
 * @argv: array of ptrs to argts
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
