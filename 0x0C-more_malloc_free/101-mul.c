#include "main.h"

/**
 * _puts - prints a str followed by new line
 *
 * @str: ptr to the str to print
 *
 * Return: void
*/

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}

/**
 * _atoi - convert a str to an int
 *
 * @s: char string type
 *
 * Return: int converted
*/

int _atoi(const char *s)
{
	int sig = 1;
	unsigned long int res = 0, num1, a;

	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			sig *= -1;
		}
	}

	for (a = num1; s[a] >= 48 && s[a] <= 57; a++)
	{
		res *= 10;
		res += (s[a] - 48);
	}

	return (sig * res);
}

/**
 * print_int - prints an int
 *
 * @n: int
 *
 * Return: returns 0
*/

void print_int(unsigned long int n)
{
	unsigned long int divis = 1, a, res;

	for (a = 0; n / divis > 9; a++, divis *= 10)
	;

	for (; divis >= 1; n %= divis, divis /= 10)
	{
		res = n / divis;
		_putchar('0' + res);
	}
}

/**
 * main - print the result of the multip followed by new line
 *
 * @argc: int
 * @argv: list
 *
 * Return: returns 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
