#include <stdio.h>

/**
 * main - Entry point
 * Print all base 16 digits.
 * Use lowercase for alphabets.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char allhex;

	for (allhex = '0'; allhex <= '9'; allhex++)
	{
		putchar(allhex);
	}

	for (allhex = 'a'; allhex <= 'f'; allhex++)
	{
		putchar(allhex);
	}
	putchar('\n');

	return (0);
}
