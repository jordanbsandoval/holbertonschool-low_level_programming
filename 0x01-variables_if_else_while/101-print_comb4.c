#include <stdio.h>

/**
 *main- Program that print all possble combinations of three digits
 *      You can only use putchar six times maximum in your code
 *
 */

int main(void)
{
int a, b, c, limit;

for (a = 0, limit = 10; a < limit; a++)
{
for (b = (a + 1); b < limit; b++)
{
for (c = (b + 1); c < limit; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (!(a == 7 && b == 8 && c == 9))
{
putchar(44);
putchar(32);
}
}
}
}
return (0);
}
