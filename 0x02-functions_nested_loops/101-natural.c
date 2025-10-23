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

  for (i = 0; i < 500; i++)
  {
    if (stop < (i * a) || stop < (i * b))
      break;
    sum += (i * a) + (i * b);
    printf("a = %d, b = %d, i = %d\nLa suma de los multiplos de %d + %d = %d\n", a, b, i, a * i, b * i, sum);
  }
}
