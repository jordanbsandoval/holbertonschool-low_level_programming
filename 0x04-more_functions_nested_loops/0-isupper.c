#include "main.h"

/**
 *_isupper- funcion que checkea si el parametro es una letra mayuscula.
 *
 *@c: parameter to evaluate
 *
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
