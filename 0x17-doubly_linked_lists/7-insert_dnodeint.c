#include "lists.h"

/**
 * insert_dnodeint_at_index- function that inserts new node at a given position
 * @h: pointer to array of nodes
 * @idx: position number to insert the new node
 * @n: number to add from new node
 * Return: pointer array of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *actual = *h;
	dlistint_t *anterior = *h;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	i = 0;
	while (actual && i <= idx)
	{
		if (i == idx)
		{
			anterior->next = new_node;
			new_node->prev = anterior;
			new_node->next = actual;
			actual->prev = new_node;
			break;
		}
		anterior = actual;
		actual = actual->next;
		i++;
	}
	return (*h);
}
