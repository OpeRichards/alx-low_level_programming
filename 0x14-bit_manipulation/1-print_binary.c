#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: String of numbers '0' or '1'
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /*Recursively shift number to the right*/

	/*Use bitwise AND to check last bit & print 1 or 0    */
	_putchar((n & 1) ? '1' : '0');
}
