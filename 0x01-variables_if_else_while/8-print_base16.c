#include <stdio.h>

/**
 *main- Program that print all the numbers of base 16 in lowercase
 *Return: exit succesful
 */

int main(void)
{
int hex = 0x30;
char min;

for (; hex <= 0x39; hex++)
putchar(hex);
if (hex != 0x39)
{
for (min = 'a'; min <= 'f'; min++)
putchar(min);
}
putchar('\n');
return (0);
}
