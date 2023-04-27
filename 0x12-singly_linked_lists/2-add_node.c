#include "lists.h"


/**
 * add_node - Entry point: (Adds node to start of list).
 *
 * @head:  Address of ptr to head node.
 * @str: string field of node.
 *
 * Return: size of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_hd = malloc(sizeof(list_t));

	if (!head || !new_hd)
		return (NULL);
	if (str)
	{
		new_hd->str = strdup(str);
		if (!new_hd->str)
		{
			free(new_hd);
			return (NULL);
		}
		new_hd->len = _strlen(new_hd->str);
	}

	new_hd->next = *head;
	*head = new_hd;
	return (new_hd);
}
