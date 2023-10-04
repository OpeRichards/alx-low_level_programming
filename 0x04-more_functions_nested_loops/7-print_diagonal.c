#include "main.h"

/**
 * print_diagonal - Draws a diagonal '\' line on the terminal
 * @n: Number of times '\' should be printed
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		const char toPrint = '\\';
		int rows, cols;

		for (rows = 1; rows <= n; rows++)
		{
			for (cols = 1; cols < rows; cols++)
			{
				_putchar(' ');
			}

			_putchar(toPrint);
			_putchar('\n');
		}
	}
}
