#include "lists.h"

/**
 * add_dnodeint- function that add a new node at the beginning of a object list
 * @head: array of objects
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *actual = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		while (actual->next)
			actual = actual->next;
		actual->next = new;
		new->prev = actual;
		actual = new;
	}
	else
		*head = new;
	return (*head);
}
