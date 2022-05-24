#include "lists.h"

/**
 * delete_dnodeint_at_index- function that deletes the node at index of a list
 * @head: array of nodes
 * @index: number of index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *actual = *head;
	dlistint_t *pasado = *head;
	dlistint_t *futuro = *head;

	if (*head == NULL)
		return (-1);

	i = 0;
	if (index > 0)
	{
		while (actual && i <= index)
		{
			if (i == index)
			{
				futuro = actual->next;
				pasado->next = futuro;
				futuro->prev = pasado;
				break;
			}
			pasado = actual;
			actual = actual->next;
			i++;
		}
	}
	else
		*head = (*head)->next;
	return (1);
}
