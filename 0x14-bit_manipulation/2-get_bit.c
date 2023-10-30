#include <stdio.h>
#include "main.h"

/**
 * get_bit - Prints the value of a bit at a given index
 * @n: The number from which to get the bit
 * @index: Index starting from 0 of bit to print
 * Return: Value of bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Check if index is out of bound*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*
	* Shift the number to the right by 'index' bits and
	*  use a bitwise AND to get the value of the bit at that index
	*/
	return ((n >> index) & 1);
}
