#include "main.h"

/**
* _islower- programa que evalua si el parametro es una letra del abecedarioMin
*
* Return: 1 yes. 0 no
*/

int _islower(int c)
{
  return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
