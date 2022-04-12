#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = (char *)str;
	tmp->len = _strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
