#include "main.h"

/**
 *_isdigit- checkea si un el parametro es un numero del 0 al 9
 *
 *@c: parametro a evaluar
 *
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
