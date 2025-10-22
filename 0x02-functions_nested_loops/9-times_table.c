#include "main.h"

/**
* times_table- función que imprima la tabla del 9, comenzando con 0.
*
* Return: Tabla del 9 de manera ordenada.
*/

void times_table(void)
{
  int i, j, tmp;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      tmp = i * j;

      if (tmp < 10)
      {
        if (j != 0)
        {
          _putchar(',');
          _putchar(' ');
          _putchar(' ');
        }
        _putchar(tmp + '0');
      }
      else if (tmp > 9)
      {
        _putchar(',');
        _putchar(' ');
        _putchar((tmp / 10) + '0');
        _putchar((tmp % 10) + '0');
      }
    }
    _putchar(10);
  }
}
