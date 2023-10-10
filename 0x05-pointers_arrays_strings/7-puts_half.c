#include "main.h"

/**
 * puts_half - Prints the second half or last n charcters of a string
 * @str: Pointer to the input string
 *
 */
void puts_half(char *str)
{
	int length = 0; /* Initialize variable to store length of the string */
	int start_index; /* Initialize variable to store starting index */

	/* Calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++; /* Increment the length for each character */
	}
	/* Calculate the starting index based on string length */
	if (length % 2 == 0) /*If length is even */
	{
		start_index = length / 2; /* Start from middle of string */
	}
	else /* If the length is odd */
	{
		start_index = (length - 1) / 2; /*Start from last n characters*/
	}

	/* Use a loop to print characters from the calculated index to the end */
	length = start_index;
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]); /*Print character at the current index */
		start_index++; /* Move to the next character */
	}

	_putchar('\n');
}
