#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data (n) of 'listint_t' linked list
 * @head: First node in the linked list
 * Return: Value of sum, or 0 if null
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
