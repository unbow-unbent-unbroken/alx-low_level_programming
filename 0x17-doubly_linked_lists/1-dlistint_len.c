#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a dlistint_t list
 * @h: Pointer to the head of the node
 *
 * Return: Elements in the linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		current = current->next;
		elements++;
	}

	return (elements);
}
