#include "main.h"

/**
 *
 *
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int i, tmp = 0, p, k, j, h;
	char *str_con = NULL;

	p = k = j = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	/*Obtener el ancho de la linea de comandos*/
	for (i = 0; i < ac; i++)
		tmp += _strlen(av[i]);

	str_con = malloc(sizeof(char) * (tmp + ac));

	if (str_con == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		p += _strlen(av[i]);
		for (h = 0; j < p; j++, h++)
			*(str_con + (j + i)) = av[i][h];
		*(str_con + (j + i)) = '\n';
	}


	return (str_con);
}

/**
 *_strlen- determina el ancho de un string
 *
 *@s: puntero a un string
 *
 *Return: numer de caracteres del string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
