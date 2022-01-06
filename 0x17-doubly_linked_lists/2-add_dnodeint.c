#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the address of the new element
 * @n: new element added
 * Return: a pointer to the address of the new element
 * or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
