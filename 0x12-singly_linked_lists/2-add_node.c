#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a structu list_t
 * @head: a pointer to the address of the new element
 * @str: the new element added
 * Return: a pointer to the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length_str(str);
	new->next = *head;
	*head = new;

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
