#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int index;

	/* Loop through the first'n' elements of the array */
	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]); /* Print the current elements */

		if (index == n - 1) /* Check if it's not the last element */
			continue;

	printf(", "); /*Print a comma & space to separate elemnts*/
	}

	printf("\n"); /*Print a new line to end the output*/
}
