#include "main.h"


/**
* array_range - create an array of integers.
*
* @min: starting int.
* @max: max int.
*
* Return: array of integers.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int a, b = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (a = min; a <= max; a++)
		{
			ptr[b] = a;
			b++;
		}
		return (ptr);
	}
	else
		return (NULL);

}
