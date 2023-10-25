#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * Return: Pointer to allocated memory, or NULL
 */
void *malloc_checked(unsigned int b)
{
	char *h = malloc(b);

	if (h == NULL)
		exit(98);
	else
		return (h);
}
