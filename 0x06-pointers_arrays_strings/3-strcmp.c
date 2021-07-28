#include "main.h"

/**
 *strlenj- calculate the number of elements of an array
 *
 *@s: string
 *
 *Return: number of elements of an array
 */

int strlenj(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *_strcmp- Compares two strings
 *
 *@s1: frist parameter to comparate
 *@s2: parameter to compare
 *
 *Return: -15 if the first argument is less
 *	  15 if's greater
 *	  0 if same
 */

int _strcmp(char *s1, char *s2)
{
	int datoUno = strlenj(s1);
	int datoDos = strlenj(s2);

	if (datoUno < datoDos)
		return (-15);
	else if(datoUno > datoDos)
		return (15);
	else
		return (0);
}
