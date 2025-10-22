#include "main.h"

/**
* times_table- función que imprima la tabla del 9, comenzando con 0.
*
* Return: la tabla del 9 empezando con 0 y de manera ordenada.
*/

void print_times_table(int n)
{
  int i, j, tmp, tmpFd, tmpSd;
  
  tmpSd = tmpFd = 0;
  for (i = 0; i <= n; i++)
  {
    if (n > 15 || n < 0)
      break;
    for (j = 0; j <= n; j++)
    {
      tmp = i * j;

      if (tmp < 10)
      {
        if (j != 0)
        {
          _putchar(',');
          _putchar(' ');
          _putchar(' ');
          _putchar(' ');
        }
        _putchar(tmp + '0');
      }
      else if (tmp > 9 && tmp < 100)
      {
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        _putchar((tmp / 10) + '0');
        _putchar((tmp % 10) + '0');
      }
      else 
      {
        _putchar(',');
        _putchar(' ');
        tmpFd = (tmp / 10) / 10;
        _putchar(tmpFd + '0');
        tmpSd = (tmp / 10) % 10;
        _putchar(tmpSd + '0');
        _putchar((tmp % 10) + '0');
      }
    }
    _putchar(10);
  }
}
