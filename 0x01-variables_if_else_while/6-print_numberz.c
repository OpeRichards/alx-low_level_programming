#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Prints all single digit numbers of base 10 starting
 * from 0 without using printf or puts
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t;

	t = 0;
	while (t <= 9)
	{
		putchar('0' + t);	/*convert the integer to character*/
		t++;
	}
	putchar('\n');

	return (0);
}
