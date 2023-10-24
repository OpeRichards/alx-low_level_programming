#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of 'listint_t' list
 * @head: The linked list to work on
 * @n: Integer add to beginning of the node
 * Return: Address of new elements, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
