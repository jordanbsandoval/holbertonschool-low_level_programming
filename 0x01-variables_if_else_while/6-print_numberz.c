#include <stdio.h>

/**
 *main- Program that print the numbers of base 10
 *      Can only use the putchar function twice in your code
 *Return: exit succesful
 */

int main(void)
{
int i;
for (i = 0; i < 11; i++)
if (i != 10)
putchar(i + '0');
else 
putchar('\n');
return (0);
}
