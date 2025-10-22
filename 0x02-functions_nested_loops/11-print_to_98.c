#include "main.h"

/**
* print_to_98- función que imprima todos los números naturales desde n hasta90
*              Seguido de una nueva linea
* 
* Return: print number to 98.
*/

void print_to_98(int n)
{
  if (n <= 98)
    for (; n <= 98; n++)
      (n != 98) ? printf("%d, ", n) : printf("%d\n", n);
  else
    for (; n >= 98; n--)
      (n != 98) ? printf("%d, ", n) : printf("%d\n", n);
}
