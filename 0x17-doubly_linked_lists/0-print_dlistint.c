#include "lists.h"

/**
 * print_dlistint- prints all the elements of a dlistint_t list
 * @h: a pointer to a doubbly link list called dlistint_t
 * Return: the number of elements of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp  = h;
	size_t n = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		n++;
		tmp = tmp->next;
	}

	return (n);
}
