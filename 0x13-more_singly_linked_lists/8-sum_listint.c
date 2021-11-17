#include "lists.h"

/**
 * sum_listint- Returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to a node
 * Return: the sum of the data of a listint_t linked list
 * if the list is empty, returns 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

