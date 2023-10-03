#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints digits from 0 to 9 except 2 and 4
 *
 */
void print_most_numbers(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		if (digits == 2 || digits == 4)
			continue;

		_putchar(digits + '0');
	}
	_putchar('\n');
}
