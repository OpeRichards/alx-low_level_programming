#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers.
 * Use putchar maximum 8 times.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens2, units2, tens, units;

	for (tens2 = 0; tens2 <= 9; tens2++)
	{
		for (units2 = 0; units2 <= 9; units2++)
		{
			for (tens = tens2; tens <= 9; tens++)
			{
				int start_units = (tens2 == tens) ? units2 + 1 : 0;

				for (units = start_units; units <= 9; units++)
				{
					putchar('0' + tens2);
					putchar('0' + units2);
					putchar(' ');

					putchar('0' + tens);
					putchar('0' + units);

					/*check if it's not the last combination*/
					if (!(tens2 == 9 && units2 == 8 && tens == 9 && units == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
