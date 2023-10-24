#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Writes program that prints its name
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index;
	unsigned int counter, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			e = argv[index];

			for (counter  = 0; counter < strlen(e); counter++)
			{
				if (e[counter] < 48 || e[counter] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
