#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a structu list_t
 * @head: a pointer to the address of the new element
 * @str: the new element added
 * Return: a pointer to the address of the new element
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		
		tmp = head,
		head = head->next;
		free(tmp->str);
		free(tmp);
	}	
}
