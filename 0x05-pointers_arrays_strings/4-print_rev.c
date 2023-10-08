#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string
 *
 */
void print_rev(char *s)
{
	int  i, lent = 0; /*initialise the length to 0*/

	while (s[lent] != '\0') /*Calculate length of string*/
	{
		lent++; /*increment lent of each character*/
	}

	for (i = lent - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
