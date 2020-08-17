#include <stdio.h>

/**
 *main- program that print the numbers from 00 to 99.
 *      You can only use putchar five times maximum in your code
 *Return: exit succesful
 */

int main(void)
{
int i, p, limit;

for (i = 0, limit = 10; i < limit; i++)
{
for (p = 0; p < limit; p++)
{
putchar(i + '0');
putchar(p + '0');
if (!(i == 9 && p == 9))
{
putchar(44);
putchar(32);
}
}
}
return (0);
}
