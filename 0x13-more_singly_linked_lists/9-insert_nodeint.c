#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: pointer to a node
 * @idx: index of the list where the new node should be added
 * @n: the new element of the list
 * Return: the adderess of the new node
 * or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	
	new->n = n;	/* to create the new node */
	
	if (idx > 0)
	{
	if (idx == 0)
	{
		new->next = current;
		*head = new;
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
	
	return (NULL);
}
