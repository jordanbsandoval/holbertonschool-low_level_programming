#include <stdio.h>

/**
 *main- program that print the alphabet in lowercase
 *      Print all the letters except q and e
 *Return: exit succesfule
 */

int main(void)
{
char min = 'a';

for (; min <= 'z'; min++)
{
if (min != 'q' && min != 'e')
putchar(min);
}
putchar('\n');
return (0);
}
