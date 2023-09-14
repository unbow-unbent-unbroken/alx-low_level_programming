#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A fuction that prints a name
 * @name: Pointer to the name to print
 * @f: Pointer to a function that takes a char pointer and returns void
 *
 * Description: This funct prints a name by invoking a funct pointed to by f.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
