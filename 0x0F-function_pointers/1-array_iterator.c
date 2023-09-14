#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Description: This function takes an integer array, its size, and a function
 * pointer as arguments. It applies the specified function to each element of
 * the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
