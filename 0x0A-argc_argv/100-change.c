#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to
 *                 make change for an amount of money
 *
 * @argc: num of arguments
 * @argv: array of args
 *
 * Return: returns 0-success, returns 1-fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a, leastcent = 0, coins = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (a = 0; a < 5; a++)
		{
			if (coins >= cent[a])
			{
				leastcent += coins / cent[a];
				coins = coins % cent[a];
				if (coins % cent[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcent);
		}
	else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
