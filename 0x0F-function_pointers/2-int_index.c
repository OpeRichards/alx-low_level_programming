#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Returns the index of the first element
 * for which cmp fucntion does not return 0
 * @array: Array
 * @size: The number of elements in the array
 * @cmp: Pointer to function to use to compare values
 * Return: -1 if NULL or size <= 0 else int_index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
