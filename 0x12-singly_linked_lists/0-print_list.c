#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list
 * @h: The pointer to the nodes address
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
	}
	return (node_count);
}
