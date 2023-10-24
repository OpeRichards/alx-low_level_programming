#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of 'listint_t' linked list
 * @head: First node in the linked list
 * @index: Index of the node, starting at 0
 * Return: Pointer to node checked, or 0 if NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int counter = 0;

	while (tmp && counter < index)
	{
		tmp = tmp->next;
		counter++;
	}

	return (tmp ? tmp : NULL);
}
