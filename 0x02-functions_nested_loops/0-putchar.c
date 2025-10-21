#include "myheaders.h"

/**
*main- programa que imprime un string con la funcion _putchar
*
*Return: Always 0.
*/

int main(void)
{
  char s[]="_putchar";
  char *pointer = s;

  while (*pointer)
    _putchar(*pointer++);

  _putchar(10);
  return (0);
}
