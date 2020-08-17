#include <stdio.h>

/**
 *main- It's program print all possible combinations of two digits
 *      Numbers must be separated by ,, followed by a space
 *      The two digits must be different
 *      01 and 10 are considered the same combination of the two digits 0 and 1
 *Return: exit succesful
 */

int main(void)
{
int i, p;

for (i = 0; i < 9; i++)
{
  for (p = i + 1; p < 10; p++)
  {
    putchar(i + '0');
    putchar(p + '0');
  if (i != 8)
  {
    putchar(44);
    putchar(32);
  }
  }
}
return (0);
}
