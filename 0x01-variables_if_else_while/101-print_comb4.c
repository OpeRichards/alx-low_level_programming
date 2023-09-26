#include <stdio.h>

/**
 * main - Entry point
 * Print combination of 3 digits
 * using putchar ! > 6 times
 * with comma and space after each combination
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hund, tens, units;

	for (hund = 0; hund <= 7; hund++)
	{
		for (tens = hund + 1; tens <= 8; tens++)
		{
			for (units = tens + 1; units <= 9; units++)
			{
				putchar('0' + hund);
				putchar('0' + tens);
				putchar('0' + units);

				/* check if it's not the last set of numbers*/
				if (hund != 7 || tens != 8 || units != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
