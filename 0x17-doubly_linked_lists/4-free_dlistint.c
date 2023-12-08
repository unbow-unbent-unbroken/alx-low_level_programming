#include "lists.h"

/**
 * free_dlistint - Function that frees dlistint_t list
 * @head: Pionter to the head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
