#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of 'list_t' list
 * @head: The linked list to work on
 * @str: Pointer to the string to add to beginning of the node
 * Return: Address of the new list, 0 if fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}
