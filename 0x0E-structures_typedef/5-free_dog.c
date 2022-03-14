#include "dog.h"

/**
 * free_dog- free memory of an structure
 * @d: pointer to structure
 * Return: structure clean
 */

void free_dog(dog_t *d)
{
	free(d);
}
