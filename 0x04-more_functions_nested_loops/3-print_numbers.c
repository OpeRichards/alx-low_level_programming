#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints digits from 0 - 9
 * Return: Always 0.
 *
 */
void print_numbers(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		_putchar(digits + '0');
	}
	_putchar('\n');
}
