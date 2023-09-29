#include "main.h"

/**
 * main - Entry point
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
