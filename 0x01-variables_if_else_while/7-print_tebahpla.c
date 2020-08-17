#include <stdio.h>

/**
 *main- program that write the lowercase alphabet in reverse.
 *Return: exit succesful
 */

int main(void)
{
char min;
for (min = 'z'; min >= 'a'; min--)
putchar(min);
putchar('\n');
return (0);
}
