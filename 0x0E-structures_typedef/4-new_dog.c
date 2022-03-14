#include "dog.h"

/**
 * new_dog- function that creates a new dog.
 * @name: pointer to char
 * @age: number age
 * @owner: pointer to char
 * Return: An structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);

	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;

	return (tmp);
}
