#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function that prints a random number and also its last digit.
 *
 * Return: exit successful exit.
 */

int main(void)
{
    int n, o;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */

        o = n % 10;

        if (o > 5)
                printf("the last digit of %d is %d and is greater than 5\n", n, o);

        else if (o < 6 && o != 0)
                printf("the last digit of %d is: %d and is less than 6 and not 0\n", n, o);

        else if (o == 0)
                printf("last digit of %d is: 0 and is 0\n", n);

        return (n);
}

