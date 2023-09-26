#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');
	return (0);
}

#	OR

#include <stdio.h>

int main(void)
{
	char t;
	
	for (t = 'a'; t <= 'z'; t++)
	{
		if (t == 'e' || t == 'q')
		       continue;

	putchar(t);
	}
	putchar('\n');
	return (0);
}		
