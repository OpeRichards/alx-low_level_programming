#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to n unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number or
 *		0 if one or more chars in the string
 *		or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /*To store the result*/
	int index = 0; /*Variable to keep track of string index*/

	if (b == NULL) /*Check if the input string is NULL*/
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] == '0' || b[index] == '1')
		{
			result <<= 1; /*Left shift current result by 1 i.e multiply by 2)*/
			result += b[index] - '0'; /*Add current digit (0 or 1) to result*/
			index++; /*Move to next character in the string*/
		}
		else
		{
			return (0); /*If a character not '0' or '1' is encountered, return 0)*/
		}
	}

	return (result);
}
