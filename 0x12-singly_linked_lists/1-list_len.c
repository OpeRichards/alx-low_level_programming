#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns number of elements in a linked 'list_t' list
 * @h: Pointer to first element in the linked 'list_t' list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
