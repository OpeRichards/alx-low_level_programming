#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of char
 * @size: The size of the array
 * @c: Char to fill in the array
 * Return: A pointer to the array, or NULL if fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
	{
		return (0);
	}
	while (size--)
	{
		a[size] = c;
	}

	return (a);
}
