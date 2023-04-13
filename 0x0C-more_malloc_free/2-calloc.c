#include "main.h"

/**
* _calloc - allocates memory for an array using malloc
*
* @nmemb: array length
* @size: size of each element
*
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			n[a] = 0;
		return (n);
	}
	else
		return (NULL);
}
