#include "lists.h"

/**
 * get_dnodeint_at_index- function that returns the nth node of a linked list
 * @head: pointer to array of structure
 * @index: number of node to return
 * Return: number of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (index < i)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
