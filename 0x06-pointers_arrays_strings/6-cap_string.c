#include "main.h"
#define SEPARADOR(x) (*s == ' ' || *s == '\t' || *s == ',' || *s == ';')
#define SEPARADOR2(x) (*s == '!' || *s == '?' || *s == '"' || *s == '(')
#define SEPARADOR3(x) (*s == ')' || *s == '{' || *s == '}')
/**
 *cap_string- Funcion que pone en mayusculas todas las palabras de una cadena
 *
 *@s: puntero a una cadena, parametro.
 *
 *Return: palabras de una cadena empezando con mayuscula
 */

char *cap_string(char *s)
{
	char *tmp_ind = s;
	char tmp;

	while (*s != '\0')
	{
		if (SEPARADOR(*s) || SEPARADOR2(*s) || SEPARADOR3(*s))
			*s = ' ';
		if (tmp == ' ' && (*s >= 'a' && *s <= 'z'))
			*s = *s - 32;
		tmp = *s;
		s++;
	}
	return (tmp_ind);
}
