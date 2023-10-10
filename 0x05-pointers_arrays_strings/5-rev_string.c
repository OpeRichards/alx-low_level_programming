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

	/* Swap characters at start_index and end_index */
	for (end_index = 0; start_index > end_index; end_index++)
	{
		start_index--; /* Move from the end of string to start*/
		temp = s[start_index]; /*Stores character at start_index in temp*/
		s[start_index] = s[end_index]; /*Swap characters*/
		s[end_index] = temp; /* Assign character in temp to end_index*/
	}
}
