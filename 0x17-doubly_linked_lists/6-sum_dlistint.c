#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
