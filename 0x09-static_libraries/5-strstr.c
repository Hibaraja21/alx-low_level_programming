#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: inputi
 * @needle: the sub to be located
 * Return: if the sub is located - a ptr to the beginning of the located sub
 * if te sub is not located - NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
