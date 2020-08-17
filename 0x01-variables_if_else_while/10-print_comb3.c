#include <stdio.h>

/**
 *main- Program to print all possible combiantions of single-digit numbers
 *Return: exit succesful
 */

int main(void)
{
int i, p;
for (i = 0; i < 10; i++)
{
for (p = 0; p < 10; p++)
{
putchar(i + '0');
putchar(p + '0');
if (!(i == 9 && p == 9))
putchar(',');
putchar(' ');
}
}
return (0);
}
