#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes nodes at index of 'listint_t' linked list
 * @head: Head of the linked list
 * @index: Index of the node that should be deleted
 * Return: 1 (Success), -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *curNodes = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	curNodes = tmp->next;
	tmp->next = curNodes->next;
	free(curNodes);

	return (1);
}
