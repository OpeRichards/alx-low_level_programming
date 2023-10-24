#include "lists.h"

/**
 * pop_listint - Deletes the head node of 'listint_t' linked list
 * @head: Head of the linked list
 * Return: Head node's data(n), 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nodes;

	if (!head || !*head)
		return (0);

	nodes = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nodes);
}
