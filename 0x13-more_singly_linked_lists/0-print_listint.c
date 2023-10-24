#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a 'listint-t' list
 * *@h: Pointer to the first element
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count++);
}