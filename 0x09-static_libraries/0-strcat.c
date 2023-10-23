#include "main.h"

/**
 * _strcat - Concatenate 2 strings
 * @dest: Pointer to string to concatenate on
 * @src: Source string to append to pointer above
 * Return: Pointer to the new destination string of pointer above
 */
char *_strcat(char *dest, char *src)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;
	while (dest[index] != '\0')
	{
		index++;
	}

	dest_len = 0;
	while (src[dest_len] != '\0')
	{
		dest[index] = src[dest_len];
		dest_len++;
		index++;
	}
	
	return (dest);
}
