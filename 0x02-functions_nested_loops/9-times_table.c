#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 */
void times_table(void)
{
	int hor, ver;

	for (hor = 0; hor <= 9; hor++) /*For row 0 to row 9*/
	{
		for (ver = 0; ver <= 9; ver++) /*Each row to have columns 0 to 9*/
		{
			int result = hor * ver;

			if (ver == 0) /*Column 0 print a single 0*/
			{
				_putchar('0');
			}
			else /*For other columns print comma and space and result*/
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10) /*If result is single digit add two spaces before it*/
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				/*Add one space before it if result is double digit*/
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0'); /*Print the tens digit*/
					_putchar((result % 10) + '0'); /*Print the units digit*/
				}
			}
		}
		_putchar('\n');
	}
}
