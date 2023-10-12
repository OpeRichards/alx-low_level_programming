#include "function_pointers.h"

/**
 * print_name - Function that prints a name of a function
 * @name: Pointer to the function name to be print
 * @f: Pointer to function that prints the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
