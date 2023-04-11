#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 *                        array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: ptr to the array
*/

int **alloc_grid(int width, int height)
{
	int **array, a, b;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			array[a] = malloc(sizeof(**array) * width);
			if (array[a] == 0)
			{
				while (a--)
					free(array[a]);
				free(array);
				return (NULL);
			}

			for (b = 0; b < width; b++)
			{
				array[a][b] = 0;
			}
		}
	}

	return (array);
}
