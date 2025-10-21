#include <stdio.h>

/**
* main- Escriba un programa que imprima todos los números de un solo dígito
* de base 10 comenzando desde 0, seguido de una nueva línea.
*
* Return (0);
*/
void print_hex_b16(char []);

int main(void)
{
  char num_hex_base_16[] = "0123456789abcdef";

  print_hex_b16(num_hex_base_16);

  return (0);
}

/**
  *print_hex_b16- Funcion que imprime los numeros base16 hexadecimal
  *
  *@s: parametro tipo string
  *
  *Return: void.
  */

void print_hex_b16(char s[])
{
  int i;

  for (i = 0; i < 16; i++)
    (i < 10) ? putchar(s[i] + '0') : putchar(s[i]);

  putchar(10);
}
