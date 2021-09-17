#include "main.h"

/**
 *leet- funcion que codifica un string al algoritmo de codificacion 1337
 *
 *@s: puntero a un string. Parametro
 *
 *Return: puntero al inicio del string recientemente cambiado
 */

char *leet(char *s)
{
	char *tmp = s;
	char lowerc[] = {'a', 'e', 'o', 't', 'l'};
	char upperc[] = {'A', 'E', 'O', 'T', 'L'};
	char entero[] = {'4', '3', '0', '7', '1'};
	int i;
	int stop = sizeof(entero);

	for (; *s != '\0'; s++)
		for (i = 0; i < stop; i++)
			if (*s == lowerc[i] || *s == upperc[i])
				*s = entero[i];
	return (tmp);
}
