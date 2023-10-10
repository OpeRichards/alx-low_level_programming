#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: A pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	/*Copy character from src to dest*/
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	/*Add null-terminating character to dest*/
	dest[index] = '\0';
	
	return dest;
}
