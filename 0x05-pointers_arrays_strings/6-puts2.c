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
		index++;
		if (index % 2 == 0)
		{
			_putchar(str[index]); /*Print the character at the current index */
		}
	}
	_putchar('\n');
}
