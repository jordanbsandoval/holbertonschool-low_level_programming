#include <stdio.h>

/**
*main- Escriba un programa que imprima todas las combinaciones posibles
*      de números de un solo dígito.
*
*Return: Always 0.
*/

int main(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    putchar(i + '0');
    if (i != 9)
    {
      putchar(',');
      putchar(' ');
    }
  }
  putchar(10);
  return (0);
}
