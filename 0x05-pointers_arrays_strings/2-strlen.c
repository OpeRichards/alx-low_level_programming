#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: String that it's length is to be printed
 *
 * Return: 1 upon success, 0 for error.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
