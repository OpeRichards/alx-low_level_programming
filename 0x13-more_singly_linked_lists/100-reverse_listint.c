#include "lists.h"

/**
 * reverse_listint - Reverses 'listint_t' linked list
 * @head: Head of the linked list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *fwrd = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		fwrd = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = fwrd;
	}
	(*head)->next = prev;

	return (*head);
}
