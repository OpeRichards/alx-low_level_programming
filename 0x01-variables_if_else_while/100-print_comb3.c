#include <stdio.h>

/**
 * main - Entry point
 * Print combinations of 2 digits
 * Using putchar !> 5 times
 * With comma & space after each combination
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 8; tens++)
	{
		for (units = tens + 1; units <= 9; units++)
		{
			putchar('0' + tens);
			putchar('0' + units);

			if (tens != 8 || units != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
