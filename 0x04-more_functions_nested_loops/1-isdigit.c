#include "main.h"

/**
 * _isdigit - Checks to confirm if character is a digit
 * @c: The character to check if it is a digit
 * Return: 1 if it's a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
