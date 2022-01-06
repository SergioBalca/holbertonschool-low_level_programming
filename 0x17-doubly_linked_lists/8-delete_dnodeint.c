#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a node
 * @index: index of the node to be deleted
 * Return: 1 on success, or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *node_free = NULL;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)	/* if head needs to be removed */
	{
		*head = current->next;	/* change head */
		free(current);	/* free previous head */
		return (1);
	}

	for (; current && i < index - 1; i++)
	{
		current = current->next;
	}

	if (!current || !current->next)	/* if index is greater than number of nodes */
	{
		return (-1);
	}

	node_free = current->next->next;	/* store ptr next of node to be deleted */
	free(current->next);
	current->next = node_free;	/* unlink deleted node from list */

	return (1);

}
