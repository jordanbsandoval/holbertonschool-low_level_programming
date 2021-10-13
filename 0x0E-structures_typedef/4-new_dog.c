#include "dog.h"

/**
 * _strlen- cuenta los elementos de un array
 *
 * @s: string apuntado
 *
 * Return: numero de elementos
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * copy- Copia un string a otro segmento de memoria apuntada a char
 *
 * @to: almacena el string
 * @from: string a copiar
 *
 * Return: void
 */
void copy(char *to, char *from)
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
/**
 * struct dog_t- 
 *
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp = NULL;
	char *tmp_name = NULL, *tmp_owner = NULL;

	/* Validando los argumentos*/
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* asignando memoria para la nueva estructura*/
	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);

	/* Asignando memoria para copiar los parametros */
	tmp_name = malloc(sizeof(char) * _strlen(name));
	if (tmp_name == NULL)
	{
		free(tmp);
		return (NULL);
	}
	copy(tmp_name, name);

	/* Asignando memoria para copiar los parametros */
	tmp_owner = malloc(sizeof(char) * _strlen(owner));

	if (tmp_owner ==NULL)
	{
		free(tmp_name);
		free(tmp);
		return (NULL);
	}
	/* copy argumentos a memoria asignada */
	copy(tmp_owner, owner);


	tmp->name = tmp_name;
	tmp->age = age;
	tmp->owner = tmp_owner;

	return(tmp);
}

