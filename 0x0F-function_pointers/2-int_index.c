#include "function_pointers.h"


/**
 * int_index - searches for an int
 *
 * @array: the int array
 * @size: number of elements in array
 * @cmp:the compare function
 *
 * Return: the int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size &&  cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
