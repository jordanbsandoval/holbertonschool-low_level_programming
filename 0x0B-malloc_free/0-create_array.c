#include "main.h"

/**
 * create_array- function that creates an array of chars,
 * and initializes it with a specific char.
 *@size: size of the array created
 *@c: character for inicializated
 *Return: pointer to the new array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_array = NULL;
	/*creamos el array con la funcion malloc*/
	new_array = malloc(sizeof(char) * size);

	/* Verificamos que el array halla sido creado correctamente */
	/* de lo contrario retornara un puntero null*/

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(new_array + i) = c;

	*(new_array + i) = '\0';
	return (new_array);
}
