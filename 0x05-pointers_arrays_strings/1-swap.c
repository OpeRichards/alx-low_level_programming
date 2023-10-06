#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @n: First parameter of the declared function
 * @b: Second parameter of the declared function
 *
 */
void swap_int(int *n, int *b)
{
	int c;

	c = *n;
	*n = *b;
	*b = c;
}
