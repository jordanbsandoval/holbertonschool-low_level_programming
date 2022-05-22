#include "lists.h"

/**
 * add_dnodeint- function that add a new node at the beginning of a object list
 * @head: array of objects
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
    	new->prev = NULL;
    	new->next = NULL;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	else
		*head = new;
	return (*head);
}
