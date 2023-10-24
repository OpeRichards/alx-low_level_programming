#include "lists.h"

/**
 * free_listint2 - Frees 'listint_t' list
 * @head: Head of the linked list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
