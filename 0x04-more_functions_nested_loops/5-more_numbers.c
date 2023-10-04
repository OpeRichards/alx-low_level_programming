#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints digits 0 to 14 in 10 different times
 *
 */
void more_numbers(void)
{
	int rows;
	int digits;

	for (rows = 0; rows <= 9; rows++)
	{
		for (digits = 0; digits <= 14; digits++)
		{
			if (digits > 9)
			{
				_putchar((digits / 10) + '0');
			}
			_putchar((digits % 10) + '0');
		}
		_putchar('\n');
	}
}
