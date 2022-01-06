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
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return(new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	new->prev = tmp;
	tmp = new;

	return (new);
}
