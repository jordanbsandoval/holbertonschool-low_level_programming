#include <stdio.h>

/**
 *main- Program that write the alphabet in lowercase and then in uppercase
 *Return: exit succesful
 */

int main(void)
{
char min = 'a', may = 'A';

for (; min <= 'z'; min++)
putchar(min);
for (; may <= 'Z'; may++)
putchar(may);
putchar('\n');
return (0);
}
