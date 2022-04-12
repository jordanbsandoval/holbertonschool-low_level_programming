#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	list_t *actual = *head;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = string;
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head)
	{
		/*recorrer los nodos hasta el ultimo*/
		while (actual->next)
			actual = actual->next;
		/*add the new node*/
		actual->next = new_node;
	}
	else
		*head = new_node;
	return (*head);
}
