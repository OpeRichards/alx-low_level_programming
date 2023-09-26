#include <stdio.h>

/**
 * main - Entry point
 * Print all single digits
 * With comma and space after each
 * Return: Always 0 (Success)
 */

int main(void)
{
	int singles;

	for (singles = 0; singles <= 9; singles++)
	{
		putchar('0' + singles);

		if (singles < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
