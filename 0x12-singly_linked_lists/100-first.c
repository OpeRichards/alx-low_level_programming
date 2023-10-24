#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void first(void) __attribute__((constructor));

/**
 * first - Executes first before the main function
 *
 */
void first(void)
{
	char *str1, *str2;

	str1 = "You're beat! and yet, you must allow,\n";
	str2 = "I bore my house upon my back!\n";
	printf("%s%s", str1, str2);
}
