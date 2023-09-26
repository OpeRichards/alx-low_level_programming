#include <stdio.h>

/**
 * main - Entry point
 * Prints the a-z in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare a variable to z*/
	char f;

	f = 'z';
	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');

	return (0);
}
