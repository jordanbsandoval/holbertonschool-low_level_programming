#include "main.h"

/**
* print_last_digit- Funcion que imprime el ultimo digito de un numero
*
* Return: Retorna el valor del ultimo digito
*/

int _abs(int c)
{
  return (((c < 0) ? c * (-1) : c));
}

int print_last_digit(int n)
{
  int tmp;
  tmp = (_abs(n) % 10);

  _putchar(tmp + '0');
  return (tmp);
}
