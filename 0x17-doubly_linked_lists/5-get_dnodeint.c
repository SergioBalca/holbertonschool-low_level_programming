#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a listint_t linked list
 * @head: a pointer to a node
 * @index: index of the node, staring at 0
 * Return: the nth node of a listint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
		{
			return (current);
		}

		i++;
		current = current->next;
	}

	return (NULL);

}
