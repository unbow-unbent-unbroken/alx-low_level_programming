#include <stdio.h>
#include "lists.h"

/**
 * first_function - Function executed before main
 *
 * Return: no return.
 */

void __attribute__((constructor)) first_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
