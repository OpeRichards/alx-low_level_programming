#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listnt - Frees 'listint_t' list
 * @head: Head of the linked list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *cur_node;

	while (head)
	{
		cur_node = head->next;
		free(head);
		head = cur_node;
	}
}
