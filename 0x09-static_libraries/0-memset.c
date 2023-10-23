#include "main.h"

/**
 * _memset - Fills memory with a given constant number of bytes
 * @s: A pointer with the constant byte
 * @b: Constant number of byte
 * @n: Number of bytes
 * Return: Value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}

	return (s);
}
