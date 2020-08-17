#include <stdio.h>

/**
 *main- Program to print all possible combinatios of single-digit numbers
 *Return: exit 0
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(44);
putchar(32);
}
}
return (0);
}
