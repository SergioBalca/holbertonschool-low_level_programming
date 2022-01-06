#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the address of the new element
 * @n: new element added
 * Return: a pointer to the address of the new element
 * or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = NULL;	/* To make new node the last node */

		if (!*head)	/* NO elements in the list */
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

	}

	return (*head);

	
}
