#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = NULL;
	listint_t *next_node = NULL;

	if (head == NULL)
	{
		return;
	}
	
	current_node = *head;
	
	while (current_node)
	{
		next_node = current_node;
		current_node = current_node->next;
		free(next_node);
	}
	
	*head = NULL;
}
