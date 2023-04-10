#include <stdio.h>


/**
 * main - print num of args passed
 *
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: the num of arg
 *                 0-success,non_zero-fail
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
