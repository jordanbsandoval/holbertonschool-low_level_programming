#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0, ancho;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			ancho = _strlen(h->str);
			printf("[%ld] %s\n", ancho, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
