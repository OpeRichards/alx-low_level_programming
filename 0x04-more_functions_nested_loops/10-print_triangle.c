#include "main.h"

/**
 * print_triangle - Prints triangle of 'size' declared
 * @size: Size of triangle to print
 *
 */
void print_triangle(int size)
{
	int rows, cols;

	for (rows = 1; rows <= size; rows++)
	{
		for (cols = 1; cols <= size - rows; cols++)
		{
			_putchar(' ');
		}

		for (cols = 1; cols <= rows; cols++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
