#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Print lower case alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphabets = 'a'; /* Start with a*/
	int count = 0;

	while (count < 10) /*Loop 10 times*/
	{
		while (alphabets <= 'z') /*Loop through the alphabet*/
		{
			_putchar(alphabets);
			alphabets++;
		}
	_putchar('\n');
	alphabets = 'a';
	count++;
	}
}
