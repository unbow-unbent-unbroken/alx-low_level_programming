#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: A pointer to the head of the list
 *
 * Return: 0 (Success)
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next; /* Move head to the next node */
		free(current_node->str); /* Free the duplicated string */
		free(current_node); /* Free the node itself */
	}
}
