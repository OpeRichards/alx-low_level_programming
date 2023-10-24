#include "lists.h"

/**
 * free_listint - Frees 'listint_t' list
 * @head: Head of the linked list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
