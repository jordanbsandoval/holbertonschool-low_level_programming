#include <stdio.h>

/**
* main- Write a program that prints the alphabet in lowercase, followed by \n.
*
* Return: Always 0.
*/

int main (void)
{
  char alp_ini = 'a';
  char alp_fin = 'z';

  while (alp_ini <= alp_fin)
    putchar(alp_ini), alp_ini++;
  putchar(10);

  return (0);
}
