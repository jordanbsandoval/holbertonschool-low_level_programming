#include "dog.h"

/**
 * print_dog- function that prints a struct dog
 * @d: pointer to an structure
 * Return: print structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Nothing");
	else
	{
		(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: %s\n", d->name);
		(d->age <= 0.0) ? printf("Age: nil\n") : printf("Age: %f\n", d->age);
		(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: %s\n", d->owner);
	}
}
