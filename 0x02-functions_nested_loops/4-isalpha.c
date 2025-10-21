#include "main.h"

/**
* _isalpha- funcion que verifica si el parametro es una letra del alfabeto
*
* Return: 1, Si. 0, No.
*/

int _isalpha(int c)
{
  return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0);
}
