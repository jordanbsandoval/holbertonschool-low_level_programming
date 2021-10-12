#include "dog.h"

/**
 * print_dog - prints the values os a structure
 *
 * @d: pointer to the structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Nothing");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Name: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\n", d->owner);

	}
}
