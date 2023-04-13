#include "main.h"

/**
* _realloc - allocates a memory block using malloc and free
*
* @ptr: ptr to the memory allocated with a call to malloc
* @old_size: size of pointer
* @new_size: size of the new memory
*
* Return: null if new size=0 and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	if (new_size > old_size)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)temp + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (temp);
}
