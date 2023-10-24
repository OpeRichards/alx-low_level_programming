#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of 'listint_t' list
 * @head: The linked list to work on
 * @n: Integer to add to end of the node
 * Return: Address of the new list, 0 if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *cur_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		cur_node = *head;
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}

	return (*head);
}
