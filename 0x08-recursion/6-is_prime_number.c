#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The input integer to check
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, 2));
	}
}

/**
 * prime_check - Helper function for checking recursive prime number
 * @n: The input integer to check
 * @divisor: The current divisor to check
 * Return: 1 if prime number, 0 if not
 */
int prime_check(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, divisor + 1));
	}
}
