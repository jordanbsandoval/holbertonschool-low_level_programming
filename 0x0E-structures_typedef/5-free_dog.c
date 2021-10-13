#include "dog.h"

/**
 * free_dog- libera memoria de la estructura dog
 *
 * @d: structura a liberar
 *
 * Return: memoria liberada
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
