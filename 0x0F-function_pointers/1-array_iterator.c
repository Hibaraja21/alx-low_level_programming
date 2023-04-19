#include "function_pointers.h"


/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: the int array
 * @size: size of array
 * @action: function ptr
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *fin = array + size - 1;

	if (array && size && action)
		while (array <= fin)
			action(*array++);
}
