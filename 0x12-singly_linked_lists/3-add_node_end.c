#include "lists.h"


/**
 * add_node_end - Entry point: (adds node to end of list).
 *
 * @head:  Address of ptr to head node..
 * @str: string field of nd.
 *
 * Return: Size of list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd = malloc(sizeof(list_t));
	list_t *nd = *head;

	if (!head || !new_nd)
		return (NULL);
	if (str)
	{
		new_nd->str = strdup(str);
		if (!new_nd->str)
		{
			free(new_nd);
			return (NULL);
		}
		new_nd->len = _strlen(new_nd->str);
	}
	if (nd)
	{
		while (nd->next)
			nd = nd->next;
		nd->next = new_nd;
	}
	else
		*head = new_nd;
	return (new_nd);
}
