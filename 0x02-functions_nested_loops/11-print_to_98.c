#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Number where counting is to start
 *
 */
void print_to_98(int n)
{
	if (n >= 98) /*If input number > | ==  98*/
	{
		while (n > 98) /*Start a loop while n > 98*/
			printf("%d, ", n--); /*Print n, decrease n by 1, add comma and space*/

		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);/*Print n, increase by 1, add comma and space*/

		printf("%d\n", n); /*After the loop, print last number 98 and newline*/
	}
}
