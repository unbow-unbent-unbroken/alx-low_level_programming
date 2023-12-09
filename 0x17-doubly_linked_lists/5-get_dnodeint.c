#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a
 * dlistint_t linked list
 * @head: Pointer to the head of the node
 * @index: Is the index of the node starting from 0
 *
 * Return: NULL is node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
