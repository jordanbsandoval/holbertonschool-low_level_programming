#include "main.h"

/**
 *rot13- codifica un conjunto de caracteres al algoritmo rot13
 *
 *@s: puntero a un array de caracteres
 *
 *Return: puntero al inicio del array
 */

char *rot13(char *s)
{
	int i;
	char *tmp = s;
	char alp_min[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp_may[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s != '\0')
	{
		for (i = 0; i < 52 ; i++)
			if (*s == alp_min[i])
			{
				*s = alp_may[i];
				break;
			}
		s++;
	}
	return (tmp);
}
