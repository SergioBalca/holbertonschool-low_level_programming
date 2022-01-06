#include "lists.h"

/**
 * free_dlistint- function that frees a listint_t list
 * @head: a pointer to the address of the new element
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
