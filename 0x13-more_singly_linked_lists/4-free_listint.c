#include "lists.h"
#include <stdint.h>

/**
 * free_listint- function that frees a listint_t list
 * @head: a pointer to the address of the new element
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}

