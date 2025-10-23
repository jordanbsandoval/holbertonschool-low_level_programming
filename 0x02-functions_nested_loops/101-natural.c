#include "main.h"

/**
* num_nat_mult- programa que calcule e imprima la suma de todos los múltiplos
*               de 3 o 5 menores de 1024
*
* @a: numero entero
* @b: numero entero
* @stop: numero entero
*
* Return: imprime la suma de los multiplos
*/

void num_nat_mult(int a, int b, int stop)
{
  int sum = 0, i;

  for (i = 0; i < stop; i++)
  {
    if ((i % a) == 0 || (i % b) == 0)
      sum += i;
  }
  printf("%d\n", sum);
}
