#include "holberton.h"

/**
 *_strlen- function that count the indices of array
 *
 *@s: string to evaluate
 *
 *Return: number of elements of an array
 */

int _strlen(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *str_concat- function that concatenates two strings
 *
 *@s1: parameter string
 *@s2: parameter string
 *
 *Return: string concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp = NULL;
	int rst, i, p, rs1, rs2;

	/*find length*/
	if (s1 == NULL)
		rs1 = 0;
	else
		rs1 = _strlen(s1);

	if (s2 == NULL)
		rs2 = 0;
	else
		rs2 = _strlen(s2);

	/*allocate memory dinamic + chacarter null*/
	rst = rs1 + rs2 + 1;
	tmp = malloc(sizeof(char) * rst);

	/*varificando si creo el espacio en memoria*/
	if (tmp == NULL)
		return (NULL);

	/*copiando el primer string*/
	for (i = 0; i < rs1; i++)
		tmp[i] = s1[i];

	/*concatenando el segundo string*/
	for (p = 0; p < rs2; p++)
		tmp[i + p] = s2[p];

	tmp[i + p] = '\0';

	return (tmp);
}
