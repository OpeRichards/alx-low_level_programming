#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to string
 *
 */
void rev_string(char *s)
{
	int  start_index = 0; /*initialise the length to 0*/
	int end_index;
	int temp;

	while (s[start_index] != '\0') /*Calculate length of string*/
	{
		start_index++; /*increment length of each character*/
	}

	/* Adjust end_index to point to the last character*/
	/* (before null terminator)*/

	/* Swap characters at start_index and end_index */
	for (end_index = 0; start_index > end_index; end_index++)
	{
		start_index--;
		temp = s[start_index];
		s[start_index] = s[end_index];
		s[end_index] = temp;
	}
}
