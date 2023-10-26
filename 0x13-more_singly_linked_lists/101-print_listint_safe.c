#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints 'listint-t' list
 * @head: Pointer to the first element
 * Return: Number of nodes in the list, 98 if fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *num = NULL;
	size_t counter = 0;
	size_t new_nodes = 0;

	tmp = head;
	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
		tmp = tmp->next;
		num = head;
		new_nodes = 0;
		while (new_nodes < counter)
		{
			if (tmp == num)
			{
				printf("-> [%p} %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			num = num->next;
			new_nodes++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
