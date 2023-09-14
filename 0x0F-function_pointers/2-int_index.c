#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that search for integer
 * @array: An array to search through
 * @size: The number of elements in the array
 * @cmp: The pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
