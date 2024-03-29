#include "lists.h"

/**
 * dlistint_len- function that prints the number of elements from list object
 * @h: struct object
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
