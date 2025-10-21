#include <stdio.h>

/**
*main- Escriba un programa que imprima el alfabeto en minúsculas y en mayúscula
*Requirements: Solo puedes usar la función putchar.
*
* Return: Always 0.
*/

void print_alp(char s[]);

int main(void)
{
  char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  print_alp(alp);

  return (0);
}

/**
  * print_alp- Funcion que recibe un parametro tipo cadena 
  * para imprimir lo que hay en el.
  * s: parameter type string
  *
  * Return: print to screen.
  */

void print_alp(char s[])
{
  int i = 0;

  while (s[i] != 0)
    putchar(s[i]), i++;

  putchar(10);
}
