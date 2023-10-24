#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to duplicate of a string
 * @str: The string to duplicate
 * Return: The new string duplicate
 */
char *_strdup(char *str)
{
	int size = 0, i = 1;
	char *y;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	y = malloc((sizeof(char) * i) + 1);

	if (y == NULL)
	{
		return (NULL);
	}
	while (size < i)
	{
		y[size] = str[size];
		size++;
	}

	y[size] = '\0';
	return (y);
}
