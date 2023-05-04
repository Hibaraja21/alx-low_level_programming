#include "main.h"


/**
 * binary_to_uint - Entry point(converts binary to unsigned int).
 *
 * @b: Binary num as a strg.
 *
 * Return: Converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decim = 0;
	int str_len = 0, bs = 1;

	if (!check_valid_string(b))
	return (0);

	while (b[str_len] != '\0')
	str_len++;

	while (str_len)
	{
		decim += ((b[str_len - 1] - '0') * bs);
		bs *= 2;
		str_len--;
	}
	return (decim);
}

/**
 * check_valid_string - checks if strg has only 0's and 1's.(Entry point)
 *
 * @b: strg to be checked
 *
 * Return: 1 if str is valid.
 */

int check_valid_string(const char *b)
{
	if (b == NULL)
	return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
		return (0);
		b++;
	}
	return (1);
}
