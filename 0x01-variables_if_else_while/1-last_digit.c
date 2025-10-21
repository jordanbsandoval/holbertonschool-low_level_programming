#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- funcion que imprime un resultado bajo una condicion
*
* Return: Always 0.
*/

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  printf("Last digit of %d is ", n);
  n %= 10;

  if (n < 6 && n != 0)
    printf("%d and is less than 6 and not 0", n);

  else if (n > 5)
    printf("%d and is greater than 5", n);

  else if (n == 0)
    printf("%d and is 0", n);

  printf("\n");
  return (0);
}
