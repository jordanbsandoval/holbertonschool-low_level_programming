#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char p[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
        write(1, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", sizeof(p));
        return (1);
}
