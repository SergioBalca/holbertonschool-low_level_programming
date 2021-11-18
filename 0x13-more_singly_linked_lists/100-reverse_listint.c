#include "lists.h"

/**
 * reverse_listint- everses a listint_t linked list
 * @head: pointer to a node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = NULL;

	if (*head)
	{
		prev_node = *head;
		current_node = (*head)->next;
		*head =  (*head)->next;

		prev_node->next = NULL;	/* Make first node the last node */

		while (*head)
		{
			*head = (*head)->next;
			current_node->next = prev_node;

			prev_node = current_node;
			current_node = *head;
		}

		*head = prev_node;	/* Make last node as head */
	}

	return (*head);
}
