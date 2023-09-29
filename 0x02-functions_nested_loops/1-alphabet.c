#include "main.h"

/**
 * print_ alphabet - Entry point
 * void print_alphabet(void) - Defined in 1-main.c
 * Prints alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
