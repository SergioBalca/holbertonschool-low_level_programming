#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a listint_t list
 * @head: pointer the new element of listint_t
 * @n: new element
 * Return: the address of the new element
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;	/* To make new node the last node */

	if (*head == NULL)	/* NO elements in the list */
	{
		*head = new;
	}

	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
