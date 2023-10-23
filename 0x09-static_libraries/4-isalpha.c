#include "main.h"

/**
 * _isalpha - Checks if a charcter is alphabet or not.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
