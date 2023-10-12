#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @size: Size of the array
 * @action: Pointer to the function to use
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (action == NULL || array == NULL)
		return;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
