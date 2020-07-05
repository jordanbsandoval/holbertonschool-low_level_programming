#include<stdio.h>

/** 
 *main - Print the alphabet less the letter e and q.
 *Return: exit successful.
 */

int main(void)
{
    char c = 'a';

    for(; c <= 'z'; ++c)
    {
        if(c != 'e' && c != 'q')
            putchar(c);
    }
}
