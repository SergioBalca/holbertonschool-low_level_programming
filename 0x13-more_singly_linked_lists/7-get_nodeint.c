#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list
 * @head: a pointer to a node
 * @index: index of the node, staring at 0
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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
