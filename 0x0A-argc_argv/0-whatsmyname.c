#include <stdio.h>


/**
 * main - prints program name,
 *                         followed by a new line
 *
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
