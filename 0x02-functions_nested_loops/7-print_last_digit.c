#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number from which last digit is extracted
 *
 * Return: The last digit of 'n'.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
