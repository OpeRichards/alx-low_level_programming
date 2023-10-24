#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of 'list_t' list
 * @head: The linked list to work on
 * @str: Pointer to the string to add to end of the node
 * Return: Address of the new list, 0 if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = NULL;
	cur_node = *head;

	if (cur_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}

	return (*head);
}
