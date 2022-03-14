#ifndef Structures
#define Structures

/*librarys*/
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - estructura para perro
 * @name: pointer to char
 * @age: number
 * @owner: pointer to char
 *
 * Description: Objeto para crear un nuevo perro
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
