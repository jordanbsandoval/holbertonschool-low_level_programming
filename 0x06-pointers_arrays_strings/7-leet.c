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
	int p;
	char letter[5][2] = {
		{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	char replace[5] = {'4', '3', '0', '7', '1'};

	for (; *s != '\0'; s++)
		for (p = 0; p < 5; p++)
			if (*s == letter[p][0] || *s == letter[p][1])
				*s = replace[p];
	return (tmp);
}
