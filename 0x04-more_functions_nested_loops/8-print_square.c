#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int rows, cols;

		for (rows = 1; rows <= size; rows++)
		{
			for (cols = 1; cols <= size; cols++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
