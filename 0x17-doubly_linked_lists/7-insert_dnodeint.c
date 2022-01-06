#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position
 * @h: pointer to a node
 * @idx: index of the list where the new node should be added
 * @n: the new element of the list
 * Return: the adderess of the new node
 * or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		*h = new;
		return (new);
	}

	for (; i < idx - 1; i++)
	{
		current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
