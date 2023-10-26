#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * find_listint_loop - Loop in a linked list
 * @head: Linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bmw = head;
	listint_t *fvc = head;

	if (!head)
		return (NULL);

	while (bmw && fvc && fvc->next)
	{
		fvc = fvc->next->next;
		bmw = bmw->next;

		if (fvc == bmw)
		{
			bmw = head;
			while (bmw != fvc)
			{
				bmw = bmw->next;
				fvc = fvc->next;
			}
			return (fvc);
		}
	}
	return (NULL);
}
