#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The input number
 * Return: Value of square root or '-1' if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (_sqrt_root(n, 1));
	}
}


/**
 * _sqrt_root - Helper function for calculation of recursive square root
 * @n: The input number
 * @assum: The current guess for the square root
 * Return: Value of square root
 */
int _sqrt_root(int n, int assum)
{
	if (assum * assum == n)
	{
		return (assum);
	}
	else if (assum * assum > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_root(n, assum + 1));
	}
}
