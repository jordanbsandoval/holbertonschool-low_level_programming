#include "dog.h"

/**
 * init_dog- inicializate an structure
 * @d: pointer to structure dog
 * @name: pointer to char
 * @age: number age
 * @owner: pointer to char
 * Return: structure pointed modificated
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
