#include "lists.h"


/**
 * free_list - Entry point: (Frees all nodes of a list).
 *
 * @head: ptr to head node.
 *
 * Return: (void).
 */

void free_list(list_t *head)
{
	list_t *nd, *next_node;

	if (!head)
		return;

	nd = head;
	while (nd)
	{
		next_node = nd->next;
		free(nd->str);
		free(nd);
		nd = next_node;
	}
}
