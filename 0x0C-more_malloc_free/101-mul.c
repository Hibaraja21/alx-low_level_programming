#include "main.h"

/**
 * _puts - print a str, followed by new line
 * @str: ptr to the strg to print
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
 * @s: char type str
 *
 * Return: int converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int res = 0, firstnum, a;

	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}

	for (a = firstnum; s[a] >= 48 && s[a] <= 57; a++)
	{
		res *= 10;
		res += (s[a] - 48);
	}

	return (sign * res);
}

/**
 * print_int - prints an int
 * @n: int
 *
 * Return: 0
 */

void print_int(unsigned long int n)
{

unsigned  long int divisor = 1, a, res;

for (a = 0; n / divisor > 9; a++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	res = n / divisor;
	_putchar('0' + res);
}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 *
 * @argv: list
 *
 * Return: 0
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
