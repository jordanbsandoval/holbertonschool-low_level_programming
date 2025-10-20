#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- Este programa asignará un número aleatorio a la variable n
* cada vez que se ejecute.
* Complete el código fuente para indicar si el número almacenado
* en la variable n es positivo o negativo.
*
* Return: (0)
*/

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n < 0)
    printf("el numero %d is negative\n", n);

  else if (n > 0)
    printf("el numero %d is positive\n", n);

  else
    printf("el numero %d is zero\n", n);

  return (0);
}
