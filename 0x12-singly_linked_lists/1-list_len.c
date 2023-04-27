#include "lists.h"

/**
 * list_len -  Entry point: (Determines length of linked list).
 *
 * @h:Ptr to 1 node.
 *
 * Return: size of list.
 */

size_t list_len(const list_t *h)
{
	size_t in = 0;

	while (h)
	{
		h = h->next;
		in++;
	}
	return (in);
}
