#include "main.h"
#include <stdio.h>

/**
 * main - Writes program that prints its name
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
