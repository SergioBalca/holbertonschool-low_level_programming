#include "lists.h"

/**
 * list_len- eturns the number of elements in a linked list_t list
 * @h: a pointer to a list_t structure
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
const list_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)	/* evaluates if there is new nodes */
	{
		if (tmp->str == NULL)
		{
			n = 0;
		}
		else if (tmp->next == NULL)	/* 1 node */
		{
			n++;
		}
		else			/* n nodes */
		{
			n++;
		}
		tmp = tmp->next;
	}

	return (n);

}
