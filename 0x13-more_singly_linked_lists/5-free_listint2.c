#include "lists.h"

/**
 * free_listint2- frees a listint_t list
 * @head: a pointer to the address of the new element
 * Return: Nothing
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
