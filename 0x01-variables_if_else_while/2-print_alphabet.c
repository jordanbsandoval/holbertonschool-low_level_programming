#include <stdio.h>

/**
 *main- Program that print to alphabet in lowercase
 *Return: exit succesful
 */

int main(void)
{
char i = 'a' - 1;
while (i++ < 'z')
putchar(i);
putchar('\n');
return (0);
}
