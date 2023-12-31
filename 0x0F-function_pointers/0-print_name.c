#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name to be printed
 * @f: pointer to another function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
