#include "lists.h"

/**
 * sum_dlistint- computes the sum of elements in a dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: sum of elements in list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
