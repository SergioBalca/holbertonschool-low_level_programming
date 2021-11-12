#include "lists.h"

/**
 * add_node_end- adds a new node at the end of a list_t list
 * @head: a pointer to the new element of list_t list
 * @str: a string of chars
 * Return: the address of the new element
 * NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length_str(str);
	new->next = NULL;	/* To make new node last node*/

	if (*head == NULL)	/* No elements in the list */
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

/**
 * length_str- returns the length of a string
 * @str: string
 * Return: the length of the string str
 */

unsigned int length_str(const char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
