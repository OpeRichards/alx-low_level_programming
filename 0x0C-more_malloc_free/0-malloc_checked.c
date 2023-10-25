#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Assigned integer
 * Return: Pointer to allocated memory, or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);
	if (f == NULL)
	{
		exit(98);
	}

	return (f);
}
