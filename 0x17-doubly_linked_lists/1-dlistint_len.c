#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked list_t list
 * @h: a pointer to a list_t structure
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)	/* evaluates if there is new nodes */
	{
		n++;
		tmp = tmp->next;
	}

	return (n);

}
