#include "lists.h"

/**
 * pop_listint- deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to a new node
 * Return: the first node's data
 * if the linked list is empty, returns 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int cpy = 0;

	tmp = *head;
	cpy = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (cpy);

}
