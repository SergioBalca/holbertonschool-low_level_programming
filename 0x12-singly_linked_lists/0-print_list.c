#include "lists.h"

/**
 * print_list- prints all the elements of a list_t list
 * @h: a pointer to a list_t structure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)	/* evaluates if there is new nodes */
	{
		if (tmp->str == NULL)
		{
			printf("[%lu] (nil)\n", n);

		}
		else if (tmp->next == NULL)	/* 1 node */
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
			n++;
		}
		else			/* n nodes */
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
			n++;
		}
		tmp = tmp->next;
	}

	return (n);
}
