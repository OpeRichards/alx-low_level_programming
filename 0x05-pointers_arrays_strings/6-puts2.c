#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: Pointer to the input string
 *
 */
void puts2(char *str)
{
	int index = 0; /* Initialize an index to traverse the string */

	while (str[index] != '\0') /* Iterate through the string until end*/
	{
		_putchar(str[index]); /*Print the character at the current index */
		index += 2; /* Increment the index by 2 to skip every other character */
	}

	_putchar('\n');
}
